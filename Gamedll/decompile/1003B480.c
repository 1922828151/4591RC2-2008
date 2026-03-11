/*
 * func-name: sub_1003B480
 * func-address: 0x1003b480
 * callers: 0x100037ba
 * callees: none
 */

int __thiscall sub_1003B480(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 56;
  return result;
}
