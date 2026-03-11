/*
 * func-name: sub_1003AC70
 * func-address: 0x1003ac70
 * callers: 0x1001ac58
 * callees: none
 */

int __thiscall sub_1003AC70(_DWORD *this)
{
  int v1; // edx

  v1 = this[1];
  if ( v1 )
    return (this[2] - v1) >> 2;
  else
    return 0;
}
