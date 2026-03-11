/*
 * func-name: sub_10207A40
 * func-address: 0x10207a40
 * callers: 0x1000110e
 * callees: 0x10013124
 */

BOOL __thiscall sub_10207A40(_DWORD *this, char a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  _DWORD v6[2]; // [esp+4h] [ebp-8h] BYREF

  sub_10013124((int)v6, (int)&a2);
  v3 = this + 64;
  v4 = this[65];
  if ( !v6[0] || (_DWORD *)v6[0] != v3 )
    _invalid_parameter_noinfo();
  return v6[1] != v4;
}
