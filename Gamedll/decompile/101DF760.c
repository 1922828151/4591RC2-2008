/*
 * func-name: sub_101DF760
 * func-address: 0x101df760
 * callers: 0x100110b3
 * callees: none
 */

int __thiscall sub_101DF760(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 80;
  return result;
}
