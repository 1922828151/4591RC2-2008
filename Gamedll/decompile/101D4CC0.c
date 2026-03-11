/*
 * func-name: sub_101D4CC0
 * func-address: 0x101d4cc0
 * callers: 0x10003bd9
 * callees: 0x10001e7e, 0x10004016
 */

char __thiscall sub_101D4CC0(_DWORD *this, int a2)
{
  int v2; // ebx
  _DWORD *v5; // eax
  int v6; // esi
  _DWORD *v7; // [esp+8h] [ebp-14h] BYREF
  int v8; // [esp+Ch] [ebp-10h]
  char v9[12]; // [esp+10h] [ebp-Ch] BYREF

  v2 = a2;
  if ( !a2 )
    return 0;
  a2 = *(_DWORD *)(a2 + 12);
  sub_10001E7E((int)&v7, (int)&a2);
  v5 = this + 3;
  v6 = this[4];
  if ( !v7 || v7 != v5 )
    _invalid_parameter_noinfo();
  if ( v8 != v6 )
    return 0;
  v7 = *(_DWORD **)(v2 + 12);
  v8 = v2;
  sub_10004016((int)v9, (int)&v7);
  return 1;
}
