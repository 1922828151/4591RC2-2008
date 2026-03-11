/*
 * func-name: ?PRTToStatic@MeshOps@@UAE_NPAVMesh@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVWorld@@@Z
 * func-address: 0x100e1440
 * callers: none
 * callees: 0x10009730, 0x1000d680, 0x100e0df0, 0x100e0e70, 0x100e8b90, 0x100e8c60, 0x10136140, 0x10136290, 0x10136400, 0x10178122, 0x10178128, 0x1017816a, 0x1017eaef, 0x101a24ac, 0x101a252e, 0x101a2534, 0x101a253a
 */

char __stdcall MeshOps::PRTToStatic(int a1, char a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int (__thiscall *v9)(int); // edx
  unsigned int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  float v14; // eax
  float v15; // esi
  int v16; // edi
  int v17; // esi
  float *v18; // ecx
  unsigned int v19; // edx
  float *v20; // ecx
  int v21; // edx
  int v22; // esi
  char *v23; // edi
  int v24; // eax
  int v25; // eax
  float *v26; // eax
  int v27; // eax
  int v28; // eax
  int (__stdcall *v29)(int); // edx
  int v30; // edi
  size_t v31; // esi
  void *v32; // edi
  void *v33; // esi
  void *v34; // eax
  Texture *v35; // eax
  int v36; // esi
  int v37; // eax
  int v38; // eax
  struct IDirect3DTexture9 *Texture; // eax
  int v40; // eax
  int v41; // edi
  int v42; // eax
  unsigned int i; // edi
  int v44; // eax
  struct IDirect3DTexture9 *v45; // eax
  int v46; // eax
  int last_of; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // ecx
  _DWORD v55[2]; // [esp+10h] [ebp-E0h] BYREF
  float *v56; // [esp+18h] [ebp-D8h]
  int v57; // [esp+1Ch] [ebp-D4h]
  float v58; // [esp+30h] [ebp-C0h]
  float v59; // [esp+34h] [ebp-BCh]
  float v60; // [esp+38h] [ebp-B8h]
  float v61; // [esp+3Ch] [ebp-B4h]
  float v62; // [esp+40h] [ebp-B0h] BYREF
  float v63; // [esp+44h] [ebp-ACh]
  void *v64; // [esp+48h] [ebp-A8h]
  void *Src; // [esp+4Ch] [ebp-A4h] BYREF
  float v66[7]; // [esp+50h] [ebp-A0h] BYREF
  float v67[2]; // [esp+6Ch] [ebp-84h] BYREF
  float v68[7]; // [esp+74h] [ebp-7Ch] BYREF
  float v69[7]; // [esp+90h] [ebp-60h] BYREF
  double v70; // [esp+ACh] [ebp-44h]
  double v71; // [esp+B4h] [ebp-3Ch]
  float v72[3]; // [esp+BCh] [ebp-34h] BYREF
  _BYTE v73[28]; // [esp+C8h] [ebp-28h] BYREF
  int v74; // [esp+ECh] [ebp-4h]

  v9 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 16);
  v10 = 0;
  v74 = 0;
  if ( !v9(a1) )
    goto LABEL_60;
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1);
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 32))(v11) )
    goto LABEL_60;
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 20))(v12) )
  {
    if ( !*(_DWORD *)(a1 + 32) )
    {
      v34 = operator new(0x9Cu);
      Src = v34;
      LOBYTE(v74) = 2;
      if ( v34 )
        v35 = Texture::Texture((Texture *)v34);
      else
        v35 = 0;
      *(_DWORD *)(a1 + 32) = v35;
      LOBYTE(v74) = 0;
      *((_BYTE *)v35 + 58) = 0;
    }
    v36 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1);
    v37 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1);
    dword_11240C38 = (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 24))(v37);
    Texture::CreateBlank(*(_DWORD *)(a1 + 32), 1, 50, *(_DWORD *)(a1 + 2331), *(_DWORD *)(a1 + 2331), 0);
    dword_11240C3C = (*(int (__thiscall **)(int))(*(_DWORD *)v36 + 16))(v36);
    dword_11240C40 = operator new(8 * dword_11240C3C);
    if ( dword_11240C3C )
    {
      do
      {
        v38 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v36 + 28))(v36, v10);
        (*(void (__stdcall **)(int, _DWORD, char *, _DWORD, int))(*(_DWORD *)v38 + 76))(
          v38,
          0,
          (char *)dword_11240C40 + 8 * v10++,
          0,
          16);
      }
      while ( v10 < dword_11240C3C );
    }
    Texture = Texture::GetTexture(*(Texture **)(a1 + 32));
    v40 = D3DXFillTexture(Texture, sub_100E1070, 0);
    if ( v40 < 0 )
    {
      v41 = *(_DWORD *)dword_11249F38;
      v42 = sub_1017EAEF(v40);
      (*(void (**)(void *, const char *, ...))(v41 + 4))(
        dword_11249F38,
        " Error: %s, in: D3DXFillTexture(mesh->m_LightMap->GetTexture(),CalcPRTPixel,0)",
        v42);
    }
    for ( i = 0; i < dword_11240C3C; ++i )
    {
      v44 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v36 + 28))(v36, i);
      (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v44 + 80))(v44, 0);
    }
    if ( dword_11240C40 )
    {
      operator delete[](dword_11240C40);
      dword_11240C40 = 0;
    }
    v45 = Texture::GetTexture(*(Texture **)(a1 + 32));
    D3DXFilterTexture(v45, 0, -1, -1);
    v46 = std::string::c_str(a9 + 3188);
    std::string::string(v69, v46);
    LOBYTE(v74) = 3;
    last_of = std::string::find_last_of(v69, ".", std::string::npos);
    std::string::substr(v69, v66, 0, last_of);
    LOBYTE(v74) = 4;
    if ( std::string::find_last_of(v66, "\\", std::string::npos) != -1 )
    {
      v48 = std::string::find_last_of(v66, "\\", std::string::npos);
      v49 = std::string::substr(v66, v68, 0, v48);
      LOBYTE(v74) = 5;
      std::string::operator=(v66, v49);
      LOBYTE(v74) = 4;
      std::string::~string(v68);
    }
    v50 = std::operator+<char>(v73, "\\", &a2);
    LOBYTE(v74) = 6;
    v51 = std::operator+<char>(v68, v50, ".dds");
    LOBYTE(v74) = 7;
    std::string::operator+=(v66, v51);
    LOBYTE(v74) = 6;
    std::string::~string(v68);
    LOBYTE(v74) = 4;
    std::string::~string(v73);
    v56 = (float *)Texture::GetTexture(*(Texture **)(a1 + 32));
    v52 = std::string::c_str(v66);
    D3DXSaveTextureToFileA(v52, 4, v56, 0);
    LOBYTE(v74) = 3;
    std::string::~string(v66);
    LOBYTE(v74) = 0;
    std::string::~string(v69);
    goto LABEL_57;
  }
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
  if ( (*(int (__stdcall **)(int))(*(_DWORD *)v13 + 32))(v13) != 156 )
  {
LABEL_60:
    std::string::~string(&a2);
    return 0;
  }
  (*(void (__stdcall **)(int, _DWORD, float *))(*(_DWORD *)v13 + 60))(v13, 0, &v62);
  v63 = COERCE_FLOAT((*(int (__stdcall **)(int))(*(_DWORD *)v13 + 20))(v13));
  v14 = COERCE_FLOAT(operator new(40 * LODWORD(v63)));
  v15 = v14;
  v61 = v14;
  v16 = LODWORD(v63);
  LOBYTE(v74) = 1;
  if ( v14 == 0.0 )
  {
    v64 = 0;
  }
  else
  {
    sub_10009730(SLODWORD(v14), 40, SLODWORD(v63), (int (__thiscall *)(int))sub_100012D0);
    v64 = (void *)LODWORD(v15);
  }
  v17 = 0;
  v60 = 1.0;
  v59 = 1.0;
  LOBYTE(v74) = 0;
  if ( v16 >= 4 )
  {
    v18 = (float *)(LODWORD(v62) + 52);
    v19 = ((unsigned int)(v16 - 4) >> 2) + 1;
    v17 = 4 * v19;
    do
    {
      v58 = fabs(*(v18 - 1));
      if ( v60 < (double)v58 )
      {
        v58 = fabs(*(v18 - 1));
        v60 = v58;
      }
      v58 = fabs(*v18);
      if ( v59 < (double)v58 )
      {
        v58 = fabs(*v18);
        v59 = v58;
      }
      v58 = fabs(v18[38]);
      if ( v60 < (double)v58 )
      {
        v58 = fabs(v18[38]);
        v60 = v58;
      }
      v58 = fabs(v18[39]);
      if ( v59 < (double)v58 )
      {
        v58 = fabs(v18[39]);
        v59 = v58;
      }
      v58 = fabs(v18[77]);
      if ( v60 < (double)v58 )
      {
        v58 = fabs(v18[77]);
        v60 = v58;
      }
      v58 = fabs(v18[78]);
      if ( v59 < (double)v58 )
      {
        v58 = fabs(v18[78]);
        v59 = v58;
      }
      v58 = fabs(v18[116]);
      if ( v60 < (double)v58 )
      {
        v58 = fabs(v18[116]);
        v60 = v58;
      }
      v58 = fabs(v18[117]);
      if ( v59 < (double)v58 )
      {
        v58 = fabs(v18[117]);
        v59 = v58;
      }
      v18 += 156;
      --v19;
    }
    while ( v19 );
  }
  if ( v17 < v16 )
  {
    v20 = (float *)(156 * v17 + LODWORD(v62) + 52);
    v21 = v16 - v17;
    do
    {
      v58 = fabs(*(v20 - 1));
      if ( v60 < (double)v58 )
      {
        v58 = fabs(*(v20 - 1));
        v60 = v58;
      }
      v58 = fabs(*v20);
      if ( v59 < (double)v58 )
      {
        v58 = fabs(*v20);
        v59 = v58;
      }
      v20 += 39;
      --v21;
    }
    while ( v21 );
  }
  if ( v16 > 0 )
  {
    v71 = v60;
    v22 = 0;
    v70 = v59;
    v23 = (char *)v64 + 12;
    v58 = v63;
    do
    {
      v24 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1);
      v25 = (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 24))(v24);
      v26 = sub_100E0E70(v72, v22 + LODWORD(v62), v25);
      v68[0] = *v26;
      v68[1] = v26[1];
      v68[2] = v26[2];
      v68[3] = 1.0;
      sub_100E0DF0(v68);
      v27 = v22 + LODWORD(v62);
      *((_DWORD *)v23 - 3) = *(_DWORD *)(v22 + LODWORD(v62));
      *((_DWORD *)v23 - 2) = *(_DWORD *)(v27 + 4);
      *((_DWORD *)v23 - 1) = *(_DWORD *)(v27 + 8);
      v59 = *(float *)(v22 + LODWORD(v62) + 24);
      v60 = *(float *)(v22 + LODWORD(v62) + 28);
      v61 = *(float *)(v22 + LODWORD(v62) + 32);
      v69[0] = v59;
      v69[1] = v60;
      v69[2] = v61;
      v69[3] = 1.0;
      *((_QWORD *)v23 + 1) = sub_100E8B90(v69);
      v61 = *(float *)(v22 + LODWORD(v62) + 12);
      v56 = v66;
      v59 = *(float *)(v22 + LODWORD(v62) + 16);
      v60 = *(float *)(v22 + LODWORD(v62) + 20);
      v66[0] = v61;
      v66[1] = v59;
      v66[2] = v60;
      v66[3] = v68[0];
      *(_QWORD *)v23 = sub_100E8B90(v66);
      v61 = *(float *)(v22 + LODWORD(v62) + 48) / v71;
      v59 = *(float *)(v22 + LODWORD(v62) + 52) / v70;
      v67[0] = v61;
      v67[1] = v59;
      *((_DWORD *)v23 + 6) = sub_100E8C60(v67);
      v22 += 156;
      v23 += 40;
      --LODWORD(v58);
    }
    while ( v58 != 0.0 );
  }
  (*(void (__stdcall **)(int))(*(_DWORD *)v13 + 64))(v13);
  (*(void (__stdcall **)(int, _DWORD, void **))(*(_DWORD *)v13 + 68))(v13, 0, &Src);
  v28 = (*(int (__stdcall **)(int))(*(_DWORD *)v13 + 16))(v13);
  v29 = *(int (__stdcall **)(int))(*(_DWORD *)v13 + 36);
  v30 = 3 * v28;
  LODWORD(v61) = 3 * v28;
  LODWORD(v58) = (v29(v13) & 1) != 0 ? 4 : 2;
  v31 = v30 * LODWORD(v58);
  v32 = operator new(v30 * LODWORD(v58));
  memcpy(v32, Src, v31);
  (*(void (__stdcall **)(int))(*(_DWORD *)v13 + 72))(v13);
  v59 = COERCE_FLOAT(v55);
  std::vector<Material *>::vector<Material *>(v55, a1 + 2460);
  v33 = v64;
  (*(void (__thiscall **)(int, void *, void *, int, float, float, float, _DWORD, _DWORD, float *, int))(*(_DWORD *)a1 + 72))(
    a1,
    v64,
    v32,
    40,
    COERCE_FLOAT(LODWORD(v58)),
    COERCE_FLOAT(LODWORD(v63)),
    COERCE_FLOAT(LODWORD(v61)),
    v55[0],
    v55[1],
    v56,
    v57);
  *(_DWORD *)(a1 + 2412) = 40;
  if ( v33 )
    operator delete[](v33);
  if ( v32 )
    operator delete[](v32);
LABEL_57:
  v53 = *(_DWORD *)(a1 + 28);
  if ( v53 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53);
    *(_DWORD *)(a1 + 28) = 0;
  }
  *(_BYTE *)(a1 + 120) = 0;
  v74 = -1;
  std::string::~string(&a2);
  return 1;
}
