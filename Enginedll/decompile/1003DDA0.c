/*
 * func-name: ?LoadModel@XFileLoad@@UAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVStaticModel@@@Z
 * func-address: 0x1003dda0
 * callers: none
 * callees: 0x1003cda0, 0x1003d0f0, 0x1003e700, 0x1007e380, 0x1007e3d0, 0x1007e670, 0x1009e990, 0x1009ec20, 0x100e2550, 0x100f1b70, 0x101189f0, 0x101780a4, 0x1017eaef, 0x101a2500, 0x101a2534, 0x101a253a
 */

char __thiscall XFileLoad::LoadModel(
        XFileLoad *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct StaticModel **a9)
{
  CRETimer *v10; // eax
  struct StaticModel **v11; // ebp
  struct StaticModel *v12; // esi
  int v13; // eax
  int v14; // eax
  void (**v15)(void *, const char *, ...); // esi
  int v16; // eax
  struct StaticModel *v17; // eax
  ModelFrame *v18; // eax
  struct _D3DXFRAME *v19; // eax
  bool v20; // zf
  int v21; // eax
  bool v22; // bl
  int v23; // eax
  int v24; // eax
  const char *v25; // eax
  int v26; // eax
  int v27; // eax
  const char *v28; // eax
  struct ID3DXAnimationController *v29; // eax
  unsigned int i; // ebx
  unsigned int j; // edi
  unsigned int k; // esi
  struct StaticModel *v33; // eax
  int v34; // ecx
  struct StaticModel *v35; // ecx
  int v36; // eax
  unsigned int v37; // edi
  struct StaticModel *v38; // ecx
  int v39; // eax
  unsigned int v40; // edi
  int v41; // edi
  CRETimer *v42; // eax
  const char *v43; // eax
  int v45; // [esp+7Ch] [ebp-80h]
  int v46; // [esp+88h] [ebp-74h]
  int v47; // [esp+88h] [ebp-74h]
  double v48; // [esp+88h] [ebp-74h]
  struct _D3DXFRAME *v49; // [esp+8Ch] [ebp-70h]
  struct _D3DXFRAME *v50; // [esp+8Ch] [ebp-70h]
  struct _D3DXFRAME *v51; // [esp+A0h] [ebp-5Ch] BYREF
  struct ID3DXAnimationController *v52; // [esp+A4h] [ebp-58h] BYREF
  int v53; // [esp+A8h] [ebp-54h] BYREF
  float v54; // [esp+ACh] [ebp-50h]
  _DWORD v55[2]; // [esp+B0h] [ebp-4Ch] BYREF
  _BYTE v56[4]; // [esp+B8h] [ebp-44h] BYREF
  float v57; // [esp+BCh] [ebp-40h]
  float v58; // [esp+C0h] [ebp-3Ch]
  float v59; // [esp+C4h] [ebp-38h]
  _DWORD v60[3]; // [esp+D4h] [ebp-28h] BYREF
  int v61; // [esp+E0h] [ebp-1Ch]
  int v62; // [esp+F8h] [ebp-4h]

  v53 = 0;
  v62 = 0;
  v10 = REGetGlobalTimer();
  CRETimer::StartMiniTimer(v10);
  v11 = a9;
  a9 = *((struct StaticModel ***)a9 + 13);
  if ( 1.0 != *(float *)&a9 )
    XFileLoad::s_Scale = *((float *)v11 + 13);
  v12 = v11[77];
  if ( v12 )
  {
    ModelFrame::~ModelFrame(v11[77]);
    operator delete(v12);
    v11[77] = 0;
  }
  v55[0] = &CAllocateHierarchy::`vftable';
  v55[1] = v11;
  v45 = *((_DWORD *)RenderDevice::Instance() + 427);
  v13 = std::string::c_str(&a2);
  v14 = D3DXLoadMeshHierarchyFromXA(v13, 544, v45, v55, 0, &v51, &v52);
  if ( v14 < 0 )
  {
    v15 = (void (**)(void *, const char *, ...))(*(_DWORD *)dword_11249F38 + 4);
    v16 = sub_1017EAEF(v14);
    (*v15)(
      dword_11249F38,
      " Error: %s, in: D3DXLoadMeshHierarchyFromX( name.c_str(), D3DXMESH_MANAGED, RenderDevice::Instance()->dev, &Alloc,"
      " NULL, &g_pFrameRoot, &pController)",
      v16);
  }
  v17 = (struct StaticModel *)operator new(0x1C8u);
  a9 = (struct StaticModel **)v17;
  LOBYTE(v62) = 1;
  if ( v17 )
    v18 = ModelFrame::ModelFrame(v17, (struct StaticModel *)v11);
  else
    v18 = 0;
  v11[77] = v18;
  v19 = v51;
  v20 = *(_DWORD *)v51 == 0;
  LOBYTE(v62) = 0;
  v22 = 0;
  if ( !v20 )
  {
    v21 = std::string::string(v60, *(_DWORD *)v51);
    LOBYTE(v62) = 2;
    v53 = 1;
    v20 = std::string::find(v21, "DXCC_ROOT", 0) == -1;
    v19 = v51;
    if ( !v20 )
      v22 = 1;
  }
  v62 = 0;
  if ( (v53 & 1) != 0 )
  {
    std::string::~string(v60);
    v19 = v51;
  }
  if ( !*((_DWORD *)v19 + 18) )
  {
    if ( *((_DWORD *)v19 + 19) )
    {
      operator delete[](*(void **)v19);
      v23 = std::string::string(v56, "_");
      v46 = **((_DWORD **)v51 + 19);
      LOBYTE(v62) = 3;
      v24 = std::operator+<char>(v60, v46, v23);
      v49 = v51;
      LOBYTE(v62) = 4;
      v25 = (const char *)std::string::c_str(v24);
      sub_1003CDA0(v25, v49);
      LOBYTE(v62) = 3;
      std::string::~string(v60);
      LOBYTE(v62) = 0;
      std::string::~string(v56);
      v19 = v51;
      if ( v22 )
      {
        if ( *(_DWORD *)(*((_DWORD *)v51 + 19) + 72) )
        {
          operator delete[](*(void **)v51);
          v26 = std::string::string(v56, "_");
          v47 = **(_DWORD **)(*((_DWORD *)v51 + 19) + 72);
          LOBYTE(v62) = 5;
          v27 = std::operator+<char>(v60, v47, v26);
          v50 = v51;
          LOBYTE(v62) = 6;
          v28 = (const char *)std::string::c_str(v27);
          sub_1003CDA0(v28, v50);
          LOBYTE(v62) = 5;
          std::string::~string(v60);
          LOBYTE(v62) = 0;
          std::string::~string(v56);
          v19 = v51;
        }
      }
    }
  }
  XFileLoad::ConvertFrame(this, (struct StaticModel *)v11, v19, v11[77]);
  v29 = v52;
  if ( v52 )
  {
    if ( byte_102805BC )
    {
      for ( i = 0; i < (*(int (__stdcall **)(struct ID3DXAnimationController *))(*(_DWORD *)v52 + 40))(v52); ++i )
      {
        (*(void (__stdcall **)(struct ID3DXAnimationController *, unsigned int, struct StaticModel ***))(*(_DWORD *)v52 + 44))(
          v52,
          i,
          &a9);
        for ( j = 0; j < (*((int (__stdcall **)(struct StaticModel **))*a9 + 6))(a9); ++j )
        {
          for ( k = 0; k < (*((int (__stdcall **)(struct StaticModel **, unsigned int))*a9 + 21))(a9, j); ++k )
          {
            (*((void (__stdcall **)(struct StaticModel **, unsigned int, unsigned int, _BYTE *))*a9 + 23))(
              a9,
              j,
              k,
              v56);
            v57 = v57 * XFileLoad::s_Scale;
            v58 = v58 * XFileLoad::s_Scale;
            v59 = XFileLoad::s_Scale * v59;
            (*((void (__stdcall **)(struct StaticModel **, unsigned int, unsigned int, _BYTE *))*a9 + 24))(
              a9,
              j,
              k,
              v56);
          }
        }
      }
      v29 = v52;
    }
    Model::InitializeAnimationSystem((Model *)v11, v29);
    (*(void (__stdcall **)(struct StaticModel *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v11[94] + 52))(
      v11[94],
      COERCE_UNSIGNED_INT64(GDeltaTime),
      HIDWORD(COERCE_UNSIGNED_INT64(GDeltaTime)),
      0);
    (*(void (__stdcall **)(struct StaticModel *, _DWORD, int *))(*(_DWORD *)v11[94] + 68))(v11[94], 0, &v53);
    if ( v53 )
    {
      v33 = v11[96];
      if ( v33 )
        v34 = (v11[97] - v33) >> 4;
      else
        v34 = 0;
      LOBYTE(v61) = 0;
      sub_1003E700((int)(v11 + 95), v34 + 1, v60[0], v60[1], v60[2], v61);
      v35 = v11[96];
      if ( v35 )
        v36 = (v11[97] - v35) >> 4;
      else
        v36 = 0;
      v37 = v36 - 1;
      if ( !v35 || v37 >= (v11[97] - v35) >> 4 )
        invalid_parameter_noinfo();
      *((_BYTE *)v11[96] + 16 * v37) = 0;
      v38 = v11[96];
      if ( v38 )
        v39 = (v11[97] - v38) >> 4;
      else
        v39 = 0;
      v40 = v39 - 1;
      if ( !v38 || v40 >= (v11[97] - v38) >> 4 )
        invalid_parameter_noinfo();
      v41 = (int)v11[96] + 16 * v40;
      v54 = ((double (__stdcall *)(int))*(_DWORD *)(*(_DWORD *)v53 + 16))(v53);
      *(float *)(v41 + 4) = v54 / 4800.0;
    }
  }
  v42 = REGetGlobalTimer();
  v54 = CRETimer::StopMiniTimer(v42) / 1000.0;
  v48 = v54;
  v43 = (const char *)std::string::c_str(&a2);
  LogPrintf("Model '%s' load took %f seconds", v43, v48);
  v62 = -1;
  std::string::~string(&a2);
  return 1;
}
