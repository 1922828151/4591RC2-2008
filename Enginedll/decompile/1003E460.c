/*
 * func-name: ??4XFileLoad@@QAEAAV0@ABV0@@Z
 * func-address: 0x1003e460
 * callers: none
 * callees: 0x1000ce20, 0x1000e6c0
 */

int __thiscall XFileLoad::operator=(int this, int a2)
{
  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  sub_1000E6C0(this + 12, a2 + 12);
  std::vector<Material *>::operator=(this + 28, a2 + 28);
  *(_BYTE *)(this + 44) = *(_BYTE *)(a2 + 44);
  std::string::operator=(this + 48, a2 + 48);
  *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 76);
  return this;
}
