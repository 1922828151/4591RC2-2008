/*
 * func-name: ??4PassengerController@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101bca20
 * callers: 0x1000bb4a
 * callees: none
 */

_DWORD *__thiscall GameClient::PassengerController::operator=(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = *(_DWORD *)(a2 + 4);
  return result;
}
