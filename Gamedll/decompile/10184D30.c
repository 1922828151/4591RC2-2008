/*
 * func-name: sub_10184D30
 * func-address: 0x10184d30
 * callers: 0x1000eb0b
 * callees: none
 */

int __thiscall sub_10184D30(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 56;
  return result;
}
