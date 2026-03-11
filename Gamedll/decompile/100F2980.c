/*
 * func-name: ??4AdapterActorALReport@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x100f2980
 * callers: 0x1000e241
 * callees: none
 */

_DWORD *__thiscall GameClient::AdapterActorALReport::operator=(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = *(_DWORD *)(a2 + 4);
  return result;
}
