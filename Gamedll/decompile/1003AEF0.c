/*
 * func-name: sub_1003AEF0
 * func-address: 0x1003aef0
 * callers: 0x10017599
 * callees: none
 */

int __thiscall sub_1003AEF0(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 12;
  return result;
}
