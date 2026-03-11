/*
 * func-name: ?CanUseSkill@Robot@GameClient@@UAE_NXZ_0
 * func-address: 0x10173410
 * callers: 0x100122f6
 * callees: 0x10006a19
 */

bool __thiscall GameClient::Robot::CanUseSkill(GameClient::Robot *this)
{
  int v2; // eax
  bool result; // al

  result = !*((_DWORD *)this + 90)
        && (v2 = *((_DWORD *)this + 92), (v2 & 0x40) == 0)
        && (v2 & 0x20) == 0
        && (v2 & 0x400) == 0
        && !(*(unsigned __int8 (__thiscall **)(GameClient::Robot *, int))(*(_DWORD *)this + 52))(this, 4)
        && !(*(unsigned __int8 (__thiscall **)(GameClient::Robot *, int))(*(_DWORD *)this + 52))(this, 1)
        && !(*(unsigned __int8 (__thiscall **)(GameClient::Robot *, int))(*(_DWORD *)this + 52))(this, 16)
        && !(*(unsigned __int8 (__thiscall **)(GameClient::Robot *, int))(*(_DWORD *)this + 52))(this, 8)
        && !(*(unsigned __int8 (__thiscall **)(GameClient::Robot *, int))(*(_DWORD *)this + 52))(this, 64)
        && (!*((_DWORD *)this + 57)
         || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 57) + 168))(*((_DWORD *)this + 57)))
        && (!GameClient::WorldObject::IsLocal(this) || *(float *)(*((_DWORD *)this + 5) + 300) <= 0.0);
  return result;
}
