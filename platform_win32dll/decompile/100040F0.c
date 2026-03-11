/*
 * func-name: sub_100040F0
 * func-address: 0x100040f0
 * callers: none
 * callees: none
 */

int __thiscall sub_100040F0(_DWORD *this, unsigned int a2)
{
  if ( a2 > 3 )
    return 0;
  else
    return this[20 * a2 + 1665];
}
