/*
 * func-name: ??4MapState@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x10067d50
 * callers: 0x1001668a
 * callees: none
 */

_DWORD *__thiscall MapState::operator=(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = *(_DWORD *)(a2 + 4);
  return result;
}
