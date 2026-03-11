/*
 * func-name: sub_10126540
 * func-address: 0x10126540
 * callers: 0x10125020
 * callees: none
 */

int __thiscall sub_10126540(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 60 )
    invalid_parameter_noinfo();
  return this[1] + 60 * a2;
}
