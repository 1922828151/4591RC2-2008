/*
 * func-name: sub_1003B360
 * func-address: 0x1003b360
 * callers: 0x10018fcf
 * callees: none
 */

int __thiscall sub_1003B360(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 56;
  return result;
}
