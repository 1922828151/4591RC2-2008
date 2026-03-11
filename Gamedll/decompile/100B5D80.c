/*
 * func-name: ?SetProperties@ParticleTrail@@QAEXM_NW4BlendMode@@MMVVector@@2MMMMMKM@Z_0
 * func-address: 0x100b5d80
 * callers: 0x10002f9f
 * callees: none
 */

int __thiscall ParticleTrail::SetProperties(
        int this,
        float a2,
        char a3,
        int a4,
        float a5,
        float a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        float a13,
        float a14,
        float a15,
        float a16,
        float a17,
        int a18,
        float a19)
{
  int result; // eax

  *(float *)(this + 220) = a2;
  *(_BYTE *)(this + 232) = a3;
  *(float *)(this + 260) = a5;
  *(_DWORD *)(this + 268) = a7;
  *(float *)(this + 264) = a6;
  *(_DWORD *)(this + 256) = a4;
  *(float *)(this + 292) = a13;
  *(_DWORD *)(this + 272) = a8;
  *(float *)(this + 296) = a14;
  *(_DWORD *)(this + 276) = a9;
  *(float *)(this + 300) = a15;
  *(_DWORD *)(this + 280) = a10;
  *(float *)(this + 304) = a16;
  *(_DWORD *)(this + 284) = a11;
  result = a18;
  *(float *)(this + 308) = a17;
  *(_DWORD *)(this + 288) = a12;
  *(float *)(this + 316) = a19;
  *(_DWORD *)(this + 312) = a18;
  return result;
}
