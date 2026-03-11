/*
 * func-name: ??1MapStateManager@@QAE@XZ_0
 * func-address: 0x1027dc80
 * callers: 0x100054c0
 * callees: 0x102c9d50
 */

void __thiscall MapStateManager::~MapStateManager(MapStateManager *this)
{
  int v2; // ecx
  unsigned int i; // edi
  unsigned int v4; // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  char *v6; // ebx
  char *v7; // edi
  int v8; // eax
  char *v9; // ebp

  v2 = *(_DWORD *)this;
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 16))(v2);
  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 3);
    if ( !v4 || i >= (int)(*((_DWORD *)this + 4) - v4) >> 2 )
      break;
    v5 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 3) + 4 * i);
    if ( v5 )
      (**v5)(v5, 1);
  }
  v6 = (char *)*((_DWORD *)this + 4);
  if ( v4 > (unsigned int)v6 )
    _invalid_parameter_noinfo();
  v7 = (char *)*((_DWORD *)this + 3);
  if ( (unsigned int)v7 > *((_DWORD *)this + 4) )
    _invalid_parameter_noinfo();
  if ( v7 != v6 )
  {
    v8 = (*((_DWORD *)this + 4) - (int)v6) >> 2;
    v9 = &v7[4 * v8];
    if ( v8 > 0 )
      memmove_s(v7, 4 * v8, v6, 4 * v8);
    *((_DWORD *)this + 4) = v9;
  }
  if ( *((_DWORD *)this + 3) )
    operator delete(*((void **)this + 3));
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
}
