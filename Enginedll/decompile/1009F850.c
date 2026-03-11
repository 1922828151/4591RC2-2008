/*
 * func-name: ?PreDestroy@ModelFrame@@QAEXXZ
 * func-address: 0x1009f850
 * callers: 0x1009f850, 0x100ee880
 * callees: 0x1002c930, 0x10076ef0, 0x1009f850
 */

void __thiscall ModelFrame::PreDestroy(ModelFrame *this)
{
  unsigned int i; // edi
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  char *v6; // edi
  char *v7; // ebx
  int v8; // eax
  char *v9; // ebp
  ModelFrame *v10; // ecx

  do
  {
    for ( i = 0; i < std::vector<Model *>::size(this); ++i )
    {
      v3 = *((_DWORD *)this + 1);
      if ( !v3 || i >= (*((_DWORD *)this + 2) - v3) >> 2 )
        invalid_parameter_noinfo();
      v4 = *((_DWORD *)this + 1);
      if ( *(_DWORD *)(v4 + 4 * i) )
      {
        if ( !v4 || i >= (*((_DWORD *)this + 2) - v4) >> 2 )
          invalid_parameter_noinfo();
        v5 = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i);
        if ( v5 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 28))(v5, 1);
      }
    }
    sub_1002C930(this, 0, 0);
    v6 = (char *)*((_DWORD *)this + 2);
    if ( *((_DWORD *)this + 1) > (unsigned int)v6 )
      invalid_parameter_noinfo();
    v7 = (char *)*((_DWORD *)this + 1);
    if ( (unsigned int)v7 > *((_DWORD *)this + 2) )
      invalid_parameter_noinfo();
    if ( v7 != v6 )
    {
      v8 = (*((_DWORD *)this + 2) - (int)v6) >> 2;
      v9 = &v7[4 * v8];
      if ( v8 > 0 )
        memmove_s(v7, 4 * v8, v6, 4 * v8);
      *((_DWORD *)this + 2) = v9;
    }
    v10 = (ModelFrame *)*((_DWORD *)this + 90);
    *((_DWORD *)this + 10) = 0;
    if ( v10 )
      ModelFrame::PreDestroy(v10);
    this = (ModelFrame *)*((_DWORD *)this + 89);
  }
  while ( this );
}
