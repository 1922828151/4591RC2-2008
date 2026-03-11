/*
 * func-name: sub_1016A1B0
 * func-address: 0x1016a1b0
 * callers: 0x10169d00
 * callees: none
 */

int __thiscall sub_1016A1B0(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 52 )
    invalid_parameter_noinfo();
  return this[1] + 52 * a2;
}
