/*
 * func-name: sub_10040110
 * func-address: 0x10040110
 * callers: 0x1000326a
 * callees: none
 */

int __thiscall sub_10040110(_DWORD *this)
{
  int v1; // edx

  v1 = this[1];
  if ( v1 )
    return (this[2] - v1) >> 2;
  else
    return 0;
}
