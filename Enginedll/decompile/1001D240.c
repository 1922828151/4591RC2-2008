/*
 * func-name: ?back@?$vector@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@std@@QBEABUAttributeRange@@XZ
 * func-address: 0x1001d240
 * callers: none
 * callees: none
 */

unsigned int __thiscall std::vector<AttributeRange>::back(_DWORD *this)
{
  unsigned int v2; // edi

  v2 = this[2];
  if ( this[1] > v2 )
    invalid_parameter_noinfo();
  if ( v2 - 20 > this[2] || v2 - 20 < this[1] )
    invalid_parameter_noinfo();
  if ( v2 - 20 >= this[2] )
    invalid_parameter_noinfo();
  return v2 - 20;
}
