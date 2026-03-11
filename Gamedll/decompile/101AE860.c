/*
 * func-name: ??4AircraftVehicle@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101ae860
 * callers: 0x100144ac
 * callees: 0x1001050a
 */

int __thiscall GameClient::AircraftVehicle::operator=(int this, int a2)
{
  void (__thiscall *v3)(int, int); // eax
  void (__thiscall *v4)(int, int); // edx

  GameClient::ControlledEstab::operator=(a2);
  *(_DWORD *)(this + 536) = *(_DWORD *)(a2 + 536);
  *(_DWORD *)(this + 540) = *(_DWORD *)(a2 + 540);
  *(_DWORD *)(this + 544) = *(_DWORD *)(a2 + 544);
  *(_DWORD *)(this + 548) = *(_DWORD *)(a2 + 548);
  v3 = *(void (__thiscall **)(int, int))(*(_DWORD *)(this + 560) + 4);
  *(_DWORD *)(this + 552) = *(_DWORD *)(a2 + 552);
  *(_BYTE *)(this + 556) = *(_BYTE *)(a2 + 556);
  v3(this + 560, a2 + 560);
  v4 = *(void (__thiscall **)(int, int))(*(_DWORD *)(this + 608) + 4);
  *(_DWORD *)(this + 604) = *(_DWORD *)(a2 + 604);
  v4(this + 608, a2 + 608);
  *(_DWORD *)(this + 652) = *(_DWORD *)(a2 + 652);
  return this;
}
