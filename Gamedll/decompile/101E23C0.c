/*
 * func-name: sub_101E23C0
 * func-address: 0x101e23c0
 * callers: 0x10016a4f
 * callees: 0x100050b0
 */

int __thiscall sub_101E23C0(_DWORD *this, char a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  int v6; // ebx
  _DWORD *v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  sub_100050B0((int)&v8, (int)&a2);
  v3 = this[14];
  v4 = this + 13;
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
