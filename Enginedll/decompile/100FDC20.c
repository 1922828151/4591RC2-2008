/*
 * func-name: sub_100FDC20
 * func-address: 0x100fdc20
 * callers: 0x100fb800, 0x100fc250, 0x100fccd0
 * callees: none
 */

int __thiscall sub_100FDC20(_DWORD *this)
{
  int v1; // edx

  v1 = this[1];
  if ( v1 )
    return (this[2] - v1) >> 4;
  else
    return 0;
}
