/*
 * func-name: ?GetCurSlotNum@Equip@GameClient@@QBEHXZ_0
 * func-address: 0x100351e0
 * callers: 0x1000a71d
 * callees: none
 */

int __thiscall GameClient::Equip::GetCurSlotNum(GameClient::Equip *this)
{
  return *((_DWORD *)this + 62);
}
