/*
 * func-name: ??1Effect_MultiTexParticles@@UAE@XZ_0
 * func-address: 0x1008c870
 * callers: 0x100071c6
 * callees: 0x10009200, 0x102c9d50
 */

void __thiscall Effect_MultiTexParticles::~Effect_MultiTexParticles(Effect_MultiTexParticles *this)
{
  unsigned int v2; // edi
  char *v3; // esi
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  void *v7; // ebp
  void (__thiscall ***v8)(_DWORD, int); // ecx

  *(_DWORD *)this = &Effect_MultiTexParticles::`vftable';
  v2 = 0;
  v3 = (char *)this + 1236;
  while ( 1 )
  {
    v4 = *((_DWORD *)v3 + 1);
    if ( !v4 || v2 >= (*((_DWORD *)v3 + 2) - v4) >> 2 )
      break;
    v5 = *((_DWORD *)v3 + 1);
    if ( *(_DWORD *)(v5 + 4 * v2) )
    {
      if ( !v5 || v2 >= (*((_DWORD *)v3 + 2) - v5) >> 2 )
        _invalid_parameter_noinfo();
      v6 = *((_DWORD *)v3 + 1);
      v7 = *(void **)(v6 + 4 * v2);
      if ( v7 )
      {
        Texture::~Texture(*(Texture **)(v6 + 4 * v2));
        operator delete(v7);
      }
    }
    ++v2;
  }
  sub_10009200(v3, 0, 0);
  v8 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 315);
  if ( v8 )
  {
    (**v8)(v8, 1);
    *((_DWORD *)this + 315) = 0;
  }
  Precacher::PurgeModel((struct Model **)this + 179);
  if ( *((_DWORD *)v3 + 1) )
    operator delete(*((void **)v3 + 1));
  *((_DWORD *)v3 + 1) = 0;
  *((_DWORD *)v3 + 2) = 0;
  *((_DWORD *)v3 + 3) = 0;
  std::string::~string((char *)this + 1176);
  std::string::~string((char *)this + 1148);
  Actor::~Actor(this);
}
