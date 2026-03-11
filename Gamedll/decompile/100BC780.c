/*
 * func-name: ??0PhysicsParticles@@QAE@ABV0@@Z_0
 * func-address: 0x100bc780
 * callers: 0x10002347
 * callees: 0x1001a933
 */

PhysicsParticles *__thiscall PhysicsParticles::PhysicsParticles(
        PhysicsParticles *this,
        const struct PhysicsParticles *a2)
{
  PhysicsParticles *result; // eax

  ParticleSystem::ParticleSystem(this, a2);
  *(_DWORD *)this = &PhysicsParticles::`vftable';
  *((_BYTE *)this + 356) = *((_BYTE *)a2 + 356);
  *((_BYTE *)this + 357) = *((_BYTE *)a2 + 357);
  *((_DWORD *)this + 90) = *((_DWORD *)a2 + 90);
  *((_DWORD *)this + 91) = *((_DWORD *)a2 + 91);
  *((float *)this + 92) = *((float *)a2 + 92);
  result = this;
  *((float *)this + 93) = *((float *)a2 + 93);
  *((_DWORD *)this + 94) = *((_DWORD *)a2 + 94);
  *((float *)this + 95) = *((float *)a2 + 95);
  return result;
}
