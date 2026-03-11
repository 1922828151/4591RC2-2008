/*
 * func-name: sub_101E40C0
 * func-address: 0x101e40c0
 * callers: 0x1001759e
 * callees: none
 */

int __thiscall sub_101E40C0(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 28 )
    _invalid_parameter_noinfo();
  return this[1] + 28 * a2;
}
