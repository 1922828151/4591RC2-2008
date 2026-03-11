/*
 * func-name: sub_10003A50
 * func-address: 0x10003a50
 * callers: 0x100085f0, 0x10008c60
 * callees: 0x10001ca0, 0x10002c50, 0x1000d3d0, 0x10010b20, 0x100117e0, 0x100e2f30, 0x100e3020, 0x100e3ef0, 0x100e40e0, 0x100e4400, 0x100e6830, 0x100e68a0, 0x100e6ae0, 0x10122bb0, 0x10122ce0, 0x10136290, 0x10136530, 0x10138500, 0x101a24ac, 0x101a2500, 0x101a251c, 0x101a252e, 0x101a2534, 0x101a253a
 */

size_t __thiscall sub_10003A50(int *this, FILE *Stream, _DWORD *a3)
{
  void (__cdecl *v3)(void *, size_t, size_t, FILE *); // esi
  FILE *v4; // edi
  int *v5; // ebx
  int v6; // ebp
  size_t result; // eax
  double v8; // st7
  int v9; // eax
  int v10; // eax
  void *v11; // ebx
  int v12; // ebp
  void *v13; // ebx
  _DWORD *v14; // ebp
  int *v15; // esi
  unsigned int j; // edi
  int v17; // ecx
  Texture *v18; // eax
  Texture *v19; // edi
  int v20; // edi
  int Type; // eax
  const char *v22; // edi
  void *v23; // eax
  unsigned int v24; // edx
  unsigned int v25; // ecx
  int **v26; // eax
  void *v27; // esi
  const char *v28; // eax
  Material *v29; // ebp
  Material **v30; // eax
  unsigned int v31; // edx
  unsigned int v32; // ecx
  Material **v33; // eax
  void *v34; // ebx
  char v35; // [esp-18h] [ebp-238h] BYREF
  int v36; // [esp-14h] [ebp-234h]
  int v37; // [esp-10h] [ebp-230h]
  int v38; // [esp-Ch] [ebp-22Ch]
  int v39; // [esp-8h] [ebp-228h] BYREF
  int v40; // [esp-4h] [ebp-224h]
  _BYTE *v41; // [esp+0h] [ebp-220h]
  int v42; // [esp+4h] [ebp-21Ch] BYREF
  float v43; // [esp+8h] [ebp-218h]
  float v44; // [esp+Ch] [ebp-214h]
  float v45; // [esp+10h] [ebp-210h]
  int v46; // [esp+14h] [ebp-20Ch]
  float v47; // [esp+18h] [ebp-208h]
  size_t v48; // [esp+1Ch] [ebp-204h]
  void *Src; // [esp+30h] [ebp-1F0h] BYREF
  int v50; // [esp+34h] [ebp-1ECh] BYREF
  int v51; // [esp+38h] [ebp-1E8h] BYREF
  char v52; // [esp+3Fh] [ebp-1E1h]
  int v53; // [esp+40h] [ebp-1E0h] BYREF
  size_t Size; // [esp+44h] [ebp-1DCh] BYREF
  Material *Material; // [esp+48h] [ebp-1D8h] BYREF
  int *v56; // [esp+4Ch] [ebp-1D4h]
  int Buffer; // [esp+50h] [ebp-1D0h] BYREF
  int v58; // [esp+54h] [ebp-1CCh] BYREF
  int i; // [esp+58h] [ebp-1C8h]
  int v60; // [esp+5Ch] [ebp-1C4h] BYREF
  int v61[7]; // [esp+60h] [ebp-1C0h] BYREF
  _BYTE v62[28]; // [esp+7Ch] [ebp-1A4h] BYREF
  int v63[7]; // [esp+98h] [ebp-188h] BYREF
  _BYTE v64[28]; // [esp+B4h] [ebp-16Ch] BYREF
  int v65; // [esp+D0h] [ebp-150h] BYREF
  int v66; // [esp+D8h] [ebp-148h] BYREF
  int v67[7]; // [esp+E0h] [ebp-140h] BYREF
  int v68; // [esp+FCh] [ebp-124h] BYREF
  int v69[69]; // [esp+100h] [ebp-120h] BYREF
  int v70; // [esp+21Ch] [ebp-4h]

  v3 = (void (__cdecl *)(void *, size_t, size_t, FILE *))fread;
  v4 = Stream;
  v5 = this;
  v6 = 0;
  v56 = this;
  Buffer = 0;
  result = fread(&Buffer, 4u, 1u, Stream);
  for ( i = 0; i < Buffer; ++i )
  {
    v60 = 0;
    v3(&v60, 4u, 1u, v4);
    sub_10001CA0((int)v63, v4);
    v8 = (double)v5[13];
    v70 = 0;
    *(float *)&v50 = v8 / (double)v5[12] * 60.0;
    if ( *(float *)&v50 > 60.0 )
      *(float *)&v50 = 60.0;
    v9 = v5[23];
    if ( v9 && *(_DWORD *)(v9 + 3792) )
    {
      v10 = std::string::string(v61, "Loading Material: ");
      v51 = (int)&v42;
      LOBYTE(v70) = 1;
      std::operator+<char>(&v42, v10, v63);
      (*(void (__cdecl **)(int))(v5[23] + 3792))(v50);
      LOBYTE(v70) = 0;
      std::string::~string(v61);
    }
    ++v5[13];
    v51 = (int)&v42;
    std::string::string(&v42, v63);
    LOBYTE(v70) = 2;
    MaterialManager::Instance();
    LOBYTE(v70) = 0;
    Material = (Material *)MaterialManager::FindMaterial(
                             v42,
                             LODWORD(v43),
                             LODWORD(v44),
                             LODWORD(v45),
                             v46,
                             LODWORD(v47),
                             v48);
    if ( Material )
    {
      Src = 0;
      v3(&Src, 4u, 1u, v4);
      v3(&Src, 4u, 1u, v4);
      v3(&Src, 4u, 1u, v4);
      if ( v5[14] >= 2 )
        v3(&Src, 4u, 1u, v4);
      sub_10001CA0((int)v61, v4);
      std::string::~string(v61);
      sub_10001CA0((int)v61, v4);
      std::string::~string(v61);
      v3(&Src, 4u, 1u, v4);
      v11 = operator new(0x400u);
      v50 = (int)v11;
      memset(v11, 0, 0x400u);
      v12 = 0;
      if ( (int)Src > 0 )
      {
        do
        {
          v48 = 0;
          v47 = 0.0;
          v46 = 3;
          v51 = (int)&v39;
          std::string::string(&v39, &unk_101BABB7);
          ShaderVar::ShaderVar(v39, v40, v41, v42, LODWORD(v43), LODWORD(v44), LODWORD(v45), v46, LODWORD(v47), v48);
          LOBYTE(v70) = 3;
          v53 = 0;
          sub_10002C50(&v68, (void **)&v50, v4, &v53, (int)v69);
          LOBYTE(v70) = 0;
          ShaderVar::~ShaderVar((ShaderVar *)&v68);
          ++v12;
        }
        while ( v12 < (int)Src );
        v11 = (void *)v50;
      }
      operator delete[](v11);
      Material::AddRef(Material);
    }
    else
    {
      v53 = (int)operator new(0x154u);
      LOBYTE(v70) = 4;
      if ( v53 )
      {
        v51 = (int)&v42;
        std::string::string(&v42, v63);
        v6 = Material::Material(v42, LODWORD(v43), LODWORD(v44), LODWORD(v45), v46, LODWORD(v47), v48);
        v50 = v6;
      }
      else
      {
        *(float *)&v50 = 0.0;
      }
      LOBYTE(v70) = 0;
      Material = (Material *)v6;
      v3((void *)(v6 + 332), 4u, 1u, v4);
      v3((void *)(v6 + 336), 4u, 1u, v4);
      v3((void *)(v6 + 212), 4u, 1u, v4);
      if ( v5[14] >= 2 )
        v3((void *)(v6 + 144), 4u, 1u, v4);
      sub_10001CA0((int)v61, v4);
      LOBYTE(v70) = 5;
      sub_10001CA0((int)v67, v4);
      LOBYTE(v70) = 6;
      v58 = 0;
      v3(&v58, 4u, 1u, v4);
      v13 = operator new(0x400u);
      Src = v13;
      memset(v13, 0, 0x400u);
      v53 = 0;
      if ( v58 > 0 )
      {
        v14 = (_DWORD *)(v6 + 276);
        do
        {
          v51 = (int)operator new(0x118u);
          LOBYTE(v70) = 7;
          if ( v51 )
          {
            v48 = 0;
            v47 = 0.0;
            v46 = 3;
            Size = (size_t)&v39;
            std::string::string(&v39, &unk_101BABBD);
            v15 = (int *)ShaderVar::ShaderVar(
                           v39,
                           v40,
                           v41,
                           v42,
                           LODWORD(v43),
                           LODWORD(v44),
                           LODWORD(v45),
                           v46,
                           LODWORD(v47),
                           v48);
          }
          else
          {
            v15 = 0;
          }
          LOBYTE(v70) = 6;
          v51 = (int)v15;
          Size = 0;
          v52 = sub_10002C50(v15, &Src, v4, &Size, (int)(v15 + 1));
          for ( j = 0; ; ++j )
          {
            v17 = v14[1];
            if ( !v17 || j >= (v14[2] - v17) >> 2 )
              break;
            if ( (unsigned __int8)std::operator==<char>(*(_DWORD *)(v14[1] + 4 * j) + 4, v15 + 1) )
              goto LABEL_48;
          }
          if ( !v52 )
          {
LABEL_48:
            if ( v15 )
            {
              ShaderVar::~ShaderVar((ShaderVar *)v15);
              operator delete(v15);
            }
            goto LABEL_50;
          }
          if ( *v15 == 9 )
          {
            std::string::string(v64, (char *)Src + 100);
            LOBYTE(v70) = 8;
            v18 = (Texture *)operator new(0x9Cu);
            Size = (size_t)v18;
            LOBYTE(v70) = 9;
            if ( v18 )
              v19 = Texture::Texture(v18);
            else
              v19 = 0;
            LOBYTE(v70) = 8;
            std::string::operator=((char *)v19 + 100, v64);
            v48 = 0;
            v47 = 0.0;
            *(float *)&v46 = 1.0;
            v45 = 1.0;
            v44 = 0.0;
            v43 = 0.0;
            v42 = 0;
            Size = (size_t)&v35;
            std::string::string(&v35, v64);
            Texture::Load(v35, v36, v37, v38, v39, v40, (int)v41, v42, v43, v44, v45, *(float *)&v46, v47, v48);
            std::string::string(v62, v15 + 1);
            LOBYTE(v70) = 10;
            std::string::operator=(v15 + 1, v62);
            ShaderVar::Destroy((ShaderVar *)v15);
            *v15 = 9;
            v15[69] = 3;
            v15[15] = (int)v19;
            LOBYTE(v70) = 8;
            std::string::~string(v62);
            if ( *((_DWORD *)v19 + 24) == 1 )
            {
              v20 = v50 + 220;
              if ( !std::string::length(v50 + 220) )
              {
                Size = (size_t)&v42;
                std::string::string(&v42, v64);
                v41 = v62;
                LOBYTE(v70) = 11;
                MaterialManager::Instance();
                LOBYTE(v70) = 8;
                Type = MaterialManager::GetType(
                         v41,
                         v42,
                         LODWORD(v43),
                         LODWORD(v44),
                         LODWORD(v45),
                         v46,
                         LODWORD(v47),
                         v48);
                LOBYTE(v70) = 12;
                std::string::operator=(v20, Type);
                LOBYTE(v70) = 8;
                std::string::~string(v62);
              }
            }
            LOBYTE(v70) = 6;
            std::string::~string(v64);
          }
          else
          {
            ShaderVar::Destroy((ShaderVar *)v15);
            v22 = (const char *)Size;
            v48 = Size;
            v15[16] = Size;
            v23 = operator new(v48);
            v47 = *(float *)&v22;
            v46 = (int)Src;
            v45 = *(float *)&v23;
            v15[15] = (int)v23;
            memcpy((void *)LODWORD(v45), (const void *)v46, LODWORD(v47));
            v15[69] = 2;
          }
          v24 = v14[1];
          if ( v24 )
            v25 = (int)(v14[2] - v24) >> 2;
          else
            v25 = 0;
          if ( v24 && v25 < (int)(v14[3] - v24) >> 2 )
          {
            v26 = (int **)v14[2];
            *v26 = v15;
            v14[2] = v26 + 1;
          }
          else
          {
            v27 = (void *)v14[2];
            if ( v24 > (unsigned int)v27 )
              invalid_parameter_noinfo();
            sub_10010B20((int)&v66, (int)v14, v27, (int)&v51);
          }
LABEL_50:
          v4 = Stream;
          ++v53;
        }
        while ( v53 < v58 );
        v3 = (void (__cdecl *)(void *, size_t, size_t, FILE *))fread;
        v13 = Src;
        v6 = v50;
      }
      operator delete[](v13);
      v48 = 0;
      v47 = COERCE_FLOAT(std::string::c_str(v67));
      v28 = (const char *)std::string::c_str(v61);
      if ( !Material::Initialize((Material *)v6, v28, (const char *)LODWORD(v47), v48) )
      {
        std::string::string(v62, v6 + 184);
        LOBYTE(v70) = 13;
        Material::Release((Material *)v6);
        v51 = (int)operator new(0x154u);
        LOBYTE(v70) = 14;
        if ( v51 )
        {
          v53 = (int)&v42;
          std::string::string(&v42, v62);
          v29 = (Material *)Material::Material(v42, LODWORD(v43), LODWORD(v44), LODWORD(v45), v46, LODWORD(v47), v48);
        }
        else
        {
          v29 = 0;
        }
        LOBYTE(v70) = 13;
        Material = v29;
        v30 = (Material **)MaterialManager::Instance();
        Material::CloneTo(*v30, v29);
        Material::AddRef(v29);
        LOBYTE(v70) = 6;
        std::string::~string(v62);
      }
      LOBYTE(v70) = 5;
      std::string::~string(v67);
      LOBYTE(v70) = 0;
      std::string::~string(v61);
    }
    v31 = a3[1];
    if ( v31 )
      v32 = (int)(a3[2] - v31) >> 2;
    else
      v32 = 0;
    if ( v31 && v32 < (int)(a3[3] - v31) >> 2 )
    {
      v33 = (Material **)a3[2];
      *v33 = Material;
      a3[2] = v33 + 1;
    }
    else
    {
      v34 = (void *)a3[2];
      if ( v31 > (unsigned int)v34 )
        invalid_parameter_noinfo();
      std::vector<Material *>::insert((int)&v65, (int)a3, v34, (int)&Material);
    }
    v70 = -1;
    std::string::~string(v63);
    v5 = v56;
    result = i + 1;
    v6 = 0;
  }
  if ( v5[23] )
  {
    if ( *((_BYTE *)v5 + 44) )
      return World::SetMaterialList(a3);
  }
  return result;
}
