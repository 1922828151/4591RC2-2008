/*
 * func-name: ??0RandomTextureParticles@@QAE@ABV0@@Z_0
 * func-address: 0x10086500
 * callers: 0x1000d567
 * callees: 0x100056c8, 0x100065e1, 0x1001a933
 */

RandomTextureParticles *__thiscall RandomTextureParticles::RandomTextureParticles(
        RandomTextureParticles *this,
        const struct RandomTextureParticles *a2)
{
  ParticleSystem::ParticleSystem(this, a2);
  *(_DWORD *)this = &RandomTextureParticles::`vftable';
  sub_100056C8((int)a2 + 356);
  std::vector<Material *>::vector<Material *>((char *)this + 372, (char *)a2 + 372);
  sub_100065E1((int)a2 + 388);
  *((_BYTE *)this + 404) = *((_BYTE *)a2 + 404);
  *((_BYTE *)this + 405) = *((_BYTE *)a2 + 405);
  *((_DWORD *)this + 102) = *((_DWORD *)a2 + 102);
  return this;
}
