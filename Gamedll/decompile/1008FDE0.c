/*
 * func-name: ??4Effect_ParticleSystemEx@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x1008fde0
 * callers: 0x10012be8
 * callees: 0x1000871a
 */

int __thiscall Effect_ParticleSystemEx::operator=(int this, int a2)
{
  Effect_ParticleSystem::operator=(a2);
  *(float *)(this + 1280) = *(float *)(a2 + 1280);
  *(float *)(this + 1284) = *(float *)(a2 + 1284);
  *(float *)(this + 1288) = *(float *)(a2 + 1288);
  *(_BYTE *)(this + 1292) = *(_BYTE *)(a2 + 1292);
  *(_BYTE *)(this + 1293) = *(_BYTE *)(a2 + 1293);
  *(float *)(this + 1296) = *(float *)(a2 + 1296);
  return this;
}
