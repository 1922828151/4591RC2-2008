/*
 * func-name: sub_101862F0
 * func-address: 0x101862f0
 * callers: 0x10009886
 * callees: none
 */

int __thiscall sub_101862F0(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 936 )
    _invalid_parameter_noinfo();
  return this[1] + 936 * a2;
}
