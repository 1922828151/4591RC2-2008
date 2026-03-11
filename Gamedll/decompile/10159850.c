/*
 * func-name: ?CanBeTakeUp@Equip@GameClient@@UAE_NXZ_0
 * func-address: 0x10159850
 * callers: 0x10006447
 * callees: none
 */

bool __thiscall GameClient::Equip::CanBeTakeUp(GameClient::Equip *this)
{
  return *(_BYTE *)(*((_DWORD *)this + 2) + 333) == 0;
}
