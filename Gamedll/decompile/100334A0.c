/*
 * func-name: ?SetVelocity@Robot@GameClient@@QAEXABVVector@@@Z_0
 * func-address: 0x100334a0
 * callers: 0x10002be4
 * callees: none
 */

void __thiscall GameClient::Robot::SetVelocity(GameClient::Robot *this, const struct Vector *a2)
{
  *((_DWORD *)this + 188) = *(_DWORD *)a2;
  *((_DWORD *)this + 189) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 190) = *((_DWORD *)a2 + 2);
}
