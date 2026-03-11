/*
 * func-name: ??4EnterEstabEffectArea@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1011edf0
 * callers: 0x10007da6
 * callees: none
 */

_DWORD *__thiscall GameClient::EnterEstabEffectArea::operator=(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = *(_DWORD *)(a2 + 4);
  return result;
}
