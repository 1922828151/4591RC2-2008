/*
 * func-name: ??4RandomTextureParticlesEx@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x10086dd0
 * callers: 0x10014d8f
 * callees: 0x100048fe
 */

int __thiscall RandomTextureParticlesEx::operator=(int this, int a2)
{
  RandomTextureParticles::operator=(a2);
  *(float *)(this + 412) = *(float *)(a2 + 412);
  *(float *)(this + 416) = *(float *)(a2 + 416);
  *(float *)(this + 420) = *(float *)(a2 + 420);
  *(_BYTE *)(this + 424) = *(_BYTE *)(a2 + 424);
  return this;
}
