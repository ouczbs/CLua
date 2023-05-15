#include "luaapi.h"
#include "util/luautil.h"
int TestLuaApi(lua_State* L) {
    if (!L) {
        return -1;
    }
    lua_pushstring(L, "I am so cool~");
    lua_setglobal(L, "myStr");
    lua_pushnumber(L, 20);
    lua_setglobal(L, "myInt");
    lua_getglobal(L, "myStr");
    lua_getglobal(L, "myInt");
    //3.取值操作  
    if (lua_isstring(L, -2)) {             //判断是否可以转为string  
        std::cout << lua_tostring(L, -2) << std::endl;  //转为string并返回  
    }
    if (lua_isnumber(L, -1)) {
        std::cout << lua_tonumber(L, -1) << std::endl;
    }
    const char* config = "./config.lua";
    int ret = luaL_loadfile(L, config);
    if (ret != LUA_OK) {
        std::cout << "load file failed : " << config << std::endl;
        return -1;
    }
    //stackDump(L);
    ///< 执行lua文件
    if (lua_pcall(L, 0, 0, 0))
    {
        std::cerr << lua_tostring(L, -1) << std::endl;
    }
    lua_getglobal(L, "BP");
    lua_getfield(L, -1, "test_int");
    lua_getfield(L, -2, "test_str");
    lua_getfield(L, -3, "getItemList");
    stackDump(L);
    int test_int = lua_tonumber(L, -3);
    std::cout << "test_int : " << test_int << std::endl;
    return 1;
}