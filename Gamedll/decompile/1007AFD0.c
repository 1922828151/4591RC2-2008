/*
 * func-name: sub_1007AFD0
 * func-address: 0x1007afd0
 * callers: 0x10009e3a
 * callees: none
 */

int __thiscall sub_1007AFD0(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 48;
  return result;
}
