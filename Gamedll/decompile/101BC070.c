/*
 * func-name: ??4AircraftVehicleController@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101bc070
 * callers: 0x10002d15
 * callees: none
 */

int __thiscall GameClient::AircraftVehicleController::operator=(int this, int a2)
{
  int result; // eax

  result = this;
  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12);
  *(float *)(this + 16) = *(float *)(a2 + 16);
  *(float *)(this + 20) = *(float *)(a2 + 20);
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24);
  return result;
}
