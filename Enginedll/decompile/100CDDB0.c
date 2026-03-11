/*
 * func-name: sub_100CDDB0
 * func-address: 0x100cddb0
 * callers: 0x100ae850
 * callees: none
 */

int __thiscall sub_100CDDB0(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 44 )
    invalid_parameter_noinfo();
  return this[1] + 44 * a2;
}
