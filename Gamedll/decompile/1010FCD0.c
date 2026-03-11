/*
 * func-name: ?SetHandOffsetLoc@CombinRobot@GameClient@@QAEXABVVector@@@Z_0
 * func-address: 0x1010fcd0
 * callers: 0x10002662
 * callees: none
 */

void __thiscall GameClient::CombinRobot::SetHandOffsetLoc(GameClient::CombinRobot *this, const struct Vector *a2)
{
  *((_DWORD *)this + 357) = *(_DWORD *)a2;
  *((_DWORD *)this + 358) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 359) = *((_DWORD *)a2 + 2);
}
