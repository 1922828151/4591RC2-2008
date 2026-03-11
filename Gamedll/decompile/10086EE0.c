/*
 * func-name: ??4LaserParticleSystem@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x10086ee0
 * callers: 0x1000975a
 * callees: 0x10007e19
 */

int __thiscall LaserParticleSystem::operator=(int this, int a2)
{
  ParticleSystem::operator=(a2);
  *(float *)(this + 356) = *(float *)(a2 + 356);
  *(float *)(this + 360) = *(float *)(a2 + 360);
  *(float *)(this + 364) = *(float *)(a2 + 364);
  *(float *)(this + 368) = *(float *)(a2 + 368);
  *(_BYTE *)(this + 372) = *(_BYTE *)(a2 + 372);
  *(_DWORD *)(this + 376) = *(_DWORD *)(a2 + 376);
  *(_DWORD *)(this + 380) = *(_DWORD *)(a2 + 380);
  *(_DWORD *)(this + 384) = *(_DWORD *)(a2 + 384);
  *(_DWORD *)(this + 388) = *(_DWORD *)(a2 + 388);
  *(_DWORD *)(this + 392) = *(_DWORD *)(a2 + 392);
  *(_DWORD *)(this + 396) = *(_DWORD *)(a2 + 396);
  *(_BYTE *)(this + 400) = *(_BYTE *)(a2 + 400);
  *(float *)(this + 404) = *(float *)(a2 + 404);
  *(_DWORD *)(this + 408) = *(_DWORD *)(a2 + 408);
  *(_DWORD *)(this + 412) = *(_DWORD *)(a2 + 412);
  *(_DWORD *)(this + 416) = *(_DWORD *)(a2 + 416);
  return this;
}
