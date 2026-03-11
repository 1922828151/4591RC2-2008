/*
 * func-name: sub_100F64F0
 * func-address: 0x100f64f0
 * callers: 0x100f4ca0, 0x100f4f50
 * callees: none
 */

int __thiscall sub_100F64F0(int this)
{
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 40) = 0;
  std::string::string(this + 56);
  *(float *)(this + 20) = 4800.0;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 48) = 0;
  *(_DWORD *)(this + 44) = 1;
  return this;
}
