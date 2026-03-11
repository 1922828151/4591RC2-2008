/*
 * func-name: ?SetRotation@Seat@GameClient@@QAEXABVMatrix@@@Z_0
 * func-address: 0x1011e800
 * callers: 0x1000eb38
 * callees: none
 */

void __thiscall GameClient::Seat::SetRotation(GameClient::Seat *this, const struct Matrix *a2)
{
  qmemcpy((char *)this + 112, a2, 0x40u);
}
