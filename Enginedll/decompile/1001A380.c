/*
 * func-name: sub_1001A380
 * func-address: 0x1001a380
 * callers: 0x10026b60, 0x100e07e0
 * callees: none
 */

int __thiscall sub_1001A380(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 72;
  return result;
}
