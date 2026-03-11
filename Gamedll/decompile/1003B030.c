/*
 * func-name: sub_1003B030
 * func-address: 0x1003b030
 * callers: 0x1000e8db
 * callees: none
 */

int __thiscall sub_1003B030(_DWORD *this)
{
  int v1; // edx

  v1 = this[1];
  if ( v1 )
    return (this[2] - v1) >> 2;
  else
    return 0;
}
