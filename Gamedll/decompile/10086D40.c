/*
 * func-name: ??4RandomTextureParticles@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x10086d40
 * callers: 0x100048fe
 * callees: 0x10006a0a, 0x10007e19, 0x1000b52d
 */

int __thiscall RandomTextureParticles::operator=(int this, int a2)
{
  ParticleSystem::operator=(a2);
  sub_1000B52D(a2 + 356);
  std::vector<Material *>::operator=(this + 372, a2 + 372);
  sub_10006A0A(a2 + 388);
  *(_BYTE *)(this + 404) = *(_BYTE *)(a2 + 404);
  *(_BYTE *)(this + 405) = *(_BYTE *)(a2 + 405);
  *(_DWORD *)(this + 408) = *(_DWORD *)(a2 + 408);
  return this;
}
