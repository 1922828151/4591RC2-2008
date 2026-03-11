/*
 * func-name: ?SetReplaceEquip@Equip@GameClient@@QAEXKH@Z_0
 * func-address: 0x10159870
 * callers: 0x10012b3e
 * callees: none
 */

void __thiscall GameClient::Equip::SetReplaceEquip(GameClient::Equip *this, unsigned int a2, int a3)
{
  *((_DWORD *)this + 63) = a2;
  *((_DWORD *)this + 64) = a3;
}
