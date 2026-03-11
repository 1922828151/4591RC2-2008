/*
 * func-name: ?SetFog@World@@QAEXUFloatColor@@MMM@Z
 * func-address: 0x101372b0
 * callers: 0x10003130, 0x10041980, 0x1012d370
 * callees: none
 */

int __thiscall World::SetFog(int this, int a2, int a3, int a4, int a5, float a6, float a7, float a8)
{
  int result; // eax

  *(float *)(this + 40) = a6;
  *(_DWORD *)(this + 24) = a2;
  result = a4;
  *(float *)(this + 48) = a7;
  *(_DWORD *)(this + 28) = a3;
  *(float *)(this + 56) = a8;
  *(_DWORD *)(this + 32) = a4;
  *(_DWORD *)(this + 36) = a5;
  return result;
}
