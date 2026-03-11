/*
 * func-name: ??4RadarMapState@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x10067e40
 * callers: 0x1000c879
 * callees: none
 */

_DWORD *__thiscall RadarMapState::operator=(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = *(_DWORD *)(a2 + 4);
  return result;
}
