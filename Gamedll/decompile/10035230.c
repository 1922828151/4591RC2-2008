/*
 * func-name: ?SetChildEquipID@Equip@GameClient@@QAEXK@Z_0
 * func-address: 0x10035230
 * callers: 0x10012d1e
 * callees: none
 */

void __thiscall GameClient::Equip::SetChildEquipID(GameClient::Equip *this, unsigned int a2)
{
  *((_DWORD *)this + 66) = a2;
}
