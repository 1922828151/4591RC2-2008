/*
 * func-name: sub_1009D150
 * func-address: 0x1009d150
 * callers: none
 * callees: 0x100956d0, 0x10136140, 0x10136360, 0x10136400, 0x10178128, 0x1017812e, 0x1017eaef
 */

int __thiscall sub_1009D150(_DWORD *this)
{
  Texture *v2; // esi
  struct IDirect3DTexture9 *Texture; // eax
  int v4; // eax
  const char *v5; // eax
  struct IDirect3DTexture9 *v6; // eax

  v2 = (Texture *)(this + 1);
  Texture::Destroy((Texture *)(this + 1));
  Texture::CreateBlank(v2, 4, this[41], this[42], 0, 0);
  if ( Texture::GetTexture(v2) )
  {
    Texture = Texture::GetTexture(v2);
    v4 = D3DXFillCubeTexture(Texture, sub_1009D0F0, this);
    if ( v4 < 0 )
    {
      v5 = (const char *)sub_1017EAEF(v4);
      Error("FILL CUBE MAP FAILED : %s", v5);
    }
    v6 = Texture::GetTexture(v2);
    D3DXFilterTexture(v6, 0, -1, -1);
  }
  return 0;
}
