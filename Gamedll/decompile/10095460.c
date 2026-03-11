/*
 * func-name: sub_10095460
 * func-address: 0x10095460
 * callers: 0x10005ad3
 * callees: none
 */

int __thiscall sub_10095460(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 12 )
    _invalid_parameter_noinfo();
  return this[1] + 12 * a2;
}
