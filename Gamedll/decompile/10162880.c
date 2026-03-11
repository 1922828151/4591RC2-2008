/*
 * func-name: sub_10162880
 * func-address: 0x10162880
 * callers: 0x10011905
 * callees: none
 */

int __thiscall sub_10162880(_DWORD *this)
{
  int v1; // edx

  v1 = this[1];
  if ( v1 )
    return (this[2] - v1) >> 2;
  else
    return 0;
}
