/*
 * func-name: ??4OcclusionQuery@@QAEAAV0@ABV0@@Z
 * func-address: 0x10016bc0
 * callers: none
 * callees: none
 */

_BYTE *__thiscall OcclusionQuery::operator=(_BYTE *this, int a2)
{
  _BYTE *result; // eax

  result = this;
  this[4] = *(_BYTE *)(a2 + 4);
  return result;
}
