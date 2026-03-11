/*
 * func-name: sub_1010E200
 * func-address: 0x1010e200
 * callers: 0x1010c190
 * callees: none
 */

int __thiscall sub_1010E200(_DWORD *this)
{
  int v1; // edx

  v1 = this[1];
  if ( v1 )
    return (this[2] - v1) >> 6;
  else
    return 0;
}
