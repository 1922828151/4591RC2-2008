/*
 * func-name: ?GetOwnerID@DamageEquip@GameClient@@QBEKXZ_0
 * func-address: 0x1014dd20
 * callers: 0x10002757
 * callees: none
 */

unsigned int __thiscall GameClient::DamageEquip::GetOwnerID(GameClient::DamageEquip *this)
{
  return *((_DWORD *)this + 201);
}
