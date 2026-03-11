/*
 * func-name: sub_1007FD50
 * func-address: 0x1007fd50
 * callers: 0x1008e470
 * callees: 0x10136140, 0x1015de80, 0x101a252e
 */

void __thiscall sub_1007FD50(_DWORD *this)
{
  struct IDirect3DTexture9 *Texture; // eax
  int v3; // ecx
  int i; // edi
  struct IDirect3DTexture9 *v5; // eax
  _DWORD v6[2]; // [esp+14h] [ebp-8h] BYREF

  if ( this[4] )
  {
    Texture = Texture::GetTexture(*(Texture **)(this[5] + 28));
    if ( !Texture->lpVtbl->LockRect(Texture, 0, (D3DLOCKED_RECT *)v6, 0, 0) )
    {
      v3 = this[1];
      for ( i = 0; i < this[3] - v3; ++i )
      {
        memcpy(
          (void *)(v6[1] + v6[0] * (i + v3) + 4 * *this),
          (const void *)(*(_DWORD *)this[4] + 4 * i * (this[2] - *this)),
          4 * (this[2] - *this));
        v3 = this[1];
      }
      v5 = Texture::GetTexture(*(Texture **)(this[5] + 28));
      v5->lpVtbl->UnlockRect(v5, 0);
      sub_1015DE80(this);
    }
  }
}
