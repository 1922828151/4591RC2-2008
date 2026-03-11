/*
 * func-name: sub_10088360
 * func-address: 0x10088360
 * callers: 0x10018291
 * callees: none
 */

int __thiscall sub_10088360(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 24;
  return result;
}
