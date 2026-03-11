/*
 * func-name: ??0RandomTextureParticles@@QAE@PAVWorld@@KMHHAAVVector@@11MMMMMMMM_NAAV?$vector@PAVMaterial@@V?$allocator@PAVMaterial@@@std@@@std@@@Z_0
 * func-address: 0x100b2b90
 * callers: 0x10004bab
 * callees: 0x100074aa, 0x1000a41b, 0x1001302a
 */

RandomTextureParticles *__thiscall RandomTextureParticles::RandomTextureParticles(
        RandomTextureParticles *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19)
{
  int v20; // eax
  float v22[3]; // [esp+6Ch] [ebp-18h] BYREF
  int v23; // [esp+80h] [ebp-4h]

  v22[0] = 0.0;
  v22[1] = 0.0;
  v22[2] = 0.0;
  ParticleSystem::ParticleSystem(
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    (int)v22,
    1,
    a9,
    a10,
    a11,
    a11,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    0,
    2);
  *(_DWORD *)this = &RandomTextureParticles::`vftable';
  v23 = 0;
  *((_DWORD *)this + 90) = 0;
  *((_DWORD *)this + 91) = 0;
  *((_DWORD *)this + 92) = 0;
  LOBYTE(v23) = 1;
  std::vector<Material *>::vector<Material *>((char *)this + 372);
  *((_DWORD *)this + 98) = 0;
  *((_DWORD *)this + 99) = 0;
  *((_DWORD *)this + 100) = 0;
  LOBYTE(v23) = 3;
  *((_BYTE *)this + 404) = 1;
  std::vector<Material *>::operator=((char *)this + 372, a19);
  v20 = std::vector<Material *>::size((char *)this + 372);
  sub_1001302A((char *)this + 388, v20, 0);
  ParticleSystem::SetDefaults(this);
  return this;
}
