/*
 * func-name: ??4FWheelVehicleWheel@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101aaa30
 * callers: 0x1000a8b7
 * callees: 0x1000f173
 */

int __thiscall GameClient::FWheelVehicleWheel::operator=(int this, int a2)
{
  GameClient::FWheel::operator=(a2);
  *(float *)(this + 148) = *(float *)(a2 + 148);
  *(_BYTE *)(this + 152) = *(_BYTE *)(a2 + 152);
  return this;
}
