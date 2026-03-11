/*
 * func-name: sub_10106860
 * func-address: 0x10106860
 * callers: 0x1000e98a
 * callees: none
 */

int __thiscall sub_10106860(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 56;
  return result;
}
