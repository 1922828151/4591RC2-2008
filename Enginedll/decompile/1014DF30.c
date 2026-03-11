/*
 * func-name: sub_1014DF30
 * func-address: 0x1014df30
 * callers: 0x100f6e10, 0x1014f2b0
 * callees: none
 */

int __thiscall sub_1014DF30(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 68;
  return result;
}
