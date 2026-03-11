/*
 * func-name: ?GetAddonStadiaLevel@Equip@GameClient@@QAEHXZ_0
 * func-address: 0x10159840
 * callers: 0x1000774d
 * callees: none
 */

int __thiscall GameClient::Equip::GetAddonStadiaLevel(GameClient::Equip *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 2) + 336);
}
