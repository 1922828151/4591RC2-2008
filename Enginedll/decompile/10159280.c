/*
 * func-name: sub_10159280
 * func-address: 0x10159280
 * callers: 0x10014bf0, 0x10159490, 0x1015a570, 0x1015a8d0, 0x101770d0
 * callees: none
 */

int __thiscall sub_10159280(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 84;
  return result;
}
