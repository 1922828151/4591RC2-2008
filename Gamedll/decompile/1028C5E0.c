/*
 * func-name: ?Clear@CStatusUI@@AAEXXZ_0
 * func-address: 0x1028c5e0
 * callers: 0x1000156e
 * callees: none
 */

void __thiscall CStatusUI::Clear(CStatusUI *this)
{
  unsigned int i; // edi
  unsigned int v3; // ecx
  char *v4; // ebx
  void (__cdecl *v5)(); // ebp
  char *v6; // edi
  int v7; // eax
  char *v8; // ebp
  unsigned int j; // edi
  unsigned int v10; // ecx
  char *v11; // ebx
  char *v12; // edi
  int v13; // eax
  char *v14; // ebp
  char *v15; // ebx
  char *v16; // edi
  int v17; // eax
  char *v18; // ebp
  char *v19; // ebx
  char *v20; // edi
  int v21; // eax
  char *v22; // ebp
  unsigned int k; // edi
  unsigned int v24; // ecx
  char *v25; // ebx
  char *v26; // edi
  int v27; // eax
  char *v28; // ebp
  unsigned int m; // edi
  unsigned int v30; // ecx
  char *v31; // ebx
  char *v32; // edi
  int v33; // eax
  char *v34; // ebp

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 977);
    if ( !v3 || i >= (int)(*((_DWORD *)this + 978) - v3) >> 2 )
      break;
    CREDialog::RemoveControl(this, *(struct CREControl **)(*((_DWORD *)this + 977) + 4 * i));
  }
  v4 = (char *)*((_DWORD *)this + 978);
  v5 = _invalid_parameter_noinfo;
  if ( v3 > (unsigned int)v4 )
    _invalid_parameter_noinfo();
  v6 = (char *)*((_DWORD *)this + 977);
  if ( (unsigned int)v6 > *((_DWORD *)this + 978) )
    _invalid_parameter_noinfo();
  if ( v6 != v4 )
  {
    v7 = (*((_DWORD *)this + 978) - (int)v4) >> 2;
    v8 = &v6[4 * v7];
    if ( v7 > 0 )
      memmove_s(v6, 4 * v7, v4, 4 * v7);
    *((_DWORD *)this + 978) = v8;
    v5 = _invalid_parameter_noinfo;
  }
  for ( j = 0; ; ++j )
  {
    v10 = *((_DWORD *)this + 981);
    if ( !v10 || j >= (int)(*((_DWORD *)this + 982) - v10) >> 2 )
      break;
    CREDialog::RemoveControl(this, *(struct CREControl **)(*((_DWORD *)this + 981) + 4 * j));
  }
  v11 = (char *)*((_DWORD *)this + 982);
  if ( v10 > (unsigned int)v11 )
    v5();
  v12 = (char *)*((_DWORD *)this + 981);
  if ( (unsigned int)v12 > *((_DWORD *)this + 982) )
    v5();
  if ( v12 != v11 )
  {
    v13 = (*((_DWORD *)this + 982) - (int)v11) >> 2;
    v14 = &v12[4 * v13];
    if ( v13 > 0 )
      memmove_s(v12, 4 * v13, v11, 4 * v13);
    *((_DWORD *)this + 982) = v14;
    v5 = _invalid_parameter_noinfo;
  }
  v15 = (char *)*((_DWORD *)this + 978);
  if ( *((_DWORD *)this + 977) > (unsigned int)v15 )
    v5();
  v16 = (char *)*((_DWORD *)this + 977);
  if ( (unsigned int)v16 > *((_DWORD *)this + 978) )
    v5();
  if ( v16 != v15 )
  {
    v17 = (*((_DWORD *)this + 978) - (int)v15) >> 2;
    v18 = &v16[4 * v17];
    if ( v17 > 0 )
      memmove_s(v16, 4 * v17, v15, 4 * v17);
    *((_DWORD *)this + 978) = v18;
    v5 = _invalid_parameter_noinfo;
  }
  v19 = (char *)*((_DWORD *)this + 986);
  if ( *((_DWORD *)this + 985) > (unsigned int)v19 )
    v5();
  v20 = (char *)*((_DWORD *)this + 985);
  if ( (unsigned int)v20 > *((_DWORD *)this + 986) )
    v5();
  if ( v20 != v19 )
  {
    v21 = (*((_DWORD *)this + 986) - (int)v19) >> 2;
    v22 = &v20[4 * v21];
    if ( v21 > 0 )
      memmove_s(v20, 4 * v21, v19, 4 * v21);
    *((_DWORD *)this + 986) = v22;
    v5 = _invalid_parameter_noinfo;
  }
  for ( k = 0; ; ++k )
  {
    v24 = *((_DWORD *)this + 969);
    if ( !v24 || k >= (int)(*((_DWORD *)this + 970) - v24) >> 2 )
      break;
    CREDialog::RemoveControl(this, *(struct CREControl **)(*((_DWORD *)this + 969) + 4 * k));
  }
  v25 = (char *)*((_DWORD *)this + 970);
  if ( v24 > (unsigned int)v25 )
    v5();
  v26 = (char *)*((_DWORD *)this + 969);
  if ( (unsigned int)v26 > *((_DWORD *)this + 970) )
    v5();
  if ( v26 != v25 )
  {
    v27 = (*((_DWORD *)this + 970) - (int)v25) >> 2;
    v28 = &v26[4 * v27];
    if ( v27 > 0 )
      memmove_s(v26, 4 * v27, v25, 4 * v27);
    *((_DWORD *)this + 970) = v28;
    v5 = _invalid_parameter_noinfo;
  }
  for ( m = 0; ; ++m )
  {
    v30 = *((_DWORD *)this + 973);
    if ( !v30 || m >= (int)(*((_DWORD *)this + 974) - v30) >> 2 )
      break;
    CREDialog::RemoveControl(this, *(struct CREControl **)(*((_DWORD *)this + 973) + 4 * m));
  }
  v31 = (char *)*((_DWORD *)this + 974);
  if ( v30 > (unsigned int)v31 )
    v5();
  v32 = (char *)*((_DWORD *)this + 973);
  if ( (unsigned int)v32 > *((_DWORD *)this + 974) )
    v5();
  if ( v32 != v31 )
  {
    v33 = (*((_DWORD *)this + 974) - (int)v31) >> 2;
    v34 = &v32[4 * v33];
    if ( v33 > 0 )
      memmove_s(v32, 4 * v33, v31, 4 * v33);
    *((_DWORD *)this + 974) = v34;
  }
  (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 1010) + 136))(*((_DWORD *)this + 1010), 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 1009) + 136))(*((_DWORD *)this + 1009), 0);
}
