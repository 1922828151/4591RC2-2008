/*
 * func-name: ?performCreate@?$ProductorTemplate@VFFunc_VehicleReceive@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x1022d210
 * callers: 0x10002e23
 * callees: 0x10012a9e, 0x102c9d98
 */

GameClient::FFunc_Receive *__thiscall GameClient::ProductorTemplate<GameClient::FFunc_VehicleReceive>::performCreate(
        char *this)
{
  GameClient::FFunc_Receive *v2; // eax
  GameClient::FFunc_Receive *v3; // esi

  v2 = (GameClient::FFunc_Receive *)operator new(0x80u);
  v3 = v2;
  if ( v2 )
  {
    GameClient::FFunc_Receive::FFunc_Receive(v2);
    *(_DWORD *)v3 = &GameClient::FFunc_VehicleReceive::`vftable';
  }
  else
  {
    v3 = 0;
  }
  std::string::operator=((char *)v3 + 4, this + 4);
  return v3;
}
