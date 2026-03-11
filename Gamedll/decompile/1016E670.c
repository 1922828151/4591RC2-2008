/*
 * func-name: ?GetTypeName@ProductManager@GameClient@@QAE?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@KK@Z_0
 * func-address: 0x1016e670
 * callers: 0x10008ecc
 * callees: 0x100082e2, 0x1001968c
 */

int __thiscall GameClient::ProductManager::GetTypeName(_DWORD *this, int a2, char a3, char a4)
{
  int v5; // ebx
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v10; // esi
  _DWORD *v11; // eax
  int v12; // edi
  int v13; // ebx
  _DWORD *v14; // [esp+10h] [ebp-8h] BYREF
  int v15; // [esp+14h] [ebp-4h]

  v14 = 0;
  sub_1001968C((int)&v14, (int)&a3);
  v5 = this[23];
  v6 = this + 22;
  v7 = v14;
  if ( !v14 || v14 != v6 )
    _invalid_parameter_noinfo();
  v8 = v15;
  if ( v15 == v5 )
    goto LABEL_5;
  if ( !v7 )
    _invalid_parameter_noinfo();
  if ( v8 == v7[1] )
    _invalid_parameter_noinfo();
  sub_100082E2((int)&v14, (int)&a4);
  if ( v8 == v7[1] )
    _invalid_parameter_noinfo();
  v10 = v14;
  v11 = (_DWORD *)(v8 + 16);
  v12 = *(_DWORD *)(v8 + 20);
  if ( !v14 || v14 != v11 )
    _invalid_parameter_noinfo();
  v13 = v15;
  if ( v15 == v12 )
  {
LABEL_5:
    std::wstring::wstring(a2);
    return a2;
  }
  else
  {
    if ( !v10 )
      _invalid_parameter_noinfo();
    if ( v13 == v10[1] )
      _invalid_parameter_noinfo();
    Precacher::GetText(a2, v13 + 12);
    return a2;
  }
}
