/*
 * func-name: sub_1003B1A0
 * func-address: 0x1003b1a0
 * callers: 0x10013c41
 * callees: none
 */

int __thiscall sub_1003B1A0(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 40;
  return result;
}
