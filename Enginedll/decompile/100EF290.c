/*
 * func-name: ?Destroy@StaticModel@@UAEXXZ
 * func-address: 0x100ef290
 * callers: 0x100ef850, 0x100f4e90
 * callees: 0x1009ec20, 0x1009f580, 0x101a2500
 */

void __thiscall StaticModel::Destroy(StaticModel *this)
{
  void *v2; // ecx
  unsigned int i; // edi
  void *v4; // ebx
  unsigned int v5; // edi
  int v6; // eax
  unsigned int j; // ebx
  int v8; // edi
  int v9; // ecx
  int v10; // ebp
  unsigned int v11; // edi
  unsigned int v12; // edi
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  ModelFrame *v17; // ecx
  int v18; // edi
  int v19; // ecx
  void *v20; // edi
  unsigned int k; // edi
  unsigned int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // ecx
  char *v26; // ebx
  char *v27; // edi
  int v28; // eax
  char *v29; // ebp

  if ( *((_DWORD *)this + 2) )
  {
    v2 = dword_11240DA4;
    for ( i = 0; dword_11240DA4 && i < (dword_11240DA8 - (int)dword_11240DA4) >> 2; ++i )
    {
      if ( this == *((StaticModel **)dword_11240DA4 + i) )
      {
        v4 = dword_11240DA4;
        if ( (unsigned int)dword_11240DA4 > dword_11240DA8 )
        {
          invalid_parameter_noinfo();
          v2 = dword_11240DA4;
        }
        v5 = (unsigned int)v4 + 4 * i;
        if ( v5 > dword_11240DA8 || v5 < (unsigned int)v2 )
          invalid_parameter_noinfo();
        v6 = (int)(dword_11240DA8 - (v5 + 4)) >> 2;
        if ( v6 > 0 )
          memmove_s((void *const)v5, 4 * v6, (const void *const)(v5 + 4), 4 * v6);
        dword_11240DA8 -= 4;
        break;
      }
    }
    for ( j = 0; ; ++j )
    {
      v8 = *((_DWORD *)this + 2);
      v9 = *(_DWORD *)(v8 + 4);
      if ( !v9 || j >= (*(_DWORD *)(v8 + 8) - v9) >> 2 )
        break;
      if ( this == *(StaticModel **)(*(_DWORD *)(v8 + 4) + 4 * j) )
      {
        v10 = *((_DWORD *)this + 2);
        v11 = *(_DWORD *)(v10 + 4);
        if ( v11 > *(_DWORD *)(v10 + 8) )
          invalid_parameter_noinfo();
        v12 = v11 + 4 * j;
        if ( v12 > *(_DWORD *)(v10 + 8) || v12 < *(_DWORD *)(v10 + 4) )
          invalid_parameter_noinfo();
        v13 = *((_DWORD *)this + 2);
        v14 = (int)(*(_DWORD *)(v13 + 8) - (v12 + 4)) >> 2;
        if ( v14 > 0 )
          memmove_s((void *const)v12, 4 * v14, (const void *const)(v12 + 4), 4 * v14);
        *(_DWORD *)(v13 + 8) -= 4;
        break;
      }
    }
    v15 = *((_DWORD *)this + 2);
    v16 = *(_DWORD *)(v15 + 4);
    if ( !v16 || !((*(_DWORD *)(v15 + 8) - v16) >> 2) )
    {
      v17 = (ModelFrame *)*((_DWORD *)this + 77);
      if ( v17 )
        ModelFrame::FreeContents(v17, 1);
      v18 = *((_DWORD *)this + 2);
      if ( v18 )
      {
        if ( *(_DWORD *)(v18 + 4) )
          operator delete(*(void **)(v18 + 4));
        *(_DWORD *)(v18 + 4) = 0;
        *(_DWORD *)(v18 + 8) = 0;
        *(_DWORD *)(v18 + 12) = 0;
        operator delete((void *)v18);
        *((_DWORD *)this + 2) = 0;
      }
      v19 = *((_DWORD *)this + 36);
      if ( v19 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v19 + 12))(v19, 1);
        *((_DWORD *)this + 36) = 0;
      }
    }
    v20 = (void *)*((_DWORD *)this + 77);
    if ( v20 )
    {
      ModelFrame::~ModelFrame(*((ModelFrame **)this + 77));
      operator delete(v20);
      *((_DWORD *)this + 77) = 0;
    }
    for ( k = 0; ; ++k )
    {
      v22 = *((_DWORD *)this + 31);
      if ( !v22 || k >= (int)(*((_DWORD *)this + 32) - v22) >> 2 )
        break;
      v23 = *((_DWORD *)this + 31);
      if ( *(_DWORD *)(v23 + 4 * k) )
      {
        if ( !v23 || k >= (*((_DWORD *)this + 32) - v23) >> 2 )
          invalid_parameter_noinfo();
        v24 = *(_DWORD *)(*((_DWORD *)this + 31) + 4 * k);
        if ( v24 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v24 + 12))(v24, 1);
        v25 = *((_DWORD *)this + 31);
        if ( !v25 || k >= (*((_DWORD *)this + 32) - v25) >> 2 )
          invalid_parameter_noinfo();
        *(_DWORD *)(*((_DWORD *)this + 31) + 4 * k) = 0;
      }
    }
    v26 = (char *)*((_DWORD *)this + 32);
    if ( v22 > (unsigned int)v26 )
      invalid_parameter_noinfo();
    v27 = (char *)*((_DWORD *)this + 31);
    if ( (unsigned int)v27 > *((_DWORD *)this + 32) )
      invalid_parameter_noinfo();
    if ( v27 != v26 )
    {
      v28 = (*((_DWORD *)this + 32) - (int)v26) >> 2;
      v29 = &v27[4 * v28];
      if ( v28 > 0 )
        memmove_s(v27, 4 * v28, v26, 4 * v28);
      *((_DWORD *)this + 32) = v29;
    }
  }
}
