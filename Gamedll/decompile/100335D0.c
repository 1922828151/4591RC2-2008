/*
 * func-name: ?AddExploit@Robot@GameClient@@QAEXH@Z_0
 * func-address: 0x100335d0
 * callers: 0x1001a8c0
 * callees: none
 */

void __thiscall GameClient::Robot::AddExploit(GameClient::Robot *this, int a2)
{
  *((_DWORD *)this + 231) += a2;
}
