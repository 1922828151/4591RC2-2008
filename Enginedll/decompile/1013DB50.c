/*
 * func-name: ?UnLoadWorld@World@@AAEXXZ
 * func-address: 0x1013db50
 * callers: 0x1013df10, 0x1013df40, 0x1013e1c0
 * callees: 0x100a01c0, 0x100a0e00, 0x100e6830, 0x10101780, 0x10102270, 0x10118c10, 0x1013f550, 0x1013f610, 0x101a2500
 */

void __thiscall World::UnLoadWorld(World *this)
{
  unsigned int i; // edi
  unsigned int v3; // ecx
  char *v4; // ebx
  void (__cdecl *v5)(); // ebp
  char *v6; // edi
  int v7; // eax
  char *v8; // ebp
  _BYTE *v9; // eax
  char *v10; // edi
  char *v11; // ebx
  int v12; // eax
  char *v13; // ebp
  unsigned int v14; // ebx
  int v15; // ecx
  int v16; // ecx
  int v17; // edi
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // edi
  unsigned int v22; // eax
  int v23; // ecx
  char *v24; // ebx
  char *v25; // edi
  int v26; // eax
  char *v27; // ebp
  unsigned int j; // ebx
  int v29; // ecx
  int v30; // ecx
  int v31; // edx
  void *v32; // ebp
  unsigned int k; // ebx
  int v34; // ecx
  int v35; // eax
  char *v36; // ebp
  FXManager *v37; // eax
  int *v38; // esi
  void *v39; // edi

  *((_BYTE *)this + 81) = 1;
  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 178);
    if ( !v3 || i >= (int)(*((_DWORD *)this + 179) - v3) >> 2 )
      break;
    Material::Release(*(Material **)(*((_DWORD *)this + 178) + 4 * i));
  }
  v4 = (char *)*((_DWORD *)this + 179);
  v5 = invalid_parameter_noinfo;
  if ( v3 > (unsigned int)v4 )
    invalid_parameter_noinfo();
  v6 = (char *)*((_DWORD *)this + 178);
  if ( (unsigned int)v6 > *((_DWORD *)this + 179) )
    invalid_parameter_noinfo();
  if ( v6 != v4 )
  {
    v7 = (*((_DWORD *)this + 179) - (int)v4) >> 2;
    v8 = &v6[4 * v7];
    if ( v7 > 0 )
      memmove_s(v6, 4 * v7, v4, 4 * v7);
    *((_DWORD *)this + 179) = v8;
    v5 = invalid_parameter_noinfo;
  }
  v9 = dword_11241AC0;
  v10 = (char *)dword_11241ABC;
  v11 = (char *)dword_11241AC0;
  if ( dword_11241ABC > dword_11241AC0 )
  {
    v5();
    v9 = dword_11241AC0;
    v10 = (char *)dword_11241ABC;
    if ( dword_11241ABC > dword_11241AC0 )
    {
      v5();
      v9 = dword_11241AC0;
    }
  }
  if ( v10 != v11 )
  {
    v12 = (v9 - v11) >> 2;
    v13 = &v10[4 * v12];
    if ( v12 > 0 )
      memmove_s(v10, 4 * v12, v11, 4 * v12);
    dword_11241AC0 = v13;
    v5 = invalid_parameter_noinfo;
  }
  v14 = 0;
  while ( 1 )
  {
    v15 = *((_DWORD *)this + 806);
    if ( !v15 || v14 >= (*((_DWORD *)this + 807) - v15) >> 2 )
      break;
    v16 = *((_DWORD *)this + 806);
    if ( *(_BYTE *)(*(_DWORD *)(v16 + 4 * v14) + 696) )
      goto LABEL_38;
    if ( v16 )
      v17 = (*((_DWORD *)this + 807) - v16) >> 2;
    else
      v17 = 0;
    if ( !v16 || v14 >= (*((_DWORD *)this + 807) - v16) >> 2 )
      v5();
    v18 = *(_DWORD *)(*((_DWORD *)this + 806) + 4 * v14);
    if ( v18 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v18 + 80))(v18, 1);
    v19 = *((_DWORD *)this + 806);
    if ( v19 )
      v20 = (*((_DWORD *)this + 807) - v19) >> 2;
    else
      v20 = 0;
    v21 = v17 - v20;
    if ( v21 <= 0 )
    {
      --v14;
LABEL_38:
      ++v14;
    }
    else
    {
      v14 = v14 - v21 + 1;
    }
  }
  while ( 1 )
  {
    v22 = *((_DWORD *)this + 806);
    if ( !v22 || !((int)(*((_DWORD *)this + 807) - v22) >> 2) )
      break;
    v23 = **((_DWORD **)this + 806);
    if ( v23 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v23 + 80))(v23, 1);
  }
  v24 = (char *)*((_DWORD *)this + 807);
  if ( v22 > (unsigned int)v24 )
    v5();
  v25 = (char *)*((_DWORD *)this + 806);
  if ( (unsigned int)v25 > *((_DWORD *)this + 807) )
    v5();
  if ( v25 != v24 )
  {
    v26 = (*((_DWORD *)this + 807) - (int)v24) >> 2;
    v27 = &v25[4 * v26];
    if ( v26 > 0 )
      memmove_s(v25, 4 * v26, v24, 4 * v26);
    *((_DWORD *)this + 807) = v27;
    v5 = invalid_parameter_noinfo;
  }
  for ( j = 0; ; ++j )
  {
    v29 = *((_DWORD *)this + 814);
    if ( !v29 || j >= (*((_DWORD *)this + 815) - v29) >> 2 )
      break;
    v30 = *((_DWORD *)this + 814);
    if ( *(_DWORD *)(v30 + 4 * j) )
    {
      if ( !v30 || j >= (*((_DWORD *)this + 815) - v30) >> 2 )
        v5();
      v31 = *((_DWORD *)this + 814);
      v32 = *(void **)(v31 + 4 * j);
      if ( v32 )
      {
        Script::~Script(*(Script **)(v31 + 4 * j));
        operator delete(v32);
      }
      v5 = invalid_parameter_noinfo;
    }
  }
  sub_1013F550((int)this + 3252, 0, 0);
  for ( k = 0; ; ++k )
  {
    v34 = *((_DWORD *)this + 818);
    if ( !v34 || k >= (*((_DWORD *)this + 819) - v34) >> 2 )
      break;
    v35 = *((_DWORD *)this + 818);
    if ( *(_DWORD *)(v35 + 4 * k) )
    {
      if ( !v35 || k >= (*((_DWORD *)this + 819) - v35) >> 2 )
        v5();
      v36 = *(char **)(*((_DWORD *)this + 818) + 4 * k);
      if ( v36 )
      {
        std::string::~string(v36 + 432);
        operator delete(v36);
      }
      v5 = invalid_parameter_noinfo;
    }
  }
  sub_1013F610((int)this + 3268, 0, 0);
  std::string::operator=((char *)this + 3188, "MAP NOT LOADED");
  sub_10101780(*((_DWORD **)this + 4));
  *((_DWORD *)this + 18) = 5000;
  v37 = FXManager::Instance();
  FXManager::Reset(v37, this);
  *((_BYTE *)this + 81) = 0;
  v38 = (int *)*((_DWORD *)this + 189);
  if ( v38 )
  {
    v39 = (void *)*v38;
    if ( *v38 )
    {
      sub_10102270(*v38);
      operator delete(v39);
      *v38 = 0;
    }
  }
}
