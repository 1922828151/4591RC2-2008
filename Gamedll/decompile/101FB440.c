/*
 * func-name: sub_101FB440
 * func-address: 0x101fb440
 * callers: 0x100050c9
 * callees: none
 */

int __thiscall sub_101FB440(_DWORD *this)
{
  int v1; // edx

  v1 = this[1];
  if ( v1 )
    return (this[2] - v1) >> 7;
  else
    return 0;
}
