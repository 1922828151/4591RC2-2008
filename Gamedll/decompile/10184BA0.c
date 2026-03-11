/*
 * func-name: sub_10184BA0
 * func-address: 0x10184ba0
 * callers: 0x100050d8
 * callees: none
 */

int __thiscall sub_10184BA0(_DWORD *this)
{
  int v1; // edx

  v1 = this[1];
  if ( v1 )
    return (this[2] - v1) >> 2;
  else
    return 0;
}
