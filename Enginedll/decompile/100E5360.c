/*
 * func-name: ?SetTechnique@Material@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100e5360
 * callers: 0x100e6870, 0x100e68a0
 * callees: 0x1000a280, 0x1001b4d0, 0x10020a70, 0x10027320, 0x100e27a0, 0x100e2b60, 0x100e35c0, 0x100e8a50, 0x101189f0, 0x1011fd80, 0x1011fdc0, 0x101206e0, 0x101208a0, 0x101208e0, 0x10120900, 0x10121e80, 0x10122050, 0x10178170, 0x1017a670
 */

int __thiscall Material::SetTechnique(Material *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  unsigned int v9; // edi
  bool v10; // cc
  unsigned int v11; // ebp
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  Shader *v16; // ecx
  int *v17; // edi
  int (__stdcall *v18)(int *, int); // ecx
  char *v19; // ebx
  int v20; // ebp
  int v21; // eax
  int v22; // eax
  int String; // eax
  int v24; // eax
  int v25; // eax
  const char *v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // ebp
  int v31; // eax
  int v32; // eax
  double v33; // st7
  int v34; // eax
  int v35; // eax
  int v36; // eax
  struct RenderDevice *v37; // eax
  struct RenderDevice *v38; // eax
  Shader *v39; // ecx
  struct RenderDevice *v40; // eax
  struct RenderDevice *v41; // eax
  struct RenderDevice *v42; // eax
  bool v43; // zf
  struct RenderDevice *v44; // eax
  int v45; // eax
  Shader *v46; // ecx
  unsigned int v47; // edi
  int v48; // eax
  int v49; // ebp
  unsigned int v50; // ebx
  int v51; // eax
  int v52; // edi
  char v53; // al
  unsigned int v54; // edi
  unsigned int v55; // ebx
  int v56; // ebp
  int i; // edi
  int v59; // [esp+98h] [ebp-F4h]
  unsigned int v60; // [esp+98h] [ebp-F4h]
  char v61; // [esp+9Fh] [ebp-EDh]
  int v62; // [esp+A0h] [ebp-ECh]
  int v63; // [esp+A0h] [ebp-ECh]
  int NumTechniques; // [esp+A4h] [ebp-E8h]
  int v65; // [esp+A4h] [ebp-E8h]
  _BYTE v66[28]; // [esp+A8h] [ebp-E4h] BYREF
  char *v67[2]; // [esp+C4h] [ebp-C8h] BYREF
  bool v68; // [esp+CCh] [ebp-C0h]
  bool v69; // [esp+CDh] [ebp-BFh]
  bool v70; // [esp+CEh] [ebp-BEh]
  int v71; // [esp+D0h] [ebp-BCh]
  float v72; // [esp+D4h] [ebp-B8h]
  bool v73; // [esp+D8h] [ebp-B4h]
  _BYTE v74[28]; // [esp+DCh] [ebp-B0h] BYREF
  _BYTE v75[29]; // [esp+F8h] [ebp-94h] BYREF
  __int16 v76; // [esp+115h] [ebp-77h]
  bool v77; // [esp+117h] [ebp-75h]
  bool v78; // [esp+118h] [ebp-74h]
  int v79; // [esp+11Ch] [ebp-70h]
  int v80; // [esp+120h] [ebp-6Ch]
  double v81; // [esp+124h] [ebp-68h] BYREF
  _BYTE v82[28]; // [esp+12Ch] [ebp-60h] BYREF
  _BYTE *v83; // [esp+148h] [ebp-44h] BYREF
  _BYTE v84[28]; // [esp+154h] [ebp-38h] BYREF
  _BYTE v85[12]; // [esp+170h] [ebp-1Ch] BYREF
  int v86; // [esp+17Ch] [ebp-10h]
  int v87; // [esp+188h] [ebp-4h]

  v59 = 0;
  v9 = *((_DWORD *)this + 2);
  v10 = *((_DWORD *)this + 1) <= v9;
  v87 = 0;
  if ( !v10 )
    invalid_parameter_noinfo();
  v11 = *((_DWORD *)this + 1);
  if ( v11 > *((_DWORD *)this + 2) )
    invalid_parameter_noinfo();
  sub_10027320((int *)this, &v81, (int)this, v11, (int)this, v9);
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
  std::string::operator=((char *)this + 56, &a2);
  v16 = (Shader *)*((_DWORD *)this + 38);
  if ( v16 && *((_DWORD *)v16 + 4) )
  {
    NumTechniques = Shader::GetNumTechniques(v16);
    v62 = 0;
    if ( NumTechniques > 0 )
    {
      while ( 1 )
      {
        sub_100E27A0((int)v67);
        v17 = *(int **)(*((_DWORD *)this + 38) + 16);
        v18 = *(int (__stdcall **)(int *, int))(*v17 + 48);
        LOBYTE(v87) = 1;
        v19 = (char *)v18(v17, v62);
        (*(void (__stdcall **)(int *, char *, _BYTE **))(*v17 + 20))(v17, v19, &v83);
        if ( !std::string::length(&a2) )
          goto LABEL_19;
        std::string::string(v66, v83);
        LOBYTE(v87) = 2;
        v20 = sub_1017A670(v82, &a2);
        v87 = 3;
        v21 = sub_1017A670(v84, v66);
        v59 |= 7u;
        v87 = 4;
        if ( std::string::find(v21, v20, 0) != -1 || (v61 = 1, *v83 == 95) )
LABEL_19:
          v61 = 0;
        v87 = 3;
        if ( (v59 & 4) != 0 )
        {
          v59 &= ~4u;
          std::string::~string(v84);
        }
        v87 = 2;
        if ( (v59 & 2) != 0 )
        {
          v59 &= ~2u;
          std::string::~string(v82);
        }
        v87 = 1;
        if ( (v59 & 1) != 0 )
        {
          v59 &= ~1u;
          std::string::~string(v66);
        }
        if ( !v61 )
          break;
        LOBYTE(v87) = 5;
LABEL_68:
        std::string::~string(v75);
        LOBYTE(v87) = 0;
        std::string::~string(v74);
        if ( ++v62 >= NumTechniques )
          goto LABEL_69;
      }
      v67[0] = v19;
      std::string::operator=(v75, v83);
      v22 = (*(int (__stdcall **)(int *, char *, const char *))(*v17 + 76))(v17, v19, "LightTypes");
      if ( v22 )
      {
        v71 = 0;
        String = Shader::GetString(v82, v22);
        LOBYTE(v87) = 6;
        sub_1017A670(v66, String);
        LOBYTE(v87) = 8;
        std::string::~string(v82);
        if ( std::string::find(v66, "omniprojector", 0) != -1 )
          v71 |= 8u;
        if ( std::string::find(v66, "omni,", 0) != -1 || std::string::find(v66, "point", 0) != -1 )
          v71 |= 1u;
        if ( std::string::find(v66, "spot", 0) != -1 )
          v71 |= 2u;
        if ( std::string::find(v66, "ambient", 0) != -1 || std::string::find(v66, "dir", 0) != -1 )
          v71 |= 4u;
        LOBYTE(v87) = 1;
        std::string::~string(v66);
      }
      v24 = (*(int (__stdcall **)(int *, char *, const char *))(*v17 + 76))(v17, v19, "MaxLights");
      if ( v24 )
      {
        v25 = Shader::GetString(v82, v24);
        LOBYTE(v87) = 9;
        v26 = (const char *)std::string::c_str(v25);
        v67[1] = (char *)atoi(v26);
        LOBYTE(v87) = 1;
        std::string::~string(v82);
      }
      v27 = (*(int (__stdcall **)(int *, char *, const char *))(*v17 + 76))(v17, v19, "LightMethods");
      if ( v27 )
      {
        v28 = Shader::GetString(v82, v27);
        LOBYTE(v87) = 10;
        sub_1017A670(v66, v28);
        LOBYTE(v87) = 12;
        std::string::~string(v82);
        v68 = std::string::find(v66, "prt", 0) != -1;
        v69 = std::string::find(v66, "perpixel", 0) != -1;
        v73 = std::string::find(v66, "shadowproject", 0) != -1;
        v70 = std::string::find(v66, "lightmap", 0) != -1;
        LOBYTE(v87) = 1;
        std::string::~string(v66);
      }
      v29 = (*(int (__stdcall **)(int *, _DWORD, const char *))(*v17 + 36))(v17, 0, "Instanced");
      v75[28] = (*(int (__stdcall **)(int *, int, char *))(*v17 + 248))(v17, v29, v19) != 0;
      v30 = *v17;
      v31 = (*(int (__stdcall **)(int *, char *, _DWORD, _BYTE *))(*v17 + 56))(v17, v19, 0, v85);
      (*(void (__stdcall **)(int *, int))(v30 + 24))(v17, v31);
      if ( v86 )
      {
        v32 = D3DXGetShaderVersion(v86);
        switch ( v32 )
        {
          case -64768:
            v33 = 3.0;
LABEL_57:
            v72 = v33;
            break;
          case -65024:
            v33 = 2.0;
            goto LABEL_57;
          case -65276:
            v33 = 1.4;
            goto LABEL_57;
          case -65277:
            v33 = 1.3;
            goto LABEL_57;
          case -65278:
            v33 = 1.2;
            goto LABEL_57;
          case -65279:
            v33 = 1.1;
            goto LABEL_57;
        }
      }
      if ( v71 == -1 )
        v71 = 1;
      v34 = (*(int (__stdcall **)(int *, char *, const char *))(*v17 + 76))(v17, v19, "TechGroup");
      if ( v34 )
      {
        v35 = Shader::GetString(v84, v34);
        LOBYTE(v87) = 13;
        v36 = sub_1017A670(v82, v35);
        LOBYTE(v87) = 14;
        std::string::operator=(v74, v36);
        LOBYTE(v87) = 13;
        std::string::~string(v82);
        LOBYTE(v87) = 1;
        std::string::~string(v84);
      }
      v37 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v37 + 432))(v37, 27, 0);
      v38 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v38 + 432))(v38, 15, 0);
      Shader::SetTechnique(*((Shader **)this + 38), v67[0]);
      *((char **)this + 54) = v67[0];
      Material::Apply(this, 0);
      v39 = (Shader *)*((_DWORD *)this + 38);
      v79 = 5;
      v80 = 6;
      v76 = 0;
      v78 = 0;
      v77 = 0;
      Shader::Begin(v39, 0);
      Shader::BeginPass(*((Shader **)this + 38), 0);
      Shader::CommitChanges(*((Shader **)this + 38));
      v40 = RenderDevice::Instance();
      v79 = (*(int (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v40 + 436))(v40, 19);
      v41 = RenderDevice::Instance();
      v80 = (*(int (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v41 + 436))(v41, 20);
      v42 = RenderDevice::Instance();
      if ( (*(int (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v42 + 436))(v42, 27) == 1
        || (v43 = (**((_BYTE **)this + 38) & 3) == 0, LOBYTE(v76) = 0, !v43) )
      {
        LOBYTE(v76) = 1;
      }
      v44 = RenderDevice::Instance();
      v45 = (*(int (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v44 + 436))(v44, 15);
      HIBYTE(v76) = v76;
      v46 = (Shader *)*((_DWORD *)this + 38);
      v78 = v45 != 0;
      v77 = v45 != 0;
      Shader::EndPass(v46);
      Shader::End(*((Shader **)this + 38));
      v81 = v72;
      if ( *((float *)RenderDevice::Instance() + 411) >= v81 )
        sub_100E8A50((int)this, v67);
      LOBYTE(v87) = 15;
      goto LABEL_68;
    }
LABEL_69:
    v47 = 0;
    v60 = 0;
    v65 = 0;
    while ( v47 < std::vector<EditorVar>::size(this) )
    {
      v48 = *((_DWORD *)this + 1);
      if ( !v48 || v47 >= (*((_DWORD *)this + 2) - v48) / 96 )
        invalid_parameter_noinfo();
      v49 = v65 + *((_DWORD *)this + 1);
      v50 = 0;
      if ( std::vector<EditorVar>::size(this) )
      {
        v63 = 0;
        while ( 1 )
        {
          if ( v50 != v60 )
          {
            v51 = *((_DWORD *)this + 1);
            if ( !v51 || v50 >= (*((_DWORD *)this + 2) - v51) / 96 )
              invalid_parameter_noinfo();
            v52 = v63 + *((_DWORD *)this + 1);
            if ( (unsigned __int8)std::operator==<char>(v49 + 24, v52 + 24)
              && (*(_DWORD *)(v52 + 12) & *(_DWORD *)(v49 + 12)) != 0
              && ((v53 = *(_BYTE *)(v52 + 9)) != 0 && *(_BYTE *)(v52 + 8)
               || (*(_BYTE *)(v49 + 9) || !v53)
               && (*(_BYTE *)(v49 + 8) || !*(_BYTE *)(v52 + 8))
               && (*(_BYTE *)(v49 + 10) || !*(_BYTE *)(v52 + 10)))
              && *(_DWORD *)(v49 + 4) >= *(_DWORD *)(v52 + 4)
              && *(float *)(v52 + 16) <= (double)*(float *)(v49 + 16)
              && *(_BYTE *)(v49 + 20) == *(_BYTE *)(v52 + 20) )
            {
              break;
            }
          }
          v63 += 96;
          if ( ++v50 >= std::vector<EditorVar>::size(this) )
            goto LABEL_94;
        }
        v54 = *((_DWORD *)this + 1);
        if ( v54 > *((_DWORD *)this + 2) )
          invalid_parameter_noinfo();
        v55 = 96 * v50 + v54;
        if ( v55 > *((_DWORD *)this + 2) || v55 < *((_DWORD *)this + 1) )
          invalid_parameter_noinfo();
        v56 = *((_DWORD *)this + 2);
        for ( i = v55 + 96; i != v56; i += 96 )
          sub_1001B4D0((_DWORD *)(i - 96), i);
        sub_10020A70(*((_DWORD *)this + 2) - 96, *((_DWORD *)this + 2));
        *((_DWORD *)this + 2) -= 96;
        goto LABEL_69;
      }
LABEL_94:
      ++v60;
      v65 += 96;
      v47 = v60;
    }
    Material::UpdateStates(this);
  }
  v87 = -1;
  return std::string::~string(&a2);
}
