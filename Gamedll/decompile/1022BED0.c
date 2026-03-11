/*
 * func-name: ?performCreate@?$ProductorTemplate@VFFunc_Power_Input@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x1022bed0
 * callers: 0x100075ae
 * callees: 0x10018aa7, 0x102c9d98
 */

GameClient::FFunc_Power *__thiscall GameClient::ProductorTemplate<GameClient::FFunc_Power_Input>::performCreate(
        char *this)
{
  GameClient::FFunc_Power *v2; // eax
  GameClient::FFunc_Power *v3; // esi

  v2 = (GameClient::FFunc_Power *)operator new(0xACu);
  v3 = v2;
  if ( v2 )
  {
    GameClient::FFunc_Power::FFunc_Power(v2);
    *(_DWORD *)v3 = &GameClient::FFunc_Power_Input::`vftable';
  }
  else
  {
    v3 = 0;
  }
  std::string::operator=((char *)v3 + 4, this + 4);
  return v3;
}
