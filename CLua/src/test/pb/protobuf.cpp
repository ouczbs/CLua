
#include "protobuf.h"
#include <iostream>
#include <fstream>
#include <string>
#include "../proto/cpp/DataConfig.pb.h"
#include "util/luautil.h"
using namespace pb;
using namespace std;
const string lua_file = clua::lua_config + "config.lua";
const string bp_ini = clua::path_config + "BPConfig.ini";
bool TestProtoSerialize(const char * outpath) {
    BPConfig mConfig;
    BPConfig_BPItem* bpitem1 = mConfig.add_item_list();
    bpitem1->set_bp_name("BP_MMOGameMode");
    bpitem1->set_lua_name("MMOGameMode");

    BPConfig_BPItem* bpitem2 = mConfig.add_item_list();
    bpitem2->set_bp_name("UI_FunBtnEntry");
    bpitem2->set_lua_name("GameWorld.UI.Entry.FunBtnEntry");

    fstream output(outpath, ios::out | ios::trunc | ios::binary);
    mConfig.SerializeToOstream(&output);
    return true;
}

bool TestProtoUnSerialize(const char* inpath) {
    BPConfig mConfig;
    fstream in(inpath, std::ios::in | std::ios::binary);
    // 文件指针移动到末尾位置
    in.seekg(0, std::ios_base::end);
    // 获取当前文件指针位置，也就是获得文件大小
    std::streampos fileSize = in.tellg();
    // 文件指针移动到开头文件
    in.seekg(0, std::ios_base::beg);

    cout << "fstream " << inpath << " size = " << fileSize << endl;
    if (!mConfig.ParseFromIstream(&in)) {
        return false;
    }
    cout << "TestProtoUnSerialize : " << mConfig.item_list_size() << endl;
    return true;
}
TEST(TestProtoSerialize, 序列化) {
    EXPECT_EQ(TestProtoSerialize(bp_ini.c_str()), true);	//相等
    EXPECT_EQ(TestProtoUnSerialize(bp_ini.c_str()), true);	//相等
}
void RegisterLuaLib(lua_State* L)
{
    luaL_requiref(L, "pb", luaopen_pb, 0);
    luaL_requiref(L, "pb.io", luaopen_pb_io, 0);
    luaL_requiref(L, "pb.slice", luaopen_pb_slice, 0);
    luaL_requiref(L, "pb.buffer", luaopen_pb_buffer, 0);
    luaL_requiref(L, "pb.conv", luaopen_pb_conv, 0);
}
int TestLuaSerialize(lua_State* L) {
    RegisterLuaLib(L);
    const char* config = lua_file.c_str();
    int ret = luaL_loadfile(L, config);
    if (ret != LUA_OK) {
        cout << "load file failed : " << config << endl;
        return -1;
    }
    ///< 执行lua文件
    if (lua_pcall(L, 0, 1, 0))
    {
        cerr << lua_tostring(L, -1) << endl;
        return -1;
    }
    lua_getfield(L, -1, "encode");
    lua_pushfstring(L, bp_ini.c_str());
    if (lua_pcall(L, 1, 0, 0))
    {
        cerr << lua_tostring(L, -1) << endl;
        return -1;
    }
    stackDump(L);
    return 1;
}