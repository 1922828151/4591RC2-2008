/*
 * func-name: ?performCreate@?$ProductorTemplate@VFFunc_RobotReceive@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x1022c690
 * callers: 0x10019cc7
 * callees: 0x10012a9e, 0x102c9d98
 */

GameClient::FFunc_Receive *__thiscall GameClient::ProductorTemplate<GameClient::FFunc_RobotReceive>::performCreate(
        char *this)
{
  GameClient::FFunc_Receive *v2; // eax
  GameClient::FFunc_Receive *v3; // esi

  v2 = (GameClient::FFunc_Receive *)operator new(0x80u);
  v3 = v2;
  if ( v2 )
  {
    GameClient::FFunc_Receive::FFunc_Receive(v2);
    *(_DWORD *)v3 = &GameClient::FFunc_RobotReceive::`vftable';
  }
  else
  {
    v3 = 0;
  }
  std::string::operator=((char *)v3 + 4, this + 4);
  return v3;
}
