/*
 * func-name: ?OnReadVarComplete@FDamageEquip@GameClient@@UAEXXZ_0
 * func-address: 0x10226030
 * callers: 0x1000559c
 * callees: 0x100049f3
 */

void __thiscall GameClient::FDamageEquip::OnReadVarComplete(GameClient::FDamageEquip *this)
{
  GameClient::FEquip::OnReadVarComplete(this);
  sub_10004FF2((char *)this + 2296);
}
