/*
 * func-name: sub_1004C3D0
 * func-address: 0x1004c3d0
 * callers: 0x1004c410, 0x1004c6f0, 0x1007a540, 0x1007a830, 0x1008ce00, 0x10169d00
 * callees: none
 */

int __thiscall sub_1004C3D0(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 12 )
    invalid_parameter_noinfo();
  return this[1] + 12 * a2;
}
