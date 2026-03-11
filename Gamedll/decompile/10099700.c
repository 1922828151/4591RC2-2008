/*
 * func-name: ??0TraceLineSystemEx@@QAE@PAVWorld@@KMHHAAVVector@@MM11MMMMMMMMM_NPAVTexture@@W4BlendMode@@@Z_0
 * func-address: 0x10099700
 * callers: 0x100104c4
 * callees: 0x10016e28
 */

float *__thiscall TraceLineSystemEx::TraceLineSystemEx(
        float *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        float a8,
        float a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        float a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23)
{
  float *result; // eax

  TraceLineSystem::TraceLineSystem(
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a10,
    a11,
    a12,
    a13,
    a14,
    a16,
    a17,
    a18,
    a19,
    a20,
    a21,
    a22,
    a23);
  this[88] = a8;
  *(_DWORD *)this = &TraceLineSystemEx::`vftable';
  *((_BYTE *)this + 372) = 0;
  this[89] = a9;
  result = this;
  this[90] = a15;
  this[92] = 0.1;
  return result;
}
