/*
 * func-name: ?ReCacheTexture@Editor@@QAEXXZ
 * func-address: 0x1008b740
 * callers: none
 * callees: 0x1000cb70, 0x1000dc10, 0x10091230, 0x100915b0, 0x10097800, 0x1010fd40, 0x10136290, 0x10136360, 0x10136530, 0x1017a2d0, 0x1017a310, 0x1017a610, 0x1017b280, 0x101a2500
 */

void __thiscall Editor::ReCacheTexture(Editor *this)
{
  unsigned int v1; // ebp
  int i; // ebx
  _BYTE *v3; // esi
  _BYTE *v4; // edi
  char *v5; // esi
  char *v6; // esi
  char *v7; // esi
  int v8; // eax
  void *v9; // esi
  int v10; // eax
  char *v11; // esi
  int v12; // ebx
  unsigned int v13; // edi
  int v14; // ebp
  char *v15; // esi
  int v16; // eax
  void *v17; // esi
  int v18; // eax
  char *v19; // esi
  void **v20; // esi
  void *v21; // eax
  void **v22; // edi
  char *v23; // esi
  char *v24; // edi
  char v25; // [esp-20h] [ebp-188h] BYREF
  int v26; // [esp-1Ch] [ebp-184h]
  int v27; // [esp-18h] [ebp-180h]
  int v28; // [esp-14h] [ebp-17Ch]
  int v29; // [esp-10h] [ebp-178h]
  int v30; // [esp-Ch] [ebp-174h]
  int v31; // [esp-8h] [ebp-170h]
  int v32; // [esp-4h] [ebp-16Ch]
  float v33; // [esp+0h] [ebp-168h]
  float v34; // [esp+4h] [ebp-164h]
  float v35; // [esp+8h] [ebp-160h]
  float v36; // [esp+Ch] [ebp-15Ch]
  float v37; // [esp+10h] [ebp-158h]
  int v38; // [esp+14h] [ebp-154h]
  int v39; // [esp+2Ch] [ebp-13Ch] BYREF
  void *v40; // [esp+30h] [ebp-138h]
  _BYTE *v41; // [esp+34h] [ebp-134h]
  int v42; // [esp+38h] [ebp-130h]
  char v43; // [esp+3Fh] [ebp-129h] BYREF
  char *v44; // [esp+40h] [ebp-128h] BYREF
  void *v45; // [esp+44h] [ebp-124h]
  char *v46; // [esp+48h] [ebp-120h]
  char v47; // [esp+50h] [ebp-118h] BYREF
  void *v48; // [esp+54h] [ebp-114h]
  int v49; // [esp+58h] [ebp-110h]
  void *v50; // [esp+60h] [ebp-108h]
  int v51; // [esp+64h] [ebp-104h]
  int v52; // [esp+68h] [ebp-100h]
  _BYTE v53[28]; // [esp+74h] [ebp-F4h] BYREF
  _BYTE v54[12]; // [esp+90h] [ebp-D8h] BYREF
  _BYTE v55[28]; // [esp+9Ch] [ebp-CCh] BYREF
  void *v56[41]; // [esp+B8h] [ebp-B0h] BYREF
  int v57; // [esp+164h] [ebp-4h]

  v40 = 0;
  v41 = 0;
  v42 = 0;
  v57 = 0;
  Texture::Texture((Texture *)v56);
  LOBYTE(v57) = 1;
  sub_10091230(&v43, &v43);
  LOBYTE(v57) = 2;
  sub_1017B280("../Textures", &v39, 32, ".*", 1);
  v1 = 0;
  for ( i = 0; ; i += 28 )
  {
    v3 = v40;
    v4 = v41;
    if ( !v40 || v1 >= (v41 - (_BYTE *)v40) / 28 )
      break;
    if ( std::string::find((char *)v40 + i, ".dds", 0) != std::string::npos )
      goto LABEL_13;
    v5 = (char *)v40;
    if ( !v40 || v1 >= (v41 - (_BYTE *)v40) / 28 )
    {
      invalid_parameter_noinfo();
      v5 = (char *)v40;
    }
    if ( std::string::find(&v5[i], ".tga", 0) != std::string::npos )
      goto LABEL_13;
    v6 = (char *)v40;
    if ( !v40 || v1 >= (v41 - (_BYTE *)v40) / 28 )
    {
      invalid_parameter_noinfo();
      v6 = (char *)v40;
    }
    if ( std::string::find(&v6[i], ".png", 0) != std::string::npos )
    {
LABEL_13:
      v7 = (char *)v40;
      if ( !v40 || v1 >= (v41 - (_BYTE *)v40) / 28 )
      {
        invalid_parameter_noinfo();
        v7 = (char *)v40;
      }
      v8 = sub_1017A310(v55, &v7[i]);
      LOBYTE(v57) = 3;
      sub_1017A2D0(v53, v8);
      LOBYTE(v57) = 5;
      std::string::~string(v55);
      sub_1017A610(v53);
      v9 = v48;
      sub_1010FD40(&v44, v53);
      if ( !v44 || v44 != &v47 )
        invalid_parameter_noinfo();
      if ( v45 == v9 )
      {
        sub_100915B0(v54, v53);
      }
      else
      {
        v10 = std::string::c_str(v53);
        Warning(&byte_101C36F0, v10);
      }
      v11 = (char *)v40;
      v38 = 0;
      v37 = 0.0;
      v36 = 1.0;
      v35 = 1.0;
      v34 = 0.0;
      v33 = 0.0;
      v32 = 0;
      if ( !v40 || v1 >= (v41 - (_BYTE *)v40) / 28 )
      {
        invalid_parameter_noinfo();
        v11 = (char *)v40;
      }
      v46 = &v25;
      std::string::string(&v25, &v11[i]);
      Texture::Load(v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38);
      Texture::Destroy((Texture *)v56);
      LOBYTE(v57) = 2;
      std::string::~string(v53);
    }
    ++v1;
  }
  v12 = (int)v41;
  if ( v40 > v41 )
  {
    invalid_parameter_noinfo();
    v4 = v41;
    v3 = v40;
  }
  if ( v3 > v4 )
    invalid_parameter_noinfo();
  sub_1000DC10(&v39, &v44, (int)&v39, (int)v3, (int)&v39, v12);
  sub_1017B280("../Models", &v39, 32, ".dds", 1);
  v13 = 0;
  v14 = 0;
  while ( v40 && v13 < (v41 - (_BYTE *)v40) / 28 )
  {
    if ( std::string::find((char *)v40 + v14, ".dds", 0) != std::string::npos )
    {
      v15 = (char *)v40;
      if ( !v40 || v13 >= (v41 - (_BYTE *)v40) / 28 )
      {
        invalid_parameter_noinfo();
        v15 = (char *)v40;
      }
      v16 = sub_1017A310(v55, &v15[v14]);
      LOBYTE(v57) = 6;
      sub_1017A2D0(v53, v16);
      LOBYTE(v57) = 8;
      std::string::~string(v55);
      sub_1017A610(v53);
      v17 = v48;
      sub_1010FD40(&v44, v53);
      if ( !v44 || v44 != &v47 )
        invalid_parameter_noinfo();
      if ( v45 == v17 )
      {
        sub_100915B0(v54, v53);
      }
      else
      {
        v18 = std::string::c_str(v53);
        Warning(&byte_101C3720, v18);
      }
      v19 = (char *)v40;
      v38 = 0;
      v37 = 0.0;
      v36 = 1.0;
      v35 = 1.0;
      v34 = 0.0;
      v33 = 0.0;
      v32 = 0;
      if ( !v40 || v13 >= (v41 - (_BYTE *)v40) / 28 )
      {
        invalid_parameter_noinfo();
        v19 = (char *)v40;
      }
      v46 = &v25;
      std::string::string(&v25, &v19[v14]);
      Texture::Load(v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38);
      Texture::Destroy((Texture *)v56);
      LOBYTE(v57) = 2;
      std::string::~string(v53);
    }
    ++v13;
    v14 += 28;
  }
  LOBYTE(v57) = 1;
  if ( v50 )
    operator delete(v50);
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v20 = *(void ***)v48;
  *(_DWORD *)v48 = v48;
  *((_DWORD *)v48 + 1) = v48;
  v21 = v48;
  v49 = 0;
  if ( v20 != v48 )
  {
    do
    {
      v22 = (void **)*v20;
      std::string::~string(v20 + 2);
      operator delete(v20);
      v21 = v48;
      v20 = v22;
    }
    while ( v22 != v48 );
  }
  operator delete(v21);
  v48 = 0;
  LOBYTE(v57) = 0;
  Texture::~Texture(v56);
  v23 = (char *)v40;
  v57 = -1;
  if ( v40 )
  {
    v24 = v41;
    if ( v40 != v41 )
    {
      do
      {
        std::string::~string(v23);
        v23 += 28;
      }
      while ( v23 != v24 );
      v23 = (char *)v40;
    }
    operator delete(v23);
  }
}
