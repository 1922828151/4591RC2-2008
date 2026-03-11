/*
 * func-name: sub_100A0D70
 * func-address: 0x100a0d70
 * callers: 0x10019bff
 * callees: none
 */

int __thiscall sub_100A0D70(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 56;
  return result;
}
