/*
 * func-name: sub_1003B0B0
 * func-address: 0x1003b0b0
 * callers: 0x1001144b
 * callees: none
 */

int __thiscall sub_1003B0B0(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 80;
  return result;
}
