/*
 * func-name: ?CanRecruitCapacitance@Weapon@GameClient@@UBE_NXZ_0
 * func-address: 0x10195650
 * callers: 0x10002de2
 * callees: none
 */

bool __thiscall GameClient::Weapon::CanRecruitCapacitance(GameClient::Weapon *this)
{
  int v2; // eax
  bool result; // al

  result = (!*((_DWORD *)this + 67)
         && (!*((_DWORD *)this + 37)
          || (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 37) + 52))(*((_DWORD *)this + 37), 2))
         || (v2 = *((_DWORD *)this + 186), v2 != 1) && v2 != 3 && v2 != 2)
        && GameClient::Equip::CanRecruitCapacitance(this);
  return result;
}
