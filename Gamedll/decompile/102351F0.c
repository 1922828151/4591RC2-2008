/*
 * func-name: ?performCreate@?$ProductorTemplate@VFProductInfo@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x102351f0
 * callers: 0x100092fa
 * callees: 0x1000d99a, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FProductInfo>::performCreate(char *this)
{
  GameClient::FProductInfo *v2; // eax
  int v3; // esi

  v2 = (GameClient::FProductInfo *)operator new(0x104u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FProductInfo::FProductInfo(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
