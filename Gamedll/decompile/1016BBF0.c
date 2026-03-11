/*
 * func-name: ??4NonControlledEstab@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1016bbf0
 * callers: 0x100014e7
 * callees: 0x10017d32
 */

int __thiscall GameClient::NonControlledEstab::operator=(int this, int a2)
{
  GameClient::Establishment::operator=(a2);
  *(_DWORD *)(this + 456) = *(_DWORD *)(a2 + 456);
  *(_DWORD *)(this + 460) = *(_DWORD *)(a2 + 460);
  *(_BYTE *)(this + 464) = *(_BYTE *)(a2 + 464);
  return this;
}
