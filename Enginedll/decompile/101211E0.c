/*
 * func-name: ?SetUsedTextures@ShaderManager@@IAEXK@Z
 * func-address: 0x101211e0
 * callers: 0x10121d10, 0x10121df0, 0x10125a30
 * callees: 0x10136140
 */

void __thiscall ShaderManager::SetUsedTextures(ShaderManager *this, unsigned int a2)
{
  unsigned int v2; // edi
  int v4; // ecx
  int v5; // ecx
  _DWORD *v6; // ebx
  int v7; // ecx
  int (__stdcall **v8)(_DWORD *, _DWORD, int); // edi
  int v9; // eax
  int v10; // ebx
  int v11; // ecx
  _DWORD *v12; // ebp
  int v13; // ecx
  void (__stdcall **v14)(_DWORD *, int, struct IDirect3DTexture9 *); // edi
  struct IDirect3DTexture9 *Texture; // eax
  int i; // [esp+18h] [ebp-8h]
  unsigned int v17; // [esp+1Ch] [ebp-4h]

  v2 = 0;
  for ( i = 0; ; i += 32 )
  {
    v4 = *((_DWORD *)this + 26);
    v17 = v2;
    if ( !v4 || v2 >= (*((_DWORD *)this + 27) - v4) >> 5 )
      break;
    if ( (unsigned __int8)std::operator!=<char>(i + *((_DWORD *)this + 26) + 4, &unk_101C9C37) )
    {
      v5 = *((_DWORD *)this + 30);
      if ( !v5 || a2 >= (*((_DWORD *)this + 31) - v5) >> 5 )
        invalid_parameter_noinfo();
      v6 = *(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 30) + 32 * a2 + 28) + 16);
      v7 = *((_DWORD *)this + 26);
      if ( !v7 || v2 >= (*((_DWORD *)this + 27) - v7) >> 5 )
        invalid_parameter_noinfo();
      v8 = (int (__stdcall **)(_DWORD *, _DWORD, int))(*v6 + 36);
      v9 = std::string::c_str(i + *((_DWORD *)this + 26) + 4);
      v10 = (*v8)(v6, 0, v9);
      if ( v10 )
      {
        v11 = *((_DWORD *)this + 30);
        if ( !v11 || a2 >= (*((_DWORD *)this + 31) - v11) >> 5 )
          invalid_parameter_noinfo();
        v12 = *(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 30) + 32 * a2 + 28) + 16);
        v13 = *((_DWORD *)this + 26);
        if ( !v13 || v17 >= (*((_DWORD *)this + 27) - v13) >> 5 )
          invalid_parameter_noinfo();
        v14 = (void (__stdcall **)(_DWORD *, int, struct IDirect3DTexture9 *))(*v12 + 208);
        Texture = Texture::GetTexture(*(Texture **)(i + *((_DWORD *)this + 26)));
        (*v14)(v12, v10, Texture);
      }
      v2 = v17;
    }
    ++v2;
  }
}
