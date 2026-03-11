/*
 * func-name: ??4OBJLoad@@QAEAAV0@ABV0@@Z
 * func-address: 0x100367a0
 * callers: none
 * callees: 0x1000ce20, 0x1000e6c0
 */

int __thiscall OBJLoad::operator=(int this, int a2)
{
  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  sub_1000E6C0(this + 12, a2 + 12);
  std::vector<Material *>::operator=(this + 28, a2 + 28);
  *(_BYTE *)(this + 44) = *(_BYTE *)(a2 + 44);
  return this;
}
