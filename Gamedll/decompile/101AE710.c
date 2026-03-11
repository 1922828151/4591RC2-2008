/*
 * func-name: ??4PedrailVehicle@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101ae710
 * callers: 0x10006451
 * callees: 0x1001050a, 0x1001327d
 */

int __thiscall GameClient::PedrailVehicle::operator=(int this, int a2)
{
  int result; // eax

  GameClient::ControlledEstab::operator=(a2);
  *(_DWORD *)(this + 536) = *(_DWORD *)(a2 + 536);
  *(_DWORD *)(this + 540) = *(_DWORD *)(a2 + 540);
  *(_DWORD *)(this + 544) = *(_DWORD *)(a2 + 544);
  *(_DWORD *)(this + 548) = *(_DWORD *)(a2 + 548);
  *(_BYTE *)(this + 552) = *(_BYTE *)(a2 + 552);
  sub_1001327D(a2 + 556);
  *(float *)(this + 572) = *(float *)(a2 + 572);
  *(_DWORD *)(this + 576) = *(_DWORD *)(a2 + 576);
  *(_DWORD *)(this + 580) = *(_DWORD *)(a2 + 580);
  *(float *)(this + 584) = *(float *)(a2 + 584);
  result = this;
  *(float *)(this + 588) = *(float *)(a2 + 588);
  return result;
}
