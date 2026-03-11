/*
 * func-name: sub_100F1A00
 * func-address: 0x100f1a00
 * callers: 0x1001a974
 * callees: none
 */

int __thiscall sub_100F1A00(int this)
{
  std::string::string((void *)this);
  std::string::string((void *)(this + 28));
  *(_DWORD *)(this + 60) = 0;
  *(_DWORD *)(this + 64) = 0;
  *(_DWORD *)(this + 68) = 0;
  *(_DWORD *)(this + 76) = 0;
  *(_DWORD *)(this + 80) = 0;
  *(_DWORD *)(this + 84) = 0;
  *(_DWORD *)(this + 88) = 0;
  *(_BYTE *)(this + 92) = 0;
  return this;
}
