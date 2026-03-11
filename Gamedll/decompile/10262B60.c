/*
 * func-name: sub_10262B60
 * func-address: 0x10262b60
 * callers: 0x10016536
 * callees: none
 */

int __thiscall sub_10262B60(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 44;
  return result;
}
