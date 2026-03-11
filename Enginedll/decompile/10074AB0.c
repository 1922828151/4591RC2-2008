/*
 * func-name: ??4GUISystem@@QAEAAV0@ABV0@@Z
 * func-address: 0x10074ab0
 * callers: none
 * callees: 0x1006eed0, 0x10070d30
 */

int __thiscall GUISystem::operator=(int this, int a2)
{
  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(_BYTE *)(this + 8) = *(_BYTE *)(a2 + 8);
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12);
  sub_1006EED0(this + 16, a2 + 16);
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(this + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 40);
  *(_BYTE *)(this + 44) = *(_BYTE *)(a2 + 44);
  *(_BYTE *)(this + 45) = *(_BYTE *)(a2 + 45);
  *(_BYTE *)(this + 46) = *(_BYTE *)(a2 + 46);
  *(_BYTE *)(this + 47) = *(_BYTE *)(a2 + 47);
  *(float *)(this + 48) = *(float *)(a2 + 48);
  *(_DWORD *)(this + 52) = *(_DWORD *)(a2 + 52);
  sub_10070D30(this + 56, a2 + 56);
  return this;
}
