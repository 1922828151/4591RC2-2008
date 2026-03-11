/*
 * func-name: ??4IEstabController@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1011e630
 * callers: 0x1000bdb6
 * callees: none
 */

_DWORD *__thiscall GameClient::IEstabController::operator=(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = *(_DWORD *)(a2 + 4);
  return result;
}
