/*
 * func-name: ?SetCurNum@Equip@GameClient@@QAEXH@Z_0
 * func-address: 0x100351a0
 * callers: 0x1001359d
 * callees: none
 */

void __thiscall GameClient::Equip::SetCurNum(GameClient::Equip *this, int a2)
{
  *((_DWORD *)this + 50) = a2;
}
