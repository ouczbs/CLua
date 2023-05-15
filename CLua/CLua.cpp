﻿// CLua.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <fstream>
#include <string>
#include "base/Degines.h"
#include "test/lua/luadebug.h"
using namespace std;

int main()
{
    lua_State * L = luaL_newstate();
    luaL_openlibs(L);
    //TestLuaSerialize(L);
    //TestLuaRef(L);
    TestLuaDebug(L);
    cout << "Hello World!\n";
    //testing::InitGoogleTest();
    //int ret = RUN_ALL_TESTS();
    lua_close(L);
    return 1;
}
