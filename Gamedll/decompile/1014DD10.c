/*
 * func-name: ?SetOwnerID@DamageEquip@GameClient@@QAEXK@Z_0
 * func-address: 0x1014dd10
 * callers: 0x1000a259
 * callees: none
 */

void __thiscall GameClient::DamageEquip::SetOwnerID(GameClient::DamageEquip *this, unsigned int a2)
{
  *((_DWORD *)this + 201) = a2;
}
