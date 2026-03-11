/*
 * func-name: ?erase@?$vector@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@std@@QAE?AV?$_Vector_iterator@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@2@V32@0@Z
 * func-address: 0x100f6030
 * callers: 0x10025f50, 0x100a23e0, 0x100a24c0, 0x100f7530
 * callees: 0x1006d030
 */

_DWORD *__thiscall std::vector<AttributeRange>::erase(char **this, _DWORD *a2, int a3, char *a4, int a5, char *a6)
{
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
    this[2] = (char *)sub_1006D030(a6, this[2], a4);
  result = a2;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
