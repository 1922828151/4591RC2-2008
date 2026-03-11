/*
 * func-name: ??4ShadowEngine@@QAEAAV0@ABV0@@Z
 * func-address: 0x10010180
 * callers: none
 * callees: 0x1000e4f0, 0x1000f220
 */

int __thiscall ShadowEngine::operator=(int this, int a2)
{
  *(float *)(this + 4) = *(float *)(a2 + 4);
  sub_1000E4F0(this + 8, a2 + 8);
  Texture::operator=(this + 24, a2 + 24);
  *(_BYTE *)(this + 180) = *(_BYTE *)(a2 + 180);
  *(_BYTE *)(this + 181) = *(_BYTE *)(a2 + 181);
  *(_DWORD *)(this + 184) = *(_DWORD *)(a2 + 184);
  *(_DWORD *)(this + 188) = *(_DWORD *)(a2 + 188);
  return this;
}
