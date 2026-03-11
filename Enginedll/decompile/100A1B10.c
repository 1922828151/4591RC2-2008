/*
 * func-name: ??A?$vector@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@std@@QBEABUAttributeRange@@I@Z
 * func-address: 0x100a1b10
 * callers: 0x100a0810, 0x100ae850, 0x100ae980, 0x100b2ea0, 0x100b40c0, 0x100f0c50, 0x100f1180, 0x101280a0
 * callees: none
 */

int __thiscall std::vector<AttributeRange>::operator[](_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 20 )
    invalid_parameter_noinfo();
  return this[1] + 20 * a2;
}
