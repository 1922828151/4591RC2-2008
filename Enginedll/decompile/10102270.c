/*
 * func-name: sub_10102270
 * func-address: 0x10102270
 * callers: 0x10102270, 0x10102e10, 0x101032a0, 0x10103770, 0x10104470, 0x10104580, 0x101046b0, 0x10137b60, 0x1013db50, 0x1013df40, 0x1013e2e0
 * callees: 0x10102270, 0x1017a0b0, 0x101a2500
 */

int __thiscall sub_10102270(int this)
{
  unsigned int i; // ebx
  int v3; // ecx
  unsigned int j; // ebp
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // ecx
  int v12; // edi
  int v13; // ecx
  int v14; // edi
  unsigned int v15; // ebp
  int v16; // edi
  unsigned int v17; // ebp
  int v18; // ecx
  int v19; // edi
  int v20; // eax
  int v21; // edi
  int v22; // eax
  unsigned int k; // ebx
  int v24; // ecx
  unsigned int m; // ebp
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // ecx
  int v31; // edi
  int v32; // ecx
  int v33; // edi
  int v34; // ecx
  int v35; // edi
  unsigned int v36; // ebp
  int v37; // edi
  unsigned int v38; // ebp
  int v39; // ecx
  int v40; // edi
  int v41; // eax
  int v42; // edi
  int v43; // eax
  _DWORD *v44; // ebx
  int v45; // ebp
  void *v46; // edi
  unsigned int v48; // [esp+10h] [ebp-14h]
  unsigned int v49; // [esp+10h] [ebp-14h]

  for ( i = 0; ; ++i )
  {
    v3 = *(_DWORD *)(this + 104);
    if ( !v3 || i >= (*(_DWORD *)(this + 108) - v3) >> 2 )
      break;
    for ( j = 0; ; ++j )
    {
      v5 = *(_DWORD *)(this + 104);
      if ( !v5 || i >= (*(_DWORD *)(this + 108) - v5) >> 2 )
        invalid_parameter_noinfo();
      v6 = *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * i);
      v7 = *(_DWORD *)(v6 + 52);
      v8 = v6 + 48;
      if ( !v7 || j >= (*(_DWORD *)(v8 + 8) - v7) >> 2 )
        break;
      v9 = *(_DWORD *)(this + 104);
      if ( !v9 || i >= (*(_DWORD *)(this + 108) - v9) >> 2 )
        invalid_parameter_noinfo();
      v10 = *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * i);
      v11 = *(_DWORD *)(v10 + 52);
      v12 = v10 + 48;
      if ( !v11 || j >= (*(_DWORD *)(v12 + 8) - v11) >> 2 )
        invalid_parameter_noinfo();
      if ( this == *(_DWORD *)(*(_DWORD *)(v12 + 4) + 4 * j) )
      {
        v13 = *(_DWORD *)(this + 104);
        v48 = j;
        if ( !v13 || i >= (*(_DWORD *)(this + 108) - v13) >> 2 )
          invalid_parameter_noinfo();
        v14 = *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * i);
        v15 = *(_DWORD *)(v14 + 52);
        v16 = v14 + 48;
        if ( v15 > *(_DWORD *)(v16 + 8) )
          invalid_parameter_noinfo();
        v17 = v15 + 4 * v48;
        if ( v17 > *(_DWORD *)(v16 + 8) || v17 < *(_DWORD *)(v16 + 4) )
          invalid_parameter_noinfo();
        v18 = *(_DWORD *)(this + 104);
        if ( !v18 || i >= (*(_DWORD *)(this + 108) - v18) >> 2 )
          invalid_parameter_noinfo();
        v19 = *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * i);
        v20 = *(_DWORD *)(v19 + 56);
        v21 = v19 + 48;
        v22 = (int)(v20 - (v17 + 4)) >> 2;
        if ( v22 > 0 )
          memmove_s((void *const)v17, 4 * v22, (const void *const)(v17 + 4), 4 * v22);
        *(_DWORD *)(v21 + 8) -= 4;
        break;
      }
    }
  }
  for ( k = 0; ; ++k )
  {
    v24 = *(_DWORD *)(this + 88);
    if ( !v24 || k >= (*(_DWORD *)(this + 92) - v24) >> 2 )
      break;
    for ( m = 0; ; ++m )
    {
      v26 = *(_DWORD *)(this + 88);
      if ( !v26 || k >= (*(_DWORD *)(this + 92) - v26) >> 2 )
        invalid_parameter_noinfo();
      v27 = *(_DWORD *)(*(_DWORD *)(this + 88) + 4 * k);
      v28 = *(_DWORD *)(v27 + 1156);
      v29 = v27 + 1152;
      if ( !v28 || m >= (*(_DWORD *)(v29 + 8) - v28) >> 2 )
        break;
      v30 = *(_DWORD *)(this + 88);
      if ( !v30 || k >= (*(_DWORD *)(this + 92) - v30) >> 2 )
        invalid_parameter_noinfo();
      v31 = *(_DWORD *)(*(_DWORD *)(this + 88) + 4 * k);
      v32 = *(_DWORD *)(v31 + 1156);
      v33 = v31 + 1152;
      if ( !v32 || m >= (*(_DWORD *)(v33 + 8) - v32) >> 2 )
        invalid_parameter_noinfo();
      if ( this == *(_DWORD *)(*(_DWORD *)(v33 + 4) + 4 * m) )
      {
        v34 = *(_DWORD *)(this + 88);
        v49 = m;
        if ( !v34 || k >= (*(_DWORD *)(this + 92) - v34) >> 2 )
          invalid_parameter_noinfo();
        v35 = *(_DWORD *)(*(_DWORD *)(this + 88) + 4 * k);
        v36 = *(_DWORD *)(v35 + 1156);
        v37 = v35 + 1152;
        if ( v36 > *(_DWORD *)(v37 + 8) )
          invalid_parameter_noinfo();
        v38 = v36 + 4 * v49;
        if ( v38 > *(_DWORD *)(v37 + 8) || v38 < *(_DWORD *)(v37 + 4) )
          invalid_parameter_noinfo();
        v39 = *(_DWORD *)(this + 88);
        if ( !v39 || k >= (*(_DWORD *)(this + 92) - v39) >> 2 )
          invalid_parameter_noinfo();
        v40 = *(_DWORD *)(*(_DWORD *)(this + 88) + 4 * k);
        v41 = *(_DWORD *)(v40 + 1160);
        v42 = v40 + 1152;
        v43 = (int)(v41 - (v38 + 4)) >> 2;
        if ( v43 > 0 )
          memmove_s((void *const)v38, 4 * v43, (const void *const)(v38 + 4), 4 * v43);
        *(_DWORD *)(v42 + 8) -= 4;
        break;
      }
    }
  }
  v44 = (_DWORD *)(this + 52);
  v45 = 8;
  do
  {
    v46 = (void *)*v44;
    if ( *v44 )
    {
      sub_10102270(*v44);
      operator delete(v46);
      *v44 = 0;
    }
    ++v44;
    --v45;
  }
  while ( v45 );
  if ( *(_DWORD *)(this + 104) )
    operator delete(*(void **)(this + 104));
  *(_DWORD *)(this + 104) = 0;
  *(_DWORD *)(this + 108) = 0;
  *(_DWORD *)(this + 112) = 0;
  if ( *(_DWORD *)(this + 88) )
    operator delete(*(void **)(this + 88));
  *(_DWORD *)(this + 88) = 0;
  *(_DWORD *)(this + 92) = 0;
  *(_DWORD *)(this + 96) = 0;
  return sub_1017A0B0(this);
}
