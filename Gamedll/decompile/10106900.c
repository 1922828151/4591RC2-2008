/*
 * func-name: sub_10106900
 * func-address: 0x10106900
 * callers: 0x10006a37
 * callees: none
 */

int __thiscall sub_10106900(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 84;
  return result;
}
