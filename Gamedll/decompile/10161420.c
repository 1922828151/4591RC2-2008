/*
 * func-name: ?CanRecruitCapacitance@Item@GameClient@@UBE_NXZ_0
 * func-address: 0x10161420
 * callers: 0x100148f3
 * callees: none
 */

bool __thiscall GameClient::Item::CanRecruitCapacitance(GameClient::Item *this)
{
  return *((_DWORD *)this + 194) == -1 && GameClient::Equip::CanRecruitCapacitance(this);
}
