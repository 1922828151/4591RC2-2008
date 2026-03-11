/*
 * func-name: ?SetParticleDefaults@RandomTexturePhysicsParticles@@UAEXAAVParticle@@@Z_0
 * func-address: 0x100b9fd0
 * callers: 0x1000ee76
 * callees: 0x1000e90d
 */

void __thiscall RandomTexturePhysicsParticles::SetParticleDefaults(
        RandomTexturePhysicsParticles *this,
        struct Particle *a2)
{
  int v3; // eax
  unsigned int v4; // esi

  PhysicsParticles::SetParticleDefaults(this, a2);
  v3 = *((_DWORD *)this + 97);
  if ( v3 )
  {
    v4 = (*((_DWORD *)this + 98) - v3) >> 2;
    *((_DWORD *)a2 + 22) = rand() % v4;
  }
  else
  {
    *((_DWORD *)a2 + 22) = rand() % 0u;
  }
}
