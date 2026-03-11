/*
 * func-name: sub_10014B00
 * func-address: 0x10014b00
 * callers: 0x100250d0
 * callees: 0x10014a90, 0x10035300
 */

int __thiscall sub_10014B00(int this, int a2)
{
  *(float *)(this + 12) = 2.0;
  *(_DWORD *)this = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  sub_10014A90((float *)this, *(_DWORD *)(a2 + 4));
  memcpy_0(*(void **)(this + 8), *(const void **)(a2 + 8), 4 * *(_DWORD *)this);
  *(_DWORD *)(this + 4) = *(_DWORD *)this;
  return this;
}
