/*
 * func-name: sub_100E27A0
 * func-address: 0x100e27a0
 * callers: 0x100e5360, 0x100e5d70
 * callees: none
 */

int __thiscall sub_100E27A0(int this)
{
  std::string::string(this + 24);
  std::string::string(this + 52);
  *(float *)(this + 16) = 1.1;
  *(_DWORD *)(this + 4) = 1;
  *(_BYTE *)(this + 9) = 1;
  *(_BYTE *)(this + 8) = 0;
  *(_BYTE *)(this + 20) = 0;
  *(_BYTE *)(this + 10) = 0;
  *(_DWORD *)(this + 12) = -1;
  return this;
}
