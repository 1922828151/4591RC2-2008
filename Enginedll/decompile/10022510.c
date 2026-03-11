/*
 * func-name: ?erase@?$vector@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@std@@QAE?AV?$_Vector_iterator@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@2@V32@@Z
 * func-address: 0x10022510
 * callers: none
 * callees: 0x1006d030
 */

_DWORD *__thiscall std::vector<AttributeRange>::erase(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  _DWORD *result; // eax

  sub_1006D030(a4 + 20, this[2], a4);
  result = a2;
  this[2] -= 20;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
