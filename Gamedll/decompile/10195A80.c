/*
 * func-name: ?CanBeSpecialUse@Weapon@GameClient@@UAE_NXZ_0
 * func-address: 0x10195a80
 * callers: 0x1000e052
 * callees: none
 */

bool __thiscall GameClient::Weapon::CanBeSpecialUse(GameClient::Weapon *this)
{
  return !*(_BYTE *)(*((_DWORD *)this + 2) + 2404)
      && !*((_DWORD *)this + 186)
      && *((float *)this + 18 * *((_DWORD *)this + 185) + 191) <= 0.0
      && GameClient::Equip::CanBeSpecialUse(this);
}
