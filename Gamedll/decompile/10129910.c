/*
 * func-name: sub_10129910
 * func-address: 0x10129910
 * callers: 0x100181b5
 * callees: 0x102c9d50
 */

void __thiscall sub_10129910(int this)
{
  Texture *v2; // edi
  void *v3; // edi
  unsigned int i; // edi
  void *v5; // ecx
  int v6; // eax
  int v7; // ecx
  void *v8; // ebp
  int v9; // ecx

  v2 = *(Texture **)(this + 88);
  if ( v2 )
  {
    Texture::~Texture(v2);
    operator delete(v2);
    *(_DWORD *)(this + 88) = 0;
  }
  v3 = *(void **)(this + 92);
  if ( v3 )
  {
    Texture::~Texture(*(Texture **)(this + 92));
    operator delete(v3);
    *(_DWORD *)(this + 92) = 0;
  }
  for ( i = 0; ; ++i )
  {
    v5 = *(void **)(this + 108);
    if ( !v5 || i >= (*(_DWORD *)(this + 112) - (int)v5) >> 3 )
      break;
    v6 = *(_DWORD *)(this + 108);
    if ( *(_DWORD *)(v6 + 8 * i + 4) )
    {
      if ( !v6 || i >= (*(_DWORD *)(this + 112) - v6) >> 3 )
        _invalid_parameter_noinfo();
      v7 = *(_DWORD *)(this + 108);
      v8 = *(void **)(v7 + 8 * i + 4);
      if ( v8 )
      {
        Texture::~Texture(*(Texture **)(v7 + 8 * i + 4));
        operator delete(v8);
      }
      v9 = *(_DWORD *)(this + 108);
      if ( !v9 || i >= (*(_DWORD *)(this + 112) - v9) >> 3 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(*(_DWORD *)(this + 108) + 8 * i + 4) = 0;
    }
  }
  if ( v5 )
    operator delete(v5);
  *(_DWORD *)(this + 108) = 0;
  *(_DWORD *)(this + 112) = 0;
  *(_DWORD *)(this + 116) = 0;
  std::string::~string((void *)(this + 56));
  std::string::~string((void *)(this + 28));
}
