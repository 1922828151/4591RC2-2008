/*
 * func-name: ??4Texture@@QAEAAV0@ABV0@@Z
 * func-address: 0x1000f220
 * callers: 0x10010180, 0x100154c0, 0x1002e5e0, 0x1005e1c0
 * callees: 0x1000d9a0
 */

int __thiscall Texture::operator=(int this, int a2)
{
  sub_1000D9A0(this, a2);
  *(float *)(this + 16) = *(float *)(a2 + 16);
  *(_BYTE *)(this + 20) = *(_BYTE *)(a2 + 20);
  *(_BYTE *)(this + 21) = *(_BYTE *)(a2 + 21);
  *(_BYTE *)(this + 22) = *(_BYTE *)(a2 + 22);
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24);
  std::string::operator=(this + 28, a2 + 28);
  *(_BYTE *)(this + 56) = *(_BYTE *)(a2 + 56);
  *(_BYTE *)(this + 57) = *(_BYTE *)(a2 + 57);
  *(_BYTE *)(this + 58) = *(_BYTE *)(a2 + 58);
  *(float *)(this + 60) = *(float *)(a2 + 60);
  *(float *)(this + 64) = *(float *)(a2 + 64);
  *(float *)(this + 68) = *(float *)(a2 + 68);
  *(float *)(this + 72) = *(float *)(a2 + 72);
  *(float *)(this + 76) = *(float *)(a2 + 76);
  *(_DWORD *)(this + 80) = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(this + 84) = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(this + 88) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(this + 92) = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(this + 96) = *(_DWORD *)(a2 + 96);
  std::string::operator=(this + 100, a2 + 100);
  std::string::operator=(this + 128, a2 + 128);
  return this;
}
