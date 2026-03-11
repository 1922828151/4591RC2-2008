/*
 * func-name: sub_1012B010
 * func-address: 0x1012b010
 * callers: 0x10134090
 * callees: none
 */

int __thiscall sub_1012B010(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 176 )
    invalid_parameter_noinfo();
  return this[1] + 176 * a2;
}
