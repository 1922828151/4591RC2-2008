/*
 * func-name: sub_100DF8E0
 * func-address: 0x100df8e0
 * callers: 0x1000cca2
 * callees: none
 */

int __thiscall sub_100DF8E0(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 92;
  return result;
}
