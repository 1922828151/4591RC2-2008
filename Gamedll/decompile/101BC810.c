/*
 * func-name: ??4SuspendVehicleController@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101bc810
 * callers: 0x1000d4d1
 * callees: none
 */

_DWORD *__thiscall GameClient::SuspendVehicleController::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = a2[1];
  this[2] = a2[2];
  this[3] = a2[3];
  return result;
}
