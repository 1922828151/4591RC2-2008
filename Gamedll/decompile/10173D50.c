/*
 * func-name: ?SetCurrentRotation@Robot@GameClient@@UAEXABVMatrix@@@Z_0
 * func-address: 0x10173d50
 * callers: 0x10015933
 * callees: none
 */

void __thiscall GameClient::Robot::SetCurrentRotation(GameClient::Robot *this, const struct Matrix *a2)
{
  qmemcpy((char *)this + 36, a2, 0x40u);
}
