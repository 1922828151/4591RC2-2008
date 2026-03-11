/*
 * func-name: ?capacity@?$vector@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@std@@QBEIXZ
 * func-address: 0x1001a000
 * callers: none
 * callees: none
 */

int __thiscall std::vector<AttributeRange>::capacity(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[3] - result) / 20;
  return result;
}
