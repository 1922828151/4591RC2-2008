/*
 * func-name: sub_10084580
 * func-address: 0x10084580
 * callers: 0x10015ac3
 * callees: none
 */

int __thiscall sub_10084580(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 96 )
    _invalid_parameter_noinfo();
  return this[1] + 96 * a2;
}
