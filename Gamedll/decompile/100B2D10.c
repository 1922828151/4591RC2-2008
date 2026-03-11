/*
 * func-name: ??0RandomTextureParticles@@QAE@PAVWorld@@KMHHAAVVector@@11MMMMMMMM_NAAV?$vector@PAVTexture@@V?$allocator@PAVTexture@@@std@@@std@@W4BlendMode@@@Z_0
 * func-address: 0x100b2d10
 * callers: 0x10013908
 * callees: 0x100074aa, 0x1000a41b, 0x1000b52d, 0x1001302a
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
        int a19,
        int a20)
{
  int v21; // eax
  int v22; // edi
  float v24[3]; // [esp+6Ch] [ebp-18h] BYREF
  int v25; // [esp+80h] [ebp-4h]

  v24[0] = 0.0;
  v24[1] = 0.0;
  v24[2] = 0.0;
  ParticleSystem::ParticleSystem(
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    (int)v24,
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
    a20);
  *(_DWORD *)this = &RandomTextureParticles::`vftable';
  v25 = 0;
  *((_DWORD *)this + 90) = 0;
  *((_DWORD *)this + 91) = 0;
  *((_DWORD *)this + 92) = 0;
  LOBYTE(v25) = 1;
  std::vector<Material *>::vector<Material *>((char *)this + 372);
  *((_DWORD *)this + 98) = 0;
  *((_DWORD *)this + 99) = 0;
  *((_DWORD *)this + 100) = 0;
  LOBYTE(v25) = 3;
  *((_BYTE *)this + 404) = 0;
  *((_BYTE *)this + 405) = 1;
  *((_DWORD *)this + 102) = 0;
  sub_1000B52D(a19);
  v21 = *((_DWORD *)this + 90);
  if ( v21 )
    v22 = (*((_DWORD *)this + 91) - v21) >> 2;
  else
    v22 = 0;
  sub_1001302A((char *)this + 388, v22, 0);
  ParticleSystem::SetDefaults(this);
  return this;
}
