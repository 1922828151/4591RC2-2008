/*
 * func-name: ??0RandomTextureParticlesEx@@QAE@ABV0@@Z_0
 * func-address: 0x100865f0
 * callers: 0x10018098
 * callees: 0x1000d567
 */

RandomTextureParticlesEx *__thiscall RandomTextureParticlesEx::RandomTextureParticlesEx(
        RandomTextureParticlesEx *this,
        const struct RandomTextureParticlesEx *a2)
{
  RandomTextureParticles::RandomTextureParticles(this, a2);
  *(_DWORD *)this = &RandomTextureParticlesEx::`vftable';
  *((float *)this + 103) = *((float *)a2 + 103);
  *((float *)this + 104) = *((float *)a2 + 104);
  *((float *)this + 105) = *((float *)a2 + 105);
  *((_BYTE *)this + 424) = *((_BYTE *)a2 + 424);
  return this;
}
