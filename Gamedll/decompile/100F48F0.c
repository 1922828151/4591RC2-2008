/*
 * func-name: sub_100F48F0
 * func-address: 0x100f48f0
 * callers: 0x100161b2
 * callees: none
 */

int __thiscall sub_100F48F0(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 36;
  return result;
}
