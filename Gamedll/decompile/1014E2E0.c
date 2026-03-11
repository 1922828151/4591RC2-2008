/*
 * func-name: ?SetCurrentRotation@DamageEquip@GameClient@@UAEXABVMatrix@@@Z_0
 * func-address: 0x1014e2e0
 * callers: 0x10004147
 * callees: none
 */

// attributes: thunk
void __thiscall GameClient::DamageEquip::SetCurrentRotation(GameClient::DamageEquip *this, const struct Matrix *a2)
{
  GameClient::Equip::SetCurrentRotation(this, a2);
}
