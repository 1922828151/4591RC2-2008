/*
 * func-name: ?CanBeUsed@Equip@GameClient@@UAE_NXZ_0
 * func-address: 0x101593f0
 * callers: 0x1000616d
 * callees: none
 */

bool __thiscall GameClient::Equip::CanBeUsed(GameClient::Equip *this)
{
  return *((_DWORD *)this + 50) != 0;
}
