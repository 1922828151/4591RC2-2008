/*
 * func-name: ??4ControlledEstab@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10128500
 * callers: 0x1001050a
 * callees: 0x1001327d, 0x10017d32
 */

int __thiscall GameClient::ControlledEstab::operator=(int this, int a2)
{
  int result; // eax

  GameClient::Establishment::operator=(a2);
  *(_DWORD *)(this + 456) = *(_DWORD *)(a2 + 456);
  *(_DWORD *)(this + 460) = *(_DWORD *)(a2 + 460);
  *(_DWORD *)(this + 464) = *(_DWORD *)(a2 + 464);
  *(_DWORD *)(this + 468) = *(_DWORD *)(a2 + 468);
  *(_DWORD *)(this + 472) = *(_DWORD *)(a2 + 472);
  *(_BYTE *)(this + 476) = *(_BYTE *)(a2 + 476);
  *(_DWORD *)(this + 480) = *(_DWORD *)(a2 + 480);
  *(_DWORD *)(this + 484) = *(_DWORD *)(a2 + 484);
  *(_DWORD *)(this + 488) = *(_DWORD *)(a2 + 488);
  *(_DWORD *)(this + 492) = *(_DWORD *)(a2 + 492);
  *(_DWORD *)(this + 496) = *(_DWORD *)(a2 + 496);
  *(_DWORD *)(this + 500) = *(_DWORD *)(a2 + 500);
  *(float *)(this + 504) = *(float *)(a2 + 504);
  *(_DWORD *)(this + 508) = *(_DWORD *)(a2 + 508);
  sub_1001327D(a2 + 512);
  result = this;
  *(float *)(this + 528) = *(float *)(a2 + 528);
  *(_BYTE *)(this + 532) = *(_BYTE *)(a2 + 532);
  return result;
}
