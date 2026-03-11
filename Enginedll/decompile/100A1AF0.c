/*
 * func-name: ?size@?$vector@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@std@@QBEIXZ
 * func-address: 0x100a1af0
 * callers: 0x10022540, 0x10025e00, 0x1006f6d0, 0x100762e0, 0x10077c20, 0x100a1e60, 0x100a2120, 0x100b2ea0, 0x100d14d0, 0x100d5290, 0x100f6900
 * callees: none
 */

int __thiscall std::vector<AttributeRange>::size(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 20;
  return result;
}
