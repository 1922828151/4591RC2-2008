/*
 * func-name: ?Destroy@Texture@@QAEXXZ
 * func-address: 0x10136360
 * callers: 0x1000cb70, 0x1008b740, 0x1009d040, 0x1009d150, 0x1009d640, 0x10109980, 0x10117840, 0x10127fb0, 0x10136530, 0x10161a90
 * callees: 0x10012400, 0x10076ef0, 0x100971c0, 0x10137000
 */

void __thiscall Texture::Destroy(Texture *this)
{
  unsigned int i; // edi
  struct TextureManager *v3; // eax
  int v4; // ecx
  struct TextureManager *v5; // ebx

  Engine::Instance();
  if ( *((_DWORD *)this + 6) != -1 )
  {
    for ( i = 0; i < std::vector<Model *>::size(this); ++i )
    {
      v3 = TextureManager::Instance();
      v4 = *((_DWORD *)this + 1);
      v5 = v3;
      if ( !v4 || i >= (*((_DWORD *)this + 2) - v4) >> 2 )
        invalid_parameter_noinfo();
      (*(void (__thiscall **)(struct TextureManager *, _DWORD, Texture *))(*(_DWORD *)v5 + 36))(
        v5,
        *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i),
        this);
    }
  }
  *((_DWORD *)this + 6) = -1;
  sub_10012400(this, 0, 0);
  *((_BYTE *)this + 22) = 0;
  std::string::clear((char *)this + 100);
  std::string::clear((char *)this + 128);
  std::string::clear((char *)this + 28);
}
