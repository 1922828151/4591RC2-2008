/*
 * func-name: sub_100ED3C0
 * func-address: 0x100ed3c0
 * callers: 0x10005ccc
 * callees: none
 */

int __thiscall sub_100ED3C0(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 84 )
    _invalid_parameter_noinfo();
  return this[1] + 84 * a2;
}
