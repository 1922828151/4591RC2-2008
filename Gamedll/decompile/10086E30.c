/*
 * func-name: ??4BouncyParticles@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x10086e30
 * callers: 0x1001319c
 * callees: 0x10007e19
 */

int __thiscall BouncyParticles::operator=(int this, int a2)
{
  int result; // eax

  ParticleSystem::operator=(a2);
  *(_DWORD *)(this + 356) = *(_DWORD *)(a2 + 356);
  *(_DWORD *)(this + 360) = *(_DWORD *)(a2 + 360);
  *(_DWORD *)(this + 364) = *(_DWORD *)(a2 + 364);
  *(_DWORD *)(this + 368) = *(_DWORD *)(a2 + 368);
  *(_DWORD *)(this + 372) = *(_DWORD *)(a2 + 372);
  *(_DWORD *)(this + 376) = *(_DWORD *)(a2 + 376);
  *(_BYTE *)(this + 380) = *(_BYTE *)(a2 + 380);
  *(float *)(this + 384) = *(float *)(a2 + 384);
  result = this;
  *(float *)(this + 388) = *(float *)(a2 + 388);
  *(float *)(this + 392) = *(float *)(a2 + 392);
  return result;
}
