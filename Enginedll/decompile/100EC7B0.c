/*
 * func-name: sub_100EC7B0
 * func-address: 0x100ec7b0
 * callers: 0x100ecf30, 0x100faa40, 0x100fb120, 0x100fb800, 0x100fc250, 0x100fccd0, 0x1012b9e0
 * callees: none
 */

int __thiscall sub_100EC7B0(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 56;
  return result;
}
