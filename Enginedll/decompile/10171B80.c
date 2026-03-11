/*
 * func-name: ?Shutdown@AsyncLoader@@QAE_NXZ
 * func-address: 0x10171b80
 * callers: 0x10096550
 * callees: 0x10013780, 0x10031ec0, 0x101100e0, 0x10176630, 0x101a2500, 0x101a253a
 */

char __thiscall AsyncLoader::Shutdown(AsyncLoader *this)
{
  AsyncLoader *v1; // ebp
  unsigned int v2; // edi
  _DWORD *i; // esi
  unsigned int v4; // ecx
  int v5; // ebx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  char *v9; // ebx
  char *v10; // edi
  char *v11; // ebx
  unsigned int v12; // edi
  _DWORD *v13; // esi
  int k; // ebp
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // ebp
  int v21; // edi
  int v22; // edi
  _DWORD *v23; // ebp
  unsigned int v24; // edi
  _DWORD *v25; // esi
  int m; // ebx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  unsigned int v31; // ebx
  unsigned int v32; // ebp
  int v33; // edi
  int v34; // edi
  _DWORD *v35; // ebp
  unsigned int v36; // edi
  _DWORD *v37; // esi
  int n; // ebx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  unsigned int v43; // ebx
  unsigned int v44; // ebp
  int v45; // edi
  int v46; // edi
  _DWORD *v47; // ebp
  unsigned int v48; // edi
  _DWORD *v49; // esi
  int ii; // ebx
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  unsigned int v55; // ebx
  unsigned int v56; // ebp
  int v57; // edi
  int v58; // edi
  _DWORD *v59; // esi
  _DWORD **v60; // eax
  _DWORD *v61; // esi
  bool v62; // zf
  _DWORD *v63; // edi
  _DWORD **v64; // eax
  _DWORD *v65; // esi
  _DWORD *v66; // edi
  char *v68; // [esp+10h] [ebp-30h]
  int v70; // [esp+38h] [ebp-8h] BYREF
  _DWORD *j; // [esp+3Ch] [ebp-4h]

  v1 = this;
  v2 = 0;
  for ( i = (_DWORD *)((char *)this + 8); ; CloseHandle(*(HANDLE *)(i[1] + 8 * v2++)) )
  {
    v4 = i[1];
    if ( !v4 || v2 >= (int)(i[2] - v4) >> 3 )
      break;
    v5 = 8 * v2;
    SetEvent(*(HANDLE *)(i[1] + 8 * v2));
    while ( 1 )
    {
      v6 = i[1];
      if ( !v6 || v2 >= (i[2] - v6) >> 3 )
        invalid_parameter_noinfo();
      if ( !WaitForSingleObject(*(HANDLE *)(i[1] + v5 + 4), 0) )
        break;
      Sleep(0xAu);
    }
    v7 = i[1];
    if ( !v7 || v2 >= (i[2] - v7) >> 3 )
      invalid_parameter_noinfo();
    CloseHandle(*(HANDLE *)(v5 + i[1] + 4));
    v8 = i[1];
    if ( !v8 || v2 >= (i[2] - v8) >> 3 )
      invalid_parameter_noinfo();
  }
  v9 = (char *)i[2];
  if ( v4 > (unsigned int)v9 )
    invalid_parameter_noinfo();
  v10 = (char *)i[1];
  if ( (unsigned int)v10 > i[2] )
    invalid_parameter_noinfo();
  sub_101100E0(i, &v70, (int)i, v10, (int)i, v9);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 128));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 152));
  for ( j = (_DWORD *)**((_DWORD **)v1 + 30); ; j = (_DWORD *)*v59 )
  {
    v11 = (char *)v1 + 116;
    v68 = (char *)v1 + 116;
    if ( j == *((_DWORD **)v1 + 30) )
      break;
    v12 = 0;
    v13 = j + 21;
    for ( k = 0; ; k += 84 )
    {
      if ( j == *((_DWORD **)v11 + 1) )
        invalid_parameter_noinfo();
      v15 = v13[1];
      if ( !v15 || v12 >= (v13[2] - v15) / 84 )
        break;
      if ( j == *((_DWORD **)v11 + 1) )
        invalid_parameter_noinfo();
      v16 = v13[1];
      if ( !v16 || v12 >= (v13[2] - v16) / 84 )
        invalid_parameter_noinfo();
      if ( *(_DWORD *)(v13[1] + k + 56) )
      {
        if ( j == *((_DWORD **)v11 + 1) )
          invalid_parameter_noinfo();
        v17 = v13[1];
        if ( !v17 || v12 >= (v13[2] - v17) / 84 )
          invalid_parameter_noinfo();
        operator delete[](*(void **)(v13[1] + k + 56));
        if ( j == *((_DWORD **)v11 + 1) )
          invalid_parameter_noinfo();
        v18 = v13[1];
        if ( !v18 || v12 >= (v13[2] - v18) / 84 )
          invalid_parameter_noinfo();
        *(_DWORD *)(v13[1] + k + 56) = 0;
      }
      ++v12;
    }
    if ( j == *((_DWORD **)v11 + 1) )
      invalid_parameter_noinfo();
    v19 = v13[2];
    if ( v13[1] > v19 )
      invalid_parameter_noinfo();
    v20 = v13[1];
    if ( v20 > v13[2] )
      invalid_parameter_noinfo();
    if ( v20 != v19 )
    {
      v21 = v13[2];
      sub_10176630(v19, v21, v20);
      v22 = v20 + 84 * ((int)(v21 - v19) / 84);
      sub_10013780(v22, v13[2]);
      v13[2] = v22;
    }
    v23 = j;
    v24 = 0;
    v25 = j + 17;
    for ( m = 0; ; m += 84 )
    {
      if ( v23 == *((_DWORD **)v68 + 1) )
        invalid_parameter_noinfo();
      v27 = v25[1];
      if ( !v27 || v24 >= (v25[2] - v27) / 84 )
        break;
      if ( v23 == *((_DWORD **)v68 + 1) )
        invalid_parameter_noinfo();
      v28 = v25[1];
      if ( !v28 || v24 >= (v25[2] - v28) / 84 )
        invalid_parameter_noinfo();
      if ( *(_DWORD *)(m + v25[1] + 56) )
      {
        if ( v23 == *((_DWORD **)v68 + 1) )
          invalid_parameter_noinfo();
        v29 = v25[1];
        if ( !v29 || v24 >= (v25[2] - v29) / 84 )
          invalid_parameter_noinfo();
        operator delete(*(void **)(m + v25[1] + 56));
        if ( v23 == *((_DWORD **)v68 + 1) )
          invalid_parameter_noinfo();
        v30 = v25[1];
        if ( !v30 || v24 >= (v25[2] - v30) / 84 )
          invalid_parameter_noinfo();
        *(_DWORD *)(v25[1] + m + 56) = 0;
      }
      ++v24;
    }
    if ( v23 == *((_DWORD **)v68 + 1) )
      invalid_parameter_noinfo();
    v31 = v25[2];
    if ( v25[1] > v31 )
      invalid_parameter_noinfo();
    v32 = v25[1];
    if ( v32 > v25[2] )
      invalid_parameter_noinfo();
    if ( v32 != v31 )
    {
      v33 = v25[2];
      sub_10176630(v31, v33, v32);
      v34 = v32 + 84 * ((int)(v33 - v31) / 84);
      sub_10013780(v34, v25[2]);
      v25[2] = v34;
    }
    v35 = j;
    v36 = 0;
    v37 = j + 25;
    for ( n = 0; ; n += 84 )
    {
      if ( v35 == *((_DWORD **)v68 + 1) )
        invalid_parameter_noinfo();
      v39 = v37[1];
      if ( !v39 || v36 >= (v37[2] - v39) / 84 )
        break;
      if ( v35 == *((_DWORD **)v68 + 1) )
        invalid_parameter_noinfo();
      v40 = v37[1];
      if ( !v40 || v36 >= (v37[2] - v40) / 84 )
        invalid_parameter_noinfo();
      if ( *(_DWORD *)(n + v37[1] + 56) )
      {
        if ( v35 == *((_DWORD **)v68 + 1) )
          invalid_parameter_noinfo();
        v41 = v37[1];
        if ( !v41 || v36 >= (v37[2] - v41) / 84 )
          invalid_parameter_noinfo();
        operator delete[](*(void **)(n + v37[1] + 56));
        if ( v35 == *((_DWORD **)v68 + 1) )
          invalid_parameter_noinfo();
        v42 = v37[1];
        if ( !v42 || v36 >= (v37[2] - v42) / 84 )
          invalid_parameter_noinfo();
        *(_DWORD *)(v37[1] + n + 56) = 0;
      }
      ++v36;
    }
    if ( v35 == *((_DWORD **)v68 + 1) )
      invalid_parameter_noinfo();
    v43 = v37[2];
    if ( v37[1] > v43 )
      invalid_parameter_noinfo();
    v44 = v37[1];
    if ( v44 > v37[2] )
      invalid_parameter_noinfo();
    if ( v44 != v43 )
    {
      v45 = v37[2];
      sub_10176630(v43, v45, v44);
      v46 = v44 + 84 * ((int)(v45 - v43) / 84);
      sub_10013780(v46, v37[2]);
      v37[2] = v46;
    }
    v47 = j;
    v48 = 0;
    v49 = j + 29;
    for ( ii = 0; ; ii += 84 )
    {
      if ( v47 == *((_DWORD **)v68 + 1) )
        invalid_parameter_noinfo();
      v51 = v49[1];
      if ( !v51 || v48 >= (v49[2] - v51) / 84 )
        break;
      if ( v47 == *((_DWORD **)v68 + 1) )
        invalid_parameter_noinfo();
      v52 = v49[1];
      if ( !v52 || v48 >= (v49[2] - v52) / 84 )
        invalid_parameter_noinfo();
      if ( *(_DWORD *)(v49[1] + ii + 56) )
      {
        if ( v47 == *((_DWORD **)v68 + 1) )
          invalid_parameter_noinfo();
        v53 = v49[1];
        if ( !v53 || v48 >= (v49[2] - v53) / 84 )
          invalid_parameter_noinfo();
        operator delete(*(void **)(v49[1] + ii + 56));
        if ( v47 == *((_DWORD **)v68 + 1) )
          invalid_parameter_noinfo();
        v54 = v49[1];
        if ( !v54 || v48 >= (v49[2] - v54) / 84 )
          invalid_parameter_noinfo();
        *(_DWORD *)(ii + v49[1] + 56) = 0;
      }
      ++v48;
    }
    if ( v47 == *((_DWORD **)v68 + 1) )
      invalid_parameter_noinfo();
    v55 = v49[2];
    if ( v49[1] > v55 )
      invalid_parameter_noinfo();
    v56 = v49[1];
    if ( v56 > v49[2] )
      invalid_parameter_noinfo();
    if ( v56 != v55 )
    {
      v57 = v49[2];
      sub_10176630(v55, v57, v56);
      v58 = v56 + 84 * ((int)(v57 - v55) / 84);
      sub_10013780(v58, v49[2]);
      v49[2] = v58;
    }
    v59 = j;
    if ( j == *((_DWORD **)this + 30) )
      invalid_parameter_noinfo();
    v1 = this;
  }
  v60 = (_DWORD **)*((_DWORD *)v1 + 30);
  v61 = *v60;
  *v60 = v60;
  *(_DWORD *)(*((_DWORD *)v1 + 30) + 4) = *((_DWORD *)v1 + 30);
  v62 = v61 == *((_DWORD **)v1 + 30);
  *((_DWORD *)v1 + 31) = 0;
  if ( !v62 )
  {
    do
    {
      v63 = (_DWORD *)*v61;
      sub_10031EC0(v61 + 3);
      operator delete(v61);
      v61 = v63;
    }
    while ( v63 != *((_DWORD **)v1 + 30) );
  }
  v64 = (_DWORD **)*((_DWORD *)v1 + 27);
  v65 = *v64;
  *v64 = v64;
  *(_DWORD *)(*((_DWORD *)v1 + 27) + 4) = *((_DWORD *)v1 + 27);
  v62 = v65 == *((_DWORD **)v1 + 27);
  *((_DWORD *)v1 + 28) = 0;
  if ( !v62 )
  {
    do
    {
      v66 = (_DWORD *)*v65;
      sub_10031EC0(v65 + 3);
      operator delete(v65);
      v65 = v66;
    }
    while ( v66 != *((_DWORD **)v1 + 27) );
  }
  return 1;
}
