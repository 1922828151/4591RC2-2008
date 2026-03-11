/*
 * func-name: ?StartSpawningParticles@Effect_Precipitation@@UAEXXZ_0
 * func-address: 0x10093370
 * callers: 0x10016a22
 * callees: none
 */

void __thiscall Effect_Precipitation::StartSpawningParticles(Effect_Precipitation *this)
{
  int v2; // ecx

  v2 = *((_DWORD *)this + 324);
  if ( v2 )
    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v2 + 36))(1, 0.75);
  *((_BYTE *)this + 1404) = 0;
  Effect_ParticleSystem::StartSpawningParticles(this);
}
