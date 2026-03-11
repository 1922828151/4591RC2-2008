/*
 * func-name: sub_10296900
 * func-address: 0x10296900
 * callers: 0x10006edd
 * callees: none
 */

int __thiscall sub_10296900(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 60;
  return result;
}
