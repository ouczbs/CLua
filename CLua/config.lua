local _pb     = require "pb"
local class = {}
local logE = print
local _pb_path = "./Proto/pb/"
local function _regFile(file)
    local ret = _pb.loadfile(_pb_path.. file)
    if not ret then 
        logE(file .. " load failed :_regFile")
    end
end

function class.reg()
    -- pbc reg auto-gen
    _regFile('Cmd.pb')
    _regFile('DataConfig.pb')
    _regFile('Login.pb')
    _regFile('MessageType.pb')
    _regFile('Wrap.pb')
	-- pbc reg auto-gen
end
local config_path = "%s.ini"
function class.EncodeConfig(msg , pbname , path)
    if not msg then return end
    path = path or string.format(config_path , pbname )
    local config = _pb.encode("pb." .. pbname , msg)
    if not config or config == "" then 
        logE("EncodeConfig failed: " .. pbname , msg)
        return
    end
    print("EncodeConfig len " .. #config)
    local wf = io.open(path, "wb")
    wf:write(config)
    wf:close()
end
class.reg()
local item_list = {
    {bp_name = "BP_MMOGameMode" , lua_name = "MMOGameMode"},
    {bp_name = "UI_FunBtnEntry" , lua_name = "GameWorld.UI.Entry.FunBtnEntry"},
}
BP = {
    item_list = item_list,
    test_int = 123456,
    test_str = "luaL_loadbufferx",
}

function BP:getItemList()
    return self.item_list
end
function BP.encode(path)
    class.EncodeConfig(BP , "BPConfig" , path)
end
print("load file config.lua ")
return BP

