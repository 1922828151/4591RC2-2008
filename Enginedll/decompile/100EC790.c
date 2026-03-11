/*
 * func-name: sub_100EC790
 * func-address: 0x100ec790
 * callers: 0x1003cac0, 0x100e9620, 0x100ed940, 0x1015cb30
 * callees: none
 */

int __thiscall sub_100EC790(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 80;
  return result;
}
