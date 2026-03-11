/*
 * func-name: ??0?$vector@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@std@@QAE@IABUAttributeRange@@ABV?$allocator@UAttributeRange@@@1@@Z
 * func-address: 0x10025de0
 * callers: none
 * callees: 0x10022300
 */

_DWORD *__thiscall std::vector<AttributeRange>::vector<AttributeRange>(
        _DWORD *this,
        unsigned int a2,
        _DWORD *a3,
        int a4)
{
  std::vector<AttributeRange>::_Construct_n(this, a2, a3);
  return this;
}
