/*
 * func-name: sub_100C03F0
 * func-address: 0x100c03f0
 * callers: none
 * callees: 0x1001186a, 0x100195e7, 0x102c0750, 0x102c1270, 0x102c9d50, 0x102c9d98, 0x102c9ea2
 */

void __fastcall sub_100C03F0(int a1)
{
  float v2; // edi
  unsigned int v3; // ebp
  Editor *v4; // eax
  unsigned int i; // esi
  int v6; // eax
  Material *v7; // eax
  Material *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  _DWORD *v14; // esi
  int v15; // edi
  char v16; // al
  Material *v17; // ecx
  int v18; // edx
  _DWORD *v19; // esi
  int v20; // edx
  int v21; // ecx
  _DWORD *v22; // esi
  int v23; // edx
  _DWORD *v24; // esi
  char v25; // al
  Material *v26; // ecx
  int v27; // edx
  _DWORD *v28; // esi
  int v29; // ecx
  _DWORD *v30; // esi
  int v31; // edx
  _DWORD *v32; // esi
  bool v33; // zf
  Material *v34; // eax
  int v35; // edx
  _DWORD *v36; // esi
  int v37; // ecx
  _DWORD *v38; // esi
  int v39; // ecx
  _DWORD *v40; // esi
  int v41; // edx
  _DWORD *v42; // esi
  int v43; // ecx
  _DWORD *v44; // esi
  Material *v45; // eax
  int v46; // edx
  _DWORD *v47; // esi
  int v48; // ecx
  _DWORD *v49; // esi
  int v50; // ecx
  _DWORD *v51; // esi
  int v52; // ecx
  _DWORD *v53; // esi
  int v54; // ecx
  _DWORD *v55; // esi
  float *v56; // eax
  float v57; // ecx
  float v58; // edx
  float v59; // ecx
  int v60; // eax
  int v61; // eax
  struct Mesh *v62; // esi
  int v63; // eax
  int v64; // ebp
  int v65; // eax
  int v66; // edi
  int v67; // eax
  int v68; // ebx
  int v69; // eax
  Model *v70; // eax
  Model *v71; // edi
  Model *v72; // ebp
  ModelFrame *v73; // eax
  ModelFrame *v74; // eax
  Prefab *v75; // eax
  Prefab *v76; // esi
  Editor *v77; // eax
  double v78; // st7
  double v79; // st7
  double v80; // st7
  double v81; // st7
  double v82; // st7
  Editor *v83; // eax
  int v84; // [esp+28h] [ebp-128h] BYREF
  int v85; // [esp+2Ch] [ebp-124h]
  int v86; // [esp+30h] [ebp-120h]
  int v87; // [esp+34h] [ebp-11Ch]
  int v88; // [esp+38h] [ebp-118h]
  int v89; // [esp+3Ch] [ebp-114h]
  int v90; // [esp+40h] [ebp-110h]
  int v91; // [esp+44h] [ebp-10Ch]
  float v92; // [esp+48h] [ebp-108h]
  float v93; // [esp+4Ch] [ebp-104h]
  float v94; // [esp+50h] [ebp-100h] BYREF
  float v95; // [esp+54h] [ebp-FCh]
  float v96; // [esp+58h] [ebp-F8h]
  BOOL v97; // [esp+5Ch] [ebp-F4h]
  struct Actor *v98; // [esp+60h] [ebp-F0h]
  int v99; // [esp+64h] [ebp-ECh]
  Material *v100; // [esp+74h] [ebp-DCh] BYREF
  int v101; // [esp+78h] [ebp-D8h] BYREF
  float v102; // [esp+7Ch] [ebp-D4h]
  float v103; // [esp+80h] [ebp-D0h]
  int v104; // [esp+84h] [ebp-CCh] BYREF
  float v105; // [esp+88h] [ebp-C8h]
  float v106; // [esp+8Ch] [ebp-C4h]
  float v107; // [esp+90h] [ebp-C0h]
  int v108; // [esp+A0h] [ebp-B0h] BYREF
  void *v109; // [esp+A4h] [ebp-ACh]
  int v110; // [esp+A8h] [ebp-A8h]
  int v111; // [esp+ACh] [ebp-A4h]
  int v112; // [esp+B0h] [ebp-A0h] BYREF
  int v113; // [esp+B4h] [ebp-9Ch]
  int v114; // [esp+B8h] [ebp-98h]
  _BYTE v115[16]; // [esp+C0h] [ebp-90h] BYREF
  float v116; // [esp+D0h] [ebp-80h]
  float v117; // [esp+D4h] [ebp-7Ch]
  float v118; // [esp+D8h] [ebp-78h]
  float v119; // [esp+DCh] [ebp-74h]
  float v120; // [esp+E0h] [ebp-70h]
  float v121; // [esp+E4h] [ebp-6Ch]
  float v122[16]; // [esp+E8h] [ebp-68h] BYREF
  _BYTE v123[28]; // [esp+128h] [ebp-28h] BYREF
  int v124; // [esp+14Ch] [ebp-4h]

  v103 = *(float *)&a1;
  v3 = 0;
  v102 = *(float *)(a1 + 1052);
  v2 = v102;
  if ( v102 != 0.0 )
  {
    v4 = (Editor *)Editor::Instance(v98, v99);
    Editor::UnSelectAll(v4);
    *(float *)(a1 + 820) = 0.0;
    v109 = 0;
    v110 = 0;
    v111 = 0;
    v124 = 0;
    for ( i = 0; ; ++i )
    {
      v6 = *(_DWORD *)(LODWORD(v2) + 272);
      if ( !v6 || i >= (*(_DWORD *)(LODWORD(v2) + 276) - v6) / 56 )
        break;
      v101 = (unsigned __int16)i;
      sub_1001186A(&v108, (int)&v101);
    }
    *(float *)&v7 = COERCE_FLOAT(operator new(0x154u));
    v101 = (int)v7;
    LOBYTE(v124) = 1;
    if ( *(float *)&v7 == 0.0 )
      v8 = 0;
    else
      v8 = Material::Material(v7);
    LOBYTE(v124) = 0;
    v100 = v8;
    v9 = rand();
    v10 = sub_100195E7((int)v123, v9 % 10000);
    LOBYTE(v124) = 2;
    v11 = std::operator+<char>(&v104, "Decal", v10);
    LOBYTE(v124) = 3;
    std::string::operator=((char *)v100 + 184, v11);
    LOBYTE(v124) = 2;
    std::string::~string(&v104);
    LOBYTE(v124) = 0;
    std::string::~string(v123);
    CoCreateGuid((GUID *)((char *)v100 + 40));
    Material::Initialize(v100, "Diffuse.fx", "Diffuse_Point", 0);
    Material::ExtractParameters(v100);
    while ( 1 )
    {
      v12 = *((_DWORD *)v100 + 70);
      if ( !v12 || v3 >= (*((_DWORD *)v100 + 71) - v12) >> 2 )
        break;
      v13 = *((_DWORD *)v100 + 70);
      v14 = (_DWORD *)((char *)v100 + 280);
      if ( !v13 || v3 >= (*((_DWORD *)v100 + 71) - v13) >> 2 )
        _invalid_parameter_noinfo();
      v15 = 4 * v3;
      v16 = std::operator==<char>(*(_DWORD *)(*v14 + 4 * v3) + 4, "tDiffuse0");
      v17 = v100;
      if ( !v16 )
        goto LABEL_24;
      v18 = *((_DWORD *)v100 + 70);
      v19 = (_DWORD *)((char *)v100 + 280);
      if ( !v18 || v3 >= (*((_DWORD *)v100 + 71) - v18) >> 2 )
      {
        _invalid_parameter_noinfo();
        v17 = v100;
      }
      if ( **(_DWORD **)(v15 + *v19) == 9 )
      {
        v20 = *(_DWORD *)(LODWORD(v103) + 1136);
        v97 = 0;
        v96 = 0.0;
        v95 = 1.0;
        v94 = 1.0;
        v93 = 0.0;
        v92 = 0.0;
        v91 = 0;
        *(float *)&v101 = COERCE_FLOAT(&v84);
        std::string::string(&v84, (void *)(v20 + 100));
        v21 = *((_DWORD *)v100 + 70);
        v22 = (_DWORD *)((char *)v100 + 280);
        if ( !v21 || v3 >= (*((_DWORD *)v100 + 71) - v21) >> 2 )
          _invalid_parameter_noinfo();
        Texture::Load(
          *(_DWORD *)(*(_DWORD *)(v15 + *v22) + 60),
          v84,
          v85,
          v86,
          v87,
          v88,
          v89,
          v90,
          v91,
          LODWORD(v92),
          LODWORD(v93),
          LODWORD(v94),
          LODWORD(v95),
          LODWORD(v96),
          v97);
        v2 = v102;
        ++v3;
      }
      else
      {
LABEL_24:
        v23 = *((_DWORD *)v17 + 70);
        v24 = (_DWORD *)((char *)v17 + 280);
        if ( !v23 || v3 >= (*((_DWORD *)v17 + 71) - v23) >> 2 )
          _invalid_parameter_noinfo();
        v25 = std::operator==<char>(*(_DWORD *)(*v24 + 4 * v3) + 4, "tBump0");
        v26 = v100;
        if ( !v25 )
          goto LABEL_36;
        v27 = *((_DWORD *)v100 + 70);
        v28 = (_DWORD *)((char *)v100 + 280);
        if ( !v27 || v3 >= (*((_DWORD *)v100 + 71) - v27) >> 2 )
        {
          _invalid_parameter_noinfo();
          v26 = v100;
        }
        if ( **(_DWORD **)(v15 + *v28) == 9 )
        {
          v97 = 0;
          v96 = 0.0;
          v95 = 1.0;
          v94 = 1.0;
          v93 = 0.0;
          v92 = 0.0;
          v91 = 2;
          *(float *)&v101 = COERCE_FLOAT(&v84);
          std::string::string(&v84, "DefaultNormal.dds");
          v29 = *((_DWORD *)v100 + 70);
          v30 = (_DWORD *)((char *)v100 + 280);
          if ( !v29 || v3 >= (*((_DWORD *)v100 + 71) - v29) >> 2 )
            _invalid_parameter_noinfo();
          Texture::Load(
            *(_DWORD *)(*(_DWORD *)(*v30 + 4 * v3) + 60),
            v84,
            v85,
            v86,
            v87,
            v88,
            v89,
            v90,
            v91,
            LODWORD(v92),
            LODWORD(v93),
            LODWORD(v94),
            LODWORD(v95),
            LODWORD(v96),
            v97);
          v2 = v102;
          ++v3;
        }
        else
        {
LABEL_36:
          v31 = *((_DWORD *)v26 + 70);
          v32 = (_DWORD *)((char *)v26 + 280);
          if ( !v31 || v3 >= (*((_DWORD *)v26 + 71) - v31) >> 2 )
            _invalid_parameter_noinfo();
          v33 = (unsigned __int8)std::operator==<char>(*(_DWORD *)(*v32 + 4 * v3) + 4, "tDiffuse0UTile") == 0;
          v34 = v100;
          if ( !v33 )
          {
            v35 = *((_DWORD *)v100 + 70);
            v36 = (_DWORD *)((char *)v100 + 280);
            if ( !v35 || v3 >= (*((_DWORD *)v100 + 71) - v35) >> 2 )
            {
              _invalid_parameter_noinfo();
              v34 = v100;
            }
            if ( **(_DWORD **)(v15 + *v36) == 3 )
              goto LABEL_44;
          }
          v39 = *((_DWORD *)v34 + 70);
          v40 = (_DWORD *)((char *)v34 + 280);
          if ( !v39 || v3 >= (*((_DWORD *)v34 + 71) - v39) >> 2 )
            _invalid_parameter_noinfo();
          v33 = (unsigned __int8)std::operator==<char>(*(_DWORD *)(v15 + *v40) + 4, "tDiffuse0VTile") == 0;
          v34 = v100;
          if ( v33 )
            goto LABEL_56;
          v41 = *((_DWORD *)v100 + 70);
          v42 = (_DWORD *)((char *)v100 + 280);
          if ( !v41 || v3 >= (*((_DWORD *)v100 + 71) - v41) >> 2 )
          {
            _invalid_parameter_noinfo();
            v34 = v100;
          }
          if ( **(_DWORD **)(v15 + *v42) == 3 )
          {
LABEL_44:
            v37 = *((_DWORD *)v34 + 70);
            v38 = (_DWORD *)((char *)v34 + 280);
            if ( !v37 || v3 >= (*((_DWORD *)v34 + 71) - v37) >> 2 )
              _invalid_parameter_noinfo();
            v2 = v102;
            **(float **)(*(_DWORD *)(*v38 + 4 * v3++) + 60) = 1.0;
          }
          else
          {
LABEL_56:
            v43 = *((_DWORD *)v34 + 70);
            v44 = (_DWORD *)((char *)v34 + 280);
            if ( !v43 || v3 >= (*((_DWORD *)v34 + 71) - v43) >> 2 )
              _invalid_parameter_noinfo();
            v33 = (unsigned __int8)std::operator==<char>(*(_DWORD *)(v15 + *v44) + 4, "AlphaBlend") == 0;
            v45 = v100;
            if ( v33 )
              goto LABEL_68;
            v46 = *((_DWORD *)v100 + 70);
            v47 = (_DWORD *)((char *)v100 + 280);
            if ( !v46 || v3 >= (*((_DWORD *)v100 + 71) - v46) >> 2 )
            {
              _invalid_parameter_noinfo();
              v45 = v100;
            }
            if ( **(_DWORD **)(v15 + *v47) != 1 )
            {
LABEL_68:
              v50 = *((_DWORD *)v45 + 70);
              v51 = (_DWORD *)((char *)v45 + 280);
              if ( !v50 || v3 >= (*((_DWORD *)v45 + 71) - v50) >> 2 )
                _invalid_parameter_noinfo();
              if ( (unsigned __int8)std::operator==<char>(*(_DWORD *)(v15 + *v51) + 4, "MatDiffuse") )
              {
                v52 = *((_DWORD *)v100 + 70);
                v53 = (_DWORD *)((char *)v100 + 280);
                if ( !v52 || v3 >= (*((_DWORD *)v100 + 71) - v52) >> 2 )
                  _invalid_parameter_noinfo();
                if ( **(_DWORD **)(v15 + *v53) == 6 )
                {
                  v54 = *((_DWORD *)v100 + 70);
                  *(float *)&v104 = 1.0;
                  v105 = 1.0;
                  v55 = (_DWORD *)((char *)v100 + 280);
                  v106 = 1.0;
                  v107 = 1.0;
                  if ( !v54 || v3 >= (*((_DWORD *)v100 + 71) - v54) >> 2 )
                    _invalid_parameter_noinfo();
                  v56 = *(float **)(*(_DWORD *)(*v55 + 4 * v3) + 60);
                  v57 = v105;
                  *v56 = *(float *)&v104;
                  v58 = v106;
                  v56[1] = v57;
                  v59 = v107;
                  v56[2] = v58;
                  v56[3] = v59;
                }
              }
              v2 = v102;
              ++v3;
            }
            else
            {
              v48 = *((_DWORD *)v45 + 70);
              v49 = (_DWORD *)((char *)v45 + 280);
              if ( !v48 || v3 >= (*((_DWORD *)v45 + 71) - v48) >> 2 )
                _invalid_parameter_noinfo();
              v2 = v102;
              **(_BYTE **)(*(_DWORD *)(*v49 + 4 * v3++) + 60) = 1;
            }
          }
        }
      }
    }
    Material::Refresh(v100);
    std::vector<Material *>::vector<Material *>(&v112);
    LOBYTE(v124) = 4;
    std::vector<Material *>::push_back(&v112, &v100);
    v60 = RenderDevice::Instance();
    *(float *)&v61 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v60 + 8))(v60));
    *(float *)&v101 = COERCE_FLOAT(&v94);
    v62 = (struct Mesh *)v61;
    std::vector<Material *>::vector<Material *>(&v94, &v112);
    v63 = *(_DWORD *)(LODWORD(v2) + 272);
    if ( v63 )
      v64 = (*(_DWORD *)(LODWORD(v2) + 276) - v63) / 56;
    else
      v64 = 0;
    v65 = *(_DWORD *)(LODWORD(v2) + 272);
    if ( v65 )
      v66 = (*(_DWORD *)(LODWORD(v106) + 276) - v65) / 56;
    else
      v66 = 0;
    v67 = v113;
    if ( !v113 || !((v114 - v113) >> 1) )
    {
      _invalid_parameter_noinfo();
      v67 = v113;
    }
    v68 = v67;
    v69 = *(_DWORD *)(LODWORD(v106) + 272);
    if ( !v69 || !((*(_DWORD *)(LODWORD(v106) + 276) - v69) / 56) )
      _invalid_parameter_noinfo();
    (*(void (__thiscall **)(struct Mesh *, _DWORD, int, int, int, int, int))(*(_DWORD *)v62 + 72))(
      v62,
      *(_DWORD *)(LODWORD(v106) + 272),
      v68,
      56,
      2,
      v66,
      v64);
    memset(v122, 0, sizeof(v122));
    sub_102C1270(1.0);
    v122[15] = 1.0;
    (**(void (__thiscall ***)(struct MeshOps *, struct Mesh *, int, float *))MeshOps::Instance)(
      MeshOps::Instance,
      v62,
      5,
      v122);
    (*(void (__thiscall **)(struct MeshOps *, struct Mesh *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)MeshOps::Instance + 12))(
      MeshOps::Instance,
      v62,
      0,
      0.25,
      0.0,
      0,
      0);
    *(float *)&v70 = COERCE_FLOAT(operator new(0x1C8u));
    v71 = v70;
    v101 = (int)v70;
    LOBYTE(v124) = 5;
    if ( *(float *)&v70 == 0.0 )
    {
      v72 = 0;
    }
    else
    {
      Model::Model(v70);
      *(_DWORD *)v71 = &Model::`vftable';
      v72 = v71;
    }
    LOBYTE(v124) = 4;
    *(float *)&v73 = COERCE_FLOAT(operator new(0x1C8u));
    v101 = (int)v73;
    LOBYTE(v124) = 6;
    if ( *(float *)&v73 == 0.0 )
      v74 = 0;
    else
      v74 = ModelFrame::ModelFrame(v73, v72);
    LOBYTE(v97) = 1;
    v96 = *(float *)&v62;
    LOBYTE(v124) = 4;
    *((_DWORD *)v72 + 77) = v74;
    ModelFrame::SetMesh(v74, (struct Mesh *)LODWORD(v96), v97);
    *(float *)&v75 = COERCE_FLOAT(operator new(0x494u));
    v76 = v75;
    v101 = (int)v75;
    LOBYTE(v124) = 7;
    if ( *(float *)&v75 == 0.0 )
    {
      v76 = 0;
    }
    else
    {
      Prefab::Prefab(v75, *(struct World **)(LODWORD(v103) + 712));
      *(_DWORD *)v76 = &Prefab::`vftable';
    }
    LOBYTE(v124) = 4;
    std::string::operator=((char *)v76 + 444, "Decal");
    v77 = (Editor *)Editor::Instance(v76, v98);
    Editor::FixName(v77, v98);
    *((float *)v76 + 214) = v122[12];
    *((float *)v76 + 215) = v122[13];
    *((float *)v76 + 216) = v122[14];
    *((_DWORD *)v76 + 179) = v72;
    *((_DWORD *)v76 + 182) = 2;
    *((_BYTE *)v76 + 724) = 1;
    *((_BYTE *)v76 + 440) = 1;
    *((_BYTE *)v72 + 312) = 1;
    (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)v76 + 179) + 28))(
      *((_DWORD *)v76 + 179),
      (int)v76 + 868,
      (int)v76 + 856);
    StaticModel::GetWorldBBox(*((_DWORD *)v76 + 179), v115);
    v78 = v116 - *((float *)v76 + 214);
    v97 = (BOOL)v76;
    LOBYTE(v124) = 8;
    *(float *)&v101 = v78;
    v103 = v117 - *((float *)v76 + 215);
    v102 = v118 - *((float *)v76 + 216);
    v104 = v101;
    v79 = v103;
    *((float *)v76 + 196) = *(float *)&v101;
    v105 = v79;
    v80 = v102;
    *((float *)v76 + 197) = v105;
    v106 = v80;
    *((float *)v76 + 198) = v106;
    *(float *)&v101 = v119 - *((float *)v76 + 214);
    v103 = v120 - *((float *)v76 + 215);
    v102 = v121 - *((float *)v76 + 216);
    v104 = v101;
    v81 = v103;
    *((float *)v76 + 199) = *(float *)&v101;
    v105 = v81;
    v82 = v102;
    *((float *)v76 + 200) = v105;
    v106 = v82;
    *((float *)v76 + 201) = v106;
    v83 = (Editor *)Editor::Instance(v97, v98);
    Editor::SelectActor(v83, v98);
    LOBYTE(v124) = 4;
    sub_102C0750(v115);
    LOBYTE(v124) = 0;
    std::vector<Material *>::~vector<Material *>(&v112);
    if ( v109 )
      operator delete(v109);
  }
}
