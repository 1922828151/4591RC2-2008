/*
 * func-name: ?Preload@Texture@@QAEXXZ
 * func-address: 0x101361a0
 * callers: none
 * callees: 0x10137000
 */

void __thiscall Texture::Preload(Texture *this)
{
  int v2; // eax
  struct TextureManager *v3; // eax
  int v4; // ecx
  unsigned int v5; // ebx
  struct TextureManager *v6; // edi
  int v7; // eax

  if ( *((_DWORD *)this + 6) != -1 )
  {
    v2 = *((_DWORD *)this + 1);
    if ( v2 )
    {
      if ( (*((_DWORD *)this + 2) - v2) >> 2 )
      {
        v3 = TextureManager::Instance();
        v4 = *((_DWORD *)this + 1);
        v5 = *((_DWORD *)this + 6);
        v6 = v3;
        if ( !v4 || v5 >= (*((_DWORD *)this + 2) - v4) >> 2 )
          invalid_parameter_noinfo();
        v7 = (*(int (__thiscall **)(struct TextureManager *, _DWORD))(*(_DWORD *)v6 + 16))(
               v6,
               *(_DWORD *)(*((_DWORD *)this + 1) + 4 * v5));
        if ( v7 )
          (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 36))(v7);
      }
    }
  }
}
