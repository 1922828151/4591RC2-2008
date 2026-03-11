/*
 * func-name: sub_102967C0
 * func-address: 0x102967c0
 * callers: 0x1000a6ff
 * callees: none
 */

int __thiscall sub_102967C0(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 76 )
    _invalid_parameter_noinfo();
  return this[1] + 76 * a2;
}
