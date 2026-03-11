/*
 * func-name: sub_100C6CC0
 * func-address: 0x100c6cc0
 * callers: 0x1001284b
 * callees: none
 */

int __thiscall sub_100C6CC0(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 176;
  return result;
}
