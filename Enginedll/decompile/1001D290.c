/*
 * func-name: ?_Buy@?$vector@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@std@@IAE_NI@Z
 * func-address: 0x1001d290
 * callers: 0x10025e00
 * callees: 0x1001a060, 0x1006c4d0
 */

char __thiscall std::vector<AttributeRange>::_Buy(_DWORD *this, unsigned int a2)
{
  int v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0xCCCCCCC )
    std::vector<AttributeRange>::_Xlen();
  v4 = sub_1006C4D0(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 20 * a2;
  return 1;
}
