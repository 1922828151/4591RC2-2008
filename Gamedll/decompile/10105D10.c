/*
 * func-name: ?ClearPartModel@CombinActor@GameClient@@UAEXXZ_0
 * func-address: 0x10105d10
 * callers: 0x1000f448
 * callees: 0x1000b505, 0x1000bc62, 0x1000fecf, 0x100182cd
 */

void __thiscall GameClient::CombinActor::ClearPartModel(GameClient::CombinActor *this)
{
  _DWORD *v1; // ebx
  char *v2; // ebp
  unsigned int i; // edi
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  char *v10; // esi
  unsigned int v11; // edi
  bool v12; // cc
  unsigned int v13; // ebx
  unsigned int v14; // edi
  _DWORD *j; // esi
  AsyncLoader *v16; // eax
  int v17; // [esp+0h] [ebp-24h]
  int v18; // [esp+0h] [ebp-24h]
  int v19; // [esp+0h] [ebp-24h]
  int v20; // [esp+4h] [ebp-20h]
  _DWORD v22[2]; // [esp+14h] [ebp-10h] BYREF
  _BYTE v23[8]; // [esp+1Ch] [ebp-8h] BYREF

  v1 = (_DWORD *)**((_DWORD **)this + 320);
  v2 = (char *)this + 1276;
  while ( v1 != *((_DWORD **)v2 + 1) )
  {
    for ( i = 0; ; ++i )
    {
      if ( v1 == *((_DWORD **)v2 + 1) )
        _invalid_parameter_noinfo();
      v4 = v1[18];
      if ( !v4 || i >= (v1[19] - v4) >> 2 )
        break;
      if ( v1 == *((_DWORD **)v2 + 1) )
        _invalid_parameter_noinfo();
      v5 = v1[18];
      if ( !v5 || i >= (v1[19] - v5) >> 2 )
        _invalid_parameter_noinfo();
      if ( *(_DWORD *)(v1[18] + 4 * i) )
      {
        if ( v1 == *((_DWORD **)v2 + 1) )
          _invalid_parameter_noinfo();
        v6 = v1[18];
        if ( !v6 || i >= (v1[19] - v6) >> 2 )
          _invalid_parameter_noinfo();
        v7 = *(_DWORD *)(v1[18] + 4 * i);
        if ( v7 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 12))(v7, 1);
        if ( v1 == *((_DWORD **)v2 + 1) )
          _invalid_parameter_noinfo();
        v8 = v1[18];
        if ( !v8 || i >= (v1[19] - v8) >> 2 )
          _invalid_parameter_noinfo();
        *(_DWORD *)(v1[18] + 4 * i) = 0;
      }
    }
    if ( v1 == *((_DWORD **)v2 + 1) )
      _invalid_parameter_noinfo();
    std::vector<Model *>::clear(v1 + 17);
    if ( v1 == *((_DWORD **)v2 + 1) )
      _invalid_parameter_noinfo();
    v1 = (_DWORD *)*v1;
  }
  sub_1000FECF(v17, v20);
  v9 = *((_DWORD *)this + 320);
  v10 = (char *)this + 1288;
  v22[0] = (char *)this + 1276;
  v11 = *((_DWORD *)this + 324);
  v12 = *((_DWORD *)this + 323) <= v11;
  v22[1] = v9;
  if ( !v12 )
    _invalid_parameter_noinfo();
  v13 = *((_DWORD *)this + 323);
  if ( v13 > *((_DWORD *)this + 324) )
    _invalid_parameter_noinfo();
  sub_100182CD((int)v23, (int)v10, v13, (int)v10, v11);
  v14 = *((_DWORD *)this + 323);
  if ( v14 > *((_DWORD *)this + 324) )
    _invalid_parameter_noinfo();
  sub_1000BC62((int)v10, v14, 9, (int)v22);
  *((_DWORD *)this + 326) = 1;
  *((_DWORD *)this + 327) = 1;
  for ( j = (_DWORD *)**((_DWORD **)this + 330); j != *((_DWORD **)this + 330); j = (_DWORD *)*j )
  {
    v16 = (AsyncLoader *)AsyncLoader::Instance(j[2], v18);
    AsyncLoader::CancelSubmit(v16, v19);
    if ( j == *((_DWORD **)this + 330) )
      _invalid_parameter_noinfo();
    LogPrintf("Cancel Load Part Model : %d", j[2]);
    if ( j == *((_DWORD **)this + 330) )
      _invalid_parameter_noinfo();
  }
  sub_1000B505();
  LogPrintf("Clear Part Model Handle!");
}
