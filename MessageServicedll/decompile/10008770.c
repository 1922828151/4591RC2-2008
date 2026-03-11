/*
 * func-name: sub_10008770
 * func-address: 0x10008770
 * callers: 0x1000fc90
 * callees: none
 */

int __thiscall sub_10008770(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 116;
  return result;
}
