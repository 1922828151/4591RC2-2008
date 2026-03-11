/*
 * func-name: ?UnloadAll@CVideoManager@@QAEXXZ
 * func-address: 0x1009c680
 * callers: none
 * callees: 0x10076ef0, 0x101a2500
 */

void __thiscall CVideoManager::UnloadAll(CVideoManager *this)
{
  unsigned int i; // edi
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  char *v34; // ebx
  char *v35; // edi
  int v36; // eax
  char *v37; // ebp
  int v38; // [esp-10h] [ebp-20h]

  for ( i = 0; i < std::vector<Model *>::size(this); ++i )
  {
    v3 = *((_DWORD *)this + 1);
    if ( !v3 || i >= (*((_DWORD *)this + 2) - v3) >> 2 )
      invalid_parameter_noinfo();
    v4 = *((_DWORD *)this + 1);
    if ( *(_DWORD *)(*(_DWORD *)(v4 + 4 * i) + 24) )
    {
      if ( !v4 || i >= (*((_DWORD *)this + 2) - v4) >> 2 )
        invalid_parameter_noinfo();
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * i) + 24) + 36))(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * i) + 24));
      v5 = *((_DWORD *)this + 1);
      if ( !v5 || i >= (*((_DWORD *)this + 2) - v5) >> 2 )
        invalid_parameter_noinfo();
      v6 = *((_DWORD *)this + 1);
      if ( *(_DWORD *)(*(_DWORD *)(v6 + 4 * i) + 24) )
      {
        if ( !v6 || i >= (*((_DWORD *)this + 2) - v6) >> 2 )
          invalid_parameter_noinfo();
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * i) + 24) + 8))(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * i) + 24));
        v7 = *((_DWORD *)this + 1);
        if ( !v7 || i >= (*((_DWORD *)this + 2) - v7) >> 2 )
          invalid_parameter_noinfo();
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * i) + 24) = 0;
      }
    }
    v8 = *((_DWORD *)this + 1);
    if ( !v8 || i >= (*((_DWORD *)this + 2) - v8) >> 2 )
      invalid_parameter_noinfo();
    v9 = *((_DWORD *)this + 1);
    if ( *(_DWORD *)(*(_DWORD *)(v9 + 4 * i) + 20) )
    {
      if ( !v9 || i >= (*((_DWORD *)this + 2) - v9) >> 2 )
        invalid_parameter_noinfo();
      v38 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * i) + 20);
      (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v38 + 52))(v38, 0, 0, 0);
      v10 = *((_DWORD *)this + 1);
      if ( !v10 || i >= (*((_DWORD *)this + 2) - v10) >> 2 )
        invalid_parameter_noinfo();
      v11 = *((_DWORD *)this + 1);
      if ( *(_DWORD *)(*(_DWORD *)(v11 + 4 * i) + 20) )
      {
        if ( !v11 || i >= (*((_DWORD *)this + 2) - v11) >> 2 )
          invalid_parameter_noinfo();
        v12 = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i);
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v12 + 20) + 8))(*(_DWORD *)(v12 + 20));
        v13 = *((_DWORD *)this + 1);
        if ( !v13 || i >= (*((_DWORD *)this + 2) - v13) >> 2 )
          invalid_parameter_noinfo();
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * i) + 20) = 0;
      }
    }
    v14 = *((_DWORD *)this + 1);
    if ( !v14 || i >= (*((_DWORD *)this + 2) - v14) >> 2 )
      invalid_parameter_noinfo();
    v15 = *((_DWORD *)this + 1);
    if ( *(_DWORD *)(*(_DWORD *)(v15 + 4 * i) + 28) )
    {
      if ( !v15 || i >= (*((_DWORD *)this + 2) - v15) >> 2 )
        invalid_parameter_noinfo();
      v16 = *((_DWORD *)this + 1);
      if ( *(_DWORD *)(*(_DWORD *)(v16 + 4 * i) + 28) )
      {
        if ( !v16 || i >= (*((_DWORD *)this + 2) - v16) >> 2 )
          invalid_parameter_noinfo();
        v17 = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i);
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v17 + 28) + 8))(*(_DWORD *)(v17 + 28));
        v18 = *((_DWORD *)this + 1);
        if ( !v18 || i >= (*((_DWORD *)this + 2) - v18) >> 2 )
          invalid_parameter_noinfo();
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * i) + 28) = 0;
      }
    }
    v19 = *((_DWORD *)this + 1);
    if ( !v19 || i >= (*((_DWORD *)this + 2) - v19) >> 2 )
      invalid_parameter_noinfo();
    v20 = *((_DWORD *)this + 1);
    if ( *(_DWORD *)(*(_DWORD *)(v20 + 4 * i) + 32) )
    {
      if ( !v20 || i >= (*((_DWORD *)this + 2) - v20) >> 2 )
        invalid_parameter_noinfo();
      v21 = *((_DWORD *)this + 1);
      if ( *(_DWORD *)(*(_DWORD *)(v21 + 4 * i) + 32) )
      {
        if ( !v21 || i >= (*((_DWORD *)this + 2) - v21) >> 2 )
          invalid_parameter_noinfo();
        v22 = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i);
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v22 + 32) + 8))(*(_DWORD *)(v22 + 32));
        v23 = *((_DWORD *)this + 1);
        if ( !v23 || i >= (*((_DWORD *)this + 2) - v23) >> 2 )
          invalid_parameter_noinfo();
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * i) + 32) = 0;
      }
    }
    v24 = *((_DWORD *)this + 1);
    if ( !v24 || i >= (*((_DWORD *)this + 2) - v24) >> 2 )
      invalid_parameter_noinfo();
    v25 = *((_DWORD *)this + 1);
    if ( *(_DWORD *)(*(_DWORD *)(v25 + 4 * i) + 16) )
    {
      if ( !v25 || i >= (*((_DWORD *)this + 2) - v25) >> 2 )
        invalid_parameter_noinfo();
      (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * i) + 16) + 76))(
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * i) + 16),
        0);
      v26 = *((_DWORD *)this + 1);
      if ( !v26 || i >= (*((_DWORD *)this + 2) - v26) >> 2 )
        invalid_parameter_noinfo();
      v27 = *((_DWORD *)this + 1);
      if ( *(_DWORD *)(*(_DWORD *)(v27 + 4 * i) + 16) )
      {
        if ( !v27 || i >= (*((_DWORD *)this + 2) - v27) >> 2 )
          invalid_parameter_noinfo();
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * i) + 16) + 8))(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * i) + 16));
        v28 = *((_DWORD *)this + 1);
        if ( !v28 || i >= (*((_DWORD *)this + 2) - v28) >> 2 )
          invalid_parameter_noinfo();
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * i) + 16) = 0;
      }
    }
    v29 = *((_DWORD *)this + 1);
    if ( !v29 || i >= (*((_DWORD *)this + 2) - v29) >> 2 )
      invalid_parameter_noinfo();
    v30 = *((_DWORD *)this + 1);
    if ( *(_DWORD *)(*(_DWORD *)(v30 + 4 * i) + 12) )
    {
      if ( !v30 || i >= (*((_DWORD *)this + 2) - v30) >> 2 )
        invalid_parameter_noinfo();
      v31 = *((_DWORD *)this + 1);
      if ( *(_DWORD *)(*(_DWORD *)(v31 + 4 * i) + 12) )
      {
        if ( !v31 || i >= (*((_DWORD *)this + 2) - v31) >> 2 )
          invalid_parameter_noinfo();
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * i) + 12) + 8))(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * i) + 12));
        v32 = *((_DWORD *)this + 1);
        if ( !v32 || i >= (*((_DWORD *)this + 2) - v32) >> 2 )
          invalid_parameter_noinfo();
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * i) + 12) = 0;
      }
    }
    v33 = *((_DWORD *)this + 1);
    if ( !v33 || i >= (*((_DWORD *)this + 2) - v33) >> 2 )
      invalid_parameter_noinfo();
    operator delete(*(void **)(*((_DWORD *)this + 1) + 4 * i));
  }
  v34 = (char *)*((_DWORD *)this + 2);
  if ( *((_DWORD *)this + 1) > (unsigned int)v34 )
    invalid_parameter_noinfo();
  v35 = (char *)*((_DWORD *)this + 1);
  if ( (unsigned int)v35 > *((_DWORD *)this + 2) )
    invalid_parameter_noinfo();
  if ( v35 != v34 )
  {
    v36 = (*((_DWORD *)this + 2) - (int)v34) >> 2;
    v37 = &v35[4 * v36];
    if ( v36 > 0 )
      memmove_s(v35, 4 * v36, v34, 4 * v36);
    *((_DWORD *)this + 2) = v37;
  }
}
