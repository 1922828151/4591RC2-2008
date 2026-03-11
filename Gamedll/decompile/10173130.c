/*
 * func-name: ?CanUseItem@Robot@GameClient@@QAE_NXZ_0
 * func-address: 0x10173130
 * callers: 0x1001a019
 * callees: 0x10006a19
 */

bool __thiscall GameClient::Robot::CanUseItem(GameClient::Robot *this)
{
  return !*((_DWORD *)this + 90)
      && (*((_DWORD *)this + 92) & 0x400) == 0
      && !(*(unsigned __int8 (__thiscall **)(GameClient::Robot *, int))(*(_DWORD *)this + 52))(this, 4)
      && !(*(unsigned __int8 (__thiscall **)(GameClient::Robot *, int))(*(_DWORD *)this + 52))(this, 1)
      && !(*(unsigned __int8 (__thiscall **)(GameClient::Robot *, int))(*(_DWORD *)this + 52))(this, 8)
      && (!GameClient::WorldObject::IsLocal(this) || *(float *)(*((_DWORD *)this + 5) + 300) <= 0.0);
}
