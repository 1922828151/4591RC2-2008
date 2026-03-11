/*
 * func-name: sub_1003B5A0
 * func-address: 0x1003b5a0
 * callers: 0x10014c86
 * callees: none
 */

int __thiscall sub_1003B5A0(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 148;
  return result;
}
