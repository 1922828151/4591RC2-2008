/*
 * func-name: sub_10044CF0
 * func-address: 0x10044cf0
 * callers: 0x10044cf0, 0x10045740, 0x10047270
 * callees: 0x10011ca0, 0x100158b0, 0x1003be70, 0x100412c0, 0x10044cf0, 0x10049250, 0x100492d0, 0x100497b0, 0x10049860, 0x10049a00, 0x1004a5e0, 0x1004b830, 0x100956d0, 0x100977a0, 0x1009dd90, 0x1009e990, 0x1011ed60, 0x1011ef20, 0x10171580, 0x10171860, 0x101786e0, 0x1017a310, 0x101a251c, 0x101a2534
 */

bool __thiscall sub_10044CF0(ILoad *this, struct StaticModel *a2, float *a3, struct ModelFrame **a4, int a5)
{
  float *v5; // edi
  XMLSystem *v6; // ebx
  int Name; // eax
  void *v9; // eax
  struct ModelFrame *v10; // eax
  struct ModelFrame **v11; // esi
  int v12; // eax
  int v13; // eax
  int String; // eax
  int v15; // eax
  int v16; // eax
  struct ModelFrame *v17; // ecx
  int FirstNode; // edi
  int v19; // eax
  _DWORD *Vector; // eax
  int (__thiscall *v21)(int, const wchar_t *); // eax
  int v22; // eax
  _DWORD *v23; // eax
  int (__thiscall *v24)(int, const wchar_t *); // edx
  int v25; // eax
  _DWORD *v26; // eax
  int (__thiscall *v27)(int, const wchar_t *); // eax
  int v28; // eax
  _DWORD *v29; // eax
  float *v30; // edi
  struct xercesc_2_5::DOMNode *v31; // eax
  int Int; // eax
  struct ModelFrame *v33; // ecx
  void *v34; // edi
  int v35; // eax
  int v36; // eax
  int (__thiscall *v37)(void *); // edx
  int (__thiscall *v38)(void *, const wchar_t *); // edx
  int v39; // eax
  _DWORD *v40; // eax
  _DWORD *v41; // ecx
  int (__thiscall *v42)(void *, const wchar_t *); // eax
  int v43; // eax
  _DWORD *v44; // eax
  _DWORD *v45; // ecx
  int last_of; // eax
  int v47; // eax
  int *Packet; // eax
  _DWORD *v49; // eax
  _DWORD *v50; // eax
  int (__thiscall *v51)(void *, const wchar_t *); // eax
  int (__thiscall *v52)(void *, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v53; // eax
  char MeshBinary; // al
  int *v55; // eax
  int v56; // edx
  struct xercesc_2_5::DOMNode *v57; // eax
  struct _SYSTEMTIME *Time; // eax
  ModelFrame *v59; // ecx
  struct Mesh *Mesh; // eax
  _DWORD *v61; // ecx
  int (__thiscall *v62)(void *, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v63; // eax
  struct _SYSTEMTIME *v64; // eax
  ModelFrame *v65; // ecx
  struct Mesh *v66; // eax
  _DWORD *v67; // ecx
  int (__thiscall *v68)(void *, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v69; // eax
  struct Mesh *v70; // eax
  ILoad *v71; // edi
  ModelFrame *v72; // ecx
  struct Mesh *v73; // eax
  ModelFrame *v74; // ecx
  struct Mesh *v75; // eax
  ModelFrame *v76; // ecx
  struct Mesh *v77; // eax
  int (__thiscall *v78)(float *); // eax
  int v79; // edi
  int v80; // edx
  int v81; // eax
  int v82; // eax
  int v83; // edx
  int (__thiscall *v84)(int); // eax
  unsigned int v85; // eax
  unsigned __int8 *v86; // eax
  int v87; // ebx
  int v88; // eax
  int v89; // edi
  struct ModelFrame *v90; // esi
  bool v91; // bl
  char v92; // [esp-20h] [ebp-D4h] BYREF
  int v93; // [esp-1Ch] [ebp-D0h]
  int v94; // [esp-18h] [ebp-CCh] BYREF
  int v95; // [esp-14h] [ebp-C8h]
  int v96; // [esp-10h] [ebp-C4h]
  int v97; // [esp-Ch] [ebp-C0h]
  int v98; // [esp-8h] [ebp-BCh]
  char *v99; // [esp-4h] [ebp-B8h]
  const char *v100; // [esp+0h] [ebp-B4h]
  const wchar_t *v101; // [esp+4h] [ebp-B0h] BYREF
  _BYTE v102[28]; // [esp+10h] [ebp-A4h] BYREF
  _BYTE v103[28]; // [esp+2Ch] [ebp-88h] BYREF
  _BYTE v104[28]; // [esp+48h] [ebp-6Ch] BYREF
  _DWORD v105[17]; // [esp+64h] [ebp-50h] BYREF
  int v106; // [esp+B0h] [ebp-4h]
  _BYTE v107[4]; // [esp+B4h] [ebp+0h] BYREF
  _BYTE v108[12]; // [esp+B8h] [ebp+4h] BYREF
  struct _SYSTEMTIME v109; // [esp+C4h] [ebp+10h] BYREF
  _BYTE v110[28]; // [esp+D4h] [ebp+20h] BYREF
  struct ModelFrame *v111; // [esp+F0h] [ebp+3Ch] BYREF
  void *v112; // [esp+F4h] [ebp+40h]
  unsigned __int8 *v113; // [esp+F8h] [ebp+44h] BYREF
  ILoad *v114; // [esp+FCh] [ebp+48h]
  void *v115; // [esp+100h] [ebp+4Ch] BYREF
  int v116; // [esp+104h] [ebp+50h]
  char v117; // [esp+10Bh] [ebp+57h]

  v113 = 0;
  v5 = a3;
  v105[16] = &v101;
  v6 = (ILoad *)((char *)this + 84);
  v114 = this;
  Name = XMLSystem::GetName(v110, a3);
  v106 = 0;
  v113 = (unsigned __int8 *)1;
  if ( (unsigned __int8)std::operator!=<char>(Name, "CollisionModel") || (v117 = 0, a5) )
    v117 = 1;
  v106 = -1;
  std::string::~string(v110);
  if ( v117
    && (!(*(int (__thiscall **)(float *, const wchar_t *))(*(_DWORD *)v5 + 164))(v5, L"Name")
     || !(*(int (__thiscall **)(float *, const wchar_t *))(*(_DWORD *)v5 + 164))(v5, L"NodeType")) )
  {
    return 0;
  }
  v9 = operator new(0x1C8u);
  v112 = v9;
  v106 = 1;
  if ( v9 )
    v10 = ModelFrame::ModelFrame((ModelFrame *)v9, a2);
  else
    v10 = 0;
  v11 = a4;
  v100 = "GeomData";
  v106 = -1;
  *a4 = v10;
  std::string::string(v102, v100);
  v106 = 2;
  v12 = XMLSystem::GetName(v110, v5);
  LOBYTE(v106) = 3;
  v117 = std::operator!=<char>(v12, "CollisionModel");
  LOBYTE(v106) = 2;
  std::string::~string(v110);
  if ( v117 )
  {
    v13 = (*(int (__thiscall **)(float *, const wchar_t *))(*(_DWORD *)v5 + 164))(v5, L"NodeType");
    String = XMLSystem::GetString(v110, v13, 0);
    LOBYTE(v106) = 4;
    std::string::operator=(v102, String);
    LOBYTE(v106) = 2;
    std::string::~string(v110);
    v15 = (*(int (__thiscall **)(float *, const wchar_t *))(*(_DWORD *)v5 + 164))(v5, L"Name");
    v16 = XMLSystem::GetString(v110, v15, 0);
    v17 = *v11;
    LOBYTE(v106) = 5;
    std::string::operator=((char *)v17 + 44, v16);
    LOBYTE(v106) = 2;
    std::string::~string(v110);
  }
  else
  {
    std::string::operator=((char *)*v11 + 44, "CollisionModel");
  }
  v112 = &v94;
  std::string::string(&v94, "NodeTM");
  FirstNode = XMLSystem::FindFirstNode(v5, v94, v95, v96, v97, v98, v99, v100);
  memset(v105, 0, 0x40u);
  sub_101786E0(1.0);
  *(float *)&v105[15] = 1.0;
  v100 = 0;
  v19 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 164))(FirstNode, L"Row0");
  Vector = (_DWORD *)XMLSystem::GetVector(v6, &v109.wDayOfWeek, v19, v100);
  v105[0] = *Vector;
  v105[1] = Vector[1];
  v105[2] = Vector[2];
  v21 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 164);
  v100 = 0;
  v22 = v21(FirstNode, L"Row1");
  v23 = (_DWORD *)XMLSystem::GetVector(v6, &v109.wDayOfWeek, v22, v100);
  v105[4] = *v23;
  v105[5] = v23[1];
  v105[6] = v23[2];
  v24 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 164);
  v100 = 0;
  v25 = v24(FirstNode, L"Row2");
  v26 = (_DWORD *)XMLSystem::GetVector(v6, &v109.wDayOfWeek, v25, v100);
  v105[8] = *v26;
  v105[9] = v26[1];
  v105[10] = v26[2];
  v27 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 164);
  v100 = 0;
  v28 = v27(FirstNode, L"Row3");
  v29 = (_DWORD *)XMLSystem::GetVector(v6, &v109.wDayOfWeek, v28, v100);
  v105[12] = *v29;
  v105[13] = v29[1];
  v105[14] = v29[2];
  if ( a5 || ISave::IsConverting )
  {
    qmemcpy((char *)*v11 + 100, v105, 0x40u);
    v11 = a4;
  }
  v112 = &v94;
  v116 = -1;
  std::string::string(&v94, "MaterialIndex");
  v30 = a3;
  v31 = (struct xercesc_2_5::DOMNode *)XMLSystem::FindFirstNode(a3, v94, v95, v96, v97, v98, v99, v100);
  if ( v31 )
  {
    Int = XMLSystem::GetInt(v6, v31, 1);
    v33 = *v11;
    v116 = Int;
    *((_DWORD *)v33 + 5) = Int;
  }
  v112 = &v94;
  std::string::string(&v94, "GeomData");
  v34 = (void *)XMLSystem::FindFirstNode(v30, v94, v95, v96, v97, v98, v99, v100);
  v112 = v34;
  if ( v34 )
  {
    v35 = (*(int (__thiscall **)(void *, const wchar_t *, _DWORD))(*(_DWORD *)v34 + 164))(v34, L"Include", 0);
    XMLSystem::GetString(v110, v35, v101);
    LOBYTE(v106) = 6;
    v36 = sub_1017A310(v108, v110);
    LOBYTE(v106) = 7;
    std::string::operator=(v110, v36);
    LOBYTE(v106) = 6;
    std::string::~string(v108);
    v37 = *(int (__thiscall **)(void *))(*(_DWORD *)v34 + 164);
    v101 = L"BBoxMin";
    if ( v37(v34) && (*(int (__thiscall **)(void *, const wchar_t *))(*(_DWORD *)v34 + 164))(v34, L"BBoxMax") )
    {
      v38 = *(int (__thiscall **)(void *, const wchar_t *))(*(_DWORD *)v34 + 164);
      v100 = 0;
      v39 = v38(v34, L"BBoxMin");
      v40 = (_DWORD *)XMLSystem::GetVector(v6, &v109.wDayOfWeek, v39, v100);
      v41 = (_DWORD *)((char *)*v11 + 396);
      *v41 = *v40;
      v41[1] = v40[1];
      v41[2] = v40[2];
      v42 = *(int (__thiscall **)(void *, const wchar_t *))(*(_DWORD *)v34 + 164);
      v100 = 0;
      v43 = v42(v34, L"BBoxMax");
      v44 = (_DWORD *)XMLSystem::GetVector(v6, &v109.wDayOfWeek, v43, v100);
      v45 = (_DWORD *)((char *)*v11 + 408);
      *v45 = *v44;
      v45[1] = v44[1];
      v45[2] = v44[2];
    }
    std::string::operator=((char *)*v11 + 72, v110);
    last_of = std::string::find_last_of((char *)v114 + 56, L"\\", std::string::npos);
    v47 = std::string::substr((char *)v114 + 56, v103, 0, last_of + 1);
    LOBYTE(v106) = 8;
    std::operator+<char>(v104, v47, v110);
    LOBYTE(v106) = 10;
    std::string::~string(v103);
    if ( *((_BYTE *)v114 + 44) )
    {
      Packet = (int *)AsyncLoader::GetPacket((char *)a2 + 320);
      if ( Packet )
        sub_100158B0(Packet, (int)v104);
      std::string::operator=((char *)*v11 + 72, v104);
      v49 = operator new(0x2Cu);
      v115 = v49;
      LOBYTE(v106) = 11;
      if ( v49 )
        v50 = sub_10011CA0(v49);
      else
        v50 = 0;
      *((_DWORD *)*v11 + 113) = v50;
      v51 = *(int (__thiscall **)(void *, const wchar_t *))(*(_DWORD *)v34 + 164);
      LOBYTE(v106) = 10;
      if ( v51(v34, L"LoadScale") )
      {
        v52 = *(int (__thiscall **)(void *, const wchar_t *))(*(_DWORD *)v34 + 164);
        v100 = 0;
        v53 = (struct xercesc_2_5::DOMNode *)v52(v34, L"LoadScale");
        *((float *)*v11 + 92) = XMLSystem::GetFloat(v6, v53, (bool)v100);
        if ( 0.0 == *((float *)*v11 + 92) )
          *((float *)*v11 + 92) = 1.0;
      }
    }
    else
    {
      if ( (unsigned __int8)AsyncLoader::GetMemCache(v104, &v113, v107) )
      {
        MeshBinary = ILoad::ReadMeshBinary_Mem(v114, &v113, v11, v116);
      }
      else
      {
        v100 = (const char *)v116;
        v99 = (char *)v11;
        v115 = &v92;
        std::string::string(&v92, v104);
        MeshBinary = ILoad::ReadMeshBinary(v92, v93, v94, v95, v96, v97, v98, v99, v100);
      }
      if ( MeshBinary )
      {
        v115 = &v94;
        std::string::string(&v94, "Time");
        v55 = (int *)XMLSystem::FindFirstNode(v34, v94, v95, v96, v97, v98, v99, v100);
        v56 = *v55;
        v115 = v55;
        v57 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int *, const wchar_t *, _DWORD))(v56 + 164))(
                                               v55,
                                               L"Moved",
                                               0);
        Time = XMLSystem::GetTime(v6, &v109, v57, (bool)v101);
        v59 = *v11;
        v116 = (int)Time;
        Mesh = ModelFrame::GetMesh(v59, 0);
        v61 = (_DWORD *)v116;
        *((_DWORD *)Mesh + 22) = *(_DWORD *)v116;
        Mesh = (struct Mesh *)((char *)Mesh + 88);
        *((_DWORD *)Mesh + 1) = v61[1];
        *((_DWORD *)Mesh + 2) = v61[2];
        *((_DWORD *)Mesh + 3) = v61[3];
        v62 = *(int (__thiscall **)(void *, const wchar_t *))(*(_DWORD *)v115 + 164);
        v101 = 0;
        v63 = (struct xercesc_2_5::DOMNode *)v62(v115, L"Modified");
        v64 = XMLSystem::GetTime(v6, &v109, v63, (bool)v101);
        v65 = *v11;
        v115 = v64;
        v66 = ModelFrame::GetMesh(v65, 0);
        v67 = v115;
        *((_DWORD *)v66 + 26) = *(_DWORD *)v115;
        v66 = (struct Mesh *)((char *)v66 + 104);
        *((_DWORD *)v66 + 1) = v67[1];
        *((_DWORD *)v66 + 2) = v67[2];
        *((_DWORD *)v66 + 3) = v67[3];
        if ( (*(int (__thiscall **)(void *, const wchar_t *))(*(_DWORD *)v34 + 164))(v34, L"LoadScale") )
        {
          v68 = *(int (__thiscall **)(void *, const wchar_t *))(*(_DWORD *)v34 + 164);
          v100 = 0;
          v69 = (struct xercesc_2_5::DOMNode *)v68(v34, L"LoadScale");
          *((float *)*v11 + 92) = XMLSystem::GetFloat(v6, v69, (bool)v100);
          if ( 0.0 == *((float *)*v11 + 92) )
            *((float *)*v11 + 92) = 1.0;
        }
        v70 = ModelFrame::GetMesh(*v11, 0);
        v99 = (char *)v34;
        v71 = v114;
        sub_100412C0((char *)v114, v99, (char *)v70 + 120);
        v72 = *v11;
        v100 = (const char *)&unk_101BCE53;
        v73 = ModelFrame::GetMesh(v72, 0);
        if ( (unsigned __int8)std::operator==<char>((char *)v73 + 2383, v100) )
        {
          v74 = *v11;
          v100 = (char *)*v11 + 44;
          v75 = ModelFrame::GetMesh(v74, 0);
          std::string::operator=((char *)v75 + 2383, v100);
          v76 = *v11;
          v100 = (const char *)&unk_101BCE63;
          v77 = ModelFrame::GetMesh(v76, 0);
          if ( (unsigned __int8)std::operator!=<char>((char *)v77 + 2383, v100) )
          {
            v115 = (char *)ModelFrame::GetMesh(*v11, 0) + 2383;
            sub_1003BE70((_DWORD *)v71 + 3, (int *)&v115);
          }
        }
        v115 = &v94;
        std::string::string(&v94, "CollisionData");
        if ( XMLSystem::FindFirstNode(a3, v94, v95, v96, v97, v98, v99, v100) )
          Error("TODO: CollisionData not implemented");
      }
    }
    LOBYTE(v106) = 6;
    std::string::~string(v104);
    LOBYTE(v106) = 2;
    std::string::~string(v110);
  }
  v78 = *(int (__thiscall **)(float *))(*(_DWORD *)a3 + 20);
  v111 = 0;
  v79 = v78(a3);
  v80 = *(_DWORD *)v79;
  v113 = 0;
  v116 = 0;
  if ( (*(int (__thiscall **)(int))(v80 + 8))(v79) )
  {
    while ( 1 )
    {
      v81 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v79 + 4))(v79, v116);
      v82 = XMLSystem::GetName(v103, v81);
      LOBYTE(v106) = 12;
      v117 = std::operator==<char>(v82, "Node");
      LOBYTE(v106) = 2;
      std::string::~string(v103);
      v83 = *(_DWORD *)v79;
      if ( v117 )
        break;
      v84 = *(int (__thiscall **)(int))(v83 + 8);
      ++v116;
      v85 = v84(v79);
      if ( v116 >= v85 )
        goto LABEL_48;
    }
    v86 = (unsigned __int8 *)(*(int (__thiscall **)(int, int))(v83 + 4))(v79, v116);
  }
  else
  {
LABEL_48:
    v86 = v113;
  }
  v87 = a5 + 1;
  if ( v86 )
  {
    sub_10044CF0(a2, (int)v86, &v111, a5 + 1);
    *((_DWORD *)*v11 + 90) = v111;
    if ( 1.0 != *((float *)v111 + 92) )
      *((float *)*v11 + 92) = *((float *)v111 + 92);
  }
  v88 = (*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 36))(a3);
  v89 = v88;
  if ( v87 > 1 && v88 )
  {
    do
    {
      if ( (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)v89 + 12))(v89) != 3 )
        break;
      v89 = (*(int (__thiscall **)(int))(*(_DWORD *)v89 + 36))(v89);
    }
    while ( v89 );
    a3 = 0;
    if ( v89 )
    {
      if ( (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)v89 + 12))(v89) == 1 )
      {
        LOBYTE(v106) = 13;
        sub_10044CF0(a2, v89, (struct ModelFrame **)&a3, v87);
        *((_DWORD *)*v11 + 89) = a3;
        if ( a3 )
        {
          if ( 1.0 != a3[92] )
            *((float *)*v11 + 92) = a3[92];
        }
      }
    }
  }
  v91 = 1;
  if ( !v112 )
  {
    v90 = *v11;
    if ( !*((_DWORD *)v90 + 89) && !*((_DWORD *)v90 + 90) )
      v91 = 0;
  }
  v106 = -1;
  std::string::~string(v102);
  return v91;
}
