/*
 * func-name: ?GetCurEquip@Robot@GameClient@@QBEPAVEquip@2@XZ_0
 * func-address: 0x100332b0
 * callers: 0x1000bbcc
 * callees: none
 */

struct GameClient::Equip *__thiscall GameClient::Robot::GetCurEquip(GameClient::Robot *this)
{
  return (struct GameClient::Equip *)*((_DWORD *)this + 57);
}
