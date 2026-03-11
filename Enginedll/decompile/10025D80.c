/*
 * func-name: ??0?$vector@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@std@@QAE@I@Z
 * func-address: 0x10025d80
 * callers: none
 * callees: 0x10022300
 */

_DWORD *__thiscall std::vector<AttributeRange>::vector<AttributeRange>(_DWORD *this, unsigned int a2)
{
  _DWORD v4[5]; // [esp+4h] [ebp-14h] BYREF

  memset(v4, 0, sizeof(v4));
  std::vector<AttributeRange>::_Construct_n(this, a2, v4);
  return this;
}
