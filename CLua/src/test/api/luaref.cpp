#include "luaref.h"
#include "util/luautil.h"
using namespace std;
int g_ref = -1;
int setLuaData(lua_State* L)
{
    stackDump(L);
    int ref = luaL_ref(L, LUA_REGISTRYINDEX);
    g_ref = ref;
    cout << "setLuaData ref= " << g_ref << endl;
    stackDump(L);
    return 1;
}
int getLuaData(lua_State* L)
{
    lua_rawgeti(L, LUA_REGISTRYINDEX, g_ref);
    cout << "getLuaData ref= " << g_ref << endl;
    luaL_unref(L, LUA_REGISTRYINDEX, g_ref);
    stackDump(L);
    return 1;
}
const string lua_ref_file = clua::lua_config + "testref.lua";
int TestLuaRef(lua_State* L) {
    lua_register(L, "c_setLuaData", setLuaData);
    lua_register(L, "c_getLuaData", getLuaData);
    const char* config = lua_ref_file.c_str();
    int ret = luaL_loadfile(L, config);
    if (ret != LUA_OK) {
        cout << "load file failed : " << config << endl;
        return -1;
    }
    ///< Ö´ÐÐluaÎÄ¼þ
    if (lua_pcall(L, 0, 1, 0))
    {
        cerr << lua_tostring(L, -1) << endl;
        return -1;
    }
    stackDump(L);
    return 1;
}