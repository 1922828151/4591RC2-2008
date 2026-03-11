/*
 * func-name: sub_1002B540
 * func-address: 0x1002b540
 * callers: 0x10011b7b
 * callees: none
 */

int __thiscall sub_1002B540(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 28;
  return result;
}
