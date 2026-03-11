/*
 * func-name: sub_1003B510
 * func-address: 0x1003b510
 * callers: 0x10016879
 * callees: none
 */

int __thiscall sub_1003B510(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 56;
  return result;
}
