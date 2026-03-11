/*
 * func-name: sub_102B4E10
 * func-address: 0x102b4e10
 * callers: 0x100074c8
 * callees: 0x100016ef, 0x10002d10, 0x1000516e, 0x102c9d62
 */

void __cdecl sub_102B4E10(int a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v3; // esi
  unsigned int v4; // edi
  int v5; // esi
  int v6; // ebp
  int v7; // ebx
  int v8; // esi
  unsigned int v9; // edi
  int v10; // esi
  _BYTE v11[4]; // [esp+14h] [ebp-34h] BYREF
  unsigned int v12; // [esp+18h] [ebp-30h]
  _BYTE v13[28]; // [esp+1Ch] [ebp-2Ch] BYREF
  int v14; // [esp+44h] [ebp-4h]

  std::string::string(v13, a1);
  v14 = 0;
  v1 = *((_DWORD *)Game::Instance() + 25);
  v2 = *(_DWORD *)(v1 + 740);
  if ( *(_DWORD *)(v1 + 736) > v2 )
    _invalid_parameter_noinfo();
  v3 = *((_DWORD *)Game::Instance() + 25);
  v4 = *(_DWORD *)(v3 + 736);
  v5 = v3 + 732;
  if ( v4 > *(_DWORD *)(v5 + 8) )
    _invalid_parameter_noinfo();
  v6 = v5;
  v12 = v4;
  v7 = sub_10002D10(v4, v2, (int)v13);
  v8 = *((_DWORD *)Game::Instance() + 25);
  v9 = *(_DWORD *)(v8 + 740);
  v10 = v8 + 732;
  if ( *(_DWORD *)(v10 + 4) > v9 )
    _invalid_parameter_noinfo();
  if ( !v6 || v6 != v10 )
    _invalid_parameter_noinfo();
  if ( v7 != v9 )
  {
    Game::Instance();
    sub_100016EF((int)v11, v6, v7);
  }
  v14 = -1;
  std::string::~string(v13);
}
