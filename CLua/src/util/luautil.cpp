#include "luautil.h"
#include <iostream>
int stackDump(lua_State* L)
{
    int i = 0;
    int top = lua_gettop(L);      // ��ȡջ��Ԫ�ظ�����
    std::cout << "��ǰջ��������" << top << std::endl;
    for (i = 1; i <= top; ++i)    // ����ջ��ÿ��Ԫ�ء�
    {
        int t = lua_type(L, i);   // ��ȡԪ�ص����͡�
        switch (t)
        {
        case LUA_TSTRING:         // strings
            std::cout << "����" << i << " :" << lua_tostring(L, i);
            break;
        case LUA_TBOOLEAN:        // bool
            std::cout << "����" << i << " :" << lua_toboolean(L, i) ? "true" : "false";
            break;
        case LUA_TNUMBER:         // number
            std::cout << "����" << i << " :" << lua_tonumber(L, i);
            break;
        default:                  // other values
            std::cout << "����" << i << " :" << lua_typename(L, t);
            break;
        }
        std::cout << " ";
    }
    std::cout << std::endl;
    return 1;
}
