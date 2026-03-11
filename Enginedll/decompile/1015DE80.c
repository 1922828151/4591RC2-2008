/*
 * func-name: sub_1015DE80
 * func-address: 0x1015de80
 * callers: 0x1007fd50, 0x10169d00
 * callees: 0x10136140, 0x101a252e
 */

int __thiscall sub_1015DE80(int this, const RECT *a2)
{
  struct IDirect3DTexture9 *Texture; // eax
  int result; // eax
  LONG top; // eax
  int v6; // edi
  int v7; // ebx
  struct IDirect3DTexture9 *v8; // eax
  _DWORD v9[2]; // [esp+14h] [ebp-8h] BYREF

  Texture = Texture::GetTexture(*(Texture **)(this + 28));
  result = Texture->lpVtbl->LockRect(Texture, 0, (D3DLOCKED_RECT *)v9, a2, 16);
  if ( !result )
  {
    top = a2->top;
    v6 = 4 * (a2->left + top * *(_DWORD *)(*(_DWORD *)(this + 28) + 80));
    v7 = 0;
    if ( a2->bottom - top > 0 )
    {
      do
      {
        memcpy(
          (void *)(v6 + *(_DWORD *)(this + 48) + 4 * v7 * *(_DWORD *)(*(_DWORD *)(this + 28) + 80)),
          (const void *)(v9[1] + v7 * v9[0]),
          4 * (a2->right - a2->left));
        ++v7;
      }
      while ( v7 < a2->bottom - a2->top );
    }
    v8 = Texture::GetTexture(*(Texture **)(this + 28));
    return v8->lpVtbl->UnlockRect(v8, 0);
  }
  return result;
}
