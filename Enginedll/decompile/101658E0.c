/*
 * func-name: ?GenerateMesh@TerrainNode@@QAE_N_N0@Z
 * func-address: 0x101658e0
 * callers: 0x10167c60, 0x10169020
 * callees: 0x1000d680, 0x10012aa0, 0x1002ff40, 0x1003b320, 0x1009d930, 0x1009dbf0, 0x1009dd90, 0x1009e990, 0x100e3ef0, 0x100e4400, 0x100f2ca0, 0x1010fea0, 0x101189f0, 0x1015d190, 0x1015edf0, 0x10162160, 0x101a2500, 0x101a2534
 */

char __userpurge TerrainNode::GenerateMesh@<al>(TerrainNode *this@<ecx>, struct Mesh *Mesh@<edi>, float a3, float a4)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  Model *v10; // eax
  Model *v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  ModelFrame *v16; // eax
  ModelFrame *v17; // eax
  ModelFrame *v18; // ecx
  Material **v19; // eax
  struct RenderDevice *v20; // eax
  struct Mesh *v21; // eax
  Material **v23; // eax
  struct RenderDevice *v24; // eax
  struct Mesh *v25; // eax
  char v26; // al
  int *v27; // ecx
  Material **v28; // eax
  struct RenderDevice *v29; // eax
  struct Mesh *v30; // eax
  char v31; // al
  int v32; // eax
  double v33; // st7
  int v34; // edx
  int v35; // ecx
  double v36; // st6
  double v37; // st7
  struct Mesh *v38; // eax
  struct Mesh *v39; // eax
  struct Mesh *v40; // eax
  int v41; // [esp+24h] [ebp-FCh]
  int v42; // [esp+44h] [ebp-DCh] BYREF
  int v43; // [esp+48h] [ebp-D8h]
  unsigned int v44; // [esp+4Ch] [ebp-D4h]
  unsigned int v45; // [esp+50h] [ebp-D0h]
  float v46; // [esp+60h] [ebp-C0h]
  int v47; // [esp+64h] [ebp-BCh] BYREF
  float v48; // [esp+68h] [ebp-B8h]
  int v49; // [esp+6Ch] [ebp-B4h] BYREF
  void *v50; // [esp+70h] [ebp-B0h] BYREF
  int v51; // [esp+74h] [ebp-ACh]
  int v52; // [esp+78h] [ebp-A8h]
  int v53; // [esp+88h] [ebp-98h] BYREF
  _DWORD v54[6]; // [esp+8Ch] [ebp-94h] BYREF
  _BYTE v55[28]; // [esp+A4h] [ebp-7Ch] BYREF
  _BYTE v56[28]; // [esp+C0h] [ebp-60h] BYREF
  _DWORD v57[7]; // [esp+DCh] [ebp-44h] BYREF
  _BYTE v58[28]; // [esp+F8h] [ebp-28h] BYREF
  struct _EXCEPTION_REGISTRATION_RECORD *v59; // [esp+114h] [ebp-Ch]
  void *v60; // [esp+118h] [ebp-8h]
  int v61; // [esp+11Ch] [ebp-4h]

  v61 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v60 = &loc_101B633D;
  v59 = ExceptionList;
  if ( !*((_DWORD *)this + 179) )
  {
    v6 = sub_1003B320((int)v58, *((_DWORD *)this + 293));
    v42 = *((_DWORD *)this + 294);
    v61 = 0;
    v7 = sub_1003B320((int)v56, v42);
    LOBYTE(v61) = 1;
    v8 = std::operator+<char>(v55, "_", v7);
    LOBYTE(v61) = 2;
    v9 = std::operator+<char>(v57, v8, "_");
    v41 = v6;
    Mesh = (struct Mesh *)std::operator+<char>;
    LOBYTE(v61) = 3;
    std::operator+<char>(&v49, v9, v41);
    LOBYTE(v61) = 5;
    std::string::~string(v57);
    LOBYTE(v61) = 6;
    std::string::~string(v55);
    LOBYTE(v61) = 7;
    std::string::~string(v56);
    LOBYTE(v61) = 8;
    std::string::~string(v58);
    *(float *)&v10 = COERCE_FLOAT(operator new(0x1C8u));
    v46 = *(float *)&v10;
    LOBYTE(v61) = 9;
    if ( *(float *)&v10 == 0.0 )
      v11 = 0;
    else
      v11 = Model::Model(v10);
    v12 = *((_DWORD *)this + 316);
    v44 = (unsigned int)&v49;
    *((_DWORD *)this + 179) = v11;
    LOBYTE(v61) = 8;
    v13 = std::operator+<char>(&v53, v12 + 444, v44);
    v14 = *((_DWORD *)this + 179);
    LOBYTE(v61) = 10;
    std::string::operator=(v14 + 320, v13);
    LOBYTE(v61) = 8;
    std::string::~string(&v53);
    v15 = *((_DWORD *)this + 179);
    v44 = 456;
    *(_BYTE *)(v15 + 312) = 1;
    *(float *)&v16 = COERCE_FLOAT(operator new(v44));
    v46 = *(float *)&v16;
    LOBYTE(v61) = 11;
    if ( *(float *)&v16 == 0.0 )
      v17 = 0;
    else
      v17 = ModelFrame::ModelFrame(v16, *((struct StaticModel **)this + 179));
    *(_DWORD *)(*((_DWORD *)this + 179) + 308) = v17;
    v18 = *(ModelFrame **)(*((_DWORD *)this + 179) + 308);
    LOBYTE(v61) = 8;
    ModelFrame::SetDisableLODs(v18, 1);
    ModelFrame::FixNames(*(ModelFrame ***)(*((_DWORD *)this + 179) + 308), *((struct World **)this + 178), 1);
    ModelFrame::SetLOD(*(ModelFrame **)(*((_DWORD *)this + 179) + 308), 0, 0);
    ModelFrame::SetLOD(*(ModelFrame **)(*((_DWORD *)this + 179) + 308), 0, 1u);
    ModelFrame::SetLOD(*(ModelFrame **)(*((_DWORD *)this + 179) + 308), 0, 2u);
    v61 = -1;
    std::string::~string(&v49);
  }
  if ( LOBYTE(a3) && !ModelFrame::GetMesh(*(ModelFrame **)(*((_DWORD *)this + 179) + 308), 0) )
  {
    *(float *)&v50 = 0.0;
    v51 = 0;
    v52 = 0;
    v61 = 12;
    v47 = *(int *)MaterialManager::Instance();
    std::vector<Material *>::push_back(&v49, &v47);
    v19 = (Material **)MaterialManager::Instance();
    Material::AddRef(*v19);
    v20 = RenderDevice::Instance();
    v21 = (struct Mesh *)(*(int (__thiscall **)(struct RenderDevice *, _DWORD))(*(_DWORD *)v20 + 8))(v20, 0);
    ModelFrame::SetLOD(*(ModelFrame **)(*((_DWORD *)this + 179) + 308), v21, v45);
    Mesh = ModelFrame::GetMesh(*(ModelFrame **)(*((_DWORD *)this + 179) + 308), 0);
    *(float *)&v47 = COERCE_FLOAT(&v42);
    std::vector<Material *>::vector<Material *>(&v42, (int)&v50);
    if ( !(*(unsigned __int8 (__thiscall **)(struct Mesh *, int, int, int, int, int, int, unsigned int))(*(_DWORD *)Mesh + 76))(
            Mesh,
            56,
            2,
            4097,
            24192,
            v42,
            v43,
            v44) )
    {
      if ( *(float *)&v50 != 0.0 )
        operator delete(v50);
      return 0;
    }
    v61 = -1;
    if ( *(float *)&v50 != 0.0 )
      operator delete(v50);
  }
  if ( LOBYTE(a4) )
  {
    if ( !ModelFrame::GetMesh(*(ModelFrame **)(*((_DWORD *)this + 179) + 308), 1u) )
    {
      *(float *)&v50 = 0.0;
      v51 = 0;
      v52 = 0;
      v61 = 13;
      v47 = *(int *)MaterialManager::Instance();
      std::vector<Material *>::push_back(&v49, &v47);
      v23 = (Material **)MaterialManager::Instance();
      Material::AddRef(*v23);
      v24 = RenderDevice::Instance();
      v25 = (struct Mesh *)(*(int (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v24 + 8))(v24, 1);
      ModelFrame::SetLOD(*(ModelFrame **)(*((_DWORD *)this + 179) + 308), v25, v45);
      Mesh = ModelFrame::GetMesh(*(ModelFrame **)(*((_DWORD *)this + 179) + 308), 1u);
      *(float *)&v47 = COERCE_FLOAT(&v42);
      std::vector<Material *>::vector<Material *>(&v42, (int)&v50);
      v26 = (*(int (__thiscall **)(struct Mesh *, int, int, int, int, int, int, unsigned int))(*(_DWORD *)Mesh + 76))(
              Mesh,
              56,
              2,
              1089,
              6144,
              v42,
              v43,
              v44);
      v27 = &v49;
      if ( !v26 )
      {
LABEL_20:
        std::vector<AttributeRange>::_Tidy((int)v27);
        return 0;
      }
      v61 = -1;
      std::vector<AttributeRange>::_Tidy((int)&v49);
    }
    if ( !ModelFrame::GetMesh(*(ModelFrame **)(*((_DWORD *)this + 179) + 308), 2u) )
    {
      memset(v54, 0, 12);
      v61 = 14;
      v47 = *(int *)MaterialManager::Instance();
      std::vector<Material *>::push_back(&v53, &v47);
      v28 = (Material **)MaterialManager::Instance();
      Material::AddRef(*v28);
      v29 = RenderDevice::Instance();
      v30 = (struct Mesh *)(*(int (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v29 + 8))(v29, 2);
      ModelFrame::SetLOD(*(ModelFrame **)(*((_DWORD *)this + 179) + 308), v30, v45);
      Mesh = ModelFrame::GetMesh(*(ModelFrame **)(*((_DWORD *)this + 179) + 308), 2u);
      *(float *)&v47 = COERCE_FLOAT(&v42);
      std::vector<Material *>::vector<Material *>(&v42, (int)v54);
      v31 = (*(int (__thiscall **)(struct Mesh *, int, int, int, int, int, int, unsigned int))(*(_DWORD *)Mesh + 76))(
              Mesh,
              56,
              2,
              289,
              1536,
              v42,
              v43,
              v44);
      v27 = &v53;
      if ( !v31 )
        goto LABEL_20;
      v61 = -1;
      std::vector<AttributeRange>::_Tidy((int)&v53);
    }
  }
  v32 = *((_DWORD *)this + 316);
  v33 = (double)*(int *)(v32 + 1296);
  v47 = *((int *)this + 293);
  v34 = *((int *)this + 294);
  v46 = v33;
  v35 = v47 + 1;
  v36 = v46;
  v46 = *(float *)&v34;
  *(float *)&v49 = (double)v47 / v36;
  *(float *)&v47 = (float)*(int *)(v32 + 1300);
  *(float *)&v50 = (double)v34 / *(float *)&v47;
  LODWORD(v46) = v34 + 1;
  v37 = *(float *)&v47;
  *(float *)&v47 = (double)v35 / v36;
  v48 = (double)(v34 + 1) / v37;
  TerrainNode::UpdateVertex(this, 1, 1, 1, 1, a3, a4, v49, *(float *)&v50, *(float *)&v47, v48);
  TerrainNode::UpdateIndex(this);
  if ( LOBYTE(a3) )
  {
    v38 = ModelFrame::GetMesh(*(ModelFrame **)(*((_DWORD *)this + 179) + 308), 0);
    (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)v38 + 80))(v38);
  }
  if ( LOBYTE(a4) )
  {
    v39 = ModelFrame::GetMesh(*(ModelFrame **)(*((_DWORD *)this + 179) + 308), 1u);
    (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)v39 + 80))(v39);
    v40 = ModelFrame::GetMesh(*(ModelFrame **)(*((_DWORD *)this + 179) + 308), 2u);
    (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)v40 + 80))(v40);
  }
  TerrainNode::Compile(this, (int)Mesh, 1, 1);
  return 1;
}
