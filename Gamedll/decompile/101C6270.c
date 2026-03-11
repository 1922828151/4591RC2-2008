/*
 * func-name: sub_101C6270
 * func-address: 0x101c6270
 * callers: 0x1000549d
 * callees: none
 */

int __thiscall sub_101C6270(_DWORD *this)
{
  int v1; // edx

  v1 = this[1];
  if ( v1 )
    return (this[2] - v1) >> 3;
  else
    return 0;
}
