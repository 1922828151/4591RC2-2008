/*
 * func-name: sub_1003B3F0
 * func-address: 0x1003b3f0
 * callers: 0x10007491
 * callees: none
 */

int __thiscall sub_1003B3F0(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 56;
  return result;
}
