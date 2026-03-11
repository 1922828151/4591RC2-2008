/*
 * func-name: ?performCreate@?$ProductorTemplate@VFRobot@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x10235590
 * callers: 0x1000215d
 * callees: 0x1000a993, 0x102c9d98
 */

GameClient::Flyweight *__thiscall GameClient::ProductorTemplate<GameClient::FRobot>::performCreate(char *this)
{
  GameClient::Flyweight *v2; // eax
  GameClient::Flyweight *v3; // esi

  v2 = (GameClient::Flyweight *)operator new(0x6Cu);
  v3 = v2;
  if ( v2 )
  {
    GameClient::Flyweight::Flyweight(v2);
    *(_DWORD *)v3 = &GameClient::FRobot::`vftable';
  }
  else
  {
    v3 = 0;
  }
  std::string::operator=((char *)v3 + 4, this + 4);
  return v3;
}
