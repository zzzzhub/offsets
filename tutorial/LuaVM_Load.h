// LuaVMLoad Tutorial By: pibbly and zzzz
// the luau_load function is defined as int luau_load(lua_State* L, const char* chunkname, const char* data, size_t size, int env) so 5 arguments.
// we know inside luau_load is loadsafe(L, ctx->strings, ctx->protos, ctx->chunkname, ctx->data, ctx->size, ctx->env); so 7 arguments.
// one of the main strings inside loadsafe is "%s: bytecode version mismatch (expected [%d..%d], got %d)".
// get the only xref of this which is lua_pushfstring inside loadsafe scroll up and the top function that contains lua_pushfstring is loadsafe.
// then once you see loadsafe xref it and the only xref will be luau_load.
// once luau_load is found look at its xrefs and every xref leads to the main full luavmload offset function (eg. 0x123 + 53, 0x123 + 67 they all are in 0x123) thats the one people reference in modules etc.

// raw luau_load example
__int64 __fastcall luau_load(_QWORD *L, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rbx
  __int64 v10; // rsi
  unsigned int v11; // edi
  __int128 v13; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+40h] [rbp-58h]
  __int64 v15; // [rsp+48h] [rbp-50h]
  __int64 v16; // [rsp+50h] [rbp-48h]
  __int64 v17; // [rsp+58h] [rbp-40h]
  __int64 v18; // [rsp+60h] [rbp-38h]
  __int64 v19; // [rsp+68h] [rbp-30h]
  __int64 v20; // [rsp+70h] [rbp-28h]
  int v21; // [rsp+78h] [rbp-20h]
  unsigned int v22; // [rsp+7Ch] [rbp-1Ch]

  __debugbreak();
  __debugbreak();
  luaC_step((__int64)L, 1);
  v9 = L[12];
  v10 = *(_QWORD *)(v9 + 16);
  *(_QWORD *)(v9 + 16) = -1;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = a2;
  v19 = a3;
  v20 = a4;
  v21 = a5;
  v22 = 0;
  if ( (unsigned int)luaD_rawrunprotected((__int64)L, (void (__fastcall *)(__int64, __int64))loadsafe, (__int64)&v13) == 4 )
  {
    Lua_pushstring(L, (int)"not enough memory");
    v11 = 1;
  }
  else
  {
    v11 = v22;
  }
  if ( v16 )
    luaM_freearray(v15, v16, 8 * v17, 0);
  if ( *((_QWORD *)&v13 + 1) )
    luaM_freearray(v13, *((__int64 *)&v13 + 1), 8 * v14, 0);
  *(_QWORD *)(v9 + 16) = v10;
  return v11;
}








// luau_load defined in luau-lang 
int luau_load(lua_State* L, const char* chunkname, const char* data, size_t size, int env)
{
    // we will allocate a fair amount of memory so check GC before we do
    luaC_checkGC(L);

    // pause GC for the duration of deserialization - some objects we're creating aren't rooted
    const ScopedSetGCThreshold pauseGC{L->global, SIZE_MAX};

    struct LoadContext
    {
        TempBuffer<TString*> strings;
        TempBuffer<Proto*> protos;
        const char* chunkname;
        const char* data;
        size_t size;
        int env;

        int result;

        static void run(lua_State* L, void* ud)
        {
            LoadContext* ctx = (LoadContext*)ud;

            ctx->result = loadsafe(L, ctx->strings, ctx->protos, ctx->chunkname, ctx->data, ctx->size, ctx->env);
        }
    } ctx = {
        {},
        {},
        chunkname,
        data,
        size,
        env,
    };

    int status = luaD_rawrunprotected(L, &LoadContext::run, &ctx);

    // load can either succeed or get an OOM error, any other errors should be handled internally
    LUAU_ASSERT(status == LUA_OK || status == LUA_ERRMEM);

    if (status == LUA_ERRMEM)
    {
        lua_pushstring(L, LUA_MEMERRMSG); // out-of-memory error message doesn't require an allocation
        return 1;
    }

    return ctx.result;
}













