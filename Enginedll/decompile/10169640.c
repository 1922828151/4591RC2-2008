/*
 * func-name: ?SaveMapBefore@Terrain@@UAEXXZ
 * func-address: 0x10169640
 * callers: none
 * callees: 0x10136140, 0x1015e8d0, 0x10168a40, 0x1017816a
 */

void __usercall Terrain::SaveMapBefore(Terrain *this@<ecx>, int a2@<edi>)
{
  unsigned int v3; // ebx
  int i; // ebp
  int v5; // eax
  int v6; // eax
  Texture *v7; // eax
  _DWORD *v8; // edi
  struct IDirect3DTexture9 *Texture; // eax

  Terrain::RebuildMaterialBlock(this, a2, (int)this);
  v3 = 0;
  for ( i = 0; ; i += 52 )
  {
    v5 = *((_DWORD *)this + 307);
    if ( !v5 || v3 >= (*((_DWORD *)this + 308) - v5) / 52 )
      break;
    v6 = *((_DWORD *)this + 307);
    if ( !v6 || v3 >= (*((_DWORD *)this + 308) - v6) / 52 )
      invalid_parameter_noinfo();
    v7 = *(Texture **)(i + *((_DWORD *)this + 307) + 28);
    if ( v7 )
    {
      if ( *((_DWORD *)v7 + 31) < 0x10u )
        v8 = (_DWORD *)((char *)v7 + 104);
      else
        v8 = (_DWORD *)*((_DWORD *)v7 + 26);
      Texture = Texture::GetTexture(v7);
      D3DXSaveTextureToFileA(v8, 4, Texture, 0);
    }
    ++v3;
  }
  Terrain::ForceComplete(this, 1);
  Actor::SaveMapBefore(this);
}
