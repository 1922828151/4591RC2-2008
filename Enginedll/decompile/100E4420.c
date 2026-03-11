/*
 * func-name: ??1Material@@QAE@XZ
 * func-address: 0x100e4420
 * callers: 0x100e6830, 0x100e78e0, 0x1010c090
 * callees: 0x1000cc00, 0x1000d3d0, 0x10020a70, 0x10027320, 0x100956d0, 0x100e3ef0, 0x100e8100, 0x10124ed0, 0x101715f0, 0x101a2500
 */

void __thiscall Material::~Material(Material *this)
{
  int v2; // eax
  const char *v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // ebx
  void (__cdecl *v6)(); // ebp
  int v7; // eax
  unsigned int v8; // edi
  Shader *v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // edx
  void *v13; // ebp
  unsigned int i; // ebp
  struct MaterialManager *v15; // eax
  int v16; // ecx
  char *v17; // eax
  struct MaterialManager *v18; // eax
  int v19; // ecx
  char *v20; // edi
  struct MaterialManager *v21; // eax
  unsigned int v22; // ebx
  char *v23; // edi
  unsigned int v24; // ebp
  struct MaterialManager *v25; // eax
  char *v26; // edi
  int v27; // eax
  unsigned int v28; // edi
  int j; // ebp
  int v30; // ecx
  int v31; // ecx
  int v32; // edi
  int k; // ebp
  int v34; // eax
  int v35; // edi
  int m; // ebp
  int v37; // eax
  int v38; // [esp-4h] [ebp-2Ch]
  int v39; // [esp+14h] [ebp-14h] BYREF
  int v40; // [esp+24h] [ebp-4h]

  v2 = *((_DWORD *)this + 80);
  v40 = 10;
  if ( v2 != 1 )
  {
    v38 = v2;
    v3 = (const char *)std::string::c_str((char *)this + 184);
    Error("Material '%s' was deleted with a ref count above 1 (%d). Please use the Release() method instead.", v3, v38);
  }
  v4 = *((_DWORD *)this + 2);
  if ( *((_DWORD *)this + 1) > v4 )
    invalid_parameter_noinfo();
  v5 = *((_DWORD *)this + 1);
  v6 = invalid_parameter_noinfo;
  if ( v5 > *((_DWORD *)this + 2) )
    invalid_parameter_noinfo();
  sub_10027320((int *)this, &v39, (int)this, v5, (int)this, v4);
  v7 = *((_DWORD *)this + 38);
  v8 = 0;
  if ( v7 && *(_DWORD *)(v7 + 16) && *((_DWORD *)this + 68) )
    (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(v7 + 16) + 304))(*(_DWORD *)(v7 + 16), *((_DWORD *)this + 68));
  v9 = (Shader *)*((_DWORD *)this + 38);
  if ( v9 )
  {
    Shader::Release(v9);
    *((_DWORD *)this + 38) = 0;
  }
  while ( 1 )
  {
    v10 = *((_DWORD *)this + 70);
    if ( !v10 || v8 >= (*((_DWORD *)this + 71) - v10) >> 2 )
      break;
    v11 = *((_DWORD *)this + 70);
    if ( *(_DWORD *)(v11 + 4 * v8) )
    {
      if ( !v11 || v8 >= (*((_DWORD *)this + 71) - v11) >> 2 )
        v6();
      v12 = *((_DWORD *)this + 70);
      v13 = *(void **)(v12 + 4 * v8);
      if ( v13 )
      {
        ShaderVar::~ShaderVar(*(ShaderVar **)(v12 + 4 * v8));
        operator delete(v13);
      }
    }
    v6 = invalid_parameter_noinfo;
    ++v8;
  }
  sub_100E8100((int)this + 276, 0, 0);
  for ( i = 0; ; ++i )
  {
    v15 = MaterialManager::Instance();
    v16 = *((_DWORD *)v15 + 2);
    v17 = (char *)v15 + 4;
    if ( !v16 || i >= (*((_DWORD *)v17 + 2) - v16) >> 2 )
      break;
    v18 = MaterialManager::Instance();
    v19 = *((_DWORD *)v18 + 2);
    v20 = (char *)v18 + 4;
    if ( !v19 || i >= (*((_DWORD *)v18 + 3) - v19) >> 2 )
      invalid_parameter_noinfo();
    if ( this == *(Material **)(*((_DWORD *)v20 + 1) + 4 * i) )
    {
      v21 = MaterialManager::Instance();
      v22 = *((_DWORD *)v21 + 2);
      v23 = (char *)v21 + 4;
      if ( v22 > *((_DWORD *)v21 + 3) )
        invalid_parameter_noinfo();
      v24 = v22 + 4 * i;
      if ( v24 > *((_DWORD *)v23 + 2) || v24 < *((_DWORD *)v23 + 1) )
        invalid_parameter_noinfo();
      v25 = MaterialManager::Instance();
      v26 = (char *)v25 + 4;
      v27 = (int)(*((_DWORD *)v25 + 3) - (v24 + 4)) >> 2;
      if ( v27 > 0 )
        memmove_s((void *const)v24, 4 * v27, (const void *const)(v24 + 4), 4 * v27);
      *((_DWORD *)v26 + 2) -= 4;
      break;
    }
  }
  v28 = 0;
  for ( j = 0; ; j += 32 )
  {
    v30 = *((_DWORD *)this + 6);
    if ( !v30 || v28 >= (*((_DWORD *)this + 7) - v30) >> 5 )
      break;
    v31 = *((_DWORD *)this + 6);
    if ( *(_DWORD *)(v31 + j + 28) != -1 )
    {
      if ( !v31 || v28 >= (*((_DWORD *)this + 7) - v31) >> 5 )
        invalid_parameter_noinfo();
      AsyncLoader::CancelSubmit(AsyncLoader::s_pInstance, *(_DWORD *)(*((_DWORD *)this + 6) + j + 28));
    }
    ++v28;
  }
  if ( *((_DWORD *)this + 9) )
  {
    operator delete(*((void **)this + 9));
    *((_DWORD *)this + 9) = 0;
  }
  LOBYTE(v40) = 9;
  std::string::~string((char *)this + 292);
  if ( *((_DWORD *)this + 70) )
    operator delete(*((void **)this + 70));
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  *((_DWORD *)this + 72) = 0;
  LOBYTE(v40) = 7;
  std::string::~string((char *)this + 220);
  LOBYTE(v40) = 6;
  std::string::~string((char *)this + 184);
  LOBYTE(v40) = 5;
  std::string::~string((char *)this + 156);
  LOBYTE(v40) = 4;
  std::string::~string((char *)this + 116);
  v32 = *((_DWORD *)this + 26);
  LOBYTE(v40) = 3;
  if ( v32 )
  {
    for ( k = *((_DWORD *)this + 27); v32 != k; v32 += 28 )
      std::string::~string(v32);
    operator delete(*((void **)this + 26));
  }
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  v34 = *((_DWORD *)this + 22);
  LOBYTE(v40) = 2;
  if ( v34 )
  {
    sub_1000CC00(v34, *((_DWORD *)this + 23));
    operator delete(*((void **)this + 22));
  }
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  LOBYTE(v40) = 1;
  std::string::~string((char *)this + 56);
  v35 = *((_DWORD *)this + 6);
  LOBYTE(v40) = 0;
  if ( v35 )
  {
    for ( m = *((_DWORD *)this + 7); v35 != m; v35 += 32 )
      std::string::~string(v35);
    operator delete(*((void **)this + 6));
  }
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  v37 = *((_DWORD *)this + 1);
  v40 = -1;
  if ( v37 )
  {
    sub_10020A70(v37, *((_DWORD *)this + 2));
    operator delete(*((void **)this + 1));
  }
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
}
