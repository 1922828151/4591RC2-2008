/*
 * func-name: ??4TextureManager@@QAEAAV0@ABV0@@Z
 * func-address: 0x100992f0
 * callers: none
 * callees: none
 */

int __thiscall TextureManager::operator=(int this, int a2)
{
  *(_BYTE *)(this + 4) = *(_BYTE *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  std::string::operator=(this + 12, a2 + 12);
  *(_BYTE *)(this + 40) = *(_BYTE *)(a2 + 40);
  *(float *)(this + 44) = *(float *)(a2 + 44);
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(this + 52) = *(_DWORD *)(a2 + 52);
  *(_BYTE *)(this + 56) = *(_BYTE *)(a2 + 56);
  return this;
}
