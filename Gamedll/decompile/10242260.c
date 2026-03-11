/*
 * func-name: ?OnReadVarComplete@FWeapon@GameClient@@UAEXXZ_0
 * func-address: 0x10242260
 * callers: 0x100098b3
 * callees: 0x100049f3, 0x10004ff2
 */

void __thiscall GameClient::FWeapon::OnReadVarComplete(GameClient::FWeapon *this)
{
  GameClient::FEquip::OnReadVarComplete(this);
  *((_BYTE *)this + 2548) = 0;
  sub_10004FF2((char *)this + 2484);
  *((_BYTE *)this + 2628) = 0;
  sub_10004FF2((char *)this + 2564);
  *((_BYTE *)this + 2708) = 0;
  sub_10004FF2((char *)this + 2644);
  *((_BYTE *)this + 2788) = 0;
  sub_10004FF2((char *)this + 2724);
  *((_BYTE *)this + 2868) = 0;
  sub_10004FF2((char *)this + 2804);
}
