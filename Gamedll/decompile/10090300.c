/*
 * func-name: ?StopSpawningParticles@Effect_ParticleSystem@@UAEXXZ_0
 * func-address: 0x10090300
 * callers: 0x10005dc6
 * callees: none
 */

void __thiscall Effect_ParticleSystem::StopSpawningParticles(Effect_ParticleSystem *this)
{
  int v1; // ecx

  v1 = *((_DWORD *)this + 263);
  if ( v1 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 16))(v1);
}
