/*
 * func-name: sub_100127C0
 * func-address: 0x100127c0
 * callers: 0x10013520, 0x10013830, 0x10014bf0, 0x1002fe40, 0x10031140, 0x10173030
 * callees: 0x10011510
 */

int __thiscall sub_100127C0(int this, int a2)
{
  std::string::string(this, a2);
  std::string::string(this + 28, a2 + 28);
  *(_DWORD *)(this + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(this + 60) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(this + 68) = 0;
  *(_DWORD *)(this + 72) = 0;
  *(_DWORD *)(this + 76) = 0;
  *(_BYTE *)(this + 80) = *(_BYTE *)(a2 + 80);
  sub_10011510(this + 64, a2 + 64);
  return this;
}
