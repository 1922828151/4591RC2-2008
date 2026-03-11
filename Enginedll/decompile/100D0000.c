/*
 * func-name: sub_100D0000
 * func-address: 0x100d0000
 * callers: 0x100c8fd0
 * callees: none
 */

int __thiscall sub_100D0000(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    result = std::allocator<wchar_t>::deallocate(this, result, (this[3] - result) >> 1);
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  return result;
}
