#pragma once

namespace GarrysMod
{
	namespace Lua
	{
		class ILuaBase;
		class ILuaInterface;
	}
}

namespace filecheck
{
	void Initialize( GarrysMod::Lua::ILuaBase *LUA );
	void Deinitialize( GarrysMod::Lua::ILuaBase *LUA );
}
