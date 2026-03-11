/*
 * func-name: ??1RandomTextureParticles@@UAE@XZ_0
 * func-address: 0x10085880
 * callers: 0x1001682e
 * callees: 0x1000b8ca, 0x102c9d50
 */

void __thiscall RandomTextureParticles::~RandomTextureParticles(RandomTextureParticles *this)
{
  void *v2; // eax

  v2 = (void *)*((_DWORD *)this + 98);
  if ( v2 )
    operator delete(v2);
  *((_DWORD *)this + 98) = 0;
  *((_DWORD *)this + 99) = 0;
  *((_DWORD *)this + 100) = 0;
  std::vector<Material *>::~vector<Material *>((char *)this + 372);
  if ( *((_DWORD *)this + 90) )
    operator delete(*((void **)this + 90));
  *((_DWORD *)this + 90) = 0;
  *((_DWORD *)this + 91) = 0;
  *((_DWORD *)this + 92) = 0;
  ParticleSystem::~ParticleSystem(this);
}
