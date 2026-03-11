/*
 * func-name: ?LoadResource@Robot@GameClient@@UAE_NXZ_0
 * func-address: 0x10173d10
 * callers: 0x10004c64
 * callees: 0x10006a19, 0x10016040
 */

bool __thiscall GameClient::Robot::LoadResource(GameClient::Robot *this)
{
  if ( GameClient::WorldObject::IsLocal(this) && !*((_DWORD *)this + 46) )
    GameClient::Robot::CreateNxActorTrigger(this);
  (*(void (__thiscall **)(GameClient::Robot *, char *))(*(_DWORD *)this + 36))(this, (char *)this + 24);
  return GameClient::WorldObject::LoadResource(this);
}
