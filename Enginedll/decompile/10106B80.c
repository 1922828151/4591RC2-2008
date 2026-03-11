/*
 * func-name: ?RemoveAllEffects@PostProcess@@QAEXXZ
 * func-address: 0x10106b80
 * callers: 0x10107ee0, 0x10107ef0, 0x10108550, 0x1013e1c0
 * callees: 0x10106b20
 */

void __thiscall PostProcess::RemoveAllEffects(PostProcess *this)
{
  unsigned int i; // edi
  unsigned int v3; // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx
  char *v5; // ebp
  char *v6; // edi
  int v7; // eax
  char *v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax

  *(_BYTE *)PostProcess::Instance() = 0;
  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 17);
    if ( !v3 || i >= (int)(*((_DWORD *)this + 18) - v3) >> 2 )
      break;
    v4 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 17) + 4 * i);
    if ( v4 )
      (**v4)(v4, 1);
  }
  v5 = (char *)*((_DWORD *)this + 18);
  if ( v3 > (unsigned int)v5 )
    invalid_parameter_noinfo();
  v6 = (char *)*((_DWORD *)this + 17);
  if ( (unsigned int)v6 > *((_DWORD *)this + 18) )
    invalid_parameter_noinfo();
  if ( v6 != v5 )
  {
    v7 = (*((_DWORD *)this + 18) - (int)v5) >> 2;
    v8 = &v6[4 * v7];
    if ( v7 > 0 )
      memmove_s(v6, 4 * v7, v5, 4 * v7);
    *((_DWORD *)this + 18) = v8;
  }
  v9 = *((_DWORD *)this + 7);
  *((_DWORD *)this + 9) = 0;
  if ( v9 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9);
    *((_DWORD *)this + 7) = 0;
  }
  v10 = *((_DWORD *)this + 8);
  if ( v10 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v10 + 8))(*((_DWORD *)this + 8));
    *((_DWORD *)this + 8) = 0;
  }
  v11 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 12) = 0;
  if ( v11 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11);
    *((_DWORD *)this + 10) = 0;
  }
  v12 = *((_DWORD *)this + 11);
  if ( v12 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v12 + 8))(*((_DWORD *)this + 11));
    *((_DWORD *)this + 11) = 0;
  }
  v13 = *((_DWORD *)this + 13);
  *((_DWORD *)this + 15) = 0;
  if ( v13 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v13 + 8))(v13);
    *((_DWORD *)this + 13) = 0;
  }
  v14 = *((_DWORD *)this + 14);
  if ( v14 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v14 + 8))(*((_DWORD *)this + 14));
    *((_DWORD *)this + 14) = 0;
  }
  v15 = *((_DWORD *)this + 3);
  if ( v15 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v15 + 8))(*((_DWORD *)this + 3));
    *((_DWORD *)this + 3) = 0;
  }
  v16 = *((_DWORD *)this + 5);
  if ( v16 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v16 + 8))(*((_DWORD *)this + 5));
    *((_DWORD *)this + 5) = 0;
  }
  v17 = *((_DWORD *)this + 4);
  if ( v17 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v17 + 8))(*((_DWORD *)this + 4));
    *((_DWORD *)this + 4) = 0;
  }
  v18 = *((_DWORD *)this + 6);
  if ( v18 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v18 + 8))(*((_DWORD *)this + 6));
    *((_DWORD *)this + 6) = 0;
  }
}
