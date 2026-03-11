/*
 * func-name: ?OnEnterLand@RobotCallback@GameClient@@UAEXABVVector@@@Z_0
 * func-address: 0x10178010
 * callers: 0x100114b4
 * callees: none
 */

void __thiscall GameClient::RobotCallback::OnEnterLand(GameClient::RobotCallback *this, const struct Vector *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 1);
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 368) & 0x80) == 0 )
    {
      *(_DWORD *)(*((_DWORD *)this + 1) + 368) |= 0x80u;
      GameClient::Robot::Land(*((GameClient::Robot **)this + 1), a2);
    }
  }
}
