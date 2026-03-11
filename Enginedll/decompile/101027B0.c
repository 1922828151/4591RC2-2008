/*
 * func-name: sub_101027B0
 * func-address: 0x101027b0
 * callers: none
 * callees: none
 */

void __stdcall sub_101027B0(int a1)
{
  unsigned int i; // ebx
  unsigned int v3; // ecx
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
  char *v23; // ebx
  char *v24; // edi
  int v25; // eax
  char *v26; // ebp
  unsigned int v27; // [esp+14h] [ebp+4h]

  for ( i = 0; ; ++i )
  {
    v3 = *(_DWORD *)(a1 + 52);
    if ( !v3 || i >= (int)(*(_DWORD *)(a1 + 56) - v3) >> 2 )
      break;
    for ( j = 0; ; ++j )
    {
      v5 = *(_DWORD *)(a1 + 52);
      if ( !v5 || i >= (*(_DWORD *)(a1 + 56) - v5) >> 2 )
        invalid_parameter_noinfo();
      v6 = *(_DWORD *)(*(_DWORD *)(a1 + 52) + 4 * i);
      v7 = *(_DWORD *)(v6 + 104);
      v8 = v6 + 100;
      if ( !v7 || j >= (*(_DWORD *)(v8 + 8) - v7) >> 2 )
        break;
      v9 = *(_DWORD *)(a1 + 52);
      if ( !v9 || i >= (*(_DWORD *)(a1 + 56) - v9) >> 2 )
        invalid_parameter_noinfo();
      v10 = *(_DWORD *)(*(_DWORD *)(a1 + 52) + 4 * i);
      v11 = *(_DWORD *)(v10 + 104);
      v12 = v10 + 100;
      if ( !v11 || j >= (*(_DWORD *)(v12 + 8) - v11) >> 2 )
        invalid_parameter_noinfo();
      if ( a1 == *(_DWORD *)(*(_DWORD *)(v12 + 4) + 4 * j) )
      {
        v13 = *(_DWORD *)(a1 + 52);
        v27 = j;
        if ( !v13 || i >= (*(_DWORD *)(a1 + 56) - v13) >> 2 )
          invalid_parameter_noinfo();
        v14 = *(_DWORD *)(*(_DWORD *)(a1 + 52) + 4 * i);
        v15 = *(_DWORD *)(v14 + 104);
        v16 = v14 + 100;
        if ( v15 > *(_DWORD *)(v16 + 8) )
          invalid_parameter_noinfo();
        v17 = v15 + 4 * v27;
        if ( v17 > *(_DWORD *)(v16 + 8) || v17 < *(_DWORD *)(v16 + 4) )
          invalid_parameter_noinfo();
        v18 = *(_DWORD *)(a1 + 52);
        if ( !v18 || i >= (*(_DWORD *)(a1 + 56) - v18) >> 2 )
          invalid_parameter_noinfo();
        v19 = *(_DWORD *)(*(_DWORD *)(a1 + 52) + 4 * i);
        v20 = *(_DWORD *)(v19 + 108);
        v21 = v19 + 100;
        v22 = (int)(v20 - (v17 + 4)) >> 2;
        if ( v22 > 0 )
          memmove_s((void *const)v17, 4 * v22, (const void *const)(v17 + 4), 4 * v22);
        *(_DWORD *)(v21 + 8) -= 4;
        break;
      }
    }
  }
  v23 = *(char **)(a1 + 56);
  if ( v3 > (unsigned int)v23 )
    invalid_parameter_noinfo();
  v24 = *(char **)(a1 + 52);
  if ( (unsigned int)v24 > *(_DWORD *)(a1 + 56) )
    invalid_parameter_noinfo();
  if ( v24 != v23 )
  {
    v25 = (*(_DWORD *)(a1 + 56) - (int)v23) >> 2;
    v26 = &v24[4 * v25];
    if ( v25 > 0 )
      memmove_s(v24, 4 * v25, v23, 4 * v25);
    *(_DWORD *)(a1 + 56) = v26;
  }
}
