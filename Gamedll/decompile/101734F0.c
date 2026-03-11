/*
 * func-name: ?GetSkillID@Robot@GameClient@@QBEKH@Z_0
 * func-address: 0x101734f0
 * callers: 0x10008fb2
 * callees: none
 */

unsigned int __thiscall GameClient::Robot::GetSkillID(GameClient::Robot *this, unsigned int a2)
{
  int v3; // eax

  if ( a2 < 2 && (v3 = *((_DWORD *)this + a2 + 55)) != 0 )
    return *(_DWORD *)(v3 + 12);
  else
    return -1;
}
