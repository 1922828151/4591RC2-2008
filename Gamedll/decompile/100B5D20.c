/*
 * func-name: ?SetBillboardMaterial@ParticleTrail@@QAEXPAVMaterial@@W4BlendMode@@MMK@Z_0
 * func-address: 0x100b5d20
 * callers: 0x100113e2
 * callees: none
 */

unsigned int __thiscall ParticleTrail::SetBillboardMaterial(
        int this,
        int a2,
        int a3,
        float a4,
        float a5,
        unsigned int a6)
{
  unsigned int result; // eax

  *(float *)(this + 336) = a4;
  *(_DWORD *)(this + 328) = a2;
  *(float *)(this + 340) = a5;
  *(_DWORD *)(this + 344) = a6;
  result = HIBYTE(a6);
  *(_DWORD *)(this + 332) = a3;
  *(float *)(this + 348) = (double)HIBYTE(a6) / 255.0;
  return result;
}
