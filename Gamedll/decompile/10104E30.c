/*
 * func-name: ?RemovePartModel@CombinActor@GameClient@@UAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z_0
 * func-address: 0x10104e30
 * callers: 0x100053a8
 * callees: 0x10006023, 0x100156e5, 0x102c71e0, 0x102c7220, 0x102c7580
 */

char __thiscall GameClient::CombinActor::RemovePartModel(int this, int a2, void *a3)
{
  int v4; // esi
  _DWORD *i; // esi
  void (__cdecl *v6)(); // ebx
  AsyncLoader *v7; // eax
  int v8; // esi
  int v9; // esi
  _DWORD *v10; // esi
  int v11; // esi
  int v12; // eax
  int v13; // eax
  char v14; // bl
  int v16; // [esp+0h] [ebp-9Ch]
  int v17; // [esp+0h] [ebp-9Ch]
  int v18; // [esp+14h] [ebp-88h] BYREF
  int v19; // [esp+1Ch] [ebp-80h] BYREF
  _DWORD *v20; // [esp+20h] [ebp-7Ch]
  int v21; // [esp+24h] [ebp-78h] BYREF
  int v22; // [esp+28h] [ebp-74h]
  _BYTE v23[8]; // [esp+2Ch] [ebp-70h] BYREF
  _BYTE v24[8]; // [esp+34h] [ebp-68h] BYREF
  _BYTE v25[28]; // [esp+3Ch] [ebp-60h] BYREF
  _BYTE v26[28]; // [esp+58h] [ebp-44h] BYREF
  _BYTE v27[28]; // [esp+74h] [ebp-28h] BYREF
  int v28; // [esp+98h] [ebp-4h]

  sub_100156E5((int)&v21, a2);
  v4 = *(_DWORD *)(this + 1280);
  if ( !v21 || v21 != this + 1276 )
    _invalid_parameter_noinfo();
  if ( v22 != v4 )
  {
    for ( i = **(_DWORD ***)(this + 1320); ; i = (_DWORD *)*i )
    {
      v6 = _invalid_parameter_noinfo;
      if ( i == *(_DWORD **)(this + 1320) )
        break;
      if ( (unsigned __int8)std::operator==<char>(i[3], a2) )
      {
        if ( i == *(_DWORD **)(this + 1320) )
          _invalid_parameter_noinfo();
        v7 = (AsyncLoader *)AsyncLoader::Instance(i[2], v16);
        AsyncLoader::CancelSubmit(v7, v17);
        if ( i == *(_DWORD **)(this + 1320) )
          _invalid_parameter_noinfo();
        LogPrintf("Cancel Load Part Model : %d", i[2]);
        sub_10006023((int)&v18, this + 1316, i);
        break;
      }
      if ( i == *(_DWORD **)(this + 1320) )
        _invalid_parameter_noinfo();
    }
    v8 = v21;
    if ( !v21 )
      _invalid_parameter_noinfo();
    if ( v22 == *(_DWORD *)(v8 + 4) )
      _invalid_parameter_noinfo();
    v18 = v22 + 68;
    std::vector<Model *>::begin(&v19);
    while ( 1 )
    {
      v9 = v22;
      if ( v22 == *(_DWORD *)(v21 + 4) )
        v6();
      v10 = (_DWORD *)std::vector<Model *>::end(v9 + 68, v23);
      if ( !v19 || v19 != *v10 )
        v6();
      if ( v20 == (_DWORD *)v10[1] )
        break;
      v11 = sub_102C7580(v27, a3);
      v28 = 0;
      if ( !v19 )
        v6();
      if ( (unsigned int)v20 >= *(_DWORD *)(v19 + 8) )
        v6();
      v12 = sub_102C7220(v26, (void *)(*v20 + 320));
      LOBYTE(v28) = 1;
      v13 = sub_102C71E0(v25, v12);
      LOBYTE(v28) = 2;
      v14 = std::operator==<char>(v13, v11);
      LOBYTE(v28) = 1;
      std::string::~string(v25);
      LOBYTE(v28) = 0;
      std::string::~string(v26);
      v28 = -1;
      std::string::~string(v27);
      if ( v14 )
      {
        if ( !v19 )
          _invalid_parameter_noinfo();
        if ( (unsigned int)v20 >= *(_DWORD *)(v19 + 8) )
          _invalid_parameter_noinfo();
        if ( *v20 )
        {
          if ( !v19 )
            _invalid_parameter_noinfo();
          if ( (unsigned int)v20 >= *(_DWORD *)(v19 + 8) )
            _invalid_parameter_noinfo();
          if ( *v20 )
            (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*v20 + 12))(*v20, 1);
          if ( !v19 )
            _invalid_parameter_noinfo();
          if ( (unsigned int)v20 >= *(_DWORD *)(v19 + 8) )
            _invalid_parameter_noinfo();
          *v20 = 0;
        }
        if ( v22 == *(_DWORD *)(v21 + 4) )
          _invalid_parameter_noinfo();
        std::vector<Model *>::erase(v18, v24, v19, v20);
        return 1;
      }
      if ( !v19 )
        _invalid_parameter_noinfo();
      if ( (unsigned int)v20 >= *(_DWORD *)(v19 + 8) )
        _invalid_parameter_noinfo();
      ++v20;
      v6 = _invalid_parameter_noinfo;
    }
  }
  return 0;
}
