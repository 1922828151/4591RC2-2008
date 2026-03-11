/*
 * func-name: sub_10009080
 * func-address: 0x10009080
 * callers: 0x1001dfb0
 * callees: none
 */

int __thiscall sub_10009080(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 12;
  return result;
}
