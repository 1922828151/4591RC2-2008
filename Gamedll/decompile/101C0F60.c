/*
 * func-name: sub_101C0F60
 * func-address: 0x101c0f60
 * callers: 0x10006d84
 * callees: none
 */

int __thiscall sub_101C0F60(_DWORD *this)
{
  int v1; // edx

  v1 = this[1];
  if ( v1 )
    return (this[2] - v1) >> 3;
  else
    return 0;
}
