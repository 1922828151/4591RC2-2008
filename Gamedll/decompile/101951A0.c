/*
 * func-name: ?OnUse@Weapon@GameClient@@UAE_NABVVector@@0@Z_0
 * func-address: 0x101951a0
 * callers: 0x10005cd1
 * callees: 0x1000c60d
 */

bool __thiscall GameClient::Weapon::OnUse(GameClient::Weapon *this, const struct Vector *a2, const struct Vector *a3)
{
  return GameClient::Equip::OnUse(this, a2, a3);
}
