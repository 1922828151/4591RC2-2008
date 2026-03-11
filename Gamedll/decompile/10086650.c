/*
 * func-name: ??0BouncyParticles@@QAE@ABV0@@Z_0
 * func-address: 0x10086650
 * callers: 0x1000c7c0
 * callees: 0x1001a933
 */

BouncyParticles *__thiscall BouncyParticles::BouncyParticles(BouncyParticles *this, const struct BouncyParticles *a2)
{
  BouncyParticles *result; // eax

  ParticleSystem::ParticleSystem(this, a2);
  *(_DWORD *)this = &BouncyParticles::`vftable';
  *((_DWORD *)this + 89) = *((_DWORD *)a2 + 89);
  *((_DWORD *)this + 90) = *((_DWORD *)a2 + 90);
  *((_DWORD *)this + 91) = *((_DWORD *)a2 + 91);
  *((_DWORD *)this + 92) = *((_DWORD *)a2 + 92);
  *((_DWORD *)this + 93) = *((_DWORD *)a2 + 93);
  *((_DWORD *)this + 94) = *((_DWORD *)a2 + 94);
  *((_BYTE *)this + 380) = *((_BYTE *)a2 + 380);
  *((float *)this + 96) = *((float *)a2 + 96);
  result = this;
  *((float *)this + 97) = *((float *)a2 + 97);
  *((float *)this + 98) = *((float *)a2 + 98);
  return result;
}
