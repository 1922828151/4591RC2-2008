/*
 * func-name: sub_1009D040
 * func-address: 0x1009d040
 * callers: none
 * callees: 0x10136140, 0x10136360, 0x10136400, 0x10178122
 */

int __thiscall sub_1009D040(_DWORD *this)
{
  Texture *v2; // edi
  struct IDirect3DTexture9 *Texture; // eax
  int v4; // eax

  v2 = (Texture *)(this + 1);
  Texture::Destroy((Texture *)(this + 1));
  Texture::CreateBlank(v2, 1, this[41], this[42], this[43], 0);
  Texture = Texture::GetTexture(v2);
  v4 = D3DXFillTexture(Texture, sub_1009CFE0, this);
  return v4 >= 0 ? 0 : v4;
}
