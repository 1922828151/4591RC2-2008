/*
 * func-name: ?GetEquip@Robot@GameClient@@QAEPAVEquip@2@I@Z_0
 * func-address: 0x10049670
 * callers: 0x10007ce8
 * callees: none
 */

struct GameClient::Equip *__thiscall GameClient::Robot::GetEquip(GameClient::Robot *this, unsigned int a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)this + 63);
  if ( v3 && a2 < (*((_DWORD *)this + 64) - v3) >> 2 )
    return *(struct GameClient::Equip **)(v3 + 4 * a2);
  _invalid_parameter_noinfo();
  return *(struct GameClient::Equip **)(*((_DWORD *)this + 63) + 4 * a2);
}
