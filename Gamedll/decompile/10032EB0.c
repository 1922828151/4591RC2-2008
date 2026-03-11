/*
 * func-name: ?GetCharacter@WorldObject@GameClient@@QBEPAVCharacter@2@XZ_0
 * func-address: 0x10032eb0
 * callers: 0x10011b67
 * callees: none
 */

struct GameClient::Character *__thiscall GameClient::WorldObject::GetCharacter(GameClient::WorldObject *this)
{
  return (struct GameClient::Character *)*((_DWORD *)this + 5);
}
