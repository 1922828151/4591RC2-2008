/*
 * func-name: ?ConvertFrame@XFileLoad@@AAEXPAVStaticModel@@PAU_D3DXFRAME@@PAUModelFrame@@@Z
 * func-address: 0x1003d0f0
 * callers: 0x1003d0f0, 0x1003dda0
 * callees: 0x1002b5c0, 0x1003b320, 0x1003d0f0, 0x10078420, 0x1009dd60, 0x1009e990, 0x1009ed40, 0x100e2a60, 0x100e40e0, 0x100e6830, 0x100e6870, 0x100e68a0, 0x100e8cd0, 0x101189f0, 0x10136530, 0x1017809e, 0x1017a310, 0x1017b990, 0x1017eaef, 0x101a24ac, 0x101a2500, 0x101a252e, 0x101a2534, 0x101a253a
 */

void __thiscall XFileLoad::ConvertFrame(
        XFileLoad *this,
        struct StaticModel *a2,
        struct _D3DXFRAME *a3,
        struct ModelFrame *a4)
{
  int v4; // eax
  bool v5; // zf
  double v6; // st7
  struct RenderDevice *v7; // eax
  struct VertexManager *v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  struct VertexManager *v12; // eax
  int v13; // esi
  int v14; // ebx
  struct RenderDevice *v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // edi
  void (**v19)(void *, const char *, ...); // esi
  int v20; // eax
  int v21; // edx
  int v22; // eax
  void *v23; // esi
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  void (**v27)(void *, const char *, ...); // ebx
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // ebx
  int v32; // esi
  _DWORD *v33; // eax
  double v34; // st7
  struct Mesh *v35; // esi
  struct VertexManager *v36; // eax
  unsigned int v37; // eax
  int v38; // edx
  _DWORD *v39; // esi
  unsigned int v40; // ecx
  unsigned int v41; // edi
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  int v48; // eax
  unsigned int v49; // ebx
  int v50; // edx
  int v51; // eax
  char v52; // al
  int *v53; // eax
  int v54; // esi
  int v55; // edx
  int v56; // eax
  int v57; // eax
  int v58; // esi
  struct Mesh *v59; // edi
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  int Var; // eax
  int v64; // edx
  int v65; // ecx
  Material *v66; // ecx
  int v67; // esi
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // esi
  struct Mesh *v72; // edi
  int v73; // ecx
  int v74; // ecx
  int v75; // ecx
  int v76; // eax
  int v77; // ecx
  int v78; // eax
  struct ModelFrame *v79; // esi
  unsigned int v80; // edi
  float *v81; // eax
  double v82; // st7
  int v83; // edx
  struct Mesh *v84; // edi
  _DWORD *v85; // eax
  struct _D3DXFRAME *v86; // eax
  struct _D3DXFRAME *v87; // ebp
  ModelFrame *v88; // eax
  struct ModelFrame *v89; // eax
  struct _D3DXFRAME *v90; // edx
  ModelFrame *v91; // eax
  struct ModelFrame *v92; // eax
  struct _D3DXFRAME *v93; // edx
  char v94[4]; // [esp+C8h] [ebp-AC0h] BYREF
  int v95; // [esp+CCh] [ebp-ABCh]
  int v96; // [esp+D0h] [ebp-AB8h]
  int v97; // [esp+D4h] [ebp-AB4h]
  int v98; // [esp+D8h] [ebp-AB0h]
  int v99; // [esp+DCh] [ebp-AACh]
  int v100; // [esp+E0h] [ebp-AA8h]
  int v101; // [esp+E4h] [ebp-AA4h] BYREF
  float v102; // [esp+E8h] [ebp-AA0h]
  float v103; // [esp+ECh] [ebp-A9Ch]
  float v104; // [esp+F0h] [ebp-A98h]
  float v105; // [esp+F4h] [ebp-A94h]
  float v106; // [esp+F8h] [ebp-A90h]
  int v107; // [esp+FCh] [ebp-A8Ch]
  int v108; // [esp+114h] [ebp-A74h]
  char v109; // [esp+11Bh] [ebp-A6Dh]
  float v110; // [esp+11Ch] [ebp-A6Ch]
  int *v111; // [esp+120h] [ebp-A68h]
  struct Mesh *v112; // [esp+124h] [ebp-A64h]
  XFileLoad *v113; // [esp+128h] [ebp-A60h]
  float v114; // [esp+12Ch] [ebp-A5Ch] BYREF
  void *Src; // [esp+130h] [ebp-A58h] BYREF
  int *v116; // [esp+134h] [ebp-A54h]
  int v117; // [esp+138h] [ebp-A50h] BYREF
  int v118; // [esp+13Ch] [ebp-A4Ch] BYREF
  int v119; // [esp+140h] [ebp-A48h] BYREF
  _BYTE v120[28]; // [esp+144h] [ebp-A44h] BYREF
  _BYTE v121[28]; // [esp+160h] [ebp-A28h] BYREF
  _BYTE v122[28]; // [esp+17Ch] [ebp-A0Ch] BYREF
  _WORD v123[6]; // [esp+198h] [ebp-9F0h] BYREF
  _WORD v124[260]; // [esp+1A4h] [ebp-9E4h] BYREF
  _BYTE v125[2000]; // [esp+3ACh] [ebp-7DCh] BYREF
  int v126; // [esp+B84h] [ebp-4h]

