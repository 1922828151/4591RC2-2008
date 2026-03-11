/*
 * func-name: ?FreeContents@ModelFrame@@QAEX_N@Z
 * func-address: 0x1009f580
 * callers: 0x10082490, 0x100846a0, 0x1009f580, 0x100ef290
 * callees: 0x1002c930, 0x10076ef0, 0x10077be0, 0x1009f580, 0x101a2500
 */

void __thiscall ModelFrame::FreeContents(ModelFrame *this, bool a2)
{
  unsigned int i; // edi
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  char *v7; // edi
  char *v8; // ebp
  int v9; // eax
  char *v10; // ebx
  void *v11; // edi
  ModelFrame *v12; // ecx

  do
  {
    if ( a2 )
    {
      for ( i = 0; i < std::vector<Model *>::size(this); ++i )
      {
        v4 = *((_DWORD *)this + 1);
        if ( !v4 || i >= (*((_DWORD *)this + 2) - v4) >> 2 )
          invalid_parameter_noinfo();
        v5 = *((_DWORD *)this + 1);
        if ( *(_DWORD *)(v5 + 4 * i) )
        {
          if ( !v5 || i >= (*((_DWORD *)this + 2) - v5) >> 2 )
            invalid_parameter_noinfo();
          v6 = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i);
          if ( v6 )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 28))(v6, 1);
        }
      }
      sub_1002C930(this, 0, 0);
      v7 = (char *)*((_DWORD *)this + 2);
      if ( *((_DWORD *)this + 1) > (unsigned int)v7 )
        invalid_parameter_noinfo();
      v8 = (char *)*((_DWORD *)this + 1);
      if ( (unsigned int)v8 > *((_DWORD *)this + 2) )
        invalid_parameter_noinfo();
      if ( v8 != v7 )
      {
        v9 = (*((_DWORD *)this + 2) - (int)v7) >> 2;
        v10 = &v8[4 * v9];
        if ( v9 > 0 )
          memmove_s(v8, 4 * v9, v7, 4 * v9);
        *((_DWORD *)this + 2) = v10;
      }
    }
    else
    {
      sub_1002C930(this, 0, 0);
    }
    v11 = (void *)*((_DWORD *)this + 113);
    *((_DWORD *)this + 10) = 0;
    if ( v11 )
    {
      sub_10077BE0((int)v11);
      operator delete(v11);
      *((_DWORD *)this + 113) = 0;
    }
    v12 = (ModelFrame *)*((_DWORD *)this + 89);
    if ( v12 )
      ModelFrame::FreeContents(v12, a2);
    this = (ModelFrame *)*((_DWORD *)this + 90);
  }
  while ( this );
}
