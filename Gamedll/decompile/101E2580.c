/*
 * func-name: sub_101E2580
 * func-address: 0x101e2580
 * callers: 0x1000df35
 * callees: 0x10008dc8
 */

int __thiscall sub_101E2580(_DWORD *this, char a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  int v6; // ebx
  _DWORD *v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  sub_10008DC8((int)&v8, (int)&a2);
  v3 = this[34];
  v4 = this + 33;
  v5 = v8;
  if ( !v8 || v8 != v4 )
    _invalid_parameter_noinfo();
  v6 = v9;
  if ( v9 == v3 )
    return 0;
  if ( !v5 )
    _invalid_parameter_noinfo();
  if ( v6 == v5[1] )
    _invalid_parameter_noinfo();
  return *(_DWORD *)(v6 + 12);
}
