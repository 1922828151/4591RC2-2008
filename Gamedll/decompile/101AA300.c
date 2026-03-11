/*
 * func-name: ??4WheelVehicle@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101aa300
 * callers: 0x10012495
 * callees: 0x1001050a, 0x1001327d
 */

int __thiscall GameClient::WheelVehicle::operator=(int this, int a2)
{
  GameClient::ControlledEstab::operator=(a2);
  *(_DWORD *)(this + 536) = *(_DWORD *)(a2 + 536);
  *(_DWORD *)(this + 540) = *(_DWORD *)(a2 + 540);
  *(_DWORD *)(this + 544) = *(_DWORD *)(a2 + 544);
  *(_DWORD *)(this + 548) = *(_DWORD *)(a2 + 548);
  *(_BYTE *)(this + 552) = *(_BYTE *)(a2 + 552);
  sub_1001327D(a2 + 556);
  return this;
}
