/*
 * func-name: sub_1024E380
 * func-address: 0x1024e380
 * callers: 0x10011270
 * callees: none
 */

int __thiscall sub_1024E380(_DWORD *this)
{
  int v1; // edx

  v1 = this[1];
  if ( v1 )
    return (this[2] - v1) >> 2;
  else
    return 0;
}
