/*
 * func-name: ??0LaserParticleSystem@@QAE@ABV0@@Z_0
 * func-address: 0x10086710
 * callers: 0x10016ea0
 * callees: 0x1001a933
 */

LaserParticleSystem *__thiscall LaserParticleSystem::LaserParticleSystem(
        LaserParticleSystem *this,
        const struct LaserParticleSystem *a2)
{
  ParticleSystem::ParticleSystem(this, a2);
  *(_DWORD *)this = &LaserParticleSystem::`vftable';
  *((float *)this + 89) = *((float *)a2 + 89);
  *((float *)this + 90) = *((float *)a2 + 90);
  *((float *)this + 91) = *((float *)a2 + 91);
  *((float *)this + 92) = *((float *)a2 + 92);
  *((_BYTE *)this + 372) = *((_BYTE *)a2 + 372);
  *((_DWORD *)this + 94) = *((_DWORD *)a2 + 94);
  *((_DWORD *)this + 95) = *((_DWORD *)a2 + 95);
  *((_DWORD *)this + 96) = *((_DWORD *)a2 + 96);
  *((_DWORD *)this + 97) = *((_DWORD *)a2 + 97);
  *((_DWORD *)this + 98) = *((_DWORD *)a2 + 98);
  *((_DWORD *)this + 99) = *((_DWORD *)a2 + 99);
  *((_BYTE *)this + 400) = *((_BYTE *)a2 + 400);
  *((float *)this + 101) = *((float *)a2 + 101);
  *((_DWORD *)this + 102) = *((_DWORD *)a2 + 102);
  *((_DWORD *)this + 103) = *((_DWORD *)a2 + 103);
  *((_DWORD *)this + 104) = *((_DWORD *)a2 + 104);
  return this;
}