  v108 = 0;
  v4 = *(_DWORD *)a3;
  v113 = this;
  std::string::operator=((char *)a4 + 44, v4);
  v5 = byte_102805BC == 0;
  qmemcpy((char *)a4 + 100, (char *)a3 + 4, 0x40u);
  if ( !v5 )
  {
    v114 = XFileLoad::s_Scale;
    *((float *)a4 + 37) = XFileLoad::s_Scale * *((float *)a4 + 37);
    v6 = v114;
    *((float *)a4 + 38) = *((float *)a4 + 38) * v114;
    *((float *)a4 + 39) = v6 * *((float *)a4 + 39);
  }
  if ( *((_DWORD *)a3 + 17) )
  {
    v7 = RenderDevice::Instance();
    v112 = (struct Mesh *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v7 + 8))(v7);
    v8 = VertexManager::Instance();
    v9 = *(_DWORD *)((*(int (__thiscall **)(struct VertexManager *, int))(*(_DWORD *)v8 + 20))(v8, 56) + 4);
    (*(void (__stdcall **)(_DWORD, _WORD *))(**(_DWORD **)(*((_DWORD *)a3 + 17) + 8) + 28))(
      *(_DWORD *)(*((_DWORD *)a3 + 17) + 8),
      v124);
    v10 = 0;
    if ( v124[0] != 255 )
    {
      v11 = 0;
      while ( LOBYTE(v124[v11 + 3]) != 5 || !HIBYTE(v124[v11 + 3]) )
      {
        ++v10;
        v11 = 4 * v10;
        if ( v124[4 * v10] == 255 )
          goto LABEL_11;
      }
      v12 = VertexManager::Instance();
      v9 = *(_DWORD *)((*(int (__thiscall **)(struct VertexManager *, int))(*(_DWORD *)v12 + 20))(v12, 64) + 4);
    }
LABEL_11:
    v13 = **(_DWORD **)(*((_DWORD *)a3 + 17) + 8);
    v14 = *(_DWORD *)(*((_DWORD *)a3 + 17) + 8);
    v15 = RenderDevice::Instance();
    v16 = (*(int (__stdcall **)(int, int, _DWORD, int *))(*(_DWORD *)v14 + 36))(v14, v9, *((_DWORD *)v15 + 427), &v118);
    v17 = (*(int (__stdcall **)(_DWORD, int))(v13 + 48))(*(_DWORD *)(*((_DWORD *)a3 + 17) + 8), v16);
    v18 = 0;
    if ( v17 < 0 )
    {
      v19 = (void (**)(void *, const char *, ...))(*(_DWORD *)dword_11249F38 + 4);
      v20 = sub_1017EAEF(v17);
      (*v19)(
        dword_11249F38,
        " Error: %s, in: in->pMeshContainer->MeshData.pMesh->CloneMesh( in->pMeshContainer->MeshData.pMesh->GetOptions(),"
        " vertexFormat, RenderDevice::Instance()->dev, &pTemp )",
        v20);
    }
    v21 = *((_DWORD *)a3 + 17);
    if ( *(_DWORD *)(v21 + 8) )
    {
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v21 + 8) + 8))(*(_DWORD *)(v21 + 8));
      *(_DWORD *)(*((_DWORD *)a3 + 17) + 8) = 0;
    }
    *(_DWORD *)(*((_DWORD *)a3 + 17) + 8) = v118;
    (*(void (__stdcall **)(_DWORD, int, void **))(**(_DWORD **)(*((_DWORD *)a3 + 17) + 8) + 96))(
      *(_DWORD *)(*((_DWORD *)a3 + 17) + 8),
      16,
      &Src);
    v22 = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)a3 + 17) + 8) + 16))(*(_DWORD *)(*((_DWORD *)a3 + 17)
                                                                                                  + 8));
    v23 = operator new(4 * v22);
    v24 = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)a3 + 17) + 8) + 16))(*(_DWORD *)(*((_DWORD *)a3 + 17)
                                                                                                  + 8));
    memcpy(v23, Src, 4 * v24);
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)a3 + 17) + 8) + 100))(*(_DWORD *)(*((_DWORD *)a3 + 17) + 8));
    v25 = *((_DWORD *)a3 + 17);
    LODWORD(v114) = 100;
    (*(void (__stdcall **)(_DWORD, _BYTE *, float *))(**(_DWORD **)(v25 + 8) + 76))(*(_DWORD *)(v25 + 8), v125, &v114);
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)a3 + 17) + 8) + 20))(*(_DWORD *)(*((_DWORD *)a3 + 17) + 8));
    v117 = 0;
    v26 = D3DXComputeTangentFrameEx(
            *(_DWORD *)(*((_DWORD *)a3 + 17) + 8),
            5,
            0,
            -1,
            0,
            6,
            0,
            3,
            0,
            0,
            0,
            -1.01,
            -1.01,
            -1.01,
            &v117,
            0);
    if ( v26 < 0 )
    {
      v27 = (void (**)(void *, const char *, ...))(*(_DWORD *)dword_11249F38 + 4);
      v28 = sub_1017EAEF(v26);
      (*v27)(
        dword_11249F38,
        " Error: %s, in: D3DXComputeTangentFrameEx( in->pMeshContainer->MeshData.pMesh, D3DDECLUSAGE_TEXCOORD, 0, D3DX_DE"
        "FAULT, 0, D3DDECLUSAGE_TANGENT, 0, D3DDECLUSAGE_NORMAL, 0, 0, NULL, -1.01f, -1.01f, -1.01f, &pNew, 0 )",
        v28);
    }
    v29 = *((_DWORD *)a3 + 17);
    if ( *(_DWORD *)(v29 + 8) )
    {
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v29 + 8) + 8))(*(_DWORD *)(v29 + 8));
      *(_DWORD *)(*((_DWORD *)a3 + 17) + 8) = 0;
    }
    *(_DWORD *)(*((_DWORD *)a3 + 17) + 8) = v117;
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)a3 + 17) + 8) + 20))(*(_DWORD *)(*((_DWORD *)a3 + 17) + 8));
    (*(void (__stdcall **)(_DWORD, _DWORD, void **))(**(_DWORD **)(*((_DWORD *)a3 + 17) + 8) + 96))(
      *(_DWORD *)(*((_DWORD *)a3 + 17) + 8),
      0,
      &Src);
    v30 = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)a3 + 17) + 8) + 16))(*(_DWORD *)(*((_DWORD *)a3 + 17)
                                                                                                  + 8));
    memcpy(Src, v23, 4 * v30);
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)a3 + 17) + 8) + 100))(*(_DWORD *)(*((_DWORD *)a3 + 17) + 8));
    (*(void (__stdcall **)(_DWORD, _BYTE *, float))(**(_DWORD **)(*((_DWORD *)a3 + 17) + 8) + 112))(
      *(_DWORD *)(*((_DWORD *)a3 + 17) + 8),
      v125,
      COERCE_FLOAT(LODWORD(v114)));
    operator delete[](v23);
    (*(void (__stdcall **)(_DWORD, _DWORD, int *))(**(_DWORD **)(*((_DWORD *)a3 + 17) + 8) + 60))(
      *(_DWORD *)(*((_DWORD *)a3 + 17) + 8),
      0,
      &v119);
    v116 = (int *)(*(int (__stdcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)a3 + 17) + 8) + 32))(*(_DWORD *)(*((_DWORD *)a3 + 17) + 8));
    if ( (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)a3 + 17) + 8) + 20))(*(_DWORD *)(*((_DWORD *)a3 + 17)
                                                                                                 + 8)) )
    {
      v31 = 0;
      do
      {
        v32 = v31 + v119;
        v33 = (_DWORD *)sub_1017B990(v123, v31 + v119 + 12, v31 + v119 + 24);
        *(_DWORD *)(v32 + 36) = *v33;
        *(_DWORD *)(v32 + 40) = v33[1];
        v5 = byte_102805BC == 0;
        *(_DWORD *)(v32 + 44) = v33[2];
        if ( !v5 )
        {
          v110 = XFileLoad::s_Scale;
          *(float *)v32 = XFileLoad::s_Scale * *(float *)v32;
          v34 = v110;
          *(float *)(v32 + 4) = v110 * *(float *)(v32 + 4);
          *(float *)(v32 + 8) = v34 * *(float *)(v32 + 8);
        }
        v31 += (int)v116;
        ++v18;
      }
      while ( v18 < (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)a3 + 17) + 8) + 20))(*(_DWORD *)(*((_DWORD *)a3 + 17) + 8)) );
    }
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)a3 + 17) + 8) + 64))(*(_DWORD *)(*((_DWORD *)a3 + 17) + 8));
    v35 = v112;
    (**(void (__thiscall ***)(struct Mesh *, _DWORD, int, _DWORD))v112)(
      v112,
      *(_DWORD *)(*((_DWORD *)a3 + 17) + 8),
      1,
      0);
    v36 = VertexManager::Instance();
    *((_DWORD *)v112 + 4) = *(_DWORD *)(*(int (__thiscall **)(struct VertexManager *, int))(*(_DWORD *)v36 + 20))(
                                         v36,
                                         56);
    v37 = *(_DWORD *)(*((_DWORD *)a3 + 17) + 20);
    if ( v37 )
    {
      v38 = *((_DWORD *)v35 + 616);
      v39 = (_DWORD *)((char *)v35 + 2460);
      if ( v38 )
        v40 = (v39[2] - v38) >> 2;
      else
        v40 = 0;
      v41 = 0;
      if ( v37 <= v40 )
      {
        do
        {
          v45 = v39[1];
          if ( !v45 || v41 >= (v39[2] - v45) >> 2 )
            invalid_parameter_noinfo();
          v46 = v39[1];
          if ( *(_DWORD *)(v46 + 4 * v41) )
          {
            if ( !v46 || v41 >= (v39[2] - v46) >> 2 )
              invalid_parameter_noinfo();
            Material::Release(*(Material **)(v39[1] + 4 * v41));
            v47 = v39[1];
            if ( !v47 || v41 >= (v39[2] - v47) >> 2 )
              invalid_parameter_noinfo();
            *(_DWORD *)(v39[1] + 4 * v41) = 0;
          }
          ++v41;
        }
        while ( v41 < *(_DWORD *)(*((_DWORD *)a3 + 17) + 20) );
      }
      else
      {
        while ( 1 )
        {
          v42 = v39[1];
          if ( !v42 || v41 >= (v39[2] - v42) >> 2 )
            break;
          v43 = v39[1];
          if ( *(_DWORD *)(v43 + 4 * v41) )
          {
            if ( !v43 || v41 >= (v39[2] - v43) >> 2 )
              invalid_parameter_noinfo();
            Material::Release(*(Material **)(v39[1] + 4 * v41));
            v44 = v39[1];
            if ( !v44 || v41 >= (v39[2] - v44) >> 2 )
              invalid_parameter_noinfo();
            *(_DWORD *)(v39[1] + 4 * v41) = 0;
          }
          ++v41;
        }
        std::vector<Material *>::resize(v39, *(_DWORD *)(*((_DWORD *)a3 + 17) + 20), 0);
      }
    }
    v48 = *((_DWORD *)a3 + 17);
    v49 = 0;
    if ( *(_DWORD *)(v48 + 20) )
    {
      v110 = 0.0;
      do
      {
        v50 = *(_DWORD *)(v48 + 12);
        if ( !*(_DWORD *)(v50 + LODWORD(v110) + 68)
          || (v51 = std::string::string(v120, *(_DWORD *)(v50 + LODWORD(v110) + 68)),
              v108 |= 1u,
              v126 = 0,
              v52 = std::operator!=<char>(v51, &unk_101BCC1F),
              v109 = 1,
              !v52) )
        {
          v109 = 0;
        }
        v126 = -1;
        if ( (v108 & 1) != 0 )
        {
          v108 &= ~1u;
          std::string::~string(v120);
        }
        v53 = (int *)operator new(0x154u);
        if ( v109 )
        {
          v116 = v53;
          v126 = 1;
          if ( v53 )
          {
            v54 = sub_1003B320((int)v122, v49);
            v55 = *(_DWORD *)a3;
            v108 |= 2u;
            LOBYTE(v126) = 2;
            v56 = std::string::string(v121, v55);
            v108 |= 4u;
            v126 = 3;
            v57 = std::operator+<char>(v120, v56, "_Mat");
            v108 |= 8u;
            v111 = &v101;
            v126 = 4;
            std::operator+<char>(&v101, v57, v54);
            v58 = Material::Material(
                    v101,
                    LODWORD(v102),
                    LODWORD(v103),
                    LODWORD(v104),
                    LODWORD(v105),
                    LODWORD(v106),
                    v107);
          }
          else
          {
            v58 = 0;
          }
          v59 = v112;
          v60 = *((_DWORD *)v112 + 616);
          if ( !v60 || v49 >= (*((_DWORD *)v112 + 617) - v60) >> 2 )
            invalid_parameter_noinfo();
          v5 = (v108 & 8) == 0;
          *(_DWORD *)(*((_DWORD *)v59 + 616) + 4 * v49) = v58;
          v126 = 6;
          if ( !v5 )
          {
            v108 &= ~8u;
            std::string::~string(v120);
          }
          v126 = 5;
          if ( (v108 & 4) != 0 )
          {
            v108 &= ~4u;
            std::string::~string(v121);
          }
          v126 = -1;
          if ( (v108 & 2) != 0 )
          {
            v108 &= ~2u;
            std::string::~string(v122);
          }
          v61 = *((_DWORD *)v59 + 616);
          if ( !v61 || v49 >= (*((_DWORD *)v59 + 617) - v61) >> 2 )
            invalid_parameter_noinfo();
          Material::Initialize(*(Material **)(*((_DWORD *)v59 + 616) + 4 * v49), "Diffuse.fx", &byte_101BCCF7, 1);
          v111 = &v101;
          std::string::string(&v101, "tDiffuse0");
          v62 = *((_DWORD *)v59 + 616);
          if ( !v62 || v49 >= (*((_DWORD *)v59 + 617) - v62) >> 2 )
            invalid_parameter_noinfo();
          Var = Material::FindVar(v101, LODWORD(v102), LODWORD(v103), LODWORD(v104), LODWORD(v105), LODWORD(v106), v107);
          if ( Var && *(_DWORD *)(Var + 60) )
          {
            std::string::string(v120, *(_DWORD *)(*(_DWORD *)(*((_DWORD *)a3 + 17) + 12) + LODWORD(v110) + 68));
            v107 = 1;
            v106 = 0.0;
            v126 = 8;
            v105 = 1.0;
            v104 = 1.0;
            v103 = 0.0;
            v102 = 0.0;
            v101 = 0;
            v111 = (int *)v94;
            sub_1017A310(v94, v120);
            Texture::Load(v94[0], v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107);
            v126 = -1;
            std::string::~string(v120);
          }
          v64 = *(_DWORD *)(*((_DWORD *)a3 + 17) + 12);
          if ( *(_DWORD *)(v64 + LODWORD(v110) + 68) )
          {
            operator delete(*(void **)(v64 + LODWORD(v110) + 68));
            *(_DWORD *)(*(_DWORD *)(*((_DWORD *)a3 + 17) + 12) + LODWORD(v110) + 68) = 0;
          }
          v65 = *((_DWORD *)v59 + 616);
          if ( !v65 || v49 >= (*((_DWORD *)v59 + 617) - v65) >> 2 )
            invalid_parameter_noinfo();
          v66 = *(Material **)(*((_DWORD *)v59 + 616) + 4 * v49);
        }
        else
        {
          v111 = v53;
          v126 = 9;
          if ( v53 )
          {
            v67 = sub_1003B320((int)v120, v49);
            v68 = *(_DWORD *)a3;
            v108 |= 0x10u;
            LOBYTE(v126) = 10;
            v69 = std::string::string(v121, v68);
            v108 |= 0x20u;
            v126 = 11;
            v70 = std::operator+<char>(v122, v69, "_Mat");
            v108 |= 0x40u;
            v116 = &v101;
            v126 = 12;
            std::operator+<char>(&v101, v70, v67);
            v71 = Material::Material(
                    v101,
                    LODWORD(v102),
                    LODWORD(v103),
                    LODWORD(v104),
                    LODWORD(v105),
                    LODWORD(v106),
                    v107);
          }
          else
          {
            v71 = 0;
          }
          v72 = v112;
          v73 = *((_DWORD *)v112 + 616);
          if ( !v73 || v49 >= (*((_DWORD *)v112 + 617) - v73) >> 2 )
            invalid_parameter_noinfo();
          v5 = (v108 & 0x40) == 0;
          *(_DWORD *)(*((_DWORD *)v72 + 616) + 4 * v49) = v71;
          v126 = 14;
          if ( !v5 )
          {
            v108 &= ~0x40u;
            std::string::~string(v122);
          }
          v126 = 13;
          if ( (v108 & 0x20) != 0 )
          {
            v108 &= ~0x20u;
            std::string::~string(v121);
          }
          v126 = -1;
          if ( (v108 & 0x10) != 0 )
          {
            v108 &= ~0x10u;
            std::string::~string(v120);
          }
          v74 = *((_DWORD *)v72 + 616);
          if ( !v74 || v49 >= (*((_DWORD *)v72 + 617) - v74) >> 2 )
            invalid_parameter_noinfo();
          Material::Initialize(*(Material **)(*((_DWORD *)v72 + 616) + 4 * v49), "Diffuse.fx", byte_101BCCFD, 1);
          v111 = &v101;
          std::string::string(&v101, "tDiffuse0");
          v75 = *((_DWORD *)v72 + 616);
          if ( !v75 || v49 >= (*((_DWORD *)v72 + 617) - v75) >> 2 )
            invalid_parameter_noinfo();
          v76 = Material::FindVar(v101, LODWORD(v102), LODWORD(v103), LODWORD(v104), LODWORD(v105), LODWORD(v106), v107);
          if ( v76 && *(_DWORD *)(v76 + 60) )
          {
            v107 = 1;
            v106 = 0.0;
            v105 = 1.0;
            v104 = 1.0;
            v103 = 0.0;
            v102 = 0.0;
            v101 = 0;
            v111 = (int *)v94;
            std::string::string(v94, "DefaultTexture.dds");
            Texture::Load(v94[0], v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107);
          }
          v77 = *((_DWORD *)v72 + 616);
          if ( !v77 || v49 >= (*((_DWORD *)v72 + 617) - v77) >> 2 )
            invalid_parameter_noinfo();
          v66 = *(Material **)(*((_DWORD *)v72 + 616) + 4 * v49);
        }
        Material::Refresh(v66);
        v48 = *((_DWORD *)a3 + 17);
        LODWORD(v110) += 72;
        ++v49;
      }
      while ( v49 < *(_DWORD *)(v48 + 20) );
    }
    v78 = *((_DWORD *)a3 + 17);
    v79 = *(struct ModelFrame **)(v78 + 28);
    if ( v79 )
    {
      if ( byte_102805BC )
      {
        v80 = 0;
        if ( (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v79 + 36))(*(_DWORD *)(v78 + 28)) )
        {
          do
          {
            v81 = (float *)(*(int (__stdcall **)(struct ModelFrame *, unsigned int))(*(_DWORD *)v79 + 68))(v79, v80);
            v82 = XFileLoad::s_Scale * v81[12];
            v83 = *(_DWORD *)v79;
            v107 = (int)v79;
            ++v80;
            v81[12] = v82;
            v81[13] = v81[13] * XFileLoad::s_Scale;
            v81[14] = v81[14] * XFileLoad::s_Scale;
          }
          while ( v80 < (*(int (__stdcall **)(int))(v83 + 36))(v107) );
        }
      }
      v84 = v112;
      *((_DWORD *)v112 + 3) = v79;
      (*(void (__stdcall **)(struct ModelFrame *))(*(_DWORD *)v79 + 4))(v79);
      if ( Serializer::s_UseSkinning )
        (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)v84 + 96))(v84);
    }
    else
    {
      v84 = v112;
    }
    ModelFrame::SetMesh(a4, v84, 1);
    if ( ModelFrame::UseCollisionMesh(a4) )
    {
      v85 = operator new(0x2Cu);
      if ( v85 )
      {
        v85[1] = 0;
        v85[2] = 0;
        v85[3] = 0;
        v85[5] = 0;
        v85[6] = 0;
        v85[7] = 0;
        v85[9] = 0;
        v85[10] = 0;
      }
      else
      {
        v85 = 0;
      }
      v107 = (int)v84;
      v126 = -1;
      *((_DWORD *)a4 + 113) = v85;
      sub_10078420(v107);
    }
  }
  if ( XFileLoad::s_StripHierarchy )
  {
    v86 = (struct _D3DXFRAME *)*((_DWORD *)a3 + 18);
    if ( v86 && !*((_DWORD *)a4 + 113) )
      XFileLoad::ConvertFrame(v113, a2, v86, a4);
    v87 = (struct _D3DXFRAME *)*((_DWORD *)a3 + 19);
    if ( v87 && !*((_DWORD *)a4 + 113) )
    {
      v107 = (int)a4;
      v106 = *(float *)&v87;
      v105 = *(float *)&a2;
LABEL_143:
      XFileLoad::ConvertFrame(
        v113,
        (struct StaticModel *)LODWORD(v105),
        (struct _D3DXFRAME *)LODWORD(v106),
        (struct ModelFrame *)v107);
    }
  }
  else
  {
    if ( *((_DWORD *)a3 + 18) )
    {
      v88 = (ModelFrame *)operator new(0x1C8u);
      v111 = (int *)v88;
      v126 = 18;
      if ( v88 )
        v89 = ModelFrame::ModelFrame(v88, a2);
      else
        v89 = 0;
      *((_DWORD *)a4 + 89) = v89;
      v90 = (struct _D3DXFRAME *)*((_DWORD *)a3 + 18);
      v126 = -1;
      XFileLoad::ConvertFrame(v113, a2, v90, v89);
    }
    if ( *((_DWORD *)a3 + 19) )
    {
      v91 = (ModelFrame *)operator new(0x1C8u);
      v111 = (int *)v91;
      v126 = 19;
      if ( v91 )
        v92 = ModelFrame::ModelFrame(v91, a2);
      else
        v92 = 0;
      *((_DWORD *)a4 + 90) = v92;
      v93 = (struct _D3DXFRAME *)*((_DWORD *)a3 + 19);
      v107 = (int)v92;
      v106 = *(float *)&v93;
      v126 = -1;
      v105 = *(float *)&a2;
      goto LABEL_143;
    }
  }
}
