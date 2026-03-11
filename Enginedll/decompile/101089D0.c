/*
 * func-name: sub_101089D0
 * func-address: 0x101089d0
 * callers: 0x10109510
 * callees: none
 */

int __thiscall sub_101089D0(int this, int a2)
{
  std::string::string(this, a2);
  std::string::string(this + 28, a2 + 28);
  *(_DWORD *)(this + 56) = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(this + 60) = *(_BYTE *)(a2 + 60);
  return this;
}
