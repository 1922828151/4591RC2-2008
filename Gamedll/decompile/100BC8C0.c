/*
 * func-name: ??4PhysicsParticles@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x100bc8c0
 * callers: 0x100018e8
 * callees: 0x10007e19
 */

int __thiscall PhysicsParticles::operator=(int this, int a2)
{
  int result; // eax

  ParticleSystem::operator=(a2);
  *(_BYTE *)(this + 356) = *(_BYTE *)(a2 + 356);
  *(_BYTE *)(this + 357) = *(_BYTE *)(a2 + 357);
  *(_DWORD *)(this + 360) = *(_DWORD *)(a2 + 360);
  *(_DWORD *)(this + 364) = *(_DWORD *)(a2 + 364);
  *(float *)(this + 368) = *(float *)(a2 + 368);
  result = this;
  *(float *)(this + 372) = *(float *)(a2 + 372);
  *(_DWORD *)(this + 376) = *(_DWORD *)(a2 + 376);
  *(float *)(this + 380) = *(float *)(a2 + 380);
  return result;
}
