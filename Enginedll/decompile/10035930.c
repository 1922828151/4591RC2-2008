/*
 * func-name: ?LoadModel@OBJLoad@@UAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVStaticModel@@@Z
 * func-address: 0x10035930
 * callers: none
 * callees: 0x1000bc40, 0x10034530, 0x10034b70, 0x10035650, 0x1009db20, 0x1009e990, 0x1009ec20, 0x1009ed40, 0x100e8cd0, 0x101189f0, 0x1017809e, 0x1017a280, 0x1017eaef, 0x101a24ac, 0x101a2500, 0x101a251c, 0x101a252e, 0x101a2534, 0x101a253a
 */

char __userpurge OBJLoad::LoadModel@<al>(
        int a1@<ebp>,
        int a2@<edi>,
        char a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        ModelFrame **a10)
{
  int v10; // eax
  struct RenderDevice *v11; // eax
  struct StaticModel *v13; // esi
  ModelFrame *v14; // edi
  ModelFrame *v15; // eax
  ModelFrame *v16; // eax
  struct RenderDevice *v17; // eax
  struct Mesh *v18; // esi
  struct VertexManager *v19; // ebp
  float v20; // edi
  struct RenderDevice *v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // edi
  int v26; // eax
  int v27; // eax
  void *v28; // edi
  int v29; // eax
  int v30; // eax
  int v31; // ebp
  int v32; // eax
  int v33; // eax
  struct VertexManager *v34; // eax
  void (__thiscall **v35)(struct MeshOps *, struct Mesh *, _DWORD, float *); // edi
  float *v36; // eax
  struct StaticModel *v37; // ebp
  float v38[20]; // [esp+74h] [ebp-AF0h] BYREF
  int v39; // [esp+C4h] [ebp-AA0h] BYREF
  bool v40; // [esp+CBh] [ebp-A99h]
  void *Src; // [esp+CCh] [ebp-A98h] BYREF
  float *v42; // [esp+D0h] [ebp-A94h]
  int v43; // [esp+D4h] [ebp-A90h] BYREF
  int v44; // [esp+D8h] [ebp-A8Ch] BYREF
  float *v45; // [esp+DCh] [ebp-A88h]
  char v46[4]; // [esp+E0h] [ebp-A84h] BYREF
  int v47; // [esp+E4h] [ebp-A80h]
  int v48; // [esp+FCh] [ebp-A68h] BYREF
  float *v49; // [esp+100h] [ebp-A64h]
  int v50; // [esp+104h] [ebp-A60h]
  int v51; // [esp+108h] [ebp-A5Ch]
  int v52; // [esp+10Ch] [ebp-A58h]
  int v53; // [esp+110h] [ebp-A54h]
  int v54; // [esp+114h] [ebp-A50h]
  int v55; // [esp+118h] [ebp-A4Ch]
  int v56; // [esp+11Ch] [ebp-A48h]
  int v57; // [esp+120h] [ebp-A44h]
  int v58; // [esp+124h] [ebp-A40h]
  int v59; // [esp+128h] [ebp-A3Ch]
  int v60; // [esp+12Ch] [ebp-A38h]
  int v61; // [esp+130h] [ebp-A34h]
  int v62; // [esp+134h] [ebp-A30h]
  int v63; // [esp+138h] [ebp-A2Ch]
  int v64; // [esp+13Ch] [ebp-A28h]
  _BYTE v65[520]; // [esp+140h] [ebp-A24h] BYREF
  float v66[16]; // [esp+348h] [ebp-81Ch] BYREF
  _BYTE v67[2000]; // [esp+388h] [ebp-7DCh] BYREF
  int v68; // [esp+B60h] [ebp-4h]

  v68 = 1;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v48 = 0;
  v49 = 0;
  memset(v65, 0, sizeof(v65));
  v10 = sub_1017A280(v46, &a3);
  LOBYTE(v68) = 2;
  LODWORD(v38[15]) = std::wstring::c_str(v10);
  v11 = RenderDevice::Instance();
  v40 = sub_10035650((WCHAR *)&v48, a1, a2, *((_DWORD *)v11 + 427), (LPCWCH)LODWORD(v38[15])) < 0;
  LOBYTE(v68) = 1;
  std::wstring::~wstring(v46);
  if ( v40 )
  {
    LOBYTE(v68) = 0;
    sub_10034B70((int)&v48);
    v68 = -1;
    std::string::~string(&a3);
    return 0;
  }
  else
  {
    v13 = (struct StaticModel *)a10;
    v14 = a10[77];
    if ( v14 )
    {
      ModelFrame::~ModelFrame(a10[77]);
      operator delete(v14);
      *((_DWORD *)v13 + 77) = 0;
    }
    v15 = (ModelFrame *)operator new(0x1C8u);
    v42 = (float *)v15;
    LOBYTE(v68) = 3;
    if ( v15 )
      v16 = ModelFrame::ModelFrame(v15, v13);
    else
      v16 = 0;
    LOBYTE(v68) = 1;
    *((_DWORD *)v13 + 77) = v16;
    v17 = RenderDevice::Instance();
    v18 = (struct Mesh *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v17 + 8))(v17);
    (*(void (__thiscall **)(struct Mesh *, float *))(*(_DWORD *)v18 + 8))(v18, v49);
    v19 = VertexManager::Instance();
    v20 = *v49;
    v45 = v49;
    v42 = v49;
    v21 = RenderDevice::Instance();
    v22 = (*(int (__thiscall **)(struct VertexManager *, int, _DWORD, int *))(*(_DWORD *)v19 + 20))(
            v19,
            56,
            *((_DWORD *)v21 + 427),
            &v39);
    v23 = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v47 + 36))(v47, *(_DWORD *)(v22 + 4));
    v24 = (*(int (__stdcall **)(float *, int))(LODWORD(v20) + 48))(v45, v23);
    if ( v24 < 0 )
    {
      v25 = *(_DWORD *)dword_11249F38;
      v26 = sub_1017EAEF(v24);
      (*(void (**)(void *, const char *, ...))(v25 + 4))(
        dword_11249F38,
        " Error: %s, in: ml.GetMesh()->CloneMesh( ml.GetMesh()->GetOptions(), VertexManager::Instance()->FindFormat(sizeo"
        "f(Vertex))->element, RenderDevice::Instance()->dev, &pTemp )",
        v26);
    }
    (*(void (__stdcall **)(int, int, void **))(*(_DWORD *)v39 + 96))(v39, 16, &Src);
    v27 = (*(int (__stdcall **)(int))(*(_DWORD *)v39 + 16))(v39);
    v28 = operator new(4 * v27);
    v29 = (*(int (__stdcall **)(int))(*(_DWORD *)v39 + 16))(v39);
    memcpy(v28, Src, 4 * v29);
    (*(void (__stdcall **)(int))(*(_DWORD *)v39 + 100))(v39);
    v43 = 100;
    (*(void (__stdcall **)(int, _BYTE *, int *))(*(_DWORD *)v39 + 76))(v39, v67, &v43);
    (*(void (__stdcall **)(int))(*(_DWORD *)v39 + 20))(v39);
    v44 = 0;
    v30 = D3DXComputeTangentFrameEx(v39, 5, 0, -1, 0, 6, 0, 3, 0, 512, 0, -1.01, -1.01, -1.01, &v44, 0);
    if ( v30 < 0 )
    {
      v31 = *(_DWORD *)dword_11249F38;
      v32 = sub_1017EAEF(v30);
      (*(void (**)(void *, const char *, ...))(v31 + 4))(
        dword_11249F38,
        " Error: %s, in: D3DXComputeTangentFrameEx( pTemp, D3DDECLUSAGE_TEXCOORD, 0, D3DX_DEFAULT, 0, D3DDECLUSAGE_TANGEN"
        "T, 0, D3DDECLUSAGE_NORMAL, 0, D3DXTANGENT_CALCULATE_NORMALS, NULL, -1.01f, -1.01f, -1.01f, &pNew, 0 )",
        v32);
    }
    if ( v39 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v39 + 8))(v39);
    v39 = v44;
    (*(void (__stdcall **)(int))(*(_DWORD *)v44 + 20))(v44);
    (*(void (__stdcall **)(int, _DWORD, void **))(*(_DWORD *)v39 + 96))(v39, 0, &Src);
    v33 = (*(int (__stdcall **)(int))(*(_DWORD *)v39 + 16))(v39);
    memcpy(Src, v28, 4 * v33);
    (*(void (__stdcall **)(int))(*(_DWORD *)v39 + 100))(v39);
    (*(void (__stdcall **)(int, _BYTE *, int))(*(_DWORD *)v39 + 112))(v39, v67, v43);
    operator delete[](v28);
    (**(void (__thiscall ***)(struct Mesh *, int, int, _DWORD))v18)(v18, v39, 1, 0);
    v34 = VertexManager::Instance();
    *((_DWORD *)v18 + 4) = *(_DWORD *)(*(int (__thiscall **)(struct VertexManager *, int))(*(_DWORD *)v34 + 20))(
                                        v34,
                                        56);
    if ( v39 )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)v39 + 8))(v39);
      v39 = 0;
    }
    if ( OBJLoad::s_CoordSystem <= 1u )
    {
      v35 = *(void (__thiscall ***)(struct MeshOps *, struct Mesh *, _DWORD, float *))MeshOps::Instance;
      v36 = sub_1000BC40(v66);
      (*v35)(MeshOps::Instance, v18, 0, v36);
    }
    v37 = (struct StaticModel *)a10;
    ModelFrame::SetMesh(a10[77], v18, 1);
    (*(void (__thiscall **)(struct StaticModel *))(*(_DWORD *)v37 + 8))(v37);
    if ( *((_DWORD *)v37 + 77) )
    {
      v42 = v38;
      qmemcpy(v38, (char *)v37 + 224, 0x40u);
      ModelFrame::UpdateMatrices(
        *((_DWORD *)v37 + 77),
        LODWORD(v38[0]),
        LODWORD(v38[1]),
        LODWORD(v38[2]),
        LODWORD(v38[3]),
        LODWORD(v38[4]),
        LODWORD(v38[5]),
        LODWORD(v38[6]),
        LODWORD(v38[7]),
        LODWORD(v38[8]),
        LODWORD(v38[9]),
        LODWORD(v38[10]),
        LODWORD(v38[11]),
        LODWORD(v38[12]),
        LODWORD(v38[13]),
        LODWORD(v38[14]),
        LODWORD(v38[15]));
    }
    sub_10034530(&v48);
    LOBYTE(v68) = 0;
    sub_10034B70((int)&v48);
    v68 = -1;
    std::string::~string(&a3);
    return 1;
  }
}
