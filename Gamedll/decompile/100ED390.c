/*
 * func-name: sub_100ED390
 * func-address: 0x100ed390
 * callers: 0x1000108c
 * callees: none
 */

int __thiscall sub_100ED390(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 84;
  return result;
}
