/*
 * func-name: ?performCreate@?$ProductorTemplate@VFASatelliteCapability@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x10249630
 * callers: 0x10005272
 * callees: 0x1000e79b, 0x102c9d98
 */

GameClient::FACapability *__thiscall GameClient::ProductorTemplate<GameClient::FASatelliteCapability>::performCreate(
        char *this)
{
  GameClient::FACapability *v2; // eax
  GameClient::FACapability *v3; // esi

  v2 = (GameClient::FACapability *)operator new(0x104u);
  v3 = v2;
  if ( v2 )
  {
    GameClient::FACapability::FACapability(v2);
    *(_DWORD *)v3 = &GameClient::FASatelliteCapability::`vftable';
  }
  else
  {
    v3 = 0;
  }
  std::string::operator=((char *)v3 + 4, this + 4);
  return v3;
}
