/*
 * func-name: ??1Terrain@@UAE@XZ
 * func-address: 0x10161a90
 * callers: 0x10055080
 * callees: 0x1000cb70, 0x100518e0, 0x10136360, 0x1016b220, 0x101a2500, 0x101a253a
 */

void __thiscall Terrain::~Terrain(Terrain *this)
{
  void **v2; // edi
  void *v3; // edi
  unsigned int i; // edi
  int v5; // ecx
  int v6; // eax
  void (__thiscall ***v7)(_DWORD, int); // ecx
  unsigned int v8; // ecx
  Terrain **v9; // eax
  int v10; // ebx
  Terrain **v11; // edi
  Terrain **j; // ecx
  int v13; // eax
  unsigned int k; // edi
  int v15; // ecx
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  void *v19; // ebx
  int v20; // ecx
  char *v21; // ebx
  char *v22; // edi
  int v23; // eax
  char *v24; // ebp
  void *v25; // eax
  void (__thiscall ***v26)(_DWORD, _DWORD); // edi
  void (__thiscall ***m)(_DWORD, _DWORD); // ebx

  *(_DWORD *)this = &Terrain::`vftable';
  v2 = (void **)*((_DWORD *)this + 377);
  if ( v2 )
  {
    Texture::~Texture(v2);
    operator delete(v2);
    *((_DWORD *)this + 377) = 0;
  }
  v3 = (void *)*((_DWORD *)this + 397);
  if ( v3 )
  {
    Texture::~Texture(*((void ***)this + 397));
    operator delete(v3);
    *((_DWORD *)this + 397) = 0;
  }
  if ( *((_DWORD *)this + 334) )
  {
    operator delete[](*((void **)this + 334));
    *((_DWORD *)this + 334) = 0;
  }
  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)this + 295);
    if ( !v5 || i >= (*((_DWORD *)this + 296) - v5) >> 2 )
      break;
    v6 = *((_DWORD *)this + 295);
    if ( *(_DWORD *)(v6 + 4 * i) )
    {
      if ( !v6 || i >= (*((_DWORD *)this + 296) - v6) >> 2 )
        invalid_parameter_noinfo();
      v7 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 295) + 4 * i);
      if ( v7 )
        (**v7)(v7, 1);
    }
  }
  sub_1016B220((int)this + 1176, 0, 0);
  v8 = dword_11242A38;
  v9 = (Terrain **)dword_11242A34;
  v10 = dword_11242A38;
  if ( (unsigned int)dword_11242A34 > dword_11242A38 )
  {
    invalid_parameter_noinfo();
    v9 = (Terrain **)dword_11242A34;
    v8 = dword_11242A38;
  }
  v11 = v9;
  if ( (unsigned int)v9 > v8 )
    invalid_parameter_noinfo();
  for ( j = v11; j != (Terrain **)v10; ++j )
  {
    if ( *j == this )
      break;
  }
  v13 = (dword_11242A38 - (int)(j + 1)) >> 2;
  if ( v13 > 0 )
    memmove_s(j, 4 * v13, j + 1, 4 * v13);
  dword_11242A38 -= 4;
  for ( k = 0; ; ++k )
  {
    v15 = *((_DWORD *)this + 427);
    if ( !v15 || k >= (*((_DWORD *)this + 428) - v15) >> 2 )
      break;
    Texture::Destroy(*(Texture **)(*((_DWORD *)this + 427) + 4 * k));
    v16 = *((_DWORD *)this + 427);
    if ( !v16 || k >= (*((_DWORD *)this + 428) - v16) >> 2 )
      invalid_parameter_noinfo();
    v17 = *((_DWORD *)this + 427);
    if ( *(_DWORD *)(v17 + 4 * k) )
    {
      if ( !v17 || k >= (*((_DWORD *)this + 428) - v17) >> 2 )
        invalid_parameter_noinfo();
      v18 = *((_DWORD *)this + 427);
      v19 = *(void **)(v18 + 4 * k);
      if ( v19 )
      {
        Texture::~Texture(*(void ***)(v18 + 4 * k));
        operator delete(v19);
      }
      v20 = *((_DWORD *)this + 427);
      if ( !v20 || k >= (*((_DWORD *)this + 428) - v20) >> 2 )
        invalid_parameter_noinfo();
      *(_DWORD *)(*((_DWORD *)this + 427) + 4 * k) = 0;
    }
  }
  v21 = (char *)*((_DWORD *)this + 428);
  if ( *((_DWORD *)this + 427) > (unsigned int)v21 )
    invalid_parameter_noinfo();
  v22 = (char *)*((_DWORD *)this + 427);
  if ( (unsigned int)v22 > *((_DWORD *)this + 428) )
    invalid_parameter_noinfo();
  if ( v22 != v21 )
  {
    v23 = (*((_DWORD *)this + 428) - (int)v21) >> 2;
    v24 = &v22[4 * v23];
    if ( v23 > 0 )
      memmove_s(v22, 4 * v23, v21, 4 * v23);
    *((_DWORD *)this + 428) = v24;
  }
  if ( *((_DWORD *)this + 427) )
    operator delete(*((void **)this + 427));
  *((_DWORD *)this + 427) = 0;
  *((_DWORD *)this + 428) = 0;
  *((_DWORD *)this + 429) = 0;
  std::string::~string((char *)this + 1676);
  std::string::~string((char *)this + 1648);
  std::string::~string((char *)this + 1620);
  std::string::~string((char *)this + 1592);
  std::string::~string((char *)this + 1480);
  std::string::~string((char *)this + 1400);
  if ( *((_DWORD *)this + 347) )
    operator delete(*((void **)this + 347));
  *((_DWORD *)this + 347) = 0;
  *((_DWORD *)this + 348) = 0;
  *((_DWORD *)this + 349) = 0;
  v25 = (void *)*((_DWORD *)this + 343);
  *((_DWORD *)this + 345) = 0;
  *((_DWORD *)this + 338) = 0;
  *((_DWORD *)this + 339) = 0;
  *((_DWORD *)this + 340) = 0;
  *((_DWORD *)this + 341) = 0;
  if ( v25 )
  {
    operator delete[](v25);
    *((_DWORD *)this + 343) = 0;
  }
  if ( *((_DWORD *)this + 344) )
  {
    operator delete[](*((void **)this + 344));
    *((_DWORD *)this + 344) = 0;
  }
  std::string::~string((char *)this + 1268);
  std::string::~string((char *)this + 1240);
  v26 = (void (__thiscall ***)(_DWORD, _DWORD))*((_DWORD *)this + 307);
  if ( v26 )
  {
    for ( m = (void (__thiscall ***)(_DWORD, _DWORD))*((_DWORD *)this + 308); v26 != m; v26 += 13 )
      (**v26)(v26, 0);
    operator delete(*((void **)this + 307));
  }
  *((_DWORD *)this + 307) = 0;
  *((_DWORD *)this + 308) = 0;
  *((_DWORD *)this + 309) = 0;
  if ( *((_DWORD *)this + 299) )
    operator delete(*((void **)this + 299));
  *((_DWORD *)this + 299) = 0;
  *((_DWORD *)this + 300) = 0;
  *((_DWORD *)this + 301) = 0;
  if ( *((_DWORD *)this + 295) )
    operator delete(*((void **)this + 295));
  *((_DWORD *)this + 295) = 0;
  *((_DWORD *)this + 296) = 0;
  *((_DWORD *)this + 297) = 0;
  Prefab::~Prefab(this);
}
