/*
 * func-name: sub_1004C200
 * func-address: 0x1004c200
 * callers: 0x1004c410, 0x1004c6f0
 * callees: none
 */

int __thiscall sub_1004C200(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 92 )
    invalid_parameter_noinfo();
  return this[1] + 92 * a2;
}
