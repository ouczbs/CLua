#pragma once
//#include "pb.h"

#include "gmock/gmock.h"
#include "gtest/gtest.h"
extern "C" {
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}

namespace clua {
	const std::string path_config = "config/";
	const std::string lua_config = "lua/";
}