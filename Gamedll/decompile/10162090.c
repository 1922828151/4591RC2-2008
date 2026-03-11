/*
 * func-name: sub_10162090
 * func-address: 0x10162090
 * callers: 0x10001dfc
 * callees: 0x10001e7e
 */

int __thiscall sub_10162090(_DWORD *this, int a2)
{
  int v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // ebx
  _DWORD *v8; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+8h] [ebp-4h]

  if ( a2 == -1 )
    return 0;
  sub_10001E7E((int)&v8, (int)&a2);
  v4 = this[3];
  v5 = this + 2;
  v6 = v8;
  if ( !v8 || v8 != v5 )
    _invalid_parameter_noinfo();
  v7 = v9;
  if ( v9 == v4 )
    return 0;
  if ( !v6 )
    _invalid_parameter_noinfo();
  if ( v7 == v6[1] )
    _invalid_parameter_noinfo();
  return *(_DWORD *)(v7 + 12);
}
