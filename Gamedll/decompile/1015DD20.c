/*
 * func-name: sub_1015DD20
 * func-address: 0x1015dd20
 * callers: 0x100157a8
 * callees: none
 */

int __thiscall sub_1015DD20(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 148 )
    _invalid_parameter_noinfo();
  return this[1] + 148 * a2;
}
