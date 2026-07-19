// luaF_freeproto guide by: pibbly, and zzzz
// make sure to check out our github: https://github.com/zzzzhub
// feel free to join the discord -> discord.gg/zzzzhub

__int64 __fastcall luaF_freeproto(__int64 L, __int64 f, __int64 page)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx

    // f->memcat is always f + 2 or 2
    // current roblox version hash is: ddf02245bdbb428c
    // took like 10 minutes <3
    // no ai used but if you want to speed this process up just use gemini as it pulls luau-lang properly

    inline const uintptr_t luaM_freearray = 0x47B0D50;
    inline const uintptr_t luaM_freegco = 0x47B0DD0;


  luaM_freearray(L, *(_QWORD *)(f + 0x30), 4LL * *(int *)(f + 0x88), *(_BYTE *)(f + 2)); // f->code = 0x30, f->sizecode = 0x88
  luaM_freearray(L, *(_QWORD *)(f + 0x68), 8LL * *(int *)(f + 0xAC), *(_BYTE *)(f + 2)); // f->p = 0x68, f->sizep = 0xAC
  luaM_freearray(L, *(_QWORD *)(f + 0x28), 16LL * *(int *)(f + 0x94), *(_BYTE *)(f + 2)); // f->k = 0x28, f->sizek = 0x94
  v6 = *(_QWORD *)(f + 0x40); // ?? new member ig
  if ( v6 + f + 0x40 ) // f->lineinfo = 0x40
    luaM_freearray(L, v6 + f + 0x40, *(int *)(f + 0x90), *(_BYTE *)(f + 2)); // f->lineinfo = 0x40, f->sizelineinfo = 0x90
  luaM_freearray(L, f + 0x60 - *(_QWORD *)(f + 0x60), 24LL * *(int *)(f + 0xA8), *(_BYTE *)(f + 2)); // f->locvars = 0x60, f->sizeuplocvars = 0xA8
  luaM_freearray(L, *(_QWORD *)(f + 8) ^ (f + 8), 8LL * *(int *)(f + 0x8C), *(_BYTE *)(f + 2)); // i was looking at older luau so only f->sizeupvalues = 0x8C can be cross refrenced
  v7 = *(_QWORD *)(f + 0x58);
  if ( f + 0x58 != v7 ) // f->debuginsn = 0x58
    luaM_freearray(L, (f + 0x58) ^ v7, *(int *)(f + 0x88), *(_BYTE *)(f + 2)); // f->debugisn = 0x58, f->sizecode = 0x88
  if ( *(_QWORD *)(f + 0x18) ) // f->execdata = 0x18
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(L + 0x60) + 1376LL))(L, f); // f->global = 0x60 here is ecb.destroy which also matches the (L, f) args but i was lost so idk
  v8 = *(_QWORD *)(f + 0x78); // if you've noticed they have a second operator that is just a variable definition and its called underneath this so im not labeling it
  if ( v8 != f + 0x78 ) // f->typeinfo = 0x78
    luaM_freearray(L, v8 - f - 0x78, *(int *)(f + 0x98), *(_BYTE *)(f + 2)); // f->typeinfo = 0x78, f->sizetypeinfo = 0x98
  v9 = *(_QWORD *)(f + 0xB0); // f->feedbackvec = 0xB0
  if ( v9 )
    luaM_freearray(L, v9, 16LL * *(unsigned int *)(f + 0xB8), *(_BYTE *)(f + 2)); // f->feedbackvec = 0xB0, f->feedbackvecsize = 0xB8
  return luaM_freegco(L, f, 0xD8, *(unsigned __int8 *)(f + 2), page); // f->sizeof = 0xD8
}

// below is the original luaF_freeproto that I used to reference

void luaF_freeproto(lua_State* L, Proto* f, lua_Page* page)
{
    luaM_freearray(L, f->code, f->sizecode, Instruction, f->memcat);
    luaM_freearray(L, f->p, f->sizep, Proto*, f->memcat);
    luaM_freearray(L, f->k, f->sizek, TValue, f->memcat);
    if (f->lineinfo)
        luaM_freearray(L, f->lineinfo, f->sizelineinfo, uint8_t, f->memcat);
    luaM_freearray(L, f->locvars, f->sizelocvars, struct LocVar, f->memcat);
    luaM_freearray(L, f->upvalues, f->sizeupvalues, TString*, f->memcat);
    if (f->debuginsn)
        luaM_freearray(L, f->debuginsn, f->sizecode, uint8_t, f->memcat);

    if (f->execdata)
        L->global->ecb.destroy(L, f);

    if (f->typeinfo)
        luaM_freearray(L, f->typeinfo, f->sizetypeinfo, uint8_t, f->memcat);

    if (f->feedbackvec)
        luaM_freearray(L, f->feedbackvec, f->feedbackvecsize, FeedbackVectorSlot, f->memcat);

    luaM_freegco(L, f, sizeof(Proto), f->memcat, page);
}

// below is the raw luaF_freeproto before I renamed it (has been converted to hex for readability)

__int64 __fastcall sub_47BA460(__int64 L, __int64 f, __int64 page)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx

  sub_47B0D50(L, *(_QWORD *)(f + 0x30), 4LL * *(int *)(f + 0x88), *(_BYTE *)(f + 2));
  sub_47B0D50(L, *(_QWORD *)(f + 0x68), 8LL * *(int *)(f + 0xAC), *(_BYTE *)(f + 2));
  sub_47B0D50(L, *(_QWORD *)(f + 0x28), 16LL * *(int *)(f + 0x94), *(_BYTE *)(f + 2));
  v6 = *(_QWORD *)(f + 0x40);
  if ( v6 + f + 0x40 )
    sub_47B0D50(L, v6 + f + 0x40, *(int *)(f + 0x90), *(_BYTE *)(f + 2));
  sub_47B0D50(L, f + 0x60 - *(_QWORD *)(f + 0x60), 24LL * *(int *)(f + 0xA8), *(_BYTE *)(f + 2));
  sub_47B0D50(L, *(_QWORD *)(f + 8) ^ (f + 8), 8LL * *(int *)(f + 0x8C), *(_BYTE *)(f + 2));
  v7 = *(_QWORD *)(f + 0x58);
  if ( f + 0x58 != v7 )
    sub_47B0D50(L, (f + 0x58) ^ v7, *(int *)(f + 0x88), *(_BYTE *)(f + 2));
  if ( *(_QWORD *)(f + 24) )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(L + 0x60) + 1376LL))(L, f);
  v8 = *(_QWORD *)(f + 0x78);
  if ( v8 != f + 0x78 )
    sub_47B0D50(L, v8 - f - 0x78, *(int *)(f + 0x98), *(_BYTE *)(f + 2));
  v9 = *(_QWORD *)(f + 0xB0);
  if ( v9 )
    sub_47B0D50(L, v9, 16LL * *(unsigned int *)(f + 0xB8), *(_BYTE *)(f + 2));
  return sub_47B0DD0(L, f, 0xD8, *(unsigned __int8 *)(f + 2), page);
}
