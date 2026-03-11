/*
 * func-name: ??0TraceLineSystemEx@@QAE@PAVWorld@@HKMPAVTexture@@W4BlendMode@@@Z_0
 * func-address: 0x100998f0
 * callers: 0x100180c5
 * callees: 0x10008e09
 */

float *__thiscall TraceLineSystemEx::TraceLineSystemEx(float *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  float *result; // eax

  TraceLineSystem::TraceLineSystem(a2, a3, a4, a5, a6, a7);
  this[88] = 0.0;
  *(_DWORD *)this = &TraceLineSystemEx::`vftable';
  *((_BYTE *)this + 372) = 0;
  this[89] = 1.0;
  result = this;
  this[90] = 0.0;
  this[92] = 0.1;
  return result;
}