// raw loadsafe
__int64 __fastcall loadsafe(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // r12
  int v4; // edi
  __int64 v5; // rsi
  const char *v6; // r15
  char *v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  char *v11; // rax
  __int64 result; // rax
  unsigned __int64 v13; // rax
  char *v14; // rax
  int v15; // ebx
  unsigned __int64 v16; // rax
  char *v17; // rax
  __int64 *v18; // rax
  size_t v19; // r8
  unsigned int v20; // ebx
  int v21; // ecx
  char v22; // r8
  __int64 v23; // rsi
  __int64 v24; // rdi
  size_t v25; // r8
  int v26; // ecx
  char v27; // dl
  __int64 v28; // rbx
  unsigned __int8 v29; // bl
  int v30; // r8d
  int v31; // ecx
  char v32; // dl
  __int64 v33; // rdx
  __int64 (__fastcall *v34)(_QWORD *, __int64, _QWORD); // rax
  unsigned int v35; // ebx
  int v36; // ecx
  char v37; // dl
  unsigned int v38; // edi
  unsigned int v39; // ebx
  int v40; // ecx
  char v41; // dl
  __int64 v42; // rdx
  int v43; // ecx
  __int64 v44; // rsi
  unsigned __int8 v45; // al
  size_t v46; // rdi
  int v47; // ecx
  char v48; // dl
  __int64 v49; // rbp
  unsigned int v50; // eax
  unsigned __int8 *v51; // r14
  unsigned int v52; // esi
  unsigned int v53; // ebx
  __int64 *v54; // rax
  _QWORD *v55; // rdx
  unsigned int v56; // ebp
  int v57; // ecx
  char v58; // dl
  __int64 *v59; // rax
  int v60; // ebx
  int v61; // ecx
  char v62; // dl
  int v63; // r8d
  __int64 v64; // rdx
  int v65; // ecx
  unsigned int *v66; // rdx
  unsigned int v67; // eax
  __int64 v68; // rax
  int v69; // ebx
  int v70; // ecx
  char v71; // dl
  wchar_t *v72; // r9
  int v73; // edx
  __int64 v74; // rcx
  int v75; // eax
  int v76; // r8d
  __int64 v77; // r14
  __int64 v78; // rdx
  int v79; // eax
  wchar_t *v80; // kr18_8
  int v81; // eax
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rax
  int v85; // r8d
  int v86; // ecx
  char v87; // dl
  __int64 v88; // rcx
  __int64 v89; // rax
  int v90; // ecx
  __int64 v91; // rbx
  int v92; // ecx
  char v93; // dl
  __int64 v94; // rdi
  int v95; // r8d
  int v96; // ecx
  char v97; // dl
  char *v98; // rax
  __int64 v99; // rax
  __int64 v100; // rbx
  int v101; // ecx
  char v102; // dl
  _BYTE *v103; // rdi
  __int64 v104; // r14
  __int64 v105; // r13
  __int64 *v106; // r12
  unsigned __int64 v107; // rbp
  int v108; // ebx
  int v109; // ecx
  char v110; // dl
  char *v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rcx
  unsigned __int64 v114; // rbx
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // r8
  int v118; // ecx
  char v119; // dl
  __int64 v120; // r9
  __int64 v121; // rax
  __int64 v122; // rcx
  unsigned int v123; // r8d
  int v124; // ecx
  char v125; // dl
  int v126; // ebp
  int v127; // ecx
  char v128; // dl
  unsigned int v129; // ebx
  int v130; // ecx
  char v131; // dl
  __int64 *v132; // r14
  __int64 v133; // r13
  int v134; // edi
  __int64 v135; // r8
  int v136; // ecx
  char v137; // dl
  __int64 *v138; // r8
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rcx
  __int64 v142; // r8
  int v143; // ecx
  char v144; // dl
  __int64 v145; // rax
  unsigned __int8 *v146; // rbx
  int v147; // ebp
  unsigned int v148; // eax
  __int64 v149; // rdi
  __int16 v150; // ax
  __int64 (__fastcall *v151)(_QWORD *, __int64, _QWORD); // rax
  __int64 v152; // rax
  int v153; // ebx
  int v154; // ecx
  char v155; // dl
  int v156; // r10d
  __int64 v157; // r9
  __int64 v158; // r8
  int v159; // ecx
  char v160; // dl
  int v161; // r8d
  int v162; // ecx
  char v163; // dl
  int v164; // r8d
  int v165; // ecx
  char v166; // dl
  __int64 v167; // rdx
  __int64 v168; // r14
  int v169; // ecx
  int v170; // eax
  int v171; // ebp
  signed int v172; // edi
  int v173; // ebx
  char *v174; // rax
  char v175; // dl
  int v176; // r8d
  __int64 i; // r9
  unsigned __int8 v178; // al
  int v179; // edx
  __int64 j; // rcx
  int v181; // eax
  unsigned __int8 v182; // al
  int v183; // ebx
  int v184; // ecx
  char v185; // dl
  int v186; // r10d
  __int64 v187; // r9
  int v188; // r8d
  int v189; // ecx
  char v190; // dl
  __int64 v191; // rcx
  int v192; // r8d
  int v193; // ecx
  char v194; // dl
  int v195; // r8d
  int v196; // ecx
  char v197; // dl
  unsigned __int8 v198; // cl
  int v199; // ebx
  int v200; // ecx
  char v201; // dl
  int v202; // r10d
  __int64 v203; // r9
  int v204; // r8d
  int v205; // ecx
  char v206; // dl
  __int64 v207; // rcx
  char v208; // r11
  unsigned int v209; // r8d
  int v210; // ecx
  char v211; // dl
  unsigned int v212; // r10d
  int v213; // eax
  __int64 v214; // r9
  int v215; // r8d
  int v216; // ecx
  char v217; // dl
  __int64 v218; // r9
  int v219; // ecx
  char *v220; // r8
  char v221; // dl
  __int64 v222; // r10
  __int64 v223; // r9
  int v224; // ecx
  char *v225; // r8
  char v226; // dl
  __int64 v227; // rbx
  __int64 v228; // rax
  __int64 v229; // rcx
  __int64 v230; // rcx
  unsigned __int64 v231; // rax
  char *v232; // rax
  int v233; // [rsp+30h] [rbp-518h]
  int v234; // [rsp+30h] [rbp-518h]
  __int64 v235; // [rsp+38h] [rbp-510h]
  int v236; // [rsp+40h] [rbp-508h]
  int v237; // [rsp+48h] [rbp-500h]
  __int64 v238; // [rsp+48h] [rbp-500h]
  __int64 v239; // [rsp+50h] [rbp-4F8h]
  unsigned int v240; // [rsp+58h] [rbp-4F0h]
  unsigned int v241; // [rsp+5Ch] [rbp-4ECh]
  __int64 v242; // [rsp+60h] [rbp-4E8h]
  __int64 v243; // [rsp+60h] [rbp-4E8h]
  unsigned int v244; // [rsp+68h] [rbp-4E0h]
  __int64 v245; // [rsp+70h] [rbp-4D8h]
  const char *v246; // [rsp+78h] [rbp-4D0h]
  __int64 v247; // [rsp+80h] [rbp-4C8h]
  __int64 v248; // [rsp+88h] [rbp-4C0h]
  __int64 v249; // [rsp+90h] [rbp-4B8h]
  __int64 *v250; // [rsp+98h] [rbp-4B0h]
  __int64 *v251; // [rsp+A0h] [rbp-4A8h]
  __int64 v252; // [rsp+A8h] [rbp-4A0h]
  __int64 v253; // [rsp+C8h] [rbp-480h] BYREF
  int v254; // [rsp+D0h] [rbp-478h]
  char v255; // [rsp+D7h] [rbp-471h]
  _OWORD v256[2]; // [rsp+D8h] [rbp-470h] BYREF
  char Dest[256]; // [rsp+100h] [rbp-448h] BYREF
  char v258[256]; // [rsp+200h] [rbp-348h] BYREF
  char v259[256]; // [rsp+300h] [rbp-248h] BYREF
  char v260[328]; // [rsp+400h] [rbp-148h] BYREF
  unsigned __int8 v263; // [rsp+560h] [rbp+18h]
  char v264; // [rsp+568h] [rbp+20h]

  v2 = a2;
  v3 = (_QWORD *)a1;
  v4 = *(_DWORD *)(a2 + 72);
  v5 = *(_QWORD *)(a2 + 64);
  v6 = *(const char **)(a2 + 56);
  v246 = v6;
  v7 = *(char **)(a2 + 48);
  v245 = a2 + 24;
  LODWORD(v8) = *(unsigned __int8 *)v6;
  v264 = *v6;
  v9 = 1;
  sub_1D4FA20();
  if ( !(_BYTE)v8 )
  {
    v10 = -1;
    do
      ++v10;
    while ( v7[v10] );
    v11 = luaO_chunkid(Dest, 0x100u, v7, v10);
    result = lua_pushfstringL((__int64)v3, "%s%.*s", v11, (int)v5 - 1, v6 + 1);
LABEL_252:
    v15 = 1;
    goto LABEL_253;
  }
  if ( (unsigned __int8)(v8 - 3) > 9u )
  {
    v231 = -1;
    do
      ++v231;
    while ( v7[v231] );
    v232 = luaO_chunkid(v260, 0x100u, v7, v231);
    result = lua_pushfstringL((__int64)v3, "%s: bytecode version mismatch (expected [%d..%d], got %d)", v232, 3, 12, v8);
    goto LABEL_252;
  }
  v263 = 0;
  if ( (unsigned __int8)v8 >= 4u )
  {
    v263 = v6[1];
    v9 = 2;
    if ( (unsigned __int8)(v263 - 1) > 2u )
    {
      v13 = -1;
      do
        ++v13;
      while ( v7[v13] );
      v14 = luaO_chunkid(v258, 0x100u, v7, v13);
      v15 = 1;
      result = lua_pushfstringL(
                 (__int64)v3,
                 "%s: bytecode type version mismatch (expected [%d..%d], got %d)",
                 v14,
                 1,
                 3,
                 v263);
      goto LABEL_253;
    }
  }
  if ( (unsigned int)sub_1E4B830((__int64)v3, (__int64)v7, (__int64)v6, v5, v4) == 1 )
  {
    v16 = -1;
    do
      ++v16;
    while ( v7[v16] );
    v17 = luaO_chunkid(v259, 0x100u, v7, v16);
    result = lua_pushfstringL((__int64)v3, "%s: bytecode corrupted", v17);
    v15 = 1;
    goto LABEL_253;
  }
  if ( v4 )
    v18 = (__int64 *)luaA_toobject(v3, v4);
  else
    v18 = v3 + 6;
  v248 = *v18;
  v19 = -1;
  do
    ++v19;
  while ( v7[v19] );
  v249 = LuaS_newlstr((__int64)v3, v7, v19);
  v20 = 0;
  v21 = 0;
  do
  {
    v22 = v6[v9++];
    v20 |= (v22 & 0x7F) << v21;
    v21 += 7;
  }
  while ( v22 < 0 );
  v23 = v20;
  sub_4795710((__int64 *)v2, v3, v20);
  if ( v20 )
  {
    v24 = 0;
    do
    {
      LODWORD(v25) = 0;
      v26 = 0;
      do
      {
        v27 = v6[v9++];
        v25 = ((v27 & 0x7F) << v26) | (unsigned int)v25;
        v26 += 7;
      }
      while ( v27 < 0 );
      v28 = (unsigned int)v25;
      *(_QWORD *)(v24 + *(_QWORD *)(v2 + 8)) = LuaS_newlstr((__int64)v3, &v6[v9], v25);
      v9 += v28;
      v24 += 8;
      --v23;
    }
    while ( v23 );
  }
  if ( v263 == 3 )
  {
    v256[0] = _mm_load_si128((const __m128i *)&xmmword_6A4AC90);
    v256[1] = v256[0];
    v29 = v6[v9++];
    for ( ; v29; ++v9 )
    {
      v30 = 0;
      v31 = 0;
      do
      {
        v32 = v6[v9++];
        v30 |= (v32 & 0x7F) << v31;
        v31 += 7;
      }
      while ( v32 < 0 );
      if ( v30 )
        v33 = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL * (unsigned int)(v30 - 1));
      else
        v33 = 0;
      if ( (unsigned int)v29 - 1 < 0x20 )
      {
        v34 = *(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(v3[12] + 1408LL);
        if ( v34 )
          *(&v255 + v29) = v34(v3, v33 + 24, *(unsigned int *)(v33 + 20));
      }
      v29 = v6[v9];
    }
  }
  v35 = 0;
  v36 = 0;
  do
  {
    v37 = v6[v9++];
    v35 |= (v37 & 0x7F) << v36;
    v36 += 7;
  }
  while ( v37 < 0 );
  v244 = v35;
  sub_4795710((__int64 *)(v2 + 24), v3, v35);
  v38 = 0;
  v241 = 0;
  if ( v35 )
  {
    v247 = 0;
    while ( 1 )
    {
      v240 = 0;
      if ( (unsigned __int8)v8 >= 0xCu )
      {
        v39 = 0;
        v40 = 0;
        do
        {
          v41 = v6[v9++];
          v39 |= (v41 & 0x7F) << v40;
          v40 += 7;
        }
        while ( v41 < 0 );
        v240 = v39;
      }
      v252 = v9;
      v8 = luaF_newproto((__int64)v3);
      v239 = v8;
      *(_QWORD *)(v8 + 16) = v249 - (v8 + 16);
      *(_DWORD *)(v8 + 160) = v38;
      v42 = v3[12];
      v43 = *(_DWORD *)(v42 + 17656);
      if ( v43 )
        *(_DWORD *)(v42 + 17656) = v43 + 1;
      *(_DWORD *)(v8 + 188) = v43;
      *(_BYTE *)(v8 + 3) = v6[v9];
      *(_BYTE *)(v8 + 7) = v6[v9 + 1];
      *(_BYTE *)(v8 + 6) = v6[v9 + 2];
      v44 = v9 + 4;
      *(_BYTE *)(v8 + 5) = v6[v9 + 3];
      if ( (unsigned __int8)v264 >= 4u )
      {
        v45 = v6[v44];
        v44 = v9 + 5;
        *(_BYTE *)(v8 + 4) = v45;
        if ( v263 == 1 )
        {
          LODWORD(v46) = 0;
          v47 = 0;
          do
          {
            v48 = v6[v44];
            v49 = ++v44;
            v50 = v46 | ((v48 & 0x7F) << v47);
            v46 = v50;
            v47 += 7;
          }
          while ( v48 < 0 );
          if ( v50 )
          {
            v51 = (unsigned __int8 *)&v6[v44];
            v52 = (v50 > 0x7F) + 3;
            v53 = v50 + v52;
            v54 = sub_47B0F40((__int64)v3, v50 + v52, *(_BYTE *)(v8 + 2));
            v55 = (_QWORD *)(v8 + 120);
            *(_QWORD *)(v8 + 120) = (char *)v54 + v8 + 120;
            *(_DWORD *)(v8 + 152) = v53;
            if ( (unsigned int)v46 <= 0x7F )
            {
              *(_BYTE *)v54 = v46;
              *(_BYTE *)(*v55 - (_QWORD)v55 + 1LL) = 0;
              *(_BYTE *)(*v55 - (_QWORD)v55 + 2LL) = 0;
            }
            else
            {
              *(_BYTE *)v54 = v46 | 0x80;
              *(_WORD *)(*v55 - (_QWORD)v55 + 1LL) = (unsigned __int8)((unsigned int)v46 >> 7);
              *(_BYTE *)(*v55 - (_QWORD)v55 + 3LL) = 0;
            }
            memmove((void *)(*v55 + v52 - (_QWORD)v55), v51, v46);
          }
          v44 = v46 + v49;
        }
        else
        {
          if ( (unsigned __int8)(v263 - 2) > 1u )
            goto LABEL_65;
          v56 = 0;
          v57 = 0;
          do
          {
            v58 = v6[v44++];
            v56 |= (v58 & 0x7F) << v57;
            v57 += 7;
          }
          while ( v58 < 0 );
          if ( v56 )
          {
            v59 = sub_47B0F40((__int64)v3, v56, *(_BYTE *)(v8 + 2));
            *(_QWORD *)(v8 + 120) = (char *)v59 + v8 + 120;
            *(_DWORD *)(v8 + 152) = v56;
            memmove(v59, &v6[v44], v56);
            v44 += v56;
            if ( v263 == 3 )
              sub_47959C0(*(_QWORD *)(v8 + 120) - (v8 + 120), *(int *)(v8 + 152), (__int64)v256, 0x20u);
          }
        }
        v2 = a2;
      }
LABEL_65:
      v60 = 0;
      v61 = 0;
      do
      {
        v62 = v6[v44++];
        v60 |= (v62 & 0x7F) << v61;
        v61 += 7;
      }
      while ( v62 < 0 );
      if ( (unsigned __int64)v60 > 0x3FFFFFFFFFFFFFFFLL )
        goto LABEL_254;
      *(_QWORD *)(v8 + 48) = sub_47B0F40((__int64)v3, 4LL * v60, *(_BYTE *)(v8 + 2));
      *(_DWORD *)(v8 + 136) = v60;
      v63 = 0;
      if ( v60 > 0 )
      {
        v64 = 0;
        do
        {
          v65 = *(_DWORD *)&v6[v44];
          v44 += 4;
          *(_DWORD *)(v64 + *(_QWORD *)(v8 + 48)) = v65;
          ++v63;
          v64 += 4;
          v60 = *(_DWORD *)(v8 + 136);
        }
        while ( v63 < v60 );
      }
      v66 = *(unsigned int **)(v8 + 48);
      if ( v66 < &v66[v60] )
      {
        do
        {
          v67 = byte_62DFFA0[(unsigned __int8)*v66] | *v66 & 0xFFFFFF00;
          *v66 = v67;
          switch ( byte_6A4AAF0[(_QWORD)&TlsCallbacks + (unsigned __int8)v67] )
          {
            case 7:
            case 8:
            case 0xC:
            case 0xF:
            case 0x10:
            case 0x14:
            case 0x1B:
            case 0x1C:
            case 0x1D:
            case 0x1E:
            case 0x1F:
            case 0x20:
            case 0x35:
            case 0x37:
            case 0x3A:
            case 0x3C:
            case 0x42:
            case 0x4A:
            case 0x4B:
            case 0x4D:
            case 0x4E:
            case 0x4F:
            case 0x50:
            case 0x53:
            case 0x54:
            case 0x55:
            case 0x56:
            case 0x57:
            case 0x58:
              v68 = 8;
              break;
            default:
              v68 = 4;
              break;
          }
          v66 = (unsigned int *)((char *)v66 + v68);
        }
        while ( (unsigned __int64)v66 < *(_QWORD *)(v8 + 48) + 4LL * *(int *)(v8 + 136) );
        v3 = (_QWORD *)a1;
        v2 = a2;
        v66 = *(unsigned int **)(v8 + 48);
      }
      *(_QWORD *)(v8 + 128) = v66;
      v69 = 0;
      v70 = 0;
      do
      {
        v71 = v6[v44++];
        v69 |= (v71 & 0x7F) << v70;
        v70 += 7;
      }
      while ( v71 < 0 );
      v235 = v44;
      if ( (unsigned __int64)v69 > 0xFFFFFFFFFFFFFFFLL )
LABEL_254:
        luaM_toobig(v3);
      *(_QWORD *)(v8 + 40) = sub_47B0F40((__int64)v3, 16LL * v69, *(_BYTE *)(v8 + 2));
      *(_DWORD *)(v8 + 148) = v69;
      v73 = 0;
      if ( v69 > 0 )
      {
        v74 = 0;
        do
        {
          *(_DWORD *)(v74 + *(_QWORD *)(v8 + 40) + 12) = 0;
          ++v73;
          v74 += 16;
          v75 = *(_DWORD *)(v8 + 148);
        }
        while ( v73 < v75 );
        v76 = 0;
        v233 = 0;
        if ( v75 > 0 )
        {
          v77 = 0;
          v242 = 0;
          while ( 1 )
          {
            v78 = v44;
            v79 = (unsigned __int8)v6[v44++];
            v80 = v72;
            v72 = &TlsCallbacks;
            switch ( v79 )
            {
              case 1:
                v81 = (unsigned __int8)v6[v44++];
                v82 = *(_QWORD *)(v8 + 40);
                *(_DWORD *)(v77 + v82) = v81;
                *(_DWORD *)(v77 + v82 + 12) = 1;
                goto LABEL_151;
              case 2:
                v243 = *(_QWORD *)&v6[v44];
                v44 = v78 + 9;
                v83 = *(_QWORD *)(v8 + 40);
                *(_QWORD *)(v77 + v83) = v243;
                *(_DWORD *)(v77 + v83 + 12) = 3;
                goto LABEL_151;
              case 3:
                v85 = 0;
                v86 = 0;
                do
                {
                  v87 = v6[v44++];
                  v85 |= (v87 & 0x7F) << v86;
                  v86 += 7;
                }
                while ( v87 < 0 );
                if ( v85 )
                  v88 = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL * (unsigned int)(v85 - 1));
                else
                  v88 = 0;
                v89 = *(_QWORD *)(v8 + 40);
                *(_QWORD *)(v77 + v89) = v88;
                *(_DWORD *)(v77 + v89 + 12) = 6;
                goto LABEL_150;
              case 4:
                v90 = *(_DWORD *)&v6[v44];
                v44 = v78 + 5;
                v253 = *(_QWORD *)(v8 + 40);
                v254 = v90;
                if ( *(_BYTE *)(v3[6] + 3LL) )
                {
                  sub_4789D10((__int64)v3);
                  if ( (unsigned int)sub_478F110(
                                       (__int64)v3,
                                       (void (__fastcall *)(__int64, __int64))qword_4797260,
                                       (__int64)&v253,
                                       v3[13] - v3[11],
                                       0) )
                    *(_DWORD *)(v3[13] - 4LL) = 0;
                  v76 = v233;
                }
                else
                {
                  *(_DWORD *)(v3[13] + 12LL) = 0;
                  v3[13] += 16LL;
                }
                *(_OWORD *)(v77 + *(_QWORD *)(v8 + 40)) = *(_OWORD *)(v3[13] - 16LL);
                v3[13] -= 16LL;
                goto LABEL_151;
              case 5:
                LODWORD(v91) = 0;
                v92 = 0;
                do
                {
                  v93 = v6[v44++];
                  v91 = ((v93 & 0x7F) << v92) | (unsigned int)v91;
                  v92 += 7;
                }
                while ( v93 < 0 );
                v94 = luaH_new((__int64)v3, 0, v91);
                if ( (int)v91 > 0 )
                {
                  do
                  {
                    v95 = 0;
                    v96 = 0;
                    do
                    {
                      v97 = v6[v44++];
                      v95 |= (v97 & 0x7F) << v96;
                      v96 += 7;
                    }
                    while ( v97 < 0 );
                    v98 = sub_47B5290(v3, v94, (int *)(*(_QWORD *)(v8 + 40) + 16LL * v95));
                    *(_QWORD *)v98 = 0;
                    *((_DWORD *)v98 + 3) = 3;
                    --v91;
                  }
                  while ( v91 );
                }
                v99 = *(_QWORD *)(v8 + 40);
                *(_QWORD *)(v77 + v99) = v94;
                *(_DWORD *)(v77 + v99 + 12) = 7;
                goto LABEL_150;
              case 6:
                LODWORD(v117) = 0;
                v118 = 0;
                do
                {
                  v119 = v6[v44++];
                  v117 = ((v119 & 0x7F) << v118) | (unsigned int)v117;
                  v118 += 7;
                }
                while ( v119 < 0 );
                v120 = *(_QWORD *)(*(_QWORD *)(v245 + 8) + 8 * v117);
                v121 = luaF_newLclosure((__int64)v3, *(unsigned __int8 *)(v120 + 6), v248, v120);
                *(_BYTE *)(v121 + 3) = *(_BYTE *)(v121 + 5) != 0;
                v122 = *(_QWORD *)(v8 + 40);
                *(_QWORD *)(v77 + v122) = v121;
                *(_DWORD *)(v77 + v122 + 12) = 8;
                goto LABEL_150;
              case 7:
                v234 = *(_DWORD *)&v6[v44];
                v236 = *(_DWORD *)&v6[v78 + 5];
                v237 = *(_DWORD *)&v6[v78 + 9];
                v44 = v78 + 17;
                v84 = *(_QWORD *)(v8 + 40);
                *(_DWORD *)(v77 + v84) = v234;
                *(_DWORD *)(v77 + v84 + 4) = v236;
                *(_DWORD *)(v77 + v84 + 8) = v237;
                *(_DWORD *)(v77 + v84 + 12) = 5;
                goto LABEL_151;
              case 8:
                LODWORD(v100) = 0;
                v101 = 0;
                do
                {
                  v102 = v6[v44++];
                  v100 = ((v102 & 0x7F) << v101) | (unsigned int)v100;
                  v101 += 7;
                }
                while ( v102 < 0 );
                v103 = (_BYTE *)luaH_new((__int64)v3, 0, v100);
                v104 = (unsigned int)v100;
                v105 = 4 * v100;
                v238 = 4 * v100;
                v106 = sub_47B0F40((__int64)v3, 4 * v100, 0);
                v107 = 0;
                if ( !(_DWORD)v100 )
                  goto LABEL_119;
                break;
              case 9:
                v72 = (wchar_t *)(unsigned __int8)v6[v44];
                v44 = v78 + 2;
                v142 = 0;
                v143 = 0;
                do
                {
                  v144 = v6[v44++];
                  v142 |= (unsigned __int64)(v144 & 0x7F) << v143;
                  v143 += 7;
                }
                while ( v144 < 0 );
                v145 = *(_QWORD *)(v8 + 40);
                if ( (_BYTE)v72 )
                  v142 = -v142;
                *(_QWORD *)(v77 + v145) = v142;
                *(_DWORD *)(v77 + v145 + 12) = 4;
                goto LABEL_150;
              case 10:
                v123 = 0;
                v124 = 0;
                do
                {
                  v125 = v6[v44++];
                  v123 |= (v125 & 0x7F) << v124;
                  v124 += 7;
                }
                while ( v125 < 0 );
                v251 = (__int64 *)(*(_QWORD *)(v8 + 40) + 16LL * v123);
                v126 = 0;
                v127 = 0;
                do
                {
                  v128 = v6[v44++];
                  v126 |= (v128 & 0x7F) << v127;
                  v127 += 7;
                }
                while ( v128 < 0 );
                v129 = 0;
                v130 = 0;
                do
                {
                  v131 = v6[v44++];
                  v129 |= (v131 & 0x7F) << v130;
                  v130 += 7;
                }
                while ( v131 < 0 );
                v132 = sub_47B0F40(a1, 8LL * (v129 + v126), *(_BYTE *)(a1 + 4));
                v250 = v132;
                v133 = luaH_new(a1, 0, v129 + v126);
                v134 = 0;
                if ( v129 + v126 )
                {
                  do
                  {
                    LODWORD(v135) = 0;
                    v136 = 0;
                    do
                    {
                      v137 = v6[v44++];
                      v135 = ((v137 & 0x7F) << v136) | (unsigned int)v135;
                      v136 += 7;
                    }
                    while ( v137 < 0 );
                    v138 = (__int64 *)(*(_QWORD *)(v239 + 40) + 16 * v135);
                    *v132 = *v138;
                    v139 = sub_47B7F00((_QWORD *)a1, v133, (_BYTE *)*v138);
                    *(double *)v139 = (double)v134;
                    *(_DWORD *)(v139 + 12) = 3;
                    ++v134;
                    ++v132;
                  }
                  while ( v134 < v129 + v126 );
                  v132 = v250;
                }
                *(_BYTE *)(v133 + 6) = 1;
                v3 = (_QWORD *)a1;
                v140 = sub_47C2410(a1, *v251, v133, (__int64)v132, v126, v129);
                v8 = v239;
                v141 = *(_QWORD *)(v239 + 40);
                v77 = v242;
                *(_QWORD *)(v242 + v141) = v140;
                *(_DWORD *)(v242 + v141 + 12) = 12;
                goto LABEL_150;
              default:
                v72 = v80;
                goto LABEL_151;
            }
            do
            {
              v108 = 0;
              v109 = 0;
              do
              {
                v110 = v6[v44++];
                v108 |= (v110 & 0x7F) << v109;
                v109 += 7;
              }
              while ( v110 < 0 );
              v111 = sub_47B5290((_QWORD *)a1, (__int64)v103, (int *)(*(_QWORD *)(v239 + 40) + 16LL * v108));
              v112 = *(int *)&v6[v44];
              v44 += 4;
              if ( (int)v112 < 0 )
                goto LABEL_116;
              v113 = *(_QWORD *)(v239 + 40) + 16 * v112;
              if ( !*(_DWORD *)(v113 + 12) )
              {
                *((_DWORD *)v106 + v107++) = v108;
LABEL_116:
                *(_QWORD *)v111 = 0;
                *((_DWORD *)v111 + 3) = 3;
                goto LABEL_117;
              }
              *(_OWORD *)v111 = *(_OWORD *)v113;
              if ( *(int *)(v113 + 12) >= 6 && (*v103 & 4) != 0 && (**(_BYTE **)v113 & 3) != 0 )
                sub_4793CA0(a1, (__int64)v103, *(_QWORD *)v113);
LABEL_117:
              --v104;
            }
            while ( v104 );
            v105 = v238;
LABEL_119:
            v114 = 0;
            if ( v107 )
            {
              do
                *((_DWORD *)sub_47B5290(
                              (_QWORD *)a1,
                              (__int64)v103,
                              (int *)(*(_QWORD *)(v239 + 40) + 16LL * *((int *)v106 + v114++)))
                + 3) = 0;
              while ( v114 < v107 );
              v6 = v246;
              v105 = v238;
            }
            v115 = *(_QWORD *)(v239 + 40);
            v77 = v242;
            *(_QWORD *)(v242 + v115) = v103;
            *(_DWORD *)(v242 + v115 + 12) = 7;
            if ( v106 )
            {
              v116 = (__int64)v106;
              v3 = (_QWORD *)a1;
              luaM_freearray(a1, v116, v105, 0);
            }
            else
            {
              v3 = (_QWORD *)a1;
            }
            v8 = v239;
LABEL_150:
            v76 = v233;
LABEL_151:
            v233 = ++v76;
            v77 += 16;
            v242 = v77;
            v2 = a2;
            if ( v76 >= *(_DWORD *)(v8 + 148) )
            {
              v235 = v44;
              break;
            }
          }
        }
      }
      if ( byte_793EE90 )
      {
        v146 = *(unsigned __int8 **)(v8 + 48);
        if ( v146 < &v146[4 * *(int *)(v8 + 136)] )
        {
          while ( *v146 != 7 )
          {
            if ( *v146 == 136 )
            {
              v147 = 181;
              goto LABEL_161;
            }
            if ( *v146 == 169 )
            {
              v147 = 20;
              goto LABEL_161;
            }
LABEL_169:
            switch ( byte_6A4AAF0[(_QWORD)&TlsCallbacks + *v146] )
            {
              case 7:
              case 8:
              case 0xC:
              case 0xF:
              case 0x10:
              case 0x14:
              case 0x1B:
              case 0x1C:
              case 0x1D:
              case 0x1E:
              case 0x1F:
              case 0x20:
              case 0x35:
              case 0x37:
              case 0x3A:
              case 0x3C:
              case 0x42:
              case 0x4A:
              case 0x4B:
              case 0x4D:
              case 0x4E:
              case 0x4F:
              case 0x50:
              case 0x53:
              case 0x54:
              case 0x55:
              case 0x56:
              case 0x57:
              case 0x58:
                v152 = 8;
                break;
              default:
                v152 = 4;
                break;
            }
            v146 += v152;
            if ( (unsigned __int64)v146 >= *(_QWORD *)(v8 + 48) + 4LL * *(int *)(v8 + 136) )
            {
              v44 = v235;
              v6 = v246;
              goto LABEL_174;
            }
          }
          v147 = 154;
LABEL_161:
          v148 = *((_DWORD *)v146 + 1);
          if ( v148 < (unsigned int)&loc_10000 )
          {
            v149 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 16LL * v148);
            v150 = *(_WORD *)(v149 + 6);
            if ( v150 == (__int16)0x8000 )
            {
              v151 = *(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(v3[12] + 1256LL);
              if ( v151 )
                v150 = v151(v3, v149 + 24, *(unsigned int *)(v149 + 20));
              else
                v150 = -1;
              *(_WORD *)(v149 + 6) = v150;
            }
            if ( v150 >= 0 )
            {
              *(_DWORD *)v146 &= 0xFFFFFF00;
              *(_DWORD *)v146 |= v147;
            }
          }
          goto LABEL_169;
        }
      }
LABEL_174:
      v153 = 0;
      v154 = 0;
      do
      {
        v155 = v6[v44++];
        v153 |= (v155 & 0x7F) << v154;
        v154 += 7;
      }
      while ( v155 < 0 );
      if ( (unsigned __int64)v153 > 0x1FFFFFFFFFFFFFFFLL )
        goto LABEL_255;
      *(_QWORD *)(v8 + 104) = sub_47B0F40((__int64)v3, 8LL * v153, *(_BYTE *)(v8 + 2));
      *(_DWORD *)(v8 + 172) = v153;
      v156 = 0;
      if ( v153 > 0 )
      {
        v157 = 0;
        do
        {
          LODWORD(v158) = 0;
          v159 = 0;
          do
          {
            v160 = v6[v44++];
            v158 = ((v160 & 0x7F) << v159) | (unsigned int)v158;
            v159 += 7;
          }
          while ( v160 < 0 );
          *(_QWORD *)(v157 + *(_QWORD *)(v8 + 104)) = *(_QWORD *)(*(_QWORD *)(v245 + 8) + 8 * v158);
          ++v156;
          v157 += 8;
        }
        while ( v156 < *(_DWORD *)(v8 + 172) );
        v3 = (_QWORD *)a1;
      }
      v161 = 0;
      v162 = 0;
      do
      {
        v163 = v6[v44++];
        v161 |= (v163 & 0x7F) << v162;
        v162 += 7;
      }
      while ( v163 < 0 );
      *(_DWORD *)(v8 + 164) = v161;
      v164 = 0;
      v165 = 0;
      do
      {
        v166 = v6[v44++];
        v164 |= (v166 & 0x7F) << v165;
        v165 += 7;
      }
      while ( v166 < 0 );
      if ( v164 )
        v167 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL * (unsigned int)(v164 - 1));
      else
        v167 = 0;
      *(_QWORD *)(v8 + 72) = v8 + 72 - v167;
      v168 = v44 + 1;
      if ( v6[v44] )
      {
        v169 = (unsigned __int8)v6[v168];
        v168 = v44 + 2;
        *(_DWORD *)(v8 + 156) = v169;
        v170 = *(_DWORD *)(v8 + 136);
        v171 = ((v170 - 1) >> v169) + 1;
        v172 = (v170 + 3) & 0xFFFFFFFC;
        v173 = v172 + 4 * v171;
        v174 = (char *)sub_47B0F40((__int64)v3, v173, *(_BYTE *)(v8 + 2)) - v8 - 64;
        *(_QWORD *)(v8 + 64) = v174;
        *(_DWORD *)(v8 + 144) = v173;
        *(_QWORD *)(v8 + 56) = (v8 + 56) ^ (unsigned __int64)&v174[v172 + 64 + v8];
        v175 = 0;
        v176 = 0;
        for ( i = 0; v176 < *(_DWORD *)(v8 + 136); ++i )
        {
          v178 = v6[v168++];
          v175 += v178;
          *(_BYTE *)(i + *(_QWORD *)(v8 + 64) + v8 + 64) = v175;
          ++v176;
        }
        v179 = 0;
        for ( j = 0; j < v171; *(_DWORD *)((*(_QWORD *)(v8 + 56) ^ (v8 + 56)) + 4 * j++) = v179 )
        {
          v181 = *(_DWORD *)&v6[v168];
          v168 += 4;
          v179 += v181;
        }
      }
      v182 = v6[v168];
      v9 = v168 + 1;
      if ( v182 )
      {
        v183 = 0;
        v184 = 0;
        do
        {
          v185 = v6[v9++];
          v183 |= (v185 & 0x7F) << v184;
          v184 += 7;
        }
        while ( v185 < 0 );
        if ( (unsigned __int64)v183 > 0xAAAAAAAAAAAAAAALL )
          goto LABEL_255;
        *(_QWORD *)(v8 + 96) = v8 + 96 - (_QWORD)sub_47B0F40((__int64)v3, 24LL * v183, *(_BYTE *)(v8 + 2));
        *(_DWORD *)(v8 + 168) = v183;
        v186 = 0;
        if ( v183 > 0 )
        {
          v187 = 0;
          do
          {
            v188 = 0;
            v189 = 0;
            do
            {
              v190 = v6[v9++];
              v188 |= (v190 & 0x7F) << v189;
              v189 += 7;
            }
            while ( v190 < 0 );
            if ( v188 )
              v191 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL * (unsigned int)(v188 - 1));
            else
              v191 = 0;
            *(_QWORD *)(v187 - *(_QWORD *)(v8 + 96) + v8 + 96) = v191;
            v192 = 0;
            v193 = 0;
            do
            {
              v194 = v6[v9++];
              v192 |= (v194 & 0x7F) << v193;
              v193 += 7;
            }
            while ( v194 < 0 );
            *(_DWORD *)(v187 - *(_QWORD *)(v8 + 96) + v8 + 104) = v192;
            v195 = 0;
            v196 = 0;
            do
            {
              v197 = v6[v9++];
              v195 |= (v197 & 0x7F) << v196;
              v196 += 7;
            }
            while ( v197 < 0 );
            *(_DWORD *)(v8 + 96 - *(_QWORD *)(v8 + 96) + v187 + 12) = v195;
            v198 = v6[v9++];
            *(_BYTE *)(v8 + 96 - *(_QWORD *)(v8 + 96) + v187 + 16) = v198;
            ++v186;
            v187 += 24;
          }
          while ( v186 < *(_DWORD *)(v8 + 168) );
          v3 = (_QWORD *)a1;
        }
        v199 = 0;
        v200 = 0;
        do
        {
          v201 = v6[v9++];
          v199 |= (v201 & 0x7F) << v200;
          v200 += 7;
        }
        while ( v201 < 0 );
        if ( (unsigned __int64)v199 > 0x1FFFFFFFFFFFFFFFLL )
LABEL_255:
          luaM_toobig(v3);
        *(_QWORD *)(v8 + 8) = (v8 + 8) ^ (unsigned __int64)sub_47B0F40((__int64)v3, 8LL * v199, *(_BYTE *)(v8 + 2));
        *(_DWORD *)(v8 + 140) = v199;
        v202 = 0;
        if ( v199 > 0 )
        {
          v203 = 0;
          do
          {
            v204 = 0;
            v205 = 0;
            do
            {
              v206 = v6[v9++];
              v204 |= (v206 & 0x7F) << v205;
              v205 += 7;
            }
            while ( v206 < 0 );
            if ( v204 )
              v207 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL * (unsigned int)(v204 - 1));
            else
              v207 = 0;
            *(_QWORD *)((*(_QWORD *)(v8 + 8) ^ (v8 + 8)) + v203) = v207;
            ++v202;
            v203 += 8;
          }
          while ( v202 < *(_DWORD *)(v8 + 140) );
          v3 = (_QWORD *)a1;
        }
      }
      v208 = v264;
      if ( (unsigned __int8)v264 >= 0xBu )
      {
        v209 = 0;
        v210 = 0;
        do
        {
          v211 = v6[v9++];
          v209 |= (v211 & 0x7F) << v210;
          v210 += 7;
        }
        while ( v211 < 0 );
        *(_DWORD *)(v8 + 184) = v209;
        if ( v209 )
        {
          *(_QWORD *)(v8 + 176) = sub_47B0F40((__int64)v3, 16LL * v209, *(_BYTE *)(v8 + 2));
          v209 = *(_DWORD *)(v8 + 184);
          v208 = v264;
        }
        v212 = 0;
        if ( v209 )
        {
          do
          {
            v213 = (unsigned __int8)v6[v9++];
            v214 = *(_QWORD *)(v8 + 176) + 16LL * v212;
            *(_DWORD *)v214 = v213;
            v215 = 0;
            v216 = 0;
            do
            {
              v217 = v6[v9++];
              v215 |= (v217 & 0x7F) << v216;
              v216 += 7;
            }
            while ( v217 < 0 );
            *(_DWORD *)(v214 + 4) = v215;
            *(_QWORD *)(v214 + 8) = 0;
            ++v212;
          }
          while ( v212 < *(_DWORD *)(v8 + 184) );
        }
      }
      if ( (unsigned __int8)v208 >= 0xCu )
      {
        if ( (*(_BYTE *)(v8 + 4) & 8) != 0 )
        {
          v218 = 0;
          v219 = 0;
          v220 = (char *)&v6[v9];
          do
          {
            v221 = *v220++;
            v218 |= (unsigned __int64)(v221 & 0x7F) << v219;
            v219 += 7;
          }
          while ( v221 < 0 );
          *(_QWORD *)(v8 + 208) = v218;
        }
        v9 = v252 + v240;
      }
      v222 = v245;
      *(_QWORD *)(*(_QWORD *)(v245 + 8) + 8 * v247) = v8;
      v38 = v241 + 1;
      v241 = v38;
      ++v247;
      v2 = a2;
      LOBYTE(v8) = v264;
      if ( v38 >= v244 )
        goto LABEL_242;
    }
  }
  v222 = v2 + 24;
