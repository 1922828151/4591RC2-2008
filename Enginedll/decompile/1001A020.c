/*
 * func-name: ?empty@?$vector@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@std@@QBE_NXZ
 * func-address: 0x1001a020
 * callers: none
 * callees: none
 */

bool __thiscall std::vector<AttributeRange>::empty(_DWORD *this)
{
  int v1; // eax

  v1 = this[1];
  return !v1 || (this[2] - v1) / 20 == 0;
}
