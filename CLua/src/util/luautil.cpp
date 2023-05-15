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
