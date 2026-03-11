/*
 * func-name: ?CanUseEstablishment@Robot@GameClient@@QAE_NXZ_0
 * func-address: 0x101731a0
 * callers: 0x10009a07
 * callees: 0x10006a19
 */

bool __thiscall GameClient::Robot::CanUseEstablishment(GameClient::Robot *this)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 92);
  return (v2 & 0x400) == 0
      && (v2 & 0x20) == 0
      && (v2 & 0x80) != 0
      && (v2 & 0x200) == 0
      && (!GameClient::WorldObject::IsLocal(this) || *(float *)(*((_DWORD *)this + 5) + 300) <= 0.0);
}
