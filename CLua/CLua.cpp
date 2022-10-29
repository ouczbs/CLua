// CLua.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <fstream>
#include <string>

extern "C" {
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}

#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "Proto/cpp/DataConfig.pb.h"
using namespace std;
using namespace pb;

int Add(int i, int j)
{
    return i + j;
}
TEST(Add, 负数) {
    EXPECT_EQ(Add(-1, -2), -3);	//相等
}
bool TestProtoSerialize() {
    BPConfig mConfig;
    BPConfig_BPItem* bpitem1 = mConfig.add_item_list();
    bpitem1->set_bp_name("BP_MMOGameMode");
    bpitem1->set_lua_name("MMOGameMode");

    BPConfig_BPItem* bpitem2 = mConfig.add_item_list();
    bpitem2->set_bp_name("UI_FunBtnEntry");
    bpitem2->set_lua_name("GameWorld.UI.Entry.FunBtnEntry");

    fstream output("BPConfig.txt", ios::out | ios::trunc | ios::binary);
    mConfig.SerializeToOstream(&output);
    return true;
}
TEST(TestProtoSerialize, 序列化) {
    EXPECT_EQ(TestProtoSerialize(), true);	//相等
}
int main()
{
    lua_State* L = luaL_newstate();
    lua_pushstring(L, "I am so cool~");
    lua_setglobal(L, "myStr");
    lua_pushnumber(L, 20);
    //3.取值操作  
    if (lua_isstring(L, 1)) {             //判断是否可以转为string  
        cout << lua_tostring(L, 1) << endl;  //转为string并返回  
    }
    if (lua_isnumber(L, 2)) {
        cout << lua_tonumber(L, 2) << endl;
    }

    //4.关闭state  
    lua_close(L);
    cout << "Hello World!\n";
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
