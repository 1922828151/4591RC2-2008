/*
 * func-name: sub_100358C0
 * func-address: 0x100358c0
 * callers: 0x1000c3d8
 * callees: none
 */

int __thiscall sub_100358C0(float *this, float *a2)
{
  int result; // eax

  this[10] = *a2;
  this[11] = a2[1];
  result = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 12) = result;
  this[11] = 0.0;
  *((_DWORD *)this + 1) = 1;
  return result;
}
