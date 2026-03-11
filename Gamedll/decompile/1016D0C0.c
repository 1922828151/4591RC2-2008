/*
 * func-name: ??4OccupyIcon@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1016d0c0
 * callers: 0x1000701d
 * callees: 0x10017d32, 0x100180f7
 */

int __thiscall GameClient::OccupyIcon::operator=(int this, int a2)
{
  GameClient::Establishment::operator=(a2);
  *(_DWORD *)(this + 456) = *(_DWORD *)(a2 + 456);
  *(_DWORD *)(this + 460) = *(_DWORD *)(a2 + 460);
  *(_BYTE *)(this + 464) = *(_BYTE *)(a2 + 464);
  if ( this + 472 != a2 + 472 )
    sub_100180F7(a2 + 472);
  *(_DWORD *)(this + 512) = *(_DWORD *)(a2 + 512);
  *(_DWORD *)(this + 516) = *(_DWORD *)(a2 + 516);
  *(_DWORD *)(this + 520) = *(_DWORD *)(a2 + 520);
  return this;
}
