/*
 * func-name: sub_10145280
 * func-address: 0x10145280
 * callers: 0x1000e52f
 * callees: none
 */

int __thiscall sub_10145280(_DWORD *this)
{
  int v1; // edx

  v1 = this[1];
  if ( v1 )
    return (this[2] - v1) >> 3;
  else
    return 0;
}
