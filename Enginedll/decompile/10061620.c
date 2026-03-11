/*
 * func-name: sub_10061620
 * func-address: 0x10061620
 * callers: 0x10060ac0, 0x10062a00
 * callees: none
 */

int __thiscall sub_10061620(int this, int a2)
{
  unsigned int v3; // eax
  int v4; // esi
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  unsigned int v7; // ebp
  int v8; // eax
  int v9; // ebp
  int v10; // ecx
  int v11; // eax
  bool v12; // zf
  int v13; // ecx
  int v14; // esi
  int v15; // ecx
  int v16; // esi
  int v18; // [esp+Ch] [ebp-8h]
  unsigned int v19; // [esp+10h] [ebp-4h]

  v3 = (*(int (__cdecl **)(int))(this + 20))(a2);
  v4 = *(_DWORD *)(this + 4);
  v5 = 0;
  if ( v4 )
    v6 = (*(_DWORD *)(this + 8) - v4) >> 4;
  else
    v6 = 0;
  if ( *(_BYTE *)(this + 24) )
  {
    v7 = v3 & *(_DWORD *)(this + 28);
    v19 = v7;
  }
  else
  {
    v19 = v3 % v6;
    v7 = v3 % v6;
  }
  if ( !v4 || v7 >= (*(_DWORD *)(this + 8) - v4) >> 4 )
    invalid_parameter_noinfo();
  v8 = *(_DWORD *)(this + 4);
  v9 = 16 * v7;
  v10 = *(_DWORD *)(v8 + v9 + 4);
  v11 = v9 + v8;
  if ( v10 )
    v18 = (*(_DWORD *)(v11 + 8) - v10) >> 2;
  else
    v18 = 0;
  v12 = v18 == 0;
  if ( v18 > 0 )
  {
    do
    {
      v13 = *(_DWORD *)(this + 4);
      if ( !v13 || v19 >= (*(_DWORD *)(this + 8) - v13) >> 4 )
        invalid_parameter_noinfo();
      v14 = *(_DWORD *)(this + 4);
      v15 = *(_DWORD *)(v14 + v9 + 4);
      v16 = v9 + v14;
      if ( !v15 || v5 >= (*(_DWORD *)(v16 + 8) - v15) >> 2 )
        invalid_parameter_noinfo();
      if ( (*(unsigned __int8 (__cdecl **)(unsigned int, int))(this + 16))(*(_DWORD *)(v16 + 4) + 4 * v5, a2) )
        break;
      ++v5;
    }
    while ( (int)v5 < v18 );
    v12 = v5 == v18;
  }
  if ( v12 )
    return -1;
  else
    return v5 | (v19 << 16);
}
