/*
 * func-name: ??1CombinActor@GameClient@@UAE@XZ_0
 * func-address: 0x10105930
 * callers: 0x100122b5
 * callees: 0x100069c9, 0x10009999, 0x1000b505, 0x1000bc62, 0x1000fecf, 0x100182cd, 0x102c9d50
 */

void __thiscall GameClient::CombinActor::~CombinActor(GameClient::CombinActor *this)
{
  _DWORD *v1; // esi
  char *v2; // edi
  AsyncLoader *v3; // eax
  GameClient::CombinActor *v4; // edi
  int v5; // ecx
  _DWORD *v6; // ebp
  unsigned int i; // edi
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  char *v11; // edi
  GameClient::CombinActor *v12; // ebx
  int v13; // eax
  char *v14; // esi
  unsigned int v15; // edi
  bool v16; // cc
  unsigned int v17; // ebp
  unsigned int v18; // edi
  int v19; // esi
  int v20; // edi
  void *v21; // eax
  _DWORD **v22; // ecx
  _DWORD *v23; // eax
  bool v24; // zf
  _DWORD *v25; // esi
  void *v26; // eax
  int v27; // [esp+0h] [ebp-34h]
  int v28; // [esp+0h] [ebp-34h]
  int v29; // [esp+0h] [ebp-34h]
  int v30; // [esp+4h] [ebp-30h]
  int v31; // [esp+4h] [ebp-30h]
  _DWORD v33[2]; // [esp+18h] [ebp-1Ch] BYREF
  _BYTE v34[8]; // [esp+20h] [ebp-14h] BYREF
  int v35; // [esp+30h] [ebp-4h]

  *(_DWORD *)this = &GameClient::CombinActor::`vftable';
  v1 = (_DWORD *)**((_DWORD **)this + 330);
  v2 = (char *)this + 1316;
  v35 = 4;
  while ( v1 != *((_DWORD **)v2 + 1) )
  {
    v3 = (AsyncLoader *)AsyncLoader::Instance(v1[2], v27);
    AsyncLoader::CancelSubmit(v3, v28);
    if ( v1 == *((_DWORD **)v2 + 1) )
      _invalid_parameter_noinfo();
    LogPrintf("Cancel Load Part Model : %d", v1[2]);
    if ( v1 == *((_DWORD **)v2 + 1) )
      _invalid_parameter_noinfo();
    v1 = (_DWORD *)*v1;
  }
  sub_1000B505();
  v4 = this;
  v5 = *((_DWORD *)this + 346);
  if ( v5 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 24))(v5, 1);
    *((_DWORD *)this + 346) = 0;
  }
  v6 = (_DWORD *)**((_DWORD **)this + 320);
  while ( v6 != *((_DWORD **)this + 320) )
  {
    for ( i = 0; ; ++i )
    {
      if ( v6 == *((_DWORD **)this + 320) )
        _invalid_parameter_noinfo();
      v8 = v6[18];
      if ( !v8 || i >= (v6[19] - v8) >> 2 )
        break;
      if ( v6 == *((_DWORD **)this + 320) )
        _invalid_parameter_noinfo();
      v9 = v6[18];
      if ( !v9 || i >= (v6[19] - v9) >> 2 )
        _invalid_parameter_noinfo();
      if ( *(_DWORD *)(v6[18] + 4 * i) )
      {
        if ( v6 == *((_DWORD **)this + 320) )
          _invalid_parameter_noinfo();
        v10 = *(_DWORD *)std::vector<Model *>::operator[](v6 + 17, i);
        if ( v10 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 12))(v10, 1);
        if ( v6 == *((_DWORD **)this + 320) )
          _invalid_parameter_noinfo();
        *(_DWORD *)std::vector<Model *>::operator[](v6 + 17, i) = 0;
      }
      LogPrintf("Purge Part Model!");
    }
    if ( v6 == *((_DWORD **)this + 320) )
      _invalid_parameter_noinfo();
    std::vector<Model *>::clear(v6 + 17);
    if ( v6 == *((_DWORD **)this + 320) )
      _invalid_parameter_noinfo();
    v6 = (_DWORD *)*v6;
    v4 = this;
  }
  v11 = (char *)v4 + 1276;
  sub_1000FECF(v27, v30);
  v12 = this;
  v13 = *((_DWORD *)v11 + 1);
  v14 = (char *)this + 1288;
  v33[0] = v11;
  v15 = *((_DWORD *)this + 324);
  v16 = *((_DWORD *)this + 323) <= v15;
  v33[1] = v13;
  if ( !v16 )
    _invalid_parameter_noinfo();
  v17 = *((_DWORD *)this + 323);
  if ( v17 > *((_DWORD *)this + 324) )
    _invalid_parameter_noinfo();
  sub_100182CD((int)v34, (int)v14, v17, (int)v14, v15);
  v18 = *((_DWORD *)this + 323);
  if ( v18 > *((_DWORD *)this + 324) )
    _invalid_parameter_noinfo();
  sub_1000BC62((int)v14, v18, 9, (int)v33);
  *((_DWORD *)this + 326) = 1;
  *((_DWORD *)this + 327) = 1;
  v19 = *((_DWORD *)this + 343);
  if ( v19 )
  {
    v20 = *((_DWORD *)this + 344);
    v33[0] = *((_DWORD *)this + 343);
    if ( v19 != v20 )
    {
      do
      {
        LOBYTE(v35) = 6;
        std::string::~string((void *)(v19 + 56));
        LOBYTE(v35) = 5;
        std::string::~string((void *)(v19 + 28));
        LOBYTE(v35) = 3;
        std::string::~string((void *)v19);
        v19 += 84;
        v33[0] = v19;
      }
      while ( v19 != v20 );
      v12 = this;
    }
    operator delete(*((void **)v12 + 343));
  }
  *((_DWORD *)v12 + 343) = 0;
  *((_DWORD *)v12 + 344) = 0;
  *((_DWORD *)v12 + 345) = 0;
  v21 = (void *)*((_DWORD *)v12 + 339);
  LOBYTE(v35) = 2;
  if ( v21 )
  {
    sub_100069C9(v21, *((_DWORD *)v12 + 340));
    operator delete(*((void **)v12 + 339));
  }
  *((_DWORD *)v12 + 339) = 0;
  *((_DWORD *)v12 + 340) = 0;
  *((_DWORD *)v12 + 341) = 0;
  if ( *((_DWORD *)v12 + 333) )
    operator delete(*((void **)v12 + 333));
  *((_DWORD *)v12 + 333) = 0;
  *((_DWORD *)v12 + 334) = 0;
  *((_DWORD *)v12 + 335) = 0;
  v22 = (_DWORD **)*((_DWORD *)v12 + 330);
  v23 = *v22;
  *v22 = v22;
  *(_DWORD *)(*((_DWORD *)v12 + 330) + 4) = *((_DWORD *)v12 + 330);
  v24 = v23 == *((_DWORD **)v12 + 330);
  *((_DWORD *)v12 + 331) = 0;
  if ( !v24 )
  {
    do
    {
      v25 = (_DWORD *)*v23;
      operator delete(v23);
      v23 = v25;
    }
    while ( v25 != *((_DWORD **)v12 + 330) );
  }
  operator delete(*((void **)v12 + 330));
  *((_DWORD *)v12 + 330) = 0;
  v26 = (void *)*((_DWORD *)v12 + 323);
  LOBYTE(v35) = 0;
  if ( v26 )
    operator delete(v26);
  *((_DWORD *)v12 + 323) = 0;
  *((_DWORD *)v12 + 324) = 0;
  *((_DWORD *)v12 + 325) = 0;
  sub_1000FECF(v29, v31);
  operator delete(*((void **)v12 + 320));
  *((_DWORD *)v12 + 320) = 0;
  v35 = -1;
  GameClient::AdapterActor::~AdapterActor(v12);
}
