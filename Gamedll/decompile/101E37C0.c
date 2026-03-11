/*
 * func-name: sub_101E37C0
 * func-address: 0x101e37c0
 * callers: 0x100019ba
 * callees: 0x100074be, 0x102c9d50
 */

char __thiscall sub_101E37C0(int this)
{
  EventAttemper *v2; // eax
  EventAttemper *v3; // eax
  void *v4; // edi
  void *v5; // edi
  unsigned int i; // edi
  unsigned int v7; // ecx
  int v8; // edx
  int v9; // eax
  void *v10; // ebx
  int v11; // ecx
  char *v12; // ebx
  char *v13; // edi
  int v14; // eax
  char *v15; // ebp

  sub_100074BE();
  v2 = (EventAttemper *)EventAttemper::Instance(*(_DWORD *)(this + 248), 1);
  EventAttemper::RemoveObserver(v2);
  v3 = (EventAttemper *)EventAttemper::Instance(*(_DWORD *)(this + 256), 1);
  EventAttemper::RemoveObserver(v3);
  v4 = *(void **)(this + 264);
  if ( v4 )
  {
    Texture::~Texture(*(Texture **)(this + 264));
    operator delete(v4);
    *(_DWORD *)(this + 264) = 0;
  }
  v5 = *(void **)(this + 260);
  if ( v5 )
  {
    Texture::~Texture(*(Texture **)(this + 260));
    operator delete(v5);
    *(_DWORD *)(this + 260) = 0;
  }
  for ( i = 0; ; ++i )
  {
    v7 = *(_DWORD *)(this + 272);
    if ( !v7 || i >= (int)(*(_DWORD *)(this + 276) - v7) >> 2 )
      break;
    v8 = *(_DWORD *)(this + 272);
    if ( *(_DWORD *)(v8 + 4 * i) )
    {
      if ( !v8 || i >= (*(_DWORD *)(this + 276) - v8) >> 2 )
        _invalid_parameter_noinfo();
      v9 = *(_DWORD *)(this + 272);
      v10 = *(void **)(v9 + 4 * i);
      if ( v10 )
      {
        Texture::~Texture(*(Texture **)(v9 + 4 * i));
        operator delete(v10);
      }
      v11 = *(_DWORD *)(this + 272);
      if ( !v11 || i >= (*(_DWORD *)(this + 276) - v11) >> 2 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(*(_DWORD *)(this + 272) + 4 * i) = 0;
    }
  }
  v12 = *(char **)(this + 276);
  if ( v7 > (unsigned int)v12 )
    _invalid_parameter_noinfo();
  v13 = *(char **)(this + 272);
  if ( (unsigned int)v13 > *(_DWORD *)(this + 276) )
    _invalid_parameter_noinfo();
  if ( v13 != v12 )
  {
    v14 = (*(_DWORD *)(this + 276) - (int)v12) >> 2;
    v15 = &v13[4 * v14];
    if ( v14 > 0 )
      memmove_s(v13, 4 * v14, v12, 4 * v14);
    *(_DWORD *)(this + 276) = v15;
  }
  return 1;
}
