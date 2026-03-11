/*
 * func-name: sub_10084550
 * func-address: 0x10084550
 * callers: 0x100019ce
 * callees: none
 */

int __thiscall sub_10084550(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 96;
  return result;
}
