/*
 * func-name: ?CreateChildFromHMap@Terrain@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10169020
 * callers: 0x10169700
 * callees: 0x1003b320, 0x1007bf30, 0x1007da70, 0x100977a0, 0x100e2550, 0x100ee930, 0x100ee980, 0x100f2ca0, 0x1015f6b0, 0x10161890, 0x10162c30, 0x101655b0, 0x101658e0, 0x10165f10, 0x10167810, 0x10168a40, 0x1016a3c0, 0x1016b010, 0x1017a0b0, 0x101a2534, 0x101a26c0
 */

char __thiscall Terrain::CreateChildFromHMap(Terrain *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  Terrain *v8; // esi
  unsigned int v9; // ebp
  char *v10; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  __int64 v15; // rax
  int v16; // edi
  int v17; // ebp
  double v18; // st7
  double v19; // st7
  bool v20; // cc
  int v21; // ebp
  TerrainNode *v22; // eax
  SurfaceNode *v23; // eax
  SurfaceNode *v24; // esi
  int v25; // ebp
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  char *v30; // edx
  int v31; // ecx
  int v32; // eax
  Model *v33; // eax
  Model *v34; // eax
  _DWORD *v35; // ecx
  double v36; // st7
  int v37; // edx
  _DWORD *v38; // eax
  _DWORD *v39; // ebp
  double v40; // st7
  int v41; // eax
  double v42; // st7
  int v43; // eax
  double v44; // st7
  int v45; // edx
  Terrain *v46; // edi
  int v47; // ecx
  int v48; // eax
  unsigned int v49; // esi
  char v50; // [esp-1Ch] [ebp-130h] BYREF
  LPCSTR v51; // [esp-18h] [ebp-12Ch]
  int v52; // [esp-14h] [ebp-128h]
  int v53; // [esp-10h] [ebp-124h]
  int v54; // [esp-Ch] [ebp-120h]
  int v55; // [esp-8h] [ebp-11Ch]
  _DWORD *v56; // [esp-4h] [ebp-118h]
  char *v57; // [esp+10h] [ebp-104h]
  int v58; // [esp+14h] [ebp-100h]
  Terrain *v59; // [esp+18h] [ebp-FCh]
  TerrainNode *v60; // [esp+1Ch] [ebp-F8h]
  _DWORD v61[4]; // [esp+20h] [ebp-F4h] BYREF
  float v62; // [esp+30h] [ebp-E4h]
  float v63; // [esp+34h] [ebp-E0h]
  float v64; // [esp+38h] [ebp-DCh]
  float v65; // [esp+3Ch] [ebp-D8h]
  float v66; // [esp+40h] [ebp-D4h]
  float v67; // [esp+44h] [ebp-D0h]
  _DWORD v68[4]; // [esp+48h] [ebp-CCh] BYREF
  int v69; // [esp+58h] [ebp-BCh]
  int v70; // [esp+5Ch] [ebp-B8h]
  char v71; // [esp+60h] [ebp-B4h]
  char v72; // [esp+61h] [ebp-B3h]
  float v73; // [esp+64h] [ebp-B0h]
  float v74; // [esp+68h] [ebp-ACh]
  int v75; // [esp+6Ch] [ebp-A8h]
  int v76; // [esp+70h] [ebp-A4h]
  int v77; // [esp+74h] [ebp-A0h]
  _BYTE v78[28]; // [esp+7Ch] [ebp-98h] BYREF
  _BYTE v79[28]; // [esp+98h] [ebp-7Ch] BYREF
  _BYTE v80[28]; // [esp+B4h] [ebp-60h] BYREF
  _BYTE v81[28]; // [esp+D0h] [ebp-44h] BYREF
  _BYTE v82[28]; // [esp+ECh] [ebp-28h] BYREF
  int v83; // [esp+110h] [ebp-4h]

  v8 = this;
  v59 = this;
  v83 = 0;
  v9 = 0;
  v10 = (char *)this + 1192;
  while ( 1 )
  {
    v11 = *((_DWORD *)v10 + 1);
    if ( !v11 || v9 >= (*((_DWORD *)v10 + 2) - v11) >> 2 )
      break;
    v12 = *((_DWORD *)v10 + 1);
    if ( *(_DWORD *)(v12 + 4 * v9) )
    {
      if ( !v12 || v9 >= (*((_DWORD *)v10 + 2) - v12) >> 2 )
        invalid_parameter_noinfo();
      v13 = *(_DWORD *)(*((_DWORD *)v10 + 1) + 4 * v9);
      if ( v13 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 80))(v13, 1);
    }
    ++v9;
  }
  sub_1016B010((int)v10, 0, 0);
  sub_10161890((_DWORD *)v8 + 346);
  v57 = &v50;
  std::string::string(&v50, &a2);
  if ( sub_1015F6B0((int)v8 + 1352, v50, v51, v52, v53, v54, v55, (unsigned int)v56) )
  {
    v15 = *((_DWORD *)v8 + 340) - 1;
    v16 = (*((_DWORD *)v8 + 341) - 1) / 64;
    v57 = (char *)(v16 << 6);
    v17 = ((BYTE4(v15) & 0x3F) + (int)v15) >> 6;
    *((_DWORD *)v8 + 325) = v16;
    v18 = (double)(int)v57;
    *((_DWORD *)v8 + 324) = v17;
    v19 = v18 * *((float *)v8 + 361);
    v57 = (char *)(v17 << 6);
    sub_10162C30((_DWORD *)v8 + 346, v17, v16, (int)((double)(v17 << 6) * *((float *)v8 + 361)), (int)v19);
    v20 = *((_DWORD *)v8 + 325) <= 0;
    v58 = 0;
    if ( !v20 )
    {
      do
      {
        v21 = 0;
        v20 = *((_DWORD *)v8 + 324) <= 0;
        v57 = 0;
        if ( !v20 )
        {
          do
          {
            v22 = (TerrainNode *)operator new(0x4F4u);
            v60 = v22;
            LOBYTE(v83) = 1;
            if ( v22 )
              v16 = (int)TerrainNode::TerrainNode(v22, *((struct World **)v8 + 178));
            else
              v16 = 0;
            LOBYTE(v83) = 0;
            Terrain::RegistNode(v8, (struct TerrainNode *)v16, v21, v58, 1);
            if ( TerrainNode::GenerateMesh((TerrainNode *)v16, (struct Mesh *)v16, COERCE_FLOAT(1), COERCE_FLOAT(1)) )
            {
              v23 = (SurfaceNode *)operator new(0x4B8u);
              v60 = v23;
              LOBYTE(v83) = 2;
              if ( v23 )
                v24 = SurfaceNode::SurfaceNode(v23, *((struct World **)v8 + 178));
              else
                v24 = 0;
              LOBYTE(v83) = 0;
              v25 = sub_1003B320((int)v79, v21);
              LOBYTE(v83) = 3;
              v26 = sub_1003B320((int)v81, v58);
              LOBYTE(v83) = 4;
              v27 = std::operator+<char>(v82, "Surface", v26);
              LOBYTE(v83) = 5;
              v28 = std::operator+<char>(v80, v27, "_");
              LOBYTE(v83) = 6;
              v29 = std::operator+<char>(v78, v28, v25);
              LOBYTE(v83) = 7;
              std::string::operator=((char *)v24 + 444, v29);
              LOBYTE(v83) = 6;
              std::string::~string(v78);
              LOBYTE(v83) = 5;
              std::string::~string(v80);
              LOBYTE(v83) = 4;
              std::string::~string(v82);
              LOBYTE(v83) = 3;
              std::string::~string(v81);
              LOBYTE(v83) = 0;
              std::string::~string(v79);
              *((_DWORD *)v24 + 214) = *(_DWORD *)(v16 + 856);
              v30 = v57;
              *((_DWORD *)v24 + 215) = *(_DWORD *)(v16 + 860);
              v31 = *(_DWORD *)(v16 + 864);
              *((float *)v24 + 68) = 5000.0;
              v32 = v58;
              *((_DWORD *)v24 + 216) = v31;
              v56 = (_DWORD *)((char *)v59 + 444);
              *((_BYTE *)v24 + 440) = 1;
              *((_BYTE *)v24 + 724) = 1;
              *((_DWORD *)v24 + 300) = v30;
              *((_DWORD *)v24 + 301) = v32;
              std::string::operator=((char *)v24 + 1172, v56);
              v33 = (Model *)operator new(0x1C8u);
              v60 = v33;
              LOBYTE(v83) = 8;
              if ( v33 )
                v34 = Model::Model(v33);
              else
                v34 = 0;
              *((_DWORD *)v24 + 179) = v34;
              *((_BYTE *)v34 + 312) = 1;
              v35 = *(_DWORD **)(v16 + 716);
              LOBYTE(v83) = 0;
              StaticModel::GetWorldBBox(v35, v61);
              v36 = v62 - *(float *)(v16 + 856);
              v56 = v61;
              LOBYTE(v83) = 9;
              v62 = v36;
              v63 = v63 - *(float *)(v16 + 860);
              v64 = v64 - *(float *)(v16 + 864);
              v65 = v65 - *(float *)(v16 + 856);
              v66 = v66 - *(float *)(v16 + 860);
              v67 = v67 - *(float *)(v16 + 864);
              StaticModel::SetUserBBox(*((StaticModel **)v24 + 179), (const struct BBox *)v61);
              std::string::operator=(*((_DWORD *)v24 + 179) + 320, (char *)v24 + 444);
              (*(void (__thiscall **)(_DWORD))(**((_DWORD **)v24 + 179) + 8))(*((_DWORD *)v24 + 179));
              v73 = 100.0;
              v71 = 1;
              v74 = 100.0;
              v69 = 0;
              v68[1] = 0;
              LOWORD(v68[0]) = 0;
              v72 = 0;
              v68[2] = 0;
              v70 = 0;
              v68[3] = GetTickCount();
              v37 = *((_DWORD *)v59 + 178);
              LOBYTE(v83) = 10;
              v69 = v37;
              sub_1007DA70(v68, (int)v24);
              v38 = operator new(0x20u);
              v39 = v38;
              v60 = (TerrainNode *)v38;
              LOBYTE(v83) = 11;
              if ( v38 )
              {
                v38[1] = sub_1016A3C0(v38);
                v39[2] = 0;
                v39[7] = 0;
              }
              else
              {
                v39 = 0;
              }
              v40 = *(float *)(v16 + 864) + v64;
              v75 = (int)(*(float *)(v16 + 856) + v62);
              v41 = (int)v40;
              v42 = *(float *)(v16 + 856) + v65;
              v76 = v41;
              v43 = (int)v42;
              v44 = *(float *)(v16 + 864) + v67;
              v77 = v43;
              v45 = v76;
              v46 = v59;
              v39[3] = v75;
              v47 = v77;
              v39[4] = v45;
              v39[5] = v47;
              v39[7] = v24;
              v16 = (int)v46 + 1384;
              v39[6] = (int)v44;
              v48 = *(_DWORD *)(v16 + 4);
              v49 = (unsigned int)&v57[v58 * *(_DWORD *)(v16 + 44)];
              if ( v48 && v49 < (*(_DWORD *)(v16 + 8) - v48) >> 2 )
                *(_DWORD *)(v48 + 4 * v49) = v39;
              LOBYTE(v83) = 9;
              nullsub_1();
              LOBYTE(v83) = 0;
              sub_1017A0B0(v61);
              v8 = v59;
              v21 = (int)v57;
            }
            else
            {
              LogPrintf("Terrain: GenerateMesh failed.");
            }
            v20 = ++v21 < *((_DWORD *)v8 + 324);
            v57 = (char *)v21;
          }
          while ( v20 );
        }
        v20 = ++v58 < *((_DWORD *)v8 + 325);
      }
      while ( v20 );
    }
    Terrain::RebuildMaterialBlock(v8, v16, (int)v8);
    v83 = -1;
    std::string::~string(&a2);
    return 1;
  }
  else
  {
    SeriousWarning("LoadImage Create texture file failed.");
    v83 = -1;
    std::string::~string(&a2);
    return 0;
  }
}
