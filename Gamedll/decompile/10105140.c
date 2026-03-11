/*
 * func-name: ?GetPartModel@CombinActor@GameClient@@QAEPAVModel@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z_0
 * func-address: 0x10105140
 * callers: 0x10013746
 * callees: 0x100156e5, 0x102c71e0, 0x102c7220, 0x102c7580
 */

int __thiscall GameClient::CombinActor::GetPartModel(_DWORD *this, int a2, void *a3)
{
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  int v6; // esi
  int v7; // ebx
  _DWORD *v8; // esi
  int v9; // esi
  int v10; // eax
  int v11; // eax
  char v12; // bl
  int v14; // [esp+14h] [ebp-78h] BYREF
  unsigned int v15; // [esp+18h] [ebp-74h]
  _DWORD *v16; // [esp+1Ch] [ebp-70h] BYREF
  int v17; // [esp+20h] [ebp-6Ch]
  char v18[8]; // [esp+24h] [ebp-68h] BYREF
  _BYTE v19[28]; // [esp+2Ch] [ebp-60h] BYREF
  _BYTE v20[28]; // [esp+48h] [ebp-44h] BYREF
  _BYTE v21[28]; // [esp+64h] [ebp-28h] BYREF
  int v22; // [esp+88h] [ebp-4h]

  sub_100156E5((int)&v16, a2);
  v4 = v16;
  v5 = this + 319;
  v6 = this[320];
  if ( !v16 || v16 != v5 )
    _invalid_parameter_noinfo();
  v7 = v17;
  if ( v17 != v6 )
  {
    if ( !v4 )
      _invalid_parameter_noinfo();
    if ( v7 == v4[1] )
      _invalid_parameter_noinfo();
    std::vector<Model *>::begin(&v14);
    while ( 1 )
    {
      if ( v7 == v16[1] )
        _invalid_parameter_noinfo();
      v8 = (_DWORD *)std::vector<Model *>::end(v7 + 68, v18);
      if ( !v14 || v14 != *v8 )
        _invalid_parameter_noinfo();
      if ( v15 == v8[1] )
        break;
      v9 = sub_102C7580(v21, a3);
      v22 = 0;
      if ( !v14 )
        _invalid_parameter_noinfo();
      if ( v15 >= *(_DWORD *)(v14 + 8) )
        _invalid_parameter_noinfo();
      v10 = sub_102C7220(v20, (void *)(*(_DWORD *)v15 + 320));
      LOBYTE(v22) = 1;
      v11 = sub_102C71E0(v19, v10);
      LOBYTE(v22) = 2;
      v12 = std::operator==<char>(v11, v9);
      LOBYTE(v22) = 1;
      std::string::~string(v19);
      LOBYTE(v22) = 0;
      std::string::~string(v20);
      v22 = -1;
      std::string::~string(v21);
      if ( v12 )
      {
        if ( !v14 )
          _invalid_parameter_noinfo();
        if ( v15 >= *(_DWORD *)(v14 + 8) )
          _invalid_parameter_noinfo();
        return *(_DWORD *)v15;
      }
      if ( !v14 )
        _invalid_parameter_noinfo();
      if ( v15 >= *(_DWORD *)(v14 + 8) )
        _invalid_parameter_noinfo();
      v15 += 4;
      v7 = v17;
    }
  }
  return 0;
}
