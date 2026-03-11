/*
 * func-name: ?OnDestroy@Weapon@GameClient@@UAEXXZ_0
 * func-address: 0x10195100
 * callers: 0x10002c39
 * callees: none
 */

// attributes: thunk
void __thiscall GameClient::Weapon::OnDestroy(GameClient::Weapon *this)
{
  GameClient::Equip::OnDestroy(this);
}
