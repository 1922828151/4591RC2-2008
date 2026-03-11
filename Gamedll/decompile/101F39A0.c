/*
 * func-name: ?AddCommand@CAnalyzeSystem@GameClient@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z_0
 * func-address: 0x101f39a0
 * callers: 0x10014001
 * callees: 0x100013d9, 0x10002b99, 0x1001669e, 0x10017e04, 0x102c9d98
 */

unsigned int __thiscall GameClient::CAnalyzeSystem::AddCommand(char *this, int a2, int a3)
{
  int v3; // ebp
  _DWORD *v4; // esi
  int v5; // eax
  _DWORD **v6; // edi
  _DWORD *v7; // ebx
  _DWORD *v8; // edi
  unsigned int v9; // ebx
  unsigned int result; // eax
  char *v11; // eax
  _DWORD *v12; // ebp
  _DWORD *v13; // eax
  _DWORD *v14; // esi
  bool v15; // zf
  int v16; // edi
  _DWORD *v17; // eax
  int v18; // eax
  char v19; // [esp+17h] [ebp-3Dh] BYREF
  _DWORD *v20; // [esp+18h] [ebp-3Ch] BYREF
  _DWORD *v21; // [esp+1Ch] [ebp-38h]
  char v22[4]; // [esp+20h] [ebp-34h] BYREF
  _DWORD *v23; // [esp+24h] [ebp-30h]
  int v24; // [esp+2Ch] [ebp-28h]
  _BYTE v25[12]; // [esp+30h] [ebp-24h] BYREF
  char v26[12]; // [esp+3Ch] [ebp-18h] BYREF
  int v27; // [esp+50h] [ebp-4h]

  v3 = a2;
  v4 = this + 4;
  v5 = std::string::operator[](a2, 0);
  sub_10002B99((int)&v20, v5);
  v6 = (_DWORD **)v20;
  v7 = (_DWORD *)v4[1];
  if ( !v20 || v20 != v4 )
    _invalid_parameter_noinfo();
  if ( v21 == v7 )
  {
    v20 = operator new(0x10u);
    v27 = 0;
    if ( v20 )
      v8 = (_DWORD *)sub_10017E04();
    else
      v8 = 0;
    v27 = -1;
    LOBYTE(v20) = *(_BYTE *)std::string::operator[](a2, 0);
    v21 = v8;
    sub_1001669E((int)v25, (int)&v20);
  }
  else
  {
    if ( !v6 )
      _invalid_parameter_noinfo();
    if ( v21 == v6[1] )
      _invalid_parameter_noinfo();
    v8 = (_DWORD *)v21[4];
  }
  v9 = 1;
  result = std::string::size(a2);
  if ( result > 1 )
  {
    while ( 1 )
    {
      v11 = (char *)std::string::operator[](v3, v9);
      v12 = v8 + 1;
      v19 = *v11;
      v13 = (_DWORD *)sub_10002B99((int)v25, (int)&v19);
      v14 = (_DWORD *)*v13;
      v15 = *v13 == 0;
      v16 = v13[1];
      v24 = v12[1];
      if ( v15 || v14 != v12 )
        _invalid_parameter_noinfo();
      if ( v16 == v24 )
      {
        v17 = operator new(0x10u);
        v8 = v17;
        v20 = v17;
        v27 = 1;
        if ( v17 )
        {
          *v17 = 0;
          v18 = sub_100013D9();
          v8[2] = v18;
          *(_BYTE *)(v18 + 21) = 1;
          *(_DWORD *)(v8[2] + 4) = v8[2];
          *(_DWORD *)v8[2] = v8[2];
          *(_DWORD *)(v8[2] + 8) = v8[2];
          v8[3] = 0;
        }
        else
        {
          v8 = 0;
        }
        v27 = -1;
        v22[0] = *(_BYTE *)std::string::operator[](a2, v9);
        v23 = v8;
        sub_1001669E((int)v26, (int)v22);
      }
      else
      {
        if ( !v14 )
          _invalid_parameter_noinfo();
        if ( v16 == v14[1] )
          _invalid_parameter_noinfo();
        v8 = *(_DWORD **)(v16 + 16);
      }
      ++v9;
      result = std::string::size(a2);
      if ( v9 >= result )
        break;
      v3 = a2;
    }
  }
  if ( v8 )
    *v8 = a3;
  return result;
}
