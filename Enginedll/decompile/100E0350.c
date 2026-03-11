/*
 * func-name: sub_100E0350
 * func-address: 0x100e0350
 * callers: 0x100df7d0
 * callees: none
 */

int __thiscall sub_100E0350(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 72 )
    invalid_parameter_noinfo();
  return this[1] + 72 * a2;
}
