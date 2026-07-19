// luaH_clone guide by: pibbly, and zzzz
// make sure to check out our github: https://github.com/zzzzhub
// feel free to join the discord -> discord.gg/zzzzhub

__int64 __fastcall luaH_clone(__int64 L, __int64 tt)
{
  __int64 v4; // rbx
  char v5; // r9
  unsigned __int8 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  bool v9; // cc
  void *v10; // r9
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // rsi
  void *v16; // rax

    // current roblox version hash is: ddf02245bdbb428c
    // took like 20 minutes <3
    // no ai used but if you want to speed this process up just use gemini as it pulls luau-lang properly

    // this is pretty useful because once you reverse one function you can get a lot of others <3
    // getting struct members is harder here because of my lack of internet this whole tutorial is offline
    // so my luau-lang is outdated but this tutorial is still very useful and can be applied and updated depending on latest luau

    // not everything here is defined since its so self explantory and can be compared if needed

    inline const uintptr_t luaM_newgco = 0x47B1000;
    inline const uintptr_t luaM_newarray = 0x47B0F40;
    inline const uintptr_t luaH_dummynode = 0x6A4D478;

  v4 = luaM_newgco(L, 0x30, *(unsigned __int8 *)(L + 4));
  v5 = *(_BYTE *)(*(_QWORD *)(L + 0x60) + 68LL);
  *(_BYTE *)(v4 + 1) = 7;
  *(_BYTE *)v4 = v5 & 3;
  v6 = *(_BYTE *)(L + 4);
  *(_BYTE *)(v4 + 2) = v6;
  *(_QWORD *)(v4 + 0x20) = *(_QWORD *)(tt + 0x20); // tt->metatable = 0x20
  *(_BYTE *)(v4 + 5) = *(_BYTE *)(tt + 5); // tt->tmcache = 5
  *(_QWORD *)(v4 + 0x18) = 0;
  *(_QWORD *)(v4 + 8) = 0;
  *(_WORD *)(v4 + 3) = 0;
  *(_WORD *)(v4 + 6) = 0;
  *(_QWORD *)(v4 + 0x10) = &unk_6A4D478; // take a look guys this is luaH_dummynode
  if ( *(_DWORD *)(tt + 8) ) // tt->sizearray = 8
  {
    v7 = *(int *)(tt + 8);
    if ( v7 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_13;
    v8 = luaM_newarray(L, 0x10 * v7, v6);
    v9 = *(_DWORD *)(v4 + 0xC) <= 0;
    v10 = (void *)v8;
    *(_QWORD *)(v4 + 0x18) = v8;
    if ( v9 )
    {
      v11 = *(_DWORD *)(tt + 0xC);
      if ( v11 >= 0 )
        v12 = *(_DWORD *)(tt + 8);
      else
        v12 = -v11;
      *(_DWORD *)(v4 + 0xC) = -v12;
    }
    v13 = *(int *)(tt + 8);
    *(_DWORD *)(v4 + 8) = v13;
    memmove(v10, *(const void **)(tt + 0x18), 0x10 * v13);
  }
  if ( *(_UNKNOWN **)(tt + 0x10) != &unk_6A4D478 ) // tt->node = 0x10, luaH_dummynode
  {
    v14 = 1 << *(_BYTE *)(tt + 4);
    if ( v14 <= 0x7FFFFFFFFFFFFFFLL )
    {
      v15 = 0x20 * v14;
      v16 = (void *)luaM_newarray(L, v15, *(_BYTE *)(v4 + 2));
      *(_QWORD *)(v4 + 0x10) = v16; // tt->lsizenode = 0x10
      *(_BYTE *)(v4 + 4) = *(_BYTE *)(tt + 4);
      *(_BYTE *)(v4 + 7) = *(_BYTE *)(tt + 7);
      memmove(v16, *(const void **)(tt + 0x10), v15);
      *(_DWORD *)(v4 + 0xC) = *(_DWORD *)(tt + 0xC); // t->lastfree = 0xC
      return v4;
    }
LABEL_13:
    sub_47B1250(L); // error string we can use to find this func off a xref
  }
  return v4; //  return t;
}

// below is the original luaH_clone

LuaTable* luaH_clone(lua_State* L, LuaTable* tt)
{
    LuaTable* t = luaM_newgco(L, LuaTable, sizeof(LuaTable), L->activememcat);
    luaC_init(L, t, LUA_TTABLE);
    t->metatable = tt->metatable;
    t->tmcache = tt->tmcache;
    t->array = NULL;
    t->sizearray = 0;
    t->lsizenode = 0;
    t->nodemask8 = 0;
    t->readonly = 0;
    t->safeenv = 0;
    t->node = cast_to(LuaNode*, dummynode);
    t->lastfree = 0;

    if (tt->sizearray)
    {
        t->array = luaM_newarray(L, tt->sizearray, TValue, t->memcat);
        maybesetaboundary(t, getaboundary(tt));
        t->sizearray = tt->sizearray;

        memcpy(t->array, tt->array, t->sizearray * sizeof(TValue));
    }

    if (tt->node != dummynode)
    {
        int size = 1 << tt->lsizenode;
        t->node = luaM_newarray(L, size, LuaNode, t->memcat);
        t->lsizenode = tt->lsizenode;
        t->nodemask8 = tt->nodemask8;
        memcpy(t->node, tt->node, size * sizeof(LuaNode));
        t->lastfree = tt->lastfree;
    }

    return t;
}

// below is the raw luaH_clone before I renamed it (has been converted to hex for readability)

__int64 __fastcall luaH_clone(__int64 L, __int64 tt)
{
  __int64 v4; // rbx
  char v5; // r9
  unsigned __int8 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  bool v9; // cc
  void *v10; // r9
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // rsi
  void *v16; // rax

  v4 = sub_47B1000(L, 0x30, *(unsigned __int8 *)(L + 4));
  v5 = *(_BYTE *)(*(_QWORD *)(L + 0x60) + 68LL);
  *(_BYTE *)(v4 + 1) = 7;
  *(_BYTE *)v4 = v5 & 3;
  v6 = *(_BYTE *)(L + 4);
  *(_BYTE *)(v4 + 2) = v6;
  *(_QWORD *)(v4 + 0x20) = *(_QWORD *)(tt + 0x20);
  *(_BYTE *)(v4 + 5) = *(_BYTE *)(tt + 5);
  *(_QWORD *)(v4 + 0x18) = 0;
  *(_QWORD *)(v4 + 8) = 0;
  *(_WORD *)(v4 + 3) = 0;
  *(_WORD *)(v4 + 6) = 0;
  *(_QWORD *)(v4 + 0x10) = &unk_6A4D478;
  if ( *(_DWORD *)(tt + 8) )
  {
    v7 = *(int *)(tt + 8);
    if ( v7 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_13;
    v8 = sub_47B0F40(L, 16 * v7, v6);
    v9 = *(_DWORD *)(v4 + 0xC) <= 0;
    v10 = (void *)v8;
    *(_QWORD *)(v4 + 0x18) = v8;
    if ( v9 )
    {
      v11 = *(_DWORD *)(tt + 0xC);
      if ( v11 >= 0 )
        v12 = *(_DWORD *)(tt + 8);
      else
        v12 = -v11;
      *(_DWORD *)(v4 + 0xC) = -v12;
    }
    v13 = *(int *)(tt + 8);
    *(_DWORD *)(v4 + 8) = v13;
    memmove(v10, *(const void **)(tt + 0x18), 0x10 * v13);
  }
  if ( *(_UNKNOWN **)(tt + 0x10) != &unk_6A4D478 )
  {
    v14 = 1 << *(_BYTE *)(tt + 4);
    if ( v14 <= 0x7FFFFFFFFFFFFFFLL )
    {
      v15 = 0x20 * v14;
      v16 = (void *)sub_47B0F40(L, v15, *(_BYTE *)(v4 + 2));
      *(_QWORD *)(v4 + 0x10) = v16;
      *(_BYTE *)(v4 + 4) = *(_BYTE *)(tt + 4);
      *(_BYTE *)(v4 + 7) = *(_BYTE *)(tt + 7);
      memmove(v16, *(const void **)(tt + 0x10), v15);
      *(_DWORD *)(v4 + 0xC) = *(_DWORD *)(tt + 0xC);
      return v4;
    }
LABEL_13:
    sub_47B1250(L);
  }
  return v4;
}
