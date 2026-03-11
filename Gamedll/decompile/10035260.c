/*
 * func-name: ?GetOwnerEstablishment@Equip@GameClient@@QBEPAVEstablishment@2@XZ_0
 * func-address: 0x10035260
 * callers: 0x100156c7
 * callees: none
 */

struct GameClient::Establishment *__thiscall GameClient::Equip::GetOwnerEstablishment(GameClient::Equip *this)
{
  return (struct GameClient::Establishment *)*((_DWORD *)this + 67);
}
