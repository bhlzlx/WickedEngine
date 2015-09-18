#pragma once
#include "wiLua.h"
#include "wiLuna.h"
#include "wiSprite.h"

class wiSprite_BindLua
{
public:
	wiSprite* sprite;

	static const char className[];
	static Luna<wiSprite_BindLua>::FunctionType methods[];
	static Luna<wiSprite_BindLua>::PropertyType properties[];

	wiSprite_BindLua(wiSprite* sprite = nullptr);
	wiSprite_BindLua(lua_State *L);
	~wiSprite_BindLua();

	int SetEffects(lua_State *L);
	int GetEffects(lua_State *L);
	int SetAnim(lua_State *L);
	int GetAnim(lua_State *L);

	static void Bind();
};
