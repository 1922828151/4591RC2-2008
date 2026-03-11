/*
 * func-name: ?UnloadResource@Weapon@GameClient@@UAEXXZ_0
 * func-address: 0x101950f0
 * callers: 0x10015541
 * callees: none
 */

// attributes: thunk
void __thiscall GameClient::Weapon::UnloadResource(GameClient::Weapon *this)
{
  GameClient::Equip::UnloadResource(this);
}
