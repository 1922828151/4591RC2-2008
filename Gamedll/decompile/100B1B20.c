/*
 * func-name: ??0ParticleSystem@@QAE@PAVWorld@@KMHHAAVVector@@11_N1MMMMMMMMMM2PAVTexture@@W4BlendMode@@@Z_0
 * func-address: 0x100b1b20
 * callers: 0x100074aa
 * callees: 0x1000a41b, 0x10013b06, 0x10014966
 */

int __thiscall ParticleSystem::ParticleSystem(
        int this,
        struct World *a2,
        int a3,
        float a4,
        int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        char a10,
        _DWORD *a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        float a17,
        float a18,
        float a19,
        float a20,
        float a21,
        char a22,
        int a23,
        int a24)
{
  int v25; // eax
  int v26; // eax
  int result; // eax

  FXSystem::FXSystem((FXSystem *)this, a2);
  *(_DWORD *)this = &ParticleSystem::`vftable';
  *(_DWORD *)(this + 192) = 0;
  *(_DWORD *)(this + 196) = 0;
  *(_DWORD *)(this + 200) = 0;
  *(float *)(this + 232) = 0.0;
  *(float *)(this + 236) = 0.0;
  *(float *)(this + 240) = 0.0;
  *(float *)(this + 264) = 0.0;
  *(float *)(this + 268) = 0.0;
  *(float *)(this + 272) = 0.0;
  *(float *)(this + 304) = 0.0;
  *(float *)(this + 308) = 0.0;
  *(float *)(this + 312) = 0.0;
  *(float *)(this + 344) = 0.0;
  *(float *)(this + 348) = 0.0;
  *(float *)(this + 352) = 0.0;
  *(_DWORD *)(this + 176) = a23;
  *(float *)(this + 304) = 0.050000001;
  *(float *)(this + 312) = 0.050000001;
  *(_BYTE *)(this + 212) = 0;
  *(_BYTE *)(this + 316) = 0;
  *(_DWORD *)(this + 180) = 0;
  *(float *)(this + 308) = 0.0;
  *(float *)(this + 300) = 0.0;
  *(float *)(this + 280) = a19;
  *(float *)(this + 284) = 0.0;
  *(_DWORD *)(this + 20) = *a7;
  *(_DWORD *)(this + 24) = a7[1];
  *(_DWORD *)(this + 28) = a7[2];
  *(_DWORD *)(this + 320) = a3;
  *(_DWORD *)(this + 232) = *a8;
  *(_DWORD *)(this + 236) = a8[1];
  *(_DWORD *)(this + 240) = a8[2];
  *(_DWORD *)(this + 344) = *a9;
  *(_DWORD *)(this + 348) = a9[1];
  v25 = a9[2];
  *(float *)(this + 256) = a20;
  *(_DWORD *)(this + 352) = v25;
  *(float *)(this + 260) = a21;
  *(_BYTE *)(this + 340) = a10;
  *(_DWORD *)(this + 224) = a24;
  *(_DWORD *)(this + 204) = a5;
  *(_DWORD *)(this + 216) = a6;
  *(_DWORD *)(this + 264) = *a11;
  *(_DWORD *)(this + 268) = a11[1];
  v26 = a11[2];
  *(float *)(this + 244) = a13;
  *(_DWORD *)(this + 272) = v26;
  *(_DWORD *)(this + 328) = 0;
  *(float *)(this + 248) = a14;
  *(_BYTE *)(this + 317) = 1;
  *(float *)(this + 252) = a15;
  *(float *)(this + 296) = a16;
  *(float *)(this + 288) = a17;
  *(float *)(this + 292) = a18;
  *(float *)(this + 324) = 1.0;
  *(float *)(this + 276) = a12;
  *(float *)(this + 336) = 0.0;
  sub_10014966((void *)(this + 188), a6);
  if ( a22 )
    ParticleSystem::SetDefaultsMoving((ParticleSystem *)this);
  else
    ParticleSystem::SetDefaults((ParticleSystem *)this);
  *(_DWORD *)(this + 184) = 0;
  *(float *)(this + 228) = a4;
  result = this;
  *(float *)(this + 208) = 0.0;
  return result;
}
