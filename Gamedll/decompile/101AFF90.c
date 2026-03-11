/*
 * func-name: ??4FPedrailVehicleWheel@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101aff90
 * callers: 0x10017cf1
 * callees: 0x1000f173
 */

int __thiscall GameClient::FPedrailVehicleWheel::operator=(int this, int a2)
{
  int result; // eax

  GameClient::FWheel::operator=(a2);
  *(_BYTE *)(this + 148) = *(_BYTE *)(a2 + 148);
  *(float *)(this + 152) = *(float *)(a2 + 152);
  result = this;
  *(float *)(this + 156) = *(float *)(a2 + 156);
  return result;
}
