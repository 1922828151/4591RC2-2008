/*
 * func-name: sub_1025A4B0
 * func-address: 0x1025a4b0
 * callers: 0x1000a7bd
 * callees: none
 */

int __thiscall sub_1025A4B0(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 80;
  return result;
}
