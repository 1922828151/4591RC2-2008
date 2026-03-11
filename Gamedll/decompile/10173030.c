/*
 * func-name: ?GetStateActor@Robot@GameClient@@QAEPAVActor@@XZ_0
 * func-address: 0x10173030
 * callers: 0x100132c8
 * callees: none
 */

struct Actor *__thiscall GameClient::Robot::GetStateActor(GameClient::Robot *this)
{
  struct Actor *result; // eax

  result = (struct Actor *)*((_DWORD *)this + 43);
  if ( result )
    return (struct Actor *)*((_DWORD *)result + 278);
  return result;
}
