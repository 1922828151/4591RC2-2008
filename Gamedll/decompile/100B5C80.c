/*
 * func-name: ?SetBillboardTexture@ParticleTrail@@QAEXPAVTexture@@W4BlendMode@@MMK@Z_0
 * func-address: 0x100b5c80
 * callers: 0x1000fcf4
 * callees: none
 */

unsigned int __thiscall ParticleTrail::SetBillboardTexture(
        int this,
        int a2,
        int a3,
        float a4,
        float a5,
        unsigned int a6)
{
  unsigned int result; // eax

  *(float *)(this + 336) = a4;
  *(_DWORD *)(this + 324) = a2;
  *(float *)(this + 340) = a5;
  *(_DWORD *)(this + 344) = a6;
  result = HIBYTE(a6);
  *(_DWORD *)(this + 332) = a3;
  *(float *)(this + 348) = (double)HIBYTE(a6) / 255.0;
  return result;
}
