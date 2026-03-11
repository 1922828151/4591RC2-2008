/*
 * func-name: ??1Light@@UAE@XZ
 * func-address: 0x100dde50
 * callers: 0x10018ff0
 * callees: 0x1000cb70, 0x100511a0, 0x100dd6d0, 0x1017a0b0, 0x101a2500
 */

void __thiscall Light::~Light(Light *this)
{
  stdiobuf *v2; // edi
  unsigned int i; // ebx
  int v4; // edi
  int v5; // ecx
  int v6; // edi
  unsigned int v7; // ebp
  int v8; // edi
  unsigned int v9; // ebx
  int v10; // edi
  int v11; // eax
  int v12; // edi
  int v13; // eax

  *(_DWORD *)this = &Light::`vftable';
  v2 = (stdiobuf *)*((_DWORD *)this + 315);
  if ( v2 )
  {
    stdiobuf::~stdiobuf(v2);
    operator delete(v2);
    *((_DWORD *)this + 315) = 0;
  }
  if ( *((_DWORD *)this + 178) )
  {
    for ( i = 0; ; ++i )
    {
      v4 = *((_DWORD *)this + 178);
      v5 = *(_DWORD *)(v4 + 3240);
      if ( !v5 || i >= (*(_DWORD *)(v4 + 3244) - v5) >> 2 )
        break;
      if ( this == *(Light **)(*(_DWORD *)(v4 + 3240) + 4 * i) )
      {
        v6 = *((_DWORD *)this + 178);
        v7 = *(_DWORD *)(v6 + 3240);
        v8 = v6 + 3236;
        if ( v7 > *(_DWORD *)(v8 + 8) )
          invalid_parameter_noinfo();
        v9 = v7 + 4 * i;
        if ( v9 > *(_DWORD *)(v8 + 8) || v9 < *(_DWORD *)(v8 + 4) )
          invalid_parameter_noinfo();
        v10 = *((_DWORD *)this + 178);
        v11 = *(_DWORD *)(v10 + 3244);
        v12 = v10 + 3236;
        v13 = (int)(v11 - (v9 + 4)) >> 2;
        if ( v13 > 0 )
          memmove_s((void *const)v9, 4 * v13, (const void *const)(v9 + 4), 4 * v13);
        *(_DWORD *)(v12 + 8) -= 4;
        break;
      }
    }
  }
  if ( *((_DWORD *)this + 360) )
    operator delete(*((void **)this + 360));
  *((_DWORD *)this + 360) = 0;
  *((_DWORD *)this + 361) = 0;
  *((_DWORD *)this + 362) = 0;
  Texture::~Texture((void **)this + 316);
  if ( *((_DWORD *)this + 312) )
    operator delete(*((void **)this + 312));
  *((_DWORD *)this + 312) = 0;
  *((_DWORD *)this + 313) = 0;
  *((_DWORD *)this + 314) = 0;
  sub_1017A0B0((char *)this + 1192);
  if ( *((_DWORD *)this + 292) )
    operator delete(*((void **)this + 292));
  *((_DWORD *)this + 292) = 0;
  *((_DWORD *)this + 293) = 0;
  *((_DWORD *)this + 294) = 0;
  if ( *((_DWORD *)this + 288) )
    operator delete(*((void **)this + 288));
  *((_DWORD *)this + 288) = 0;
  *((_DWORD *)this + 289) = 0;
  *((_DWORD *)this + 290) = 0;
  Actor::~Actor(this);
}
