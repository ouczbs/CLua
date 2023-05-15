
function printLua(t)
    print("luaprint::",t , t.name)
end
function printLua2(t)
    print("luaprint2::",t , t.name)
    print(t.call())
end
function printLua3(t)
    print("luaprint3::",t , t.name)
    print(debug.traceback())
end
function callCPlusPlus(name,...)
    _G[name](...)
end
t1 = {1}
t1.name = "t1"
t2 = {t1}
t2.name = "t2"