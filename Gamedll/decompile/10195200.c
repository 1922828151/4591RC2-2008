/*
 * func-name: ?canBeSwitch@Weapon@GameClient@@IAE_NXZ_0
 * func-address: 0x10195200
 * callers: 0x1000175d
 * callees: none
 */

bool __thiscall GameClient::Weapon::canBeSwitch(GameClient::Weapon *this)
{
  return !*(_BYTE *)(*((_DWORD *)this + 2) + 2404)
      && !*((_DWORD *)this + 186)
      && *((float *)this + 18 * *((_DWORD *)this + 185) + 191) <= 0.0;
}
