/*
 * func-name: ?SplitModelFrames@Editor@@QAEXXZ
 * func-address: 0x10082490
 * callers: none
 * callees: 0x10080a00, 0x1009f580
 */

void __thiscall Editor::SplitModelFrames(Editor *this)
{
  unsigned int i; // edi
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  struct ModelFrame **v6; // eax
  unsigned int j; // edi
  unsigned int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  char *v15; // ebp
  char *v16; // edi
  int v17; // eax
  char *v18; // ebx

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 562);
    if ( !v3 || i >= (*((_DWORD *)this + 563) - v3) >> 2 )
      break;
    v4 = *(_DWORD *)(*((_DWORD *)this + 562) + 4 * i);
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 716);
      if ( v5 )
      {
        v6 = *(struct ModelFrame ***)(v5 + 308);
        if ( v6 )
          Editor::SplitFrame((struct World **)this, v6);
      }
    }
  }
  for ( j = 0; ; ++j )
  {
    v8 = *((_DWORD *)this + 562);
    if ( !v8 || j >= (int)(*((_DWORD *)this + 563) - v8) >> 2 )
      break;
    v9 = *((_DWORD *)this + 562);
    if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v9 + 4 * j) + 716) + 308) )
    {
      if ( !v9 || j >= (*((_DWORD *)this + 563) - v9) >> 2 )
        invalid_parameter_noinfo();
      ModelFrame::FreeContents(
        *(ModelFrame **)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 562) + 4 * j) + 716) + 308),
        0);
    }
    v10 = *((_DWORD *)this + 562);
    if ( !v10 || j >= (*((_DWORD *)this + 563) - v10) >> 2 )
      invalid_parameter_noinfo();
    *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 562) + 4 * j) + 441) = 0;
    v11 = *((_DWORD *)this + 562);
    if ( !v11 || j >= (*((_DWORD *)this + 563) - v11) >> 2 )
      invalid_parameter_noinfo();
    v12 = *((_DWORD *)this + 562);
    if ( *(_DWORD *)(v12 + 4 * j) )
    {
      if ( !v12 || j >= (*((_DWORD *)this + 563) - v12) >> 2 )
        invalid_parameter_noinfo();
      v13 = *(_DWORD *)(*((_DWORD *)this + 562) + 4 * j);
      if ( v13 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 80))(v13, 1);
      v14 = *((_DWORD *)this + 562);
      if ( !v14 || j >= (*((_DWORD *)this + 563) - v14) >> 2 )
        invalid_parameter_noinfo();
      *(_DWORD *)(*((_DWORD *)this + 562) + 4 * j) = 0;
    }
  }
  v15 = (char *)*((_DWORD *)this + 563);
  if ( v8 > (unsigned int)v15 )
    invalid_parameter_noinfo();
  v16 = (char *)*((_DWORD *)this + 562);
  if ( (unsigned int)v16 > *((_DWORD *)this + 563) )
    invalid_parameter_noinfo();
  if ( v16 != v15 )
  {
    v17 = (*((_DWORD *)this + 563) - (int)v15) >> 2;
    v18 = &v16[4 * v17];
    if ( v17 > 0 )
      memmove_s(v16, 4 * v17, v15, 4 * v17);
    *((_DWORD *)this + 563) = v18;
  }
  World::RegenerateOcclusionTree(*((World **)this + 512));
}
