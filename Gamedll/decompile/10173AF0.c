/*
 * func-name: ?OnLeaveLand@RobotCallback@GameClient@@UAEXABVVector@@@Z_0
 * func-address: 0x10173af0
 * callers: 0x1000ceaf
 * callees: none
 */

void __thiscall GameClient::RobotCallback::OnLeaveLand(GameClient::RobotCallback *this, const struct Vector *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 1);
  if ( v2 )
    *(_DWORD *)(v2 + 368) &= ~0x80u;
}
