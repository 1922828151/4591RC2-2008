/*
 * func-name: ?IsStopSpawn@Effect_ParticleSystem@@UAE_NXZ_0
 * func-address: 0x10090320
 * callers: 0x10010578
 * callees: none
 */

bool __thiscall Effect_ParticleSystem::IsStopSpawn(Effect_ParticleSystem *this)
{
  int v1; // ecx

  v1 = *((_DWORD *)this + 263);
  if ( v1 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 20))(v1);
  else
    return 0;
}
