/*
 * func-name: ?GetReplaceSlot@Equip@GameClient@@QBEHXZ_0
 * func-address: 0x10035200
 * callers: 0x1001133d
 * callees: none
 */

int __thiscall GameClient::Equip::GetReplaceSlot(GameClient::Equip *this)
{
  return *((_DWORD *)this + 64);
}
