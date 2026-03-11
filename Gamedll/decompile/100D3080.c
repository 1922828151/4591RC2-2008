/*
 * func-name: sub_100D3080
 * func-address: 0x100d3080
 * callers: 0x10015078
 * callees: none
 */

int __thiscall sub_100D3080(_DWORD *this)
{
  int v1; // edx

  v1 = this[39];
  if ( v1 )
    return (this[40] - v1) >> 2;
  else
    return 0;
}
