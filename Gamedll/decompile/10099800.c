/*
 * func-name: ??0TraceLineSystemEx@@QAE@PAVWorld@@KMHHAAVVector@@MM11MMMMMMMMM_NPAVMaterial@@@Z_0
 * func-address: 0x10099800
 * callers: 0x10011185
 * callees: 0x10003f4e
 */

TraceLineSystemEx *__thiscall TraceLineSystemEx::TraceLineSystemEx(
        TraceLineSystemEx *this,
        struct World *a2,
        float a3,
        float a4,
        int a5,
        int a6,
        struct Vector *a7,
        float a8,
        float a9,
        struct Vector *a10,
        struct Vector *a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        float a17,
        float a18,
        float a19,
        float a20,
        bool a21,
        struct Material *a22)
{
  TraceLineSystemEx *result; // eax

  TraceLineSystem::TraceLineSystem(
    this,
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
    a22);
  *((float *)this + 88) = a8;
  *(_DWORD *)this = &TraceLineSystemEx::`vftable';
  *((_BYTE *)this + 372) = 0;
  *((float *)this + 89) = a9;
  result = this;
  *((float *)this + 90) = a15;
  *((float *)this + 92) = 0.1;
  return result;
}
