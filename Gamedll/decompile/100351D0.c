/*
 * func-name: ?SetCurSlotNum@Equip@GameClient@@QAEXH@Z_0
 * func-address: 0x100351d0
 * callers: 0x1000ea2f
 * callees: none
 */

void __thiscall GameClient::Equip::SetCurSlotNum(GameClient::Equip *this, int a2)
{
  *((_DWORD *)this + 62) = a2;
}
