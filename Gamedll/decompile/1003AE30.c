/*
 * func-name: sub_1003AE30
 * func-address: 0x1003ae30
 * callers: 0x10014a47
 * callees: none
 */

int __thiscall sub_1003AE30(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 36;
  return result;
}
