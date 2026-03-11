/*
 * func-name: sub_101FB3E0
 * func-address: 0x101fb3e0
 * callers: 0x10008c29
 * callees: none
 */

int __thiscall sub_101FB3E0(_DWORD *this)
{
  int v1; // edx

  v1 = this[1];
  if ( v1 )
    return (this[2] - v1) >> 4;
  else
    return 0;
}
