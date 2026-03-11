/*
 * func-name: sub_100A0E00
 * func-address: 0x100a0e00
 * callers: 0x100170da
 * callees: none
 */

int __thiscall sub_100A0E00(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 28;
  return result;
}
