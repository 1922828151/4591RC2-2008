/*
 * func-name: ?Unload@CVideoManager@@QAEXH@Z
 * func-address: 0x1009c230
 * callers: none
 * callees: 0x10076ef0, 0x101a2500
 */

void __thiscall CVideoManager::Unload(CVideoManager *this, int a2)
{
  unsigned int v3; // edi
  int v4; // ecx
  int v5; // ecx
  void (__cdecl *v6)(); // ebx
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
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  unsigned int v38; // ebx
  unsigned int v39; // edi
  int v40; // eax
  int v41; // [esp-Ch] [ebp-18h]

  v3 = 0;
  if ( std::vector<Model *>::size(this) )
  {
    while ( 1 )
    {
      v4 = *((_DWORD *)this + 1);
      if ( !v4 || v3 >= (*((_DWORD *)this + 2) - v4) >> 2 )
        invalid_parameter_noinfo();
      if ( **(_DWORD **)(*((_DWORD *)this + 1) + 4 * v3) == a2 )
        break;
      if ( ++v3 >= std::vector<Model *>::size(this) )
        return;
    }
    v5 = *((_DWORD *)this + 1);
    if ( v5 && v3 < (*((_DWORD *)this + 2) - v5) >> 2 )
    {
      v6 = invalid_parameter_noinfo;
    }
    else
    {
      v6 = invalid_parameter_noinfo;
      invalid_parameter_noinfo();
    }
    v7 = *((_DWORD *)this + 1);
    if ( *(_DWORD *)(*(_DWORD *)(v7 + 4 * v3) + 24) )
    {
      if ( !v7 || v3 >= (*((_DWORD *)this + 2) - v7) >> 2 )
        v6();
      v8 = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3);
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v8 + 24) + 36))(*(_DWORD *)(v8 + 24));
      v9 = *((_DWORD *)this + 1);
      if ( !v9 || v3 >= (*((_DWORD *)this + 2) - v9) >> 2 )
        v6();
      v10 = *((_DWORD *)this + 1);
      if ( *(_DWORD *)(*(_DWORD *)(v10 + 4 * v3) + 24) )
      {
        if ( !v10 || v3 >= (*((_DWORD *)this + 2) - v10) >> 2 )
          v6();
        v11 = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3);
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v11 + 24) + 8))(*(_DWORD *)(v11 + 24));
        v12 = *((_DWORD *)this + 1);
        if ( !v12 || v3 >= (*((_DWORD *)this + 2) - v12) >> 2 )
          v6();
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3) + 24) = 0;
      }
    }
    v13 = *((_DWORD *)this + 1);
    if ( !v13 || v3 >= (*((_DWORD *)this + 2) - v13) >> 2 )
      v6();
    v14 = *((_DWORD *)this + 1);
    if ( *(_DWORD *)(*(_DWORD *)(v14 + 4 * v3) + 20) )
    {
      if ( !v14 || v3 >= (*((_DWORD *)this + 2) - v14) >> 2 )
        v6();
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3)
                                                                          + 20)
                                                            + 52))(
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3) + 20),
        0,
        0,
        0);
      v15 = *((_DWORD *)this + 1);
      if ( !v15 || v3 >= (*((_DWORD *)this + 2) - v15) >> 2 )
        v6();
      v16 = *((_DWORD *)this + 1);
      if ( *(_DWORD *)(*(_DWORD *)(v16 + 4 * v3) + 20) )
      {
        if ( !v16 || v3 >= (*((_DWORD *)this + 2) - v16) >> 2 )
          v6();
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3) + 20) + 8))(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3) + 20));
        v17 = *((_DWORD *)this + 1);
        if ( !v17 || v3 >= (*((_DWORD *)this + 2) - v17) >> 2 )
          v6();
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3) + 20) = 0;
      }
    }
    v18 = *((_DWORD *)this + 1);
    if ( !v18 || v3 >= (*((_DWORD *)this + 2) - v18) >> 2 )
      v6();
    v19 = *((_DWORD *)this + 1);
    if ( *(_DWORD *)(*(_DWORD *)(v19 + 4 * v3) + 28) )
    {
      if ( !v19 || v3 >= (*((_DWORD *)this + 2) - v19) >> 2 )
        v6();
      v20 = *((_DWORD *)this + 1);
      if ( *(_DWORD *)(*(_DWORD *)(v20 + 4 * v3) + 28) )
      {
        if ( !v20 || v3 >= (*((_DWORD *)this + 2) - v20) >> 2 )
          v6();
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3) + 28) + 8))(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3) + 28));
        v21 = *((_DWORD *)this + 1);
        if ( !v21 || v3 >= (*((_DWORD *)this + 2) - v21) >> 2 )
          v6();
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3) + 28) = 0;
      }
    }
    v22 = *((_DWORD *)this + 1);
    if ( !v22 || v3 >= (*((_DWORD *)this + 2) - v22) >> 2 )
      v6();
    v23 = *((_DWORD *)this + 1);
    if ( *(_DWORD *)(*(_DWORD *)(v23 + 4 * v3) + 32) )
    {
      if ( !v23 || v3 >= (*((_DWORD *)this + 2) - v23) >> 2 )
        v6();
      v24 = *((_DWORD *)this + 1);
      if ( *(_DWORD *)(*(_DWORD *)(v24 + 4 * v3) + 32) )
      {
        if ( !v24 || v3 >= (*((_DWORD *)this + 2) - v24) >> 2 )
          v6();
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3) + 32) + 8))(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3) + 32));
        v25 = *((_DWORD *)this + 1);
        if ( !v25 || v3 >= (*((_DWORD *)this + 2) - v25) >> 2 )
          v6();
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3) + 32) = 0;
      }
    }
    v26 = *((_DWORD *)this + 1);
    if ( !v26 || v3 >= (*((_DWORD *)this + 2) - v26) >> 2 )
      v6();
    v27 = *((_DWORD *)this + 1);
    if ( *(_DWORD *)(*(_DWORD *)(v27 + 4 * v3) + 16) )
    {
      if ( !v27 || v3 >= (*((_DWORD *)this + 2) - v27) >> 2 )
        v6();
      v41 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3) + 16);
      (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v41 + 76))(v41, 0);
      v28 = *((_DWORD *)this + 1);
      if ( !v28 || v3 >= (*((_DWORD *)this + 2) - v28) >> 2 )
        v6();
      v29 = *((_DWORD *)this + 1);
      if ( *(_DWORD *)(*(_DWORD *)(v29 + 4 * v3) + 16) )
      {
        if ( !v29 || v3 >= (*((_DWORD *)this + 2) - v29) >> 2 )
          v6();
        v30 = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3);
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v30 + 16) + 8))(*(_DWORD *)(v30 + 16));
        v31 = *((_DWORD *)this + 1);
        if ( !v31 || v3 >= (*((_DWORD *)this + 2) - v31) >> 2 )
          v6();
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3) + 16) = 0;
      }
    }
    v32 = *((_DWORD *)this + 1);
    if ( !v32 || v3 >= (*((_DWORD *)this + 2) - v32) >> 2 )
      v6();
    v33 = *((_DWORD *)this + 1);
    if ( *(_DWORD *)(*(_DWORD *)(v33 + 4 * v3) + 12) )
    {
      if ( !v33 || v3 >= (*((_DWORD *)this + 2) - v33) >> 2 )
        v6();
      v34 = *((_DWORD *)this + 1);
      if ( *(_DWORD *)(*(_DWORD *)(v34 + 4 * v3) + 12) )
      {
        if ( !v34 || v3 >= (*((_DWORD *)this + 2) - v34) >> 2 )
          v6();
        v35 = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3);
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v35 + 12) + 8))(*(_DWORD *)(v35 + 12));
        v36 = *((_DWORD *)this + 1);
        if ( !v36 || v3 >= (*((_DWORD *)this + 2) - v36) >> 2 )
          v6();
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3) + 12) = 0;
      }
    }
    v37 = *((_DWORD *)this + 1);
    if ( !v37 || v3 >= (*((_DWORD *)this + 2) - v37) >> 2 )
      v6();
    operator delete(*(void **)(*((_DWORD *)this + 1) + 4 * v3));
    v38 = *((_DWORD *)this + 1);
    if ( v38 > *((_DWORD *)this + 2) )
      invalid_parameter_noinfo();
    v39 = v38 + 4 * v3;
    if ( v39 > *((_DWORD *)this + 2) || v39 < *((_DWORD *)this + 1) )
      invalid_parameter_noinfo();
    v40 = (int)(*((_DWORD *)this + 2) - (v39 + 4)) >> 2;
    if ( v40 > 0 )
      memmove_s((void *const)v39, 4 * v40, (const void *const)(v39 + 4), 4 * v40);
    *((_DWORD *)this + 2) -= 4;
  }
}
