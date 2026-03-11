/*
 * func-name: ?GetEquip@Seat@GameClient@@QAEPAVEquip@2@J@Z_0
 * func-address: 0x10122580
 * callers: 0x100197b3
 * callees: none
 */

struct GameClient::Equip *__thiscall GameClient::Seat::GetEquip(GameClient::Seat *this, unsigned int a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)this + 8);
  if ( v3 && a2 < (*((_DWORD *)this + 9) - v3) >> 2 )
    return *(struct GameClient::Equip **)(v3 + 4 * a2);
  _invalid_parameter_noinfo();
  return *(struct GameClient::Equip **)(*((_DWORD *)this + 8) + 4 * a2);
}
