#include "luautil.h"
#include <iostream>
int stackDump(lua_State* L)
{
    int i = 0;
    int top = lua_gettop(L);      // 获取栈中元素个数。
    std::cout << "当前栈的数量：" << top << std::endl;
    for (i = 1; i <= top; ++i)    // 遍历栈中每个元素。
    {
        int t = lua_type(L, i);   // 获取元素的类型。
        switch (t)
        {
        case LUA_TSTRING:         // strings
            std::cout << "参数" << i << " :" << lua_tostring(L, i);
            break;
        case LUA_TBOOLEAN:        // bool
            std::cout << "参数" << i << " :" << lua_toboolean(L, i) ? "true" : "false";
            break;
        case LUA_TNUMBER:         // number
            std::cout << "参数" << i << " :" << lua_tonumber(L, i);
            break;
        default:                  // other values
            std::cout << "参数" << i << " :" << lua_typename(L, t);
            break;
        }
        std::cout << " ";
    }
    std::cout << std::endl;
    return 1;
}
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