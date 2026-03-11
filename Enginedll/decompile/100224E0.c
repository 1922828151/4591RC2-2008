/*
 * func-name: ?pop_back@?$vector@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@std@@QAEXXZ
 * func-address: 0x100224e0
 * callers: none
 * callees: none
 */

int __thiscall std::vector<AttributeRange>::pop_back(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
  {
    result = (this[2] - result) / 20;
    if ( result )
      this[2] -= 20;
  }
  return result;
}
