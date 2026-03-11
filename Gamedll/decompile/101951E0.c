/*
 * func-name: ?GetCurPattern@Weapon@GameClient@@QBEPAVWeaponPattern@2@XZ_0
 * func-address: 0x101951e0
 * callers: 0x10013c9b
 * callees: none
 */

struct GameClient::WeaponPattern *__thiscall GameClient::Weapon::GetCurPattern(GameClient::Weapon *this)
{
  return (struct GameClient::WeaponPattern *)(160 * *((_DWORD *)this + 185) + *((_DWORD *)this + 2) + 2084);
}