LABEL_242:
  LODWORD(v223) = 0;
  v224 = 0;
  v225 = (char *)&v6[v9];
  do
  {
    v226 = *v225++;
    v223 = ((v226 & 0x7F) << v224) | (unsigned int)v223;
    v224 += 7;
  }
  while ( v226 < 0 );
  v227 = *(_QWORD *)(*(_QWORD *)(v222 + 8) + 8 * v223);
  if ( (*(_BYTE *)v3 & 4) != 0 )
    sub_4793C50((__int64)v3, v3, v3 + 2);
  v228 = luaF_newLclosure((__int64)v3, 0, v248, v227);
  v229 = v3[13];
  *(_QWORD *)v229 = v228;
  *(_DWORD *)(v229 + 12) = 8;
  v230 = v3[13];
  if ( v3[9] - v230 <= 16 )
  {
    sub_478EF50((__int64)v3, 1);
    v230 = v3[13];
  }
  result = v230 + 16;
  v3[13] = v230 + 16;
  v15 = 0;
LABEL_253:
  *(_DWORD *)(v2 + 76) = v15;
  return result;
}

// loadsafe in luau-lang
static int loadsafe(
    lua_State* L,
    TempBuffer<TString*>& strings,
    TempBuffer<Proto*>& protos,
    const char* chunkname,
    const char* data,
    size_t size,
    int env
)
{
    size_t offset = 0;

    uint8_t version = read<uint8_t>(data, size, offset);


    // 0 means the rest of the bytecode is the error message
    if (version == 0)
    {
        char chunkbuf[LUA_IDSIZE];
        const char* chunkid = luaO_chunkid(chunkbuf, sizeof(chunkbuf), chunkname, strlen(chunkname));
        lua_pushfstring(L, "%s%.*s", chunkid, int(size - offset), data + offset);
        return 1;
    }

    if (version < LBC_VERSION_MIN || version > LBC_VERSION_MAX)
    {
        char chunkbuf[LUA_IDSIZE];
        const char* chunkid = luaO_chunkid(chunkbuf, sizeof(chunkbuf), chunkname, strlen(chunkname));
        lua_pushfstring(L, "%s: bytecode version mismatch (expected [%d..%d], got %d)", chunkid, LBC_VERSION_MIN, LBC_VERSION_MAX, version); // the exact string I was talking about earlier
        return 1;
    }

    uint8_t typesversion = 0;

    if (version >= 4)
    {
        typesversion = read<uint8_t>(data, size, offset);

        if (typesversion < LBC_TYPE_VERSION_MIN || typesversion > LBC_TYPE_VERSION_MAX)
        {
            char chunkbuf[LUA_IDSIZE];
            const char* chunkid = luaO_chunkid(chunkbuf, sizeof(chunkbuf), chunkname, strlen(chunkname));
            lua_pushfstring(
                L, "%s: bytecode type version mismatch (expected [%d..%d], got %d)", chunkid, LBC_TYPE_VERSION_MIN, LBC_TYPE_VERSION_MAX, typesversion // re-referenced here
            );
            return 1;
        }
    }

    // env is 0 for current environment and a stack index otherwise
    LuaTable* envt = (env == 0) ? L->gt : hvalue(luaA_toobject(L, env));

    TString* source = luaS_new(L, chunkname);

    // string table
    unsigned int stringCount = readVarInt(data, size, offset);
    strings.allocate(L, stringCount);

    for (unsigned int i = 0; i < stringCount; ++i)
    {
        unsigned int length = readVarInt(data, size, offset);

        strings[i] = luaS_newlstr(L, data + offset, length);
        offset += length;
    }

    // userdata type remapping table
    // for unknown userdata types, the entry will remap to common 'userdata' type
    const uint32_t userdataTypeLimit = LBC_TYPE_TAGGED_USERDATA_END - LBC_TYPE_TAGGED_USERDATA_BASE;
    uint8_t userdataRemapping[userdataTypeLimit];

    if (typesversion == 3)
    {
        memset(userdataRemapping, LBC_TYPE_USERDATA, userdataTypeLimit);

        uint8_t index = read<uint8_t>(data, size, offset);

        while (index != 0)
        {
            TString* name = readString(strings, data, size, offset);

            if (uint32_t(index - 1) < userdataTypeLimit)
            {
                if (auto cb = L->global->ecb.gettypemapping)
                    userdataRemapping[index - 1] = cb(L, getstr(name), name->len);
            }

            index = read<uint8_t>(data, size, offset);
        }
    }

    // proto table
    unsigned int protoCount = readVarInt(data, size, offset);
    protos.allocate(L, protoCount);

    for (unsigned int i = 0; i < protoCount; ++i)
    {
        uint32_t protoSize = 0;
        if (version >= 12)
            protoSize = readVarInt(data, size, offset);
        size_t protoStartOffset = offset;
        Proto* p = luaF_newproto(L);
        p->source = source;
        p->bytecodeid = int(i);
        p->funid = L->global->lastprotoid == 0 ? 0 : L->global->lastprotoid++;

        p->maxstacksize = read<uint8_t>(data, size, offset);
        p->numparams = read<uint8_t>(data, size, offset);
        p->nups = read<uint8_t>(data, size, offset);
        p->is_vararg = read<uint8_t>(data, size, offset);

        if (version >= 4)
        {
            p->flags = read<uint8_t>(data, size, offset);

            if (typesversion == 1)
            {
                uint32_t typesize = readVarInt(data, size, offset);

                if (typesize)
                {
                    uint8_t* types = (uint8_t*)data + offset;

                    LUAU_ASSERT(typesize == unsigned(2 + p->numparams));
                    LUAU_ASSERT(types[0] == LBC_TYPE_FUNCTION);
                    LUAU_ASSERT(types[1] == p->numparams);

                    // transform v1 into v2 format
                    int headersize = typesize > 127 ? 4 : 3;

                    p->typeinfo = luaM_newarray(L, headersize + typesize, uint8_t, p->memcat);
                    p->sizetypeinfo = headersize + typesize;

                    if (headersize == 4)
                    {
                        p->typeinfo[0] = (typesize & 127) | (1 << 7);
                        p->typeinfo[1] = typesize >> 7;
                        p->typeinfo[2] = 0;
                        p->typeinfo[3] = 0;
                    }
                    else
                    {
                        p->typeinfo[0] = uint8_t(typesize);
                        p->typeinfo[1] = 0;
                        p->typeinfo[2] = 0;
                    }

                    memcpy(p->typeinfo + headersize, types, typesize);
                }

                offset += typesize;
            }
            else if (typesversion == 2 || typesversion == 3)
            {
                uint32_t typesize = readVarInt(data, size, offset);

                if (typesize)
                {
                    uint8_t* types = (uint8_t*)data + offset;

                    p->typeinfo = luaM_newarray(L, typesize, uint8_t, p->memcat);
                    p->sizetypeinfo = typesize;
                    memcpy(p->typeinfo, types, typesize);
                    offset += typesize;

                    if (typesversion == 3)
                    {
                        remapUserdataTypes((char*)(uint8_t*)p->typeinfo, p->sizetypeinfo, userdataRemapping, userdataTypeLimit);
                    }
                }
            }
        }

        const int sizecode = readVarInt(data, size, offset);
        p->code = luaM_newarray(L, sizecode, Instruction, p->memcat);
        p->sizecode = sizecode;

        for (int j = 0; j < p->sizecode; ++j)
            p->code[j] = read<uint32_t>(data, size, offset);

        p->codeentry = p->code;

        const int sizek = readVarInt(data, size, offset);
        p->k = luaM_newarray(L, sizek, TValue, p->memcat);
        p->sizek = sizek;

        // Initialize the constants to nil to ensure they have a valid state
        // in the event that some operation in the following loop fails with
        // an exception.
        for (int j = 0; j < p->sizek; ++j)
        {
            setnilvalue(&p->k[j]);
        }

        for (int j = 0; j < p->sizek; ++j)
        {
            switch (read<uint8_t>(data, size, offset))
            {
            case LBC_CONSTANT_NIL:
                // All constants have already been pre-initialized to nil
                break;

            case LBC_CONSTANT_BOOLEAN:
            {
                uint8_t v = read<uint8_t>(data, size, offset);
                setbvalue(&p->k[j], v);
                break;
            }

            case LBC_CONSTANT_NUMBER:
            {
                double v = read<double>(data, size, offset);
                setnvalue(&p->k[j], v);
                break;
            }

            case LBC_CONSTANT_VECTOR:
            {
                float x = read<float>(data, size, offset);
                float y = read<float>(data, size, offset);
                float z = read<float>(data, size, offset);
                float w = read<float>(data, size, offset);
                (void)w;
                setvvalue(&p->k[j], x, y, z, w);
                break;
            }

            case LBC_CONSTANT_STRING:
            {
                TString* v = readString(strings, data, size, offset);
                setsvalue(L, &p->k[j], v);
                break;
            }

            case LBC_CONSTANT_IMPORT:
            {
                uint32_t iid = read<uint32_t>(data, size, offset);
                resolveImportSafe(L, envt, p->k, iid);
                setobj(L, &p->k[j], L->top - 1);
                L->top--;
                break;
            }

            case LBC_CONSTANT_TABLE:
            {
                int keys = readVarInt(data, size, offset);
                LuaTable* h = luaH_new(L, 0, keys);
                for (int i = 0; i < keys; ++i)
                {
                    int key = readVarInt(data, size, offset);
                    TValue* val = luaH_set(L, h, &p->k[key]);
                    setnvalue(val, 0.0);
                }
                sethvalue(L, &p->k[j], h);
                break;
            }

            case LBC_CONSTANT_TABLE_WITH_CONSTANTS:
            {
                uint32_t keys = readVarInt(data, size, offset);
                LuaTable* h = luaH_new(L, 0, keys);

                TempBuffer<int32_t> nilKeys;
                nilKeys.allocate(L, keys);
                size_t nilKeysSize = 0;

                for (uint32_t i = 0; i < keys; ++i)
                {
                    int32_t key = readVarInt(data, size, offset);
                    TValue* val = luaH_set(L, h, &p->k[key]);
                    int32_t constantIdx = read<int32_t>(data, size, offset);
                    if (constantIdx >= 0)
                    {
                        TValue* constant = &p->k[constantIdx];
                        if (ttisnil(constant))
                        {
                            nilKeys[nilKeysSize++] = key;
                        }
                        else
                        {
                            setobj2t(L, val, constant);
                            luaC_barriert(L, h, constant);
                            continue;
                        }
                    }
                    setnvalue(val, 0.0);
                }

                for (size_t idx = 0; idx < nilKeysSize; idx++)
                {
                    int32_t key = nilKeys[idx];
                    TValue* val = luaH_set(L, h, &p->k[key]);
                    setnilvalue(val);
                }

                sethvalue(L, &p->k[j], h);
                break;
            }

            case LBC_CONSTANT_CLOSURE:
            {
                uint32_t fid = readVarInt(data, size, offset);
                Closure* cl = luaF_newLclosure(L, protos[fid]->nups, envt, protos[fid]);
                cl->preload = (cl->nupvalues > 0);
                setclvalue(L, &p->k[j], cl);
                break;
            }

            case LBC_CONSTANT_CLASS_SHAPE:
            {
                uint32_t cnid = readVarInt(data, size, offset);
                TValue* classname = &p->k[cnid];
                LUAU_ASSERT(ttisstring(classname));
                uint32_t numProperties = readVarInt(data, size, offset);
                uint32_t numMethods = readVarInt(data, size, offset);
                uint32_t numMembers = numMethods + numProperties;
                TString** offsetToMember = luaM_newarray(L, numMembers, TString*, L->activememcat);
                LuaTable* membersToOffset = luaH_new(L, 0, numMembers);

                for (uint32_t idx = 0; idx < numMembers; idx++)
                {
                    uint32_t mid = readVarInt(data, size, offset);
                    TValue* memberName = &p->k[mid];
                    LUAU_ASSERT(ttisstring(memberName));
                    offsetToMember[idx] = tsvalue(memberName);
                    TValue* val = luaH_setstr(L, membersToOffset, tsvalue(memberName));
                    setnvalue(val, idx);
                }

                membersToOffset->readonly = true;

                LuauClass* lco = luaR_newclass(L, tsvalue(classname), membersToOffset, offsetToMember, numProperties, numMethods);
                setclassvalue(L, &p->k[j], lco);
                break;
            }

            case LBC_CONSTANT_INTEGER:
            {
                bool isNegative = read<uint8_t>(data, size, offset);
                uint64_t magnitude = readVarInt64(data, size, offset);
                setlvalue(&p->k[j], isNegative ? (int64_t)(~magnitude + 1) : (int64_t)magnitude);
                break;
            }

            default:
                LUAU_ASSERT(!"Unexpected constant kind");
            }
        }

        if (FFlag::LuauUdataDirectAccess6)
        {
            for (Instruction* instruction = p->code; instruction < p->code + p->sizecode;)
            {
                int targetOp = -1;

                switch (LUAU_INSN_OP(*instruction))
                {
                case LOP_GETTABLEKS:
                    targetOp = LOP_GETUDATAKS;
                    break;

                case LOP_SETTABLEKS:
                    targetOp = LOP_SETUDATAKS;
                    break;

                case LOP_NAMECALL:
                    targetOp = LOP_NAMECALLUDATA;
                    break;
                }

                if (targetOp != -1)
                {
                    LUAU_ASSERT(instruction[1] < uint32_t(sizek));

                    // We take over the upper 16 bits of AUX - so no constants with big indices.
                    if (instruction[1] < 0x10000)
                    {
                        TValue* k = &p->k[instruction[1]];
                        TString* s = tsvalue(k);

                        luaS_updateatom(L, s);

                        if (s->atom >= 0)
                            *instruction = (*instruction & 0xffffff00) | targetOp;
                    }
                }

                instruction += Luau::getOpLength(LuauOpcode(LUAU_INSN_OP(*instruction)));
            }
        }

        const int sizep = readVarInt(data, size, offset);
        p->p = luaM_newarray(L, sizep, Proto*, p->memcat);
        p->sizep = sizep;

        for (int j = 0; j < p->sizep; ++j)
        {
            uint32_t fid = readVarInt(data, size, offset);
            p->p[j] = protos[fid];
        }

        p->linedefined = readVarInt(data, size, offset);
        p->debugname = readString(strings, data, size, offset);

        uint8_t lineinfo = read<uint8_t>(data, size, offset);

        if (lineinfo)
        {
            p->linegaplog2 = read<uint8_t>(data, size, offset);

            int intervals = ((p->sizecode - 1) >> p->linegaplog2) + 1;
            int absoffset = (p->sizecode + 3) & ~3;

            const int sizelineinfo = absoffset + intervals * sizeof(int);
            p->lineinfo = luaM_newarray(L, sizelineinfo, uint8_t, p->memcat);
            p->sizelineinfo = sizelineinfo;

            p->abslineinfo = (int*)(p->lineinfo + absoffset);

            uint8_t lastoffset = 0;
            for (int j = 0; j < p->sizecode; ++j)
            {
                lastoffset += read<uint8_t>(data, size, offset);
                p->lineinfo[j] = lastoffset;
            }

            int lastline = 0;
            for (int j = 0; j < intervals; ++j)
            {
                lastline += read<int32_t>(data, size, offset);
                p->abslineinfo[j] = lastline;
            }
        }

        uint8_t debuginfo = read<uint8_t>(data, size, offset);

        if (debuginfo)
        {
            const int sizelocvars = readVarInt(data, size, offset);
            p->locvars = luaM_newarray(L, sizelocvars, LocVar, p->memcat);
            p->sizelocvars = sizelocvars;

            for (int j = 0; j < p->sizelocvars; ++j)
            {
                p->locvars[j].varname = readString(strings, data, size, offset);
                p->locvars[j].startpc = readVarInt(data, size, offset);
                p->locvars[j].endpc = readVarInt(data, size, offset);
                p->locvars[j].reg = read<uint8_t>(data, size, offset);
            }

            const int sizeupvalues = readVarInt(data, size, offset);
            LUAU_ASSERT(sizeupvalues == p->nups);

            p->upvalues = luaM_newarray(L, sizeupvalues, TString*, p->memcat);
            p->sizeupvalues = sizeupvalues;

            for (int j = 0; j < p->sizeupvalues; ++j)
            {
                p->upvalues[j] = readString(strings, data, size, offset);
            }
        }

        if (version >= 11)
        {
            p->feedbackvecsize = readVarInt(data, size, offset);

            if (p->feedbackvecsize > 0)
            {
                p->feedbackvec = luaM_newarray(L, p->feedbackvecsize, FeedbackVectorSlot, p->memcat);
            }
            for (uint32_t j = 0; j < p->feedbackvecsize; j++)
            {
                uint8_t slottype = read<uint8_t>(data, size, offset);
                LUAU_ASSERT(slottype == LFT_CALLTARGET);
                FeedbackVectorSlot& slot = p->feedbackvec[j];
                slot.kind = static_cast<FeedbackVectorSlotKind>(slottype);
                slot.call_target.pc = readVarInt(data, size, offset);
                slot.call_target.proto = 0;
                slot.call_target.hits = 0;
            }
        }

        if (version >= 12)
        {
            if ((p->flags & LPF_INLINABLE) != 0)
                p->cost = readVarInt64(data, size, offset);
        }

        if (version >= 12)
        {
            // Potantially skipping unknown data at the end of Proto.
            offset = protoStartOffset + protoSize;
        }

        protos[i] = p;
    }

    // "main" proto is pushed to Lua stack
    uint32_t mainid = readVarInt(data, size, offset);
    Proto* main = protos[mainid];

    luaC_threadbarrier(L);

    Closure* cl = luaF_newLclosure(L, 0, envt, main);
    setclvalue(L, L->top, cl);
    incr_top(L);

    return 0;
}
