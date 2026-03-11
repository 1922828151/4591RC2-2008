/*
 * func-name: sub_1008F770
 * func-address: 0x1008f770
 * callers: 0x10090a60
 * callees: none
 */

int __thiscall sub_1008F770(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 24;
  return result;
}
