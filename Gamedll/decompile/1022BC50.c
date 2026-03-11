/*
 * func-name: ?performCreate@?$ProductorTemplate@VFFunc_Power@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x1022bc50
 * callers: 0x10004142
 * callees: 0x10018aa7, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FFunc_Power>::performCreate(char *this)
{
  GameClient::FFunc_Power *v2; // eax
  int v3; // esi

  v2 = (GameClient::FFunc_Power *)operator new(0xACu);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FFunc_Power::FFunc_Power(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
