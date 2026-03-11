/*
 * func-name: ?getBatchForWriting@FXManager@@SAHPAVFXSystem@@PAVTexture@@W4BlendMode@@@Z
 * func-address: 0x100a1910
 * callers: none
 * callees: 0x100a1460, 0x10136140
 */

int __cdecl FXManager::getBatchForWriting(int a1, Texture *a2, int a3)
{
  char *v3; // ecx
  int v4; // esi
  unsigned int v5; // edi
  int v6; // ebx
  struct IDirect3DTexture9 *Texture; // esi
  struct IDirect3DTexture9 *v8; // eax

  v3 = (char *)dword_1123D68C;
  v4 = dword_1123D690;
  v5 = 0;
  v6 = 0;
  while ( v3 && v5 < (v4 - (int)v3) / 20 )
  {
    if ( !*(_DWORD *)&v3[v6] )
    {
      if ( v5 >= (v4 - (int)v3) / 20 )
      {
        invalid_parameter_noinfo();
        v3 = (char *)dword_1123D68C;
      }
      Texture = Texture::GetTexture(*(Texture **)&v3[v6 + 4]);
      v8 = Texture::GetTexture(a2);
      v3 = (char *)dword_1123D68C;
      if ( v8 == Texture )
      {
        if ( !dword_1123D68C || (v4 = dword_1123D690, v5 >= (dword_1123D690 - (int)dword_1123D68C) / 20) )
        {
          invalid_parameter_noinfo();
          v4 = dword_1123D690;
          v3 = (char *)dword_1123D68C;
        }
        if ( a3 == *(_DWORD *)&v3[v6 + 8] )
        {
          if ( !v3 || v5 >= (v4 - (int)v3) / 20 )
          {
            invalid_parameter_noinfo();
            v4 = dword_1123D690;
            v3 = (char *)dword_1123D68C;
          }
          if ( *(_DWORD *)&v3[v6 + 16] <= 0x5DBu )
            return v5;
        }
      }
      else
      {
        v4 = dword_1123D690;
      }
    }
    ++v5;
    v6 += 20;
  }
  return FXManager::addNewBatch((int)a2, a3);
}
