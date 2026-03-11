/*
 * func-name: ?clear@?$vector@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@std@@QAEXXZ
 * func-address: 0x1006f080
 * callers: 0x10025e00, 0x1006f6d0
 * callees: 0x1006d030
 */

void __thiscall std::vector<AttributeRange>::clear(char **this)
{
  char *v2; // edi
  char *v3; // ebx

  v2 = this[2];
  if ( this[1] > v2 )
    invalid_parameter_noinfo();
  v3 = this[1];
  if ( v3 > this[2] )
    invalid_parameter_noinfo();
  if ( v3 != v2 )
    this[2] = (char *)sub_1006D030(v2, this[2], v3);
}
