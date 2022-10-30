
function testSetData()
    c_setLuaData("ouczbs")
end

function testGetData()
    local data = c_getLuaData()
    print("lua testGetData data = " .. data or "nil")
end
testSetData()
testGetData()
testGetData()
for k,v in pairs(_G) do 
    print(string.format("%s => %s\n",k,v))
end
print(rawget(-1001000 , 1))