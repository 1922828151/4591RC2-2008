/*
 * func-name: sub_10003640
 * func-address: 0x10003640
 * callers: 0x10003c00
 * callees: none
 */

int __thiscall sub_10003640(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 28;
  return result;
}
