/*
 * func-name: ?SetTechniqueSimple@Material@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100e5d70
 * callers: none
 * callees: 0x1000a280, 0x1001b4d0, 0x10020a70, 0x10027320, 0x100e27a0, 0x100e8a50, 0x101189f0, 0x101208a0, 0x101208e0, 0x10178170, 0x1017a670
 */

int __thiscall Material::SetTechniqueSimple(int this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  unsigned int v9; // esi
  bool v10; // cc
  unsigned int v11; // ebp
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int *v16; // esi
  int (__stdcall *v17)(int *, int); // ecx
  int v18; // ebx
  int v19; // ebp
  int v20; // eax
  int v21; // eax
  int String; // eax
  int v23; // eax
  int v24; // eax
  const char *v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // ebp
  int v30; // eax
  int v31; // eax
  double v32; // st7
  int v33; // eax
  int v34; // eax
  int v35; // eax
  unsigned int v36; // esi
  int v37; // eax
  int v38; // ebp
  unsigned int v39; // ebx
  int v40; // eax
  int v41; // esi
  char v42; // al
  unsigned int v43; // esi
  unsigned int v44; // ebx
  int v45; // ebp
  int i; // esi
  int v48; // [esp+70h] [ebp-F4h]
  unsigned int v49; // [esp+70h] [ebp-F4h]
  char v50; // [esp+77h] [ebp-EDh]
  int v51; // [esp+78h] [ebp-ECh]
  int v52; // [esp+78h] [ebp-ECh]
  int NumTechniques; // [esp+7Ch] [ebp-E8h]
  int v54; // [esp+7Ch] [ebp-E8h]
  _BYTE v55[28]; // [esp+80h] [ebp-E4h] BYREF
  double v56; // [esp+9Ch] [ebp-C8h] BYREF
  _BYTE v57[28]; // [esp+A4h] [ebp-C0h] BYREF
  _DWORD v58[2]; // [esp+C0h] [ebp-A4h] BYREF
  bool v59; // [esp+C8h] [ebp-9Ch]
  bool v60; // [esp+C9h] [ebp-9Bh]
  bool v61; // [esp+CAh] [ebp-9Ah]
  int v62; // [esp+CCh] [ebp-98h]
  float v63; // [esp+D0h] [ebp-94h]
  bool v64; // [esp+D4h] [ebp-90h]
  _BYTE v65[28]; // [esp+D8h] [ebp-8Ch] BYREF
  _BYTE v66[44]; // [esp+F4h] [ebp-70h] BYREF
  _BYTE *v67; // [esp+120h] [ebp-44h] BYREF
  _BYTE v68[28]; // [esp+12Ch] [ebp-38h] BYREF
  _BYTE v69[12]; // [esp+148h] [ebp-1Ch] BYREF
  int v70; // [esp+154h] [ebp-10h]
  int v71; // [esp+160h] [ebp-4h]

  v48 = 0;
  v9 = *(_DWORD *)(this + 8);
  v10 = *(_DWORD *)(this + 4) <= v9;
  v71 = 0;
  if ( !v10 )
    invalid_parameter_noinfo();
  v11 = *(_DWORD *)(this + 4);
  if ( v11 > *(_DWORD *)(this + 8) )
    invalid_parameter_noinfo();
  sub_10027320((int *)this, &v56, this, v11, this, v9);
  if ( std::string::find(&a2, "_Ambient", 0) != -1 )
  {
    v12 = std::string::find(&a2, "_Ambient", 0);
    std::string::erase(&a2, v12, std::string::npos);
  }
  if ( std::string::find(&a2, "_Point", 0) != -1 )
  {
    v13 = std::string::find(&a2, "_Point", 0);
    std::string::erase(&a2, v13, std::string::npos);
  }
  if ( std::string::find(&a2, "_Spot", 0) != -1 )
  {
    v14 = std::string::find(&a2, "_Spot", 0);
    std::string::erase(&a2, v14, std::string::npos);
  }
  if ( std::string::find(&a2, "_OmniProj", 0) != -1 )
  {
    v15 = std::string::find(&a2, "_OmniProj", 0);
    std::string::erase(&a2, v15, std::string::npos);
  }
  std::string::operator=(this + 56, &a2);
  NumTechniques = Shader::GetNumTechniques(*(Shader **)(this + 152));
  v51 = 0;
  if ( NumTechniques > 0 )
  {
    while ( 1 )
    {
      sub_100E27A0((int)v58);
      v16 = *(int **)(*(_DWORD *)(this + 152) + 16);
      v17 = *(int (__stdcall **)(int *, int))(*v16 + 48);
      LOBYTE(v71) = 1;
      v18 = v17(v16, v51);
      (*(void (__stdcall **)(int *, int, _BYTE **))(*v16 + 20))(v16, v18, &v67);
      if ( !std::string::length(&a2) )
        goto LABEL_17;
      std::string::string(v55, v67);
      LOBYTE(v71) = 2;
      v19 = sub_1017A670(v57, &a2);
      v71 = 3;
      v20 = sub_1017A670(v68, v55);
      v48 |= 7u;
      v71 = 4;
      if ( std::string::find(v20, v19, 0) != -1 || (v50 = 1, *v67 == 95) )
LABEL_17:
        v50 = 0;
      v71 = 3;
      if ( (v48 & 4) != 0 )
      {
        v48 &= ~4u;
        std::string::~string(v68);
      }
      v71 = 2;
      if ( (v48 & 2) != 0 )
      {
        v48 &= ~2u;
        std::string::~string(v57);
      }
      v71 = 1;
      if ( (v48 & 1) != 0 )
      {
        v48 &= ~1u;
        std::string::~string(v55);
      }
      if ( !v50 )
        break;
      LOBYTE(v71) = 5;
LABEL_63:
      std::string::~string(v66);
      LOBYTE(v71) = 0;
      std::string::~string(v65);
      if ( ++v51 >= NumTechniques )
        goto LABEL_64;
    }
    v58[0] = v18;
    std::string::operator=(v66, v67);
    v21 = (*(int (__stdcall **)(int *, int, const char *))(*v16 + 76))(v16, v18, "LightTypes");
    if ( v21 )
    {
      v62 = 0;
      String = Shader::GetString(v57, v21);
      LOBYTE(v71) = 6;
      sub_1017A670(v55, String);
      LOBYTE(v71) = 8;
      std::string::~string(v57);
      if ( std::string::find(v55, "omniprojector", 0) != -1 )
        v62 |= 8u;
      if ( std::string::find(v55, "omni,", 0) != -1 || std::string::find(v55, "point", 0) != -1 )
        v62 |= 1u;
      if ( std::string::find(v55, "spot", 0) != -1 )
        v62 |= 2u;
      if ( std::string::find(v55, "ambient", 0) != -1 || std::string::find(v55, "dir", 0) != -1 )
        v62 |= 4u;
      LOBYTE(v71) = 1;
      std::string::~string(v55);
    }
    v23 = (*(int (__stdcall **)(int *, int, const char *))(*v16 + 76))(v16, v18, "MaxLights");
    if ( v23 )
    {
      v24 = Shader::GetString(v57, v23);
      LOBYTE(v71) = 9;
      v25 = (const char *)std::string::c_str(v24);
      v58[1] = atoi(v25);
      LOBYTE(v71) = 1;
      std::string::~string(v57);
    }
    v26 = (*(int (__stdcall **)(int *, int, const char *))(*v16 + 76))(v16, v18, "LightMethods");
    if ( v26 )
    {
      v27 = Shader::GetString(v57, v26);
      LOBYTE(v71) = 10;
      sub_1017A670(v55, v27);
      LOBYTE(v71) = 12;
      std::string::~string(v57);
      v59 = std::string::find(v55, "prt", 0) != -1;
      v60 = std::string::find(v55, "perpixel", 0) != -1;
      v64 = std::string::find(v55, "shadowproject", 0) != -1;
      v61 = std::string::find(v55, "lightmap", 0) != -1;
      LOBYTE(v71) = 1;
      std::string::~string(v55);
    }
    v28 = (*(int (__stdcall **)(int *, _DWORD, const char *))(*v16 + 36))(v16, 0, "Instanced");
    v66[28] = (*(int (__stdcall **)(int *, int, int))(*v16 + 248))(v16, v28, v18) != 0;
    v29 = *v16;
    v30 = (*(int (__stdcall **)(int *, int, _DWORD, _BYTE *))(*v16 + 56))(v16, v18, 0, v69);
    (*(void (__stdcall **)(int *, int))(v29 + 24))(v16, v30);
    if ( v70 )
    {
      v31 = D3DXGetShaderVersion(v70);
      switch ( v31 )
      {
        case -64768:
          v32 = 3.0;
LABEL_55:
          v63 = v32;
          break;
        case -65024:
          v32 = 2.0;
          goto LABEL_55;
        case -65276:
          v32 = 1.4;
          goto LABEL_55;
        case -65277:
          v32 = 1.3;
          goto LABEL_55;
        case -65278:
          v32 = 1.2;
          goto LABEL_55;
        case -65279:
          v32 = 1.1;
          goto LABEL_55;
      }
    }
    if ( v62 == -1 )
      v62 = 1;
    v33 = (*(int (__stdcall **)(int *, int, const char *))(*v16 + 76))(v16, v18, "TechGroup");
    if ( v33 )
    {
      v34 = Shader::GetString(v68, v33);
      LOBYTE(v71) = 13;
      v35 = sub_1017A670(v57, v34);
      LOBYTE(v71) = 14;
      std::string::operator=(v65, v35);
      LOBYTE(v71) = 13;
      std::string::~string(v57);
      LOBYTE(v71) = 1;
      std::string::~string(v68);
    }
    v56 = v63;
    if ( *((float *)RenderDevice::Instance() + 411) >= v56 )
      sub_100E8A50(this, v58);
    LOBYTE(v71) = 15;
    goto LABEL_63;
  }
LABEL_64:
  v36 = 0;
  v49 = 0;
  v54 = 0;
  while ( v36 < std::vector<EditorVar>::size((_DWORD *)this) )
  {
    v37 = *(_DWORD *)(this + 4);
    if ( !v37 || v36 >= (*(_DWORD *)(this + 8) - v37) / 96 )
      invalid_parameter_noinfo();
    v38 = v54 + *(_DWORD *)(this + 4);
    v39 = 0;
    if ( std::vector<EditorVar>::size((_DWORD *)this) )
    {
      v52 = 0;
      while ( 1 )
      {
        if ( v39 != v49 )
        {
          v40 = *(_DWORD *)(this + 4);
          if ( !v40 || v39 >= (*(_DWORD *)(this + 8) - v40) / 96 )
            invalid_parameter_noinfo();
          v41 = v52 + *(_DWORD *)(this + 4);
          if ( (unsigned __int8)std::operator==<char>(v38 + 24, v41 + 24)
            && (*(_DWORD *)(v41 + 12) & *(_DWORD *)(v38 + 12)) != 0
            && ((v42 = *(_BYTE *)(v41 + 9)) != 0 && *(_BYTE *)(v41 + 8)
             || (*(_BYTE *)(v38 + 9) || !v42)
             && (*(_BYTE *)(v38 + 8) || !*(_BYTE *)(v41 + 8))
             && (*(_BYTE *)(v38 + 10) || !*(_BYTE *)(v41 + 10)))
            && *(_DWORD *)(v38 + 4) >= *(_DWORD *)(v41 + 4)
            && *(float *)(v41 + 16) <= (double)*(float *)(v38 + 16)
            && *(_BYTE *)(v38 + 20) == *(_BYTE *)(v41 + 20) )
          {
            break;
          }
        }
        v52 += 96;
        if ( ++v39 >= std::vector<EditorVar>::size((_DWORD *)this) )
          goto LABEL_89;
      }
      v43 = *(_DWORD *)(this + 4);
      if ( v43 > *(_DWORD *)(this + 8) )
        invalid_parameter_noinfo();
      v44 = 96 * v39 + v43;
      if ( v44 > *(_DWORD *)(this + 8) || v44 < *(_DWORD *)(this + 4) )
        invalid_parameter_noinfo();
      v45 = *(_DWORD *)(this + 8);
      for ( i = v44 + 96; i != v45; i += 96 )
        sub_1001B4D0((_DWORD *)(i - 96), i);
      sub_10020A70(*(_DWORD *)(this + 8) - 96, *(_DWORD *)(this + 8));
      *(_DWORD *)(this + 8) -= 96;
      goto LABEL_64;
    }
LABEL_89:
    ++v49;
    v54 += 96;
    v36 = v49;
  }
  v71 = -1;
  return std::string::~string(&a2);
}
