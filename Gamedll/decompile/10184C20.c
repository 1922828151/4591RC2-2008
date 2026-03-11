/*
 * func-name: sub_10184C20
 * func-address: 0x10184c20
 * callers: 0x10019f56
 * callees: none
 */

int __thiscall sub_10184C20(_DWORD *this)
{
  int v1; // edx

  v1 = this[1];
  if ( v1 )
    return (this[2] - v1) >> 2;
  else
    return 0;
}
