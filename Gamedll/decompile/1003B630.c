/*
 * func-name: sub_1003B630
 * func-address: 0x1003b630
 * callers: 0x1000afc9
 * callees: none
 */

int __thiscall sub_1003B630(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 120;
  return result;
}
