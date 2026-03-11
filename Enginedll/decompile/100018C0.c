/*
 * func-name: ??4XMLSystem@@QAEAAV0@ABV0@@Z
 * func-address: 0x100018c0
 * callers: 0x10036960, 0x100d2b50
 * callees: none
 */

int __thiscall XMLSystem::operator=(int this, int a2)
{
  std::string::operator=(this, a2);
  *(_BYTE *)(this + 28) = *(_BYTE *)(a2 + 28);
  *(_BYTE *)(this + 29) = *(_BYTE *)(a2 + 29);
  *(_BYTE *)(this + 30) = *(_BYTE *)(a2 + 30);
  *(_BYTE *)(this + 31) = *(_BYTE *)(a2 + 31);
  std::string::operator=(this + 32, a2 + 32);
  *(_DWORD *)(this + 60) = *(_DWORD *)(a2 + 60);
  *(_BYTE *)(this + 64) = *(_BYTE *)(a2 + 64);
  *(_BYTE *)(this + 65) = *(_BYTE *)(a2 + 65);
  *(_BYTE *)(this + 66) = *(_BYTE *)(a2 + 66);
  *(_BYTE *)(this + 67) = *(_BYTE *)(a2 + 67);
  *(_BYTE *)(this + 68) = *(_BYTE *)(a2 + 68);
  *(_DWORD *)(this + 72) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 76);
  *(_DWORD *)(this + 80) = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(this + 84) = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(this + 88) = *(_DWORD *)(a2 + 88);
  return this;
}
