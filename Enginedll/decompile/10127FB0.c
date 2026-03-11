/*
 * func-name: ?OnLostDevice@ShadowEngine@@MAEXXZ
 * func-address: 0x10127fb0
 * callers: none
 * callees: 0x101a2500
 */

void __thiscall ShadowEngine::OnLostDevice(ShadowEngine *this)
{
  unsigned int i; // edi
  unsigned int v3; // ecx
  int v4; // eax
  _DWORD *v5; // ebx
  int v6; // ecx
  char *v7; // ebx
  char *v8; // edi
  int v9; // eax
  char *v10; // ebp

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 3);
    if ( !v3 || i >= (int)(*((_DWORD *)this + 4) - v3) >> 2 )
      break;
    v4 = *((_DWORD *)this + 3);
    if ( *(_DWORD *)(v4 + 4 * i) )
    {
      if ( !v4 || i >= (*((_DWORD *)this + 4) - v4) >> 2 )
        invalid_parameter_noinfo();
      v5 = *(_DWORD **)(*((_DWORD *)this + 3) + 4 * i);
      if ( v5 )
      {
        if ( *v5 )
        {
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v5 + 8))(*v5);
          *v5 = 0;
        }
        operator delete(v5);
      }
      v6 = *((_DWORD *)this + 3);
      if ( !v6 || i >= (*((_DWORD *)this + 4) - v6) >> 2 )
        invalid_parameter_noinfo();
      *(_DWORD *)(*((_DWORD *)this + 3) + 4 * i) = 0;
    }
  }
  v7 = (char *)*((_DWORD *)this + 4);
  if ( v3 > (unsigned int)v7 )
    invalid_parameter_noinfo();
  v8 = (char *)*((_DWORD *)this + 3);
  if ( (unsigned int)v8 > *((_DWORD *)this + 4) )
    invalid_parameter_noinfo();
  if ( v8 != v7 )
  {
    v9 = (*((_DWORD *)this + 4) - (int)v7) >> 2;
    v10 = &v8[4 * v9];
    if ( v9 > 0 )
      memmove_s(v8, 4 * v9, v7, 4 * v9);
    *((_DWORD *)this + 4) = v10;
  }
  Texture::Destroy((ShadowEngine *)((char *)this + 24));
}
