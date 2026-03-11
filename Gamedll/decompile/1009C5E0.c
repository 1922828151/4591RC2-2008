/*
 * func-name: sub_1009C5E0
 * func-address: 0x1009c5e0
 * callers: 0x10001aaf
 * callees: none
 */

int __thiscall sub_1009C5E0(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 184;
  return result;
}
