/*
 * func-name: ?SetCameraLocRot@Seat@GameClient@@QAEXABVMatrix@@@Z_0
 * func-address: 0x1011e8c0
 * callers: 0x1000e502
 * callees: none
 */

void __thiscall GameClient::Seat::SetCameraLocRot(GameClient::Seat *this, const struct Matrix *a2)
{
  qmemcpy((char *)this + 204, a2, 0x40u);
}
