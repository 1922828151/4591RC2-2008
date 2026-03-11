/*
 * func-name: ?SetCurrentRotation@WorldObject@GameClient@@UAEXABVMatrix@@@Z_0
 * func-address: 0x10043790
 * callers: 0x10004fcf
 * callees: none
 */

void __thiscall GameClient::WorldObject::SetCurrentRotation(GameClient::WorldObject *this, const struct Matrix *a2)
{
  qmemcpy((char *)this + 36, a2, 0x40u);
}
