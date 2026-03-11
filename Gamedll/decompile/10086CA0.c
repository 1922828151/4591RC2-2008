/*
 * func-name: ??4ParticleSystemEx@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x10086ca0
 * callers: 0x1000532b
 * callees: 0x10007e19
 */

int __thiscall ParticleSystemEx::operator=(int this, int a2)
{
  ParticleSystem::operator=(a2);
  *(float *)(this + 356) = *(float *)(a2 + 356);
  *(float *)(this + 360) = *(float *)(a2 + 360);
  *(float *)(this + 364) = *(float *)(a2 + 364);
  *(_BYTE *)(this + 368) = *(_BYTE *)(a2 + 368);
  *(float *)(this + 372) = *(float *)(a2 + 372);
  *(_BYTE *)(this + 376) = *(_BYTE *)(a2 + 376);
  *(_BYTE *)(this + 377) = *(_BYTE *)(a2 + 377);
  *(float *)(this + 380) = *(float *)(a2 + 380);
  return this;
}
