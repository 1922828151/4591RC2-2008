/*
 * func-name: ?StopSpawningParticles@Effect_Precipitation@@UAEXXZ_0
 * func-address: 0x100933a0
 * callers: 0x1000c6b7
 * callees: none
 */

void __thiscall Effect_Precipitation::StopSpawningParticles(Effect_Precipitation *this)
{
  int v2; // ecx

  v2 = *((_DWORD *)this + 324);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2);
  *((_BYTE *)this + 1404) = 1;
  Effect_ParticleSystem::StopSpawningParticles(this);
}
