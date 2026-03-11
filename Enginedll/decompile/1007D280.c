/*
 * func-name: sub_1007D280
 * func-address: 0x1007d280
 * callers: 0x1007da10
 * callees: 0x1000bc40, 0x1000cb70, 0x10011ca0, 0x1002d760, 0x10077b70, 0x10078420, 0x1007bcc0, 0x1007bd80, 0x1007bf40, 0x1007c450, 0x1007dd80, 0x100971c0, 0x100977a0, 0x1009dd60, 0x1009dd90, 0x1009ed40, 0x100ef210, 0x101189f0, 0x10136290, 0x10136530, 0x10179050, 0x10179a60, 0x1017aa70, 0x101a2500, 0x101a2534
 */

char __thiscall sub_1007D280(_DWORD *this, ModelFrame *a2)
{
  _DWORD *v2; // edi
  int v3; // eax
  struct Mesh *Mesh; // ebx
  int v6; // eax
  int NumMeshes; // eax
  int v8; // ecx
  bool v9; // zf
  float v10; // eax
  float v11; // ecx
  _DWORD *v12; // ecx
  char *v13; // eax
  _DWORD *v14; // eax
  struct RenderDevice *v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  Texture *v19; // eax
  Texture *v20; // eax
  int v21; // eax
  struct RenderDevice *v22; // eax
  void *v23; // esi
  int v24; // esi
  _DWORD *v25; // edi
  struct Mesh *v26; // eax
  struct Mesh *v27; // eax
  int v28; // esi
  int v29; // eax
  const CHAR *v30; // eax
  BOOL v31; // edi
  Texture *v32; // eax
  Texture *v33; // edi
  struct Mesh *v34; // eax
  int v35; // edx
  int v36; // eax
  char v37; // [esp-14h] [ebp-160h] BYREF
  int v38; // [esp-10h] [ebp-15Ch]
  int v39; // [esp-Ch] [ebp-158h]
  int v40; // [esp-8h] [ebp-154h]
  int v41; // [esp-4h] [ebp-150h]
  int v42; // [esp+0h] [ebp-14Ch]
  int v43; // [esp+4h] [ebp-148h]
  char v44[4]; // [esp+8h] [ebp-144h] BYREF
  int v45; // [esp+Ch] [ebp-140h]
  int v46; // [esp+10h] [ebp-13Ch]
  int v47; // [esp+14h] [ebp-138h]
  int v48; // [esp+18h] [ebp-134h]
  int v49; // [esp+1Ch] [ebp-130h]
  int v50; // [esp+20h] [ebp-12Ch]
  int v51; // [esp+24h] [ebp-128h] BYREF
  int v52; // [esp+28h] [ebp-124h]
  int v53; // [esp+2Ch] [ebp-120h]
  int v54; // [esp+30h] [ebp-11Ch]
  int v55; // [esp+34h] [ebp-118h]
  int v56; // [esp+38h] [ebp-114h]
  struct Mesh *v57; // [esp+3Ch] [ebp-110h]
  int v58; // [esp+40h] [ebp-10Ch]
  int v59; // [esp+44h] [ebp-108h]
  char *v60; // [esp+50h] [ebp-FCh]
  int v61; // [esp+54h] [ebp-F8h]
  _DWORD *v62; // [esp+58h] [ebp-F4h]
  float v63; // [esp+5Ch] [ebp-F0h] BYREF
  float v64; // [esp+60h] [ebp-ECh]
  float v65; // [esp+64h] [ebp-E8h]
  struct Mesh *v66; // [esp+68h] [ebp-E4h]
  _BYTE v67[28]; // [esp+6Ch] [ebp-E0h] BYREF
  _BYTE v68[28]; // [esp+88h] [ebp-C4h] BYREF
  float v69[16]; // [esp+A4h] [ebp-A8h] BYREF
  _BYTE v70[28]; // [esp+E4h] [ebp-68h] BYREF
  _BYTE v71[64]; // [esp+100h] [ebp-4Ch] BYREF
  int v72; // [esp+148h] [ebp-4h]

  v2 = this;
  v62 = this;
  if ( byte_10284F38 )
  {
    v3 = std::string::c_str((char *)a2 + 44);
    SeriousWarning(&byte_101C2DC0, v3);
    return 0;
  }
  sub_1017AA70(v58, v59);
  Mesh = ModelFrame::GetMesh(a2, 0);
  v66 = Mesh;
  sub_1000BC40(v69);
  v6 = v2[2];
  if ( v6 )
  {
    NumMeshes = StaticModel::GetNumMeshes(*(StaticModel **)(v6 + 716));
    v8 = v2[2];
    v9 = *(_BYTE *)(v8 + 726) == 0;
    v61 = NumMeshes;
    if ( v9 || NumMeshes != 1 )
    {
      qmemcpy(v69, (const void *)sub_10179A60(v71), sizeof(v69));
      if ( v61 > 1 )
      {
        v63 = 0.0;
        v64 = 0.0;
        v65 = 0.0;
        sub_10179050((char *)a2 + 148, &v63);
        v10 = v64;
        v11 = v65;
        *((float *)a2 + 37) = v63;
        *((float *)a2 + 38) = v10;
        *((float *)a2 + 39) = v11;
      }
    }
    else
    {
      qmemcpy(v69, (const void *)(v8 + 868), sizeof(v69));
    }
    v2 = v62;
  }
  if ( Mesh )
  {
    if ( !sub_1007BCC0(v69, 0.001) )
    {
      v63 = 0.0;
      v64 = 0.0;
      v65 = 0.0;
      v69[14] = 0.0;
      v69[12] = 0.0;
      v69[13] = 0.0;
      sub_1007DD80(v69);
      (**(void (__thiscall ***)(struct MeshOps *, struct Mesh *, int, float *))MeshOps::Instance)(
        MeshOps::Instance,
        Mesh,
        4,
        v69);
      v12 = (_DWORD *)*((_DWORD *)a2 + 113);
      if ( v12 )
      {
        sub_10077B70(v12);
        sub_10078420(*((_DWORD *)a2 + 113), (int)v2, (int)Mesh);
      }
    }
    if ( ModelFrame::UseCollisionMesh(a2) && !*((_DWORD *)a2 + 113) )
    {
      v13 = (char *)operator new(0x2Cu);
      v61 = (int)v13;
      v72 = 0;
      if ( v13 )
        v14 = sub_10011CA0(v13);
      else
        v14 = 0;
      v57 = Mesh;
      v72 = -1;
      *((_DWORD *)a2 + 113) = v14;
      sub_10078420((int)v14, (int)v2, (int)v57);
    }
    if ( !*(_BYTE *)Engine::Instance() )
    {
      if ( *((_BYTE *)Mesh + 120) )
      {
        if ( !*((_BYTE *)v2 + 24) )
        {
          v15 = RenderDevice::Instance();
          if ( (*(unsigned __int8 (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v15 + 124))(v15) )
          {
            if ( (unsigned __int8)std::operator!=<char>((char *)Mesh + 2383, &unk_101C2DB2) )
            {
              v61 = (int)v44;
              std::string::string(v44, ".prt");
              v60 = &v37;
              v72 = 1;
              std::string::string(&v37, (char *)Mesh + 2383);
              v2 = v62;
              v72 = -1;
              sub_1007BF40(v62, (int)&v51, v37, v38, v39, v40, v41, v42, v43, v44[0], v45, v46, v47, v48, v49, v50);
            }
            else
            {
              v60 = v44;
              std::string::string(v44, ".prt");
              v61 = (int)&v37;
              v72 = 2;
              std::string::string(&v37, (char *)a2 + 44);
              v72 = -1;
              sub_1007BF40(v2, (int)&v51, v37, v38, v39, v40, v41, v42, v43, v44[0], v45, v46, v47, v48, v49, v50);
            }
            (*(void (__thiscall **)(struct Mesh *, int, int, int, int, int, int, struct Mesh *))(*(_DWORD *)Mesh + 52))(
              Mesh,
              v51,
              v52,
              v53,
              v54,
              v55,
              v56,
              v57);
          }
        }
      }
      if ( !*((_DWORD *)Mesh + 8) )
      {
        if ( !*((_BYTE *)Mesh + 120) )
        {
          v60 = (char *)&v51;
          std::string::string(&v51, ".dds");
          v61 = (int)v44;
          v72 = 3;
          std::string::string(v44, (char *)a2 + 44);
          v72 = -1;
          sub_1007BF40(v2, (int)v67, v44[0], v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, (int)v57);
          v72 = 4;
          v16 = std::string::c_str(v67);
          v60 = (char *)&v51;
          std::string::string(&v51, v16);
          if ( !sub_1007BD80(v51) && (unsigned __int8)std::operator!=<char>((char *)Mesh + 2383, &unk_101C2DB3) )
          {
            v60 = (char *)&v51;
            std::string::string(&v51, ".dds");
            v61 = (int)v44;
            LOBYTE(v72) = 5;
            std::string::string(v44, (char *)Mesh + 2383);
            LOBYTE(v72) = 4;
            v17 = sub_1007BF40(
                    v2,
                    (int)v68,
                    v44[0],
                    v45,
                    v46,
                    v47,
                    v48,
                    v49,
                    v50,
                    v51,
                    v52,
                    v53,
                    v54,
                    v55,
                    v56,
                    (int)v57);
            LOBYTE(v72) = 6;
            std::string::operator=(v67, v17);
            LOBYTE(v72) = 4;
            std::string::~string(v68);
          }
          v18 = std::string::c_str(v67);
          v60 = (char *)&v51;
          std::string::string(&v51, v18);
          if ( sub_1007BD80(v51) )
          {
            v19 = (Texture *)operator new(0x9Cu);
            v60 = (char *)v19;
            LOBYTE(v72) = 7;
            if ( v19 )
              v20 = Texture::Texture(v19);
            else
              v20 = 0;
            v57 = 0;
            *(float *)&v56 = 0.0;
            *((_DWORD *)Mesh + 8) = v20;
            *(float *)&v55 = 1.0;
            *((_BYTE *)v20 + 58) = 0;
            v21 = *((_DWORD *)Mesh + 8);
            *(float *)&v54 = 1.0;
            LOBYTE(v72) = 4;
            *(_BYTE *)(v21 + 56) = 1;
            *(float *)&v53 = 0.0;
            *(float *)&v52 = 0.0;
            v51 = 0;
            v60 = v44;
            std::string::string(v44, v67);
            Texture::Load(
              v44[0],
              v45,
              v46,
              v47,
              v48,
              v49,
              v50,
              v51,
              *(float *)&v52,
              *(float *)&v53,
              *(float *)&v54,
              *(float *)&v55,
              *(float *)&v56,
              (int)v57);
          }
          v72 = -1;
          std::string::~string(v67);
LABEL_43:
          if ( *((_BYTE *)Mesh + 120) && *((_BYTE *)v2 + 24) )
            sub_1007C450(v2, a2);
          goto LABEL_46;
        }
LABEL_40:
        v22 = RenderDevice::Instance();
        if ( (*(unsigned __int8 (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v22 + 124))(v22) )
        {
          v23 = (void *)*((_DWORD *)Mesh + 8);
          if ( v23 )
          {
            Texture::~Texture(*((void ***)Mesh + 8));
            operator delete(v23);
            *((_DWORD *)Mesh + 8) = 0;
          }
        }
        goto LABEL_43;
      }
      if ( *((_BYTE *)Mesh + 120) )
        goto LABEL_40;
    }
  }
LABEL_46:
  if ( *((int *)a2 + 10) > 1 )
  {
    if ( *((_BYTE *)ModelFrame::GetMesh(a2, 0) + 2330) )
    {
      if ( *((_DWORD *)ModelFrame::GetMesh(a2, 0) + 7) )
      {
        if ( !*((_DWORD *)ModelFrame::GetMesh(a2, 1) + 7) )
        {
          v24 = 1;
          if ( *((int *)a2 + 10) > 1 )
          {
            do
            {
              v25 = (_DWORD *)((char *)ModelFrame::GetMesh(a2, 0) + 28);
              *((_DWORD *)ModelFrame::GetMesh(a2, v24) + 7) = *v25;
              v26 = ModelFrame::GetMesh(a2, v24);
              (*(void (__thiscall **)(_DWORD))(**((_DWORD **)v26 + 7) + 40))(*((_DWORD *)v26 + 7));
              v57 = (struct Mesh *)((char *)ModelFrame::GetMesh(a2, 0) + 120);
              v27 = ModelFrame::GetMesh(a2, v24);
              PRTSettings::operator=((char *)v27 + 120, (char *)v57);
              ++v24;
            }
            while ( v24 < *((_DWORD *)a2 + 10) );
            v2 = v62;
          }
        }
      }
    }
  }
  if ( !*((_DWORD *)Mesh + 7) )
  {
    v28 = 1;
    if ( *((int *)a2 + 10) > 1 )
    {
      do
      {
        v60 = (char *)&v51;
        std::string::string(&v51, ".dds");
        v61 = (int)v44;
        v72 = 8;
        std::string::string(v44, (char *)a2 + 44);
        v72 = -1;
        sub_1007BF40(v62, (int)v70, v44[0], v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, (int)v57);
        v72 = 9;
        if ( !*((_DWORD *)ModelFrame::GetMesh(a2, v28) + 8) )
        {
          v29 = std::string::c_str(v70);
          std::string::string(v68, v29);
          LOBYTE(v72) = 10;
          v30 = (const CHAR *)std::string::c_str(v68);
          v31 = PathFileExistsA(v30);
          LOBYTE(v72) = 9;
          std::string::~string(v68);
          if ( v31 )
          {
            v32 = (Texture *)operator new(0x9Cu);
            v60 = (char *)v32;
            LOBYTE(v72) = 11;
            if ( v32 )
              v33 = Texture::Texture(v32);
            else
              v33 = 0;
            LOBYTE(v72) = 9;
            v34 = ModelFrame::GetMesh(a2, v28);
            v57 = (struct Mesh *)v28;
            *((_DWORD *)v34 + 8) = v33;
            v35 = *((_DWORD *)ModelFrame::GetMesh(a2, (int)v57) + 8);
            v57 = (struct Mesh *)v28;
            *(_BYTE *)(v35 + 58) = 0;
            v36 = *((_DWORD *)ModelFrame::GetMesh(a2, (int)v57) + 8);
            v57 = 0;
            *(float *)&v56 = 0.0;
            *(_BYTE *)(v36 + 56) = 1;
            *(float *)&v55 = 1.0;
            *(float *)&v54 = 1.0;
            *(float *)&v53 = 0.0;
            *(float *)&v52 = 0.0;
            v51 = 0;
            v60 = v44;
            std::string::string(v44, v70);
            LOBYTE(v72) = 12;
            ModelFrame::GetMesh(a2, v28);
            LOBYTE(v72) = 9;
            Texture::Load(
              v44[0],
              v45,
              v46,
              v47,
              v48,
              v49,
              v50,
              v51,
              *(float *)&v52,
              *(float *)&v53,
              *(float *)&v54,
              *(float *)&v55,
              *(float *)&v56,
              (int)v57);
          }
        }
        v72 = -1;
        std::string::~string(v70);
        ++v28;
      }
      while ( v28 < *((_DWORD *)a2 + 10) );
      Mesh = v66;
      v2 = v62;
    }
  }
  if ( *((_DWORD *)a2 + 10) == 1 )
  {
    if ( *((_BYTE *)v2 + 24) )
      ModelFrame::SetMesh(a2, Mesh, 1);
  }
  return 1;
}
