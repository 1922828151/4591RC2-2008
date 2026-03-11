/*
 * func-name: sub_100C7940
 * func-address: 0x100c7940
 * callers: 0x10010f46
 * callees: none
 */

int __thiscall sub_100C7940(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 20 )
    _invalid_parameter_noinfo();
  return this[1] + 20 * a2;
}
