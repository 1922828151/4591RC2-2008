/*
 * func-name: sub_10043B90
 * func-address: 0x10043b90
 * callers: 0x10044770
 * callees: 0x1003ece0, 0x100431a0, 0x1004a170, 0x1004a1f0, 0x1004a290, 0x1004a340, 0x1004a380, 0x1004a4a0, 0x1004abc0, 0x100ee930, 0x1017a0b0, 0x101a2516
 */

int __thiscall sub_10043B90(int this, struct xercesc_2_5::DOMNode *a2, int *a3)
{
  int result; // eax
  bool v4; // zf
  XMLSystem *v5; // ebx
  struct xercesc_2_5::DOMElement *Node; // eax
  int v7; // edx
  char v8; // al
  int v9; // esi
  float *WorldBBox; // eax
  float *v11; // eax
  double v12; // st7
  double v13; // st7
  float *v14; // eax
  const void *v15; // esi
  unsigned int v16; // edi
  int v17; // eax
  const char *v18; // eax
  int v19; // esi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // esi
  int v24; // eax
  char **v25; // edi
  int v26; // esi
  const char *v27; // eax
  int v28; // esi
  char *v29; // ecx
  int v30; // eax
  struct xercesc_2_5::DOMNode *v31; // eax
  int v32; // edx
  int v33; // eax
  int v34; // edx
  unsigned int v35; // edi
  int v36; // edx
  int v37; // eax
  int v38; // esi
  int v39; // esi
  int v40; // eax
  int v41; // esi
  int v42; // esi
  int v43; // edx
  unsigned int v44; // edi
  int v45; // eax
  int v46; // edx
  int v47; // eax
  int v48; // esi
  int v49; // esi
  int v50; // ecx
  int v51; // eax
  unsigned int j; // edi
  int v53; // ecx
  int v54; // ecx
  int v55; // esi
  int v56; // edx
  int v57; // ecx
  int *v58; // edi
  double v59; // st7
  int v60; // ecx
  struct xercesc_2_5::DOMNode *v61; // esi
  char v62; // [esp-20h] [ebp-128h] BYREF
  int v63; // [esp-1Ch] [ebp-124h]
  int v64; // [esp-18h] [ebp-120h]
  int v65; // [esp-14h] [ebp-11Ch]
  int v66; // [esp-10h] [ebp-118h]
  char *v67; // [esp-Ch] [ebp-114h]
  const char *v68; // [esp-8h] [ebp-110h]
  struct xercesc_2_5::DOMNode *v69; // [esp-4h] [ebp-10Ch]
  float i; // [esp+10h] [ebp-F8h]
  float v71; // [esp+14h] [ebp-F4h]
  float v72; // [esp+18h] [ebp-F0h]
  struct xercesc_2_5::DOMNode *v73; // [esp+1Ch] [ebp-ECh]
  char *v74; // [esp+20h] [ebp-E8h]
  float v75; // [esp+24h] [ebp-E4h]
  float v76; // [esp+28h] [ebp-E0h]
  float v77; // [esp+2Ch] [ebp-DCh]
  float v78; // [esp+30h] [ebp-D8h] BYREF
  float v79; // [esp+34h] [ebp-D4h]
  float v80; // [esp+38h] [ebp-D0h]
  float v81; // [esp+3Ch] [ebp-CCh] BYREF
  float v82; // [esp+40h] [ebp-C8h]
  float v83; // [esp+44h] [ebp-C4h]
  int *v84; // [esp+48h] [ebp-C0h]
  RPC_CSTR StringUuid; // [esp+4Ch] [ebp-BCh] BYREF
  float v86[16]; // [esp+50h] [ebp-B8h] BYREF
  _BYTE v87[28]; // [esp+90h] [ebp-78h] BYREF
  _BYTE v88[40]; // [esp+ACh] [ebp-5Ch] BYREF
  _BYTE v89[40]; // [esp+D4h] [ebp-34h] BYREF
  int v90; // [esp+104h] [ebp-4h]
  struct xercesc_2_5::DOMNode *v91; // [esp+10Ch] [ebp+4h]

  result = *a3;
  v4 = *(_BYTE *)(*a3 + 440) == 0;
  v84 = (int *)this;
  if ( !v4 )
  {
    v5 = (XMLSystem *)(this + 96);
    Node = XMLSystem::CreateNode((XMLSystem *)(this + 96), a2, "Node");
    v7 = *a3;
    v69 = 0;
    *(float *)&v73 = COERCE_FLOAT(&v62);
    v91 = Node;
    std::string::string(&v62, v7 + 444);
    XMLSystem::Attrib(v5, "Name", v62, v63, v64, v65, v66, (int)v67, (int)v68, v69);
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)*a3 + 40))(*a3);
    v69 = 0;
    if ( v8 )
    {
      v68 = "Light";
      v67 = "NodeType";
    }
    else
    {
      v68 = "GeomObject";
      v67 = "NodeType";
    }
    XMLSystem::Attrib(v5, v67, v68, v69);
    v9 = *a3;
    v81 = 0.0;
    v82 = 0.0;
    v83 = 0.0;
    v78 = 0.0;
    v79 = 0.0;
    v80 = 0.0;
    if ( *(_DWORD *)(v9 + 716) )
    {
      WorldBBox = (float *)StaticModel::GetWorldBBox(*(_DWORD *)(v9 + 716), v89);
      v81 = WorldBBox[4];
      v82 = WorldBBox[5];
      v83 = WorldBBox[6];
      sub_1017A0B0(v89);
      v11 = (float *)StaticModel::GetWorldBBox(*(_DWORD *)(*a3 + 716), v88);
      v78 = v11[7];
      v79 = v11[8];
      v80 = v11[9];
      sub_1017A0B0(v88);
    }
    else
    {
      i = *(float *)(v9 + 796) - *(float *)(v9 + 784);
      v71 = *(float *)(v9 + 800) - *(float *)(v9 + 788);
      v72 = *(float *)(v9 + 804) - *(float *)(v9 + 792);
      v72 = i * i + v71 * v71 + v72 * v72;
      v72 = sqrt(v72);
      v12 = *(float *)(v9 + 856);
      if ( v72 <= 0.0 )
      {
        v72 = v12 - 1.0;
        i = *(float *)(v9 + 860) - 1.0;
        v71 = *(float *)(v9 + 864) - 1.0;
        v75 = v72;
        v81 = v72;
        v76 = i;
        v82 = i;
        v77 = v71;
        v83 = v71;
        v72 = *(float *)(v9 + 856) + 1.0;
        i = *(float *)(v9 + 860) + 1.0;
        v13 = *(float *)(v9 + 864) + 1.0;
      }
      else
      {
        v72 = v12 + *(float *)(v9 + 784);
        i = *(float *)(v9 + 860) + *(float *)(v9 + 788);
        v71 = *(float *)(v9 + 864) + *(float *)(v9 + 792);
        v75 = v72;
        v81 = v72;
        v76 = i;
        v82 = i;
        v77 = v71;
        v83 = v71;
        v72 = *(float *)(v9 + 796) + *(float *)(v9 + 856);
        i = *(float *)(v9 + 860) + *(float *)(v9 + 800);
        v13 = *(float *)(v9 + 864) + *(float *)(v9 + 804);
      }
      v71 = v13;
      v75 = v72;
      v78 = v72;
      v76 = i;
      v79 = i;
      v77 = v71;
      v80 = v71;
    }
    XMLSystem::Attrib(v5, "WorldBoxMin", (struct Vector *)&v81, 0);
    XMLSystem::Attrib(v5, "WorldBoxMax", (struct Vector *)&v78, 0);
    v14 = (float *)*a3;
    v15 = (const void *)(*a3 + 868);
    v69 = (struct xercesc_2_5::DOMNode *)"NodeTM";
    qmemcpy(v86, v15, sizeof(v86));
    v86[12] = v14[214];
    v86[13] = v14[215];
    v86[14] = v14[216];
    XMLSystem::CreateNode(v5, v91, "NodeTM");
    v16 = 0;
    XMLSystem::Attrib(v5, "Row0", (struct Vector *)v86, 0);
    XMLSystem::Attrib(v5, "Row1", (struct Vector *)&v86[4], 0);
    XMLSystem::Attrib(v5, "Row2", (struct Vector *)&v86[8], 0);
    XMLSystem::Attrib(v5, "Row3", (struct Vector *)&v86[12], 0);
    *(float *)&v73 = COERCE_FLOAT(XMLSystem::CreateNode(v5, v91, "CustomProperties"));
    v72 = COERCE_FLOAT(XMLSystem::CreateNode(v5, v73, "Actor"));
    UuidToStringA((const UUID *)(*a3 + 256), &StringUuid);
    XMLSystem::Attrib(v5, "GUID", (const char *)StringUuid, 0);
    v17 = (*(int (__thiscall **)(int))(*(_DWORD *)*a3 + 100))(*a3);
    std::string::string(v87, v17);
    v69 = 0;
    v90 = 0;
    v18 = (const char *)std::string::c_str(v87);
    XMLSystem::Attrib(v5, "Class", v18, v69);
    i = 0.0;
    v71 = 0.0;
    while ( 1 )
    {
      v19 = *a3;
      v20 = *(_DWORD *)(*a3 + 428);
      if ( !v20 || v16 >= (*(_DWORD *)(v19 + 432) - v20) / 96 )
        break;
      v21 = *(_DWORD *)(v19 + 428);
      if ( !v21 || v16 >= (*(_DWORD *)(v19 + 432) - v21) / 96 )
        invalid_parameter_noinfo();
      v74 = (char *)(LODWORD(v71) + *(_DWORD *)(v19 + 428));
      v22 = *(_DWORD *)(*a3 + 428);
      v23 = *a3 + 424;
      if ( !v22 || v16 >= (*(_DWORD *)(*a3 + 432) - v22) / 96 )
        invalid_parameter_noinfo();
      v24 = *(_DWORD *)(*a3 + 428);
      v25 = (char **)(LODWORD(v71) + *(_DWORD *)(v23 + 4));
      v26 = *a3 + 424;
      if ( !v24 || LODWORD(i) >= (*(_DWORD *)(*a3 + 432) - v24) / 96 )
        invalid_parameter_noinfo();
      v27 = (const char *)*((_DWORD *)v74 + 22);
      v28 = LODWORD(v71) + *(_DWORD *)(v26 + 4);
      v69 = (struct xercesc_2_5::DOMNode *)LODWORD(v72);
      v29 = *v25;
      v68 = v27;
      v67 = v29;
      v30 = std::string::c_str(v28 + 4);
      XMLSystem::WriteParameter(v5, v30, v67, v68, v69);
      ++LODWORD(i);
      LODWORD(v71) += 96;
      v16 = LODWORD(i);
    }
    XMLSystem::CreateNode(v5, v91, "BakedTM");
    XMLSystem::Attrib(v5, "Row0", (struct Vector *)(*a3 + 632), 0);
    XMLSystem::Attrib(v5, "Row1", (struct Vector *)(*a3 + 648), 0);
    XMLSystem::Attrib(v5, "Row2", (struct Vector *)(*a3 + 664), 0);
    XMLSystem::Attrib(v5, "Row3", (struct Vector *)(*a3 + 680), 0);
    if ( std::string::length(*a3 + 472) )
    {
      v31 = XMLSystem::CreateNode(v5, v73, "Script");
      v32 = *a3;
      v69 = 0;
      v74 = &v62;
      v73 = v31;
      std::string::string(&v62, v32 + 472);
      XMLSystem::Attrib(v5, "File", v62, v63, v64, v65, v66, (int)v67, (int)v68, v69);
      v33 = *a3;
      v69 = 0;
      v74 = &v62;
      std::string::string(&v62, v33 + 500);
      XMLSystem::Attrib(v5, "Class", v62, v63, v64, v65, v66, (int)v67, (int)v68, v69);
      v34 = *a3;
      v69 = 0;
      v74 = &v62;
      std::string::string(&v62, v34 + 528);
      XMLSystem::Attrib(v5, "Parent", v62, v63, v64, v65, v66, (int)v67, (int)v68, v69);
      XMLSystem::Attrib(v5, "IncludeModel", *(_BYTE *)(*a3 + 616), 0);
      v35 = 0;
      for ( i = 0.0; ; LODWORD(i) += 28 )
      {
        v36 = *(_DWORD *)(*a3 + 588);
        if ( !v36 || v35 >= (*(_DWORD *)(*a3 + 592) - v36) / 28 )
          break;
        XMLSystem::CreateNode(v5, v73, "Param");
        v37 = *(_DWORD *)(*a3 + 588);
        v38 = *a3 + 584;
        v69 = 0;
        if ( !v37 || v35 >= (*(_DWORD *)(v38 + 8) - v37) / 28 )
          invalid_parameter_noinfo();
        v39 = LODWORD(i) + *(_DWORD *)(v38 + 4);
        v74 = &v62;
        std::string::string(&v62, v39);
        XMLSystem::Attrib(v5, "Name", v62, v63, v64, v65, v66, (int)v67, (int)v68, v69);
        v40 = *(_DWORD *)(*a3 + 604);
        v41 = *a3 + 600;
        v69 = 0;
        if ( !v40 || v35 >= (*(_DWORD *)(v41 + 8) - v40) / 28 )
          invalid_parameter_noinfo();
        v42 = LODWORD(i) + *(_DWORD *)(v41 + 4);
        v74 = &v62;
        std::string::string(&v62, v42);
        XMLSystem::Attrib(v5, "Value", v62, v63, v64, v65, v66, (int)v67, (int)v68, v69);
        ++v35;
      }
    }
    if ( *(_BYTE *)(*a3 + 352) )
    {
      *(float *)&v73 = COERCE_FLOAT(XMLSystem::CreateNode(v5, v91, "ExcludeList"));
      v43 = *(_DWORD *)(*a3 + 340);
      v44 = 0;
      if ( v43 )
        v45 = (*(_DWORD *)(*a3 + 344) - v43) / 28;
      else
        v45 = 0;
      XMLSystem::Attrib(v5, "Count", v45, 0);
      XMLSystem::Attrib(v5, "Include", *(_BYTE *)(*a3 + 332) == 0, 0);
      for ( i = 0.0; ; LODWORD(i) += 28 )
      {
        v46 = *(_DWORD *)(*a3 + 340);
        if ( !v46 || v44 >= (*(_DWORD *)(*a3 + 344) - v46) / 28 )
          break;
        XMLSystem::CreateNode(v5, v73, "Light");
        v47 = *(_DWORD *)(*a3 + 340);
        v48 = *a3 + 336;
        v69 = 0;
        if ( !v47 || v44 >= (*(_DWORD *)(v48 + 8) - v47) / 28 )
          invalid_parameter_noinfo();
        v49 = LODWORD(i) + *(_DWORD *)(v48 + 4);
        v74 = &v62;
        std::string::string(&v62, v49);
        XMLSystem::Attrib(v5, "Name", v62, v63, v64, v65, v66, (int)v67, (int)v68, v69);
        ++v44;
      }
    }
    *(float *)&v73 = COERCE_FLOAT(XMLSystem::CreateNode(v5, v91, "OcclusionList"));
    v50 = *(_DWORD *)(*a3 + 388);
    if ( v50 )
      v51 = (*(_DWORD *)(*a3 + 392) - v50) >> 2;
    else
      v51 = 0;
    XMLSystem::Attrib(v5, "Count", v51, 0);
    for ( j = 0; ; ++j )
    {
      v53 = *(_DWORD *)(*a3 + 388);
      if ( !v53 || j >= (*(_DWORD *)(*a3 + 392) - v53) >> 2 )
        break;
      XMLSystem::CreateNode(v5, v73, "Actor");
      v54 = *(_DWORD *)(*a3 + 388);
      v55 = *a3 + 384;
      v69 = 0;
      if ( !v54 || j >= (*(_DWORD *)(v55 + 8) - v54) >> 2 )
        invalid_parameter_noinfo();
      v56 = *(_DWORD *)(*(_DWORD *)(v55 + 4) + 4 * j) + 444;
      v74 = &v62;
      std::string::string(&v62, v56);
      XMLSystem::Attrib(v5, "Name", v62, v63, v64, v65, v66, (int)v67, (int)v68, v69);
    }
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)*a3 + 40))(*a3) )
    {
      sub_1003ECE0((int)v84, v91, a3);
    }
    else
    {
      v57 = *(_DWORD *)(*a3 + 716);
      if ( v57 )
      {
        if ( *(_BYTE *)(v57 + 312) )
        {
          if ( *(_DWORD *)(v57 + 308) )
          {
            v58 = v84;
            v59 = *(float *)(v57 + 52);
            v60 = *(_DWORD *)(v57 + 308);
            *(float *)&v73 = v59;
            v69 = 0;
            *(float *)(v60 + 368) = *(float *)&v73;
            sub_100431A0(v58, v91, (ModelFrame **)(*(_DWORD *)(*a3 + 716) + 308), (int)v69);
            if ( *(_DWORD *)(*(_DWORD *)(*a3 + 716) + 144) )
            {
              v61 = XMLSystem::CreateNode(v5, v91, "CollisionModel");
              XMLSystem::CreateNode(v5, v61, "NodeTM");
              XMLSystem::Attrib(v5, "Row0", (struct Vector *)(*(_DWORD *)(*a3 + 716) + 148), 0);
              XMLSystem::Attrib(v5, "Row1", (struct Vector *)(*(_DWORD *)(*a3 + 716) + 164), 0);
              XMLSystem::Attrib(v5, "Row2", (struct Vector *)(*(_DWORD *)(*a3 + 716) + 180), 0);
              XMLSystem::Attrib(v5, "Row3", (struct Vector *)(*(_DWORD *)(*a3 + 716) + 196), 0);
              XMLSystem::CreateNode(v5, v61, "RelativeTransform");
              XMLSystem::Attrib(v5, "Row0", (struct Vector *)(*(_DWORD *)(*a3 + 716) + 148), 0);
              XMLSystem::Attrib(v5, "Row1", (struct Vector *)(*(_DWORD *)(*a3 + 716) + 164), 0);
              XMLSystem::Attrib(v5, "Row2", (struct Vector *)(*(_DWORD *)(*a3 + 716) + 180), 0);
              XMLSystem::Attrib(v5, "Row3", (struct Vector *)(*(_DWORD *)(*a3 + 716) + 196), 0);
              sub_100431A0(v58, v61, (ModelFrame **)(*(_DWORD *)(*(_DWORD *)(*a3 + 716) + 144) + 308), 0);
            }
          }
        }
      }
    }
    v90 = -1;
    return std::string::~string(v87);
  }
  return result;
}
