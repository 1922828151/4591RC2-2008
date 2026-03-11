/*
 * func-name: sub_10090080
 * func-address: 0x10090080
 * callers: 0x100833b0, 0x10083e50
 * callees: 0x1008f790
 */

unsigned int __thiscall sub_10090080(_DWORD *this, unsigned int a2)
{
  unsigned int v3; // esi
  unsigned int v4; // esi

  v3 = this[1];
  if ( !v3 || (int)(this[2] - v3) / 44 <= a2 )
    sub_1008F790();
  if ( v3 > this[2] )
    invalid_parameter_noinfo();
  v4 = 44 * a2 + v3;
  if ( v4 > this[2] || v4 < this[1] )
    invalid_parameter_noinfo();
  if ( v4 >= this[2] )
    invalid_parameter_noinfo();
  return v4;
}
