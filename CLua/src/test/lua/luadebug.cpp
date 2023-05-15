#include "luadebug.h"
using namespace std;
const string lua_debug_file = clua::lua_config + "testdebug.lua";

void PrintLuaTable(lua_State* L, const char* funcname) {
    lua_getglobal(L, funcname);
    if (!lua_isnil(L, -1)) {
        lua_pushvalue(L, -2);
        if (lua_pcall(L, 1, 0, 0)) {
            cerr << lua_tostring(L, -1) << endl;
            lua_pop(L, 1);
        }
    }
    else {
        lua_pop(L, 1);
    }
}
int TestLuaDebug(lua_State* L) {
    const char* config = lua_debug_file.c_str();
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
    lua_getglobal(L, "t1");
    lua_getglobal(L, "t2");
    for (int i = 0; i < 2; i++) {
        PrintLuaTable(L, "printLua");
        PrintLuaTable(L, "printLua2");
        PrintLuaTable(L, "printLua3");
    }
    return 1;
}