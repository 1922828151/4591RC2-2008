/*
 * func-name: ?SetControlerID@Equip@GameClient@@QAEXK@Z_0
 * func-address: 0x10035210
 * callers: 0x10006505
 * callees: none
 */

void __thiscall GameClient::Equip::SetControlerID(GameClient::Equip *this, unsigned int a2)
{
  *((_DWORD *)this + 65) = a2;
}
