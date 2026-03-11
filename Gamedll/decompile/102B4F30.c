/*
 * func-name: sub_102B4F30
 * func-address: 0x102b4f30
 * callers: none
 * callees: 0x10002d10, 0x1000516e, 0x1000ab4b, 0x102c9d62
 */

void __cdecl sub_102B4F30(int a1)
{
  int v1; // esi
  unsigned int v2; // eax
  int v3; // esi
  int v4; // eax
  unsigned int v5; // ebp
  int v6; // edi
  unsigned int v7; // ebx
  int v8; // edi
  int v9; // ebx
  struct Game *v10; // eax
  unsigned int v11; // [esp+14h] [ebp-38h]
  _BYTE v12[28]; // [esp+20h] [ebp-2Ch] BYREF
  int v13; // [esp+48h] [ebp-4h]

  std::string::string(v12, a1);
  v13 = 0;
  v1 = *((_DWORD *)Game::Instance() + 25);
  v2 = *(_DWORD *)(v1 + 740);
  v3 = v1 + 732;
  v11 = v2;
  if ( *(_DWORD *)(v3 + 4) > v2 )
    _invalid_parameter_noinfo();
  v4 = *((_DWORD *)Game::Instance() + 25);
  v5 = *(_DWORD *)(v4 + 740);
  if ( *(_DWORD *)(v4 + 736) > v5 )
    _invalid_parameter_noinfo();
  v6 = *((_DWORD *)Game::Instance() + 25);
  v7 = *(_DWORD *)(v6 + 736);
  v8 = v6 + 732;
  if ( v7 > *(_DWORD *)(v8 + 8) )
    _invalid_parameter_noinfo();
  v9 = sub_10002D10(v7, v5, (int)v12);
  if ( !v8 || v8 != v3 )
    _invalid_parameter_noinfo();
  if ( v9 == v11 )
  {
    v10 = Game::Instance();
    sub_1000AB4B((void *)(*((_DWORD *)v10 + 25) + 732), v12);
  }
  v13 = -1;
  std::string::~string(v12);
}
