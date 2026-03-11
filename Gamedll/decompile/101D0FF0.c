/*
 * func-name: ??4FASummon@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101d0ff0
 * callers: 0x10010348
 * callees: 0x10009395
 */

int __thiscall GameClient::FASummon::operator=(int this, int a2)
{
  GameClient::FAura::operator=(a2);
  std::string::operator=(this + 260, a2 + 260);
  *(_DWORD *)(this + 288) = *(_DWORD *)(a2 + 288);
  *(_BYTE *)(this + 292) = *(_BYTE *)(a2 + 292);
  return this;
}
