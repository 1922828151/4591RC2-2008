/*
 * func-name: ?GetOwnerShip@Skill@GameClient@@QBEPAVWorldObject@2@XZ_0
 * func-address: 0x10160ce0
 * callers: 0x1000aa6a
 * callees: none
 */

struct GameClient::WorldObject *__thiscall GameClient::Skill::GetOwnerShip(GameClient::Skill *this)
{
  return (struct GameClient::WorldObject *)*((_DWORD *)this + 5);
}
