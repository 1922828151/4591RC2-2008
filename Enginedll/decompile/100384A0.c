/*
 * func-name: sub_100384A0
 * func-address: 0x100384a0
 * callers: 0x100384a0, 0x10038ca0
 * callees: 0x100373d0, 0x100384a0, 0x1003be70, 0x10049250, 0x100492d0, 0x100497b0, 0x10049860, 0x10049a00, 0x1004a5e0, 0x1004b830, 0x100956d0, 0x100977a0, 0x1009dd90, 0x1009e990, 0x1011ef20, 0x101786e0, 0x1017a310, 0x101a251c, 0x101a2534
 */

bool __thiscall sub_100384A0(char *this, struct StaticModel *a2, float *a3, char *a4, int a5)
{
  float *v5; // esi
  XMLSystem *v6; // ebx
  int Name; // eax
  void *v9; // eax
  ModelFrame *v10; // eax
  char *v11; // edi
  int v12; // eax
  int v13; // eax
  int String; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int FirstNode; // esi
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
  float *v30; // esi
  struct xercesc_2_5::DOMNode *v31; // eax
  void *v32; // esi
  int (__thiscall *v33)(void *, const wchar_t *); // edx
  int v34; // eax
  int v35; // eax
  int last_of; // eax
  int v37; // eax
  int *v38; // eax
  int v39; // edx
  struct xercesc_2_5::DOMNode *v40; // eax
  struct _SYSTEMTIME *Time; // eax
  ModelFrame *v42; // ecx
  struct Mesh *Mesh; // eax
  _DWORD *v44; // ecx
  int (__thiscall *v45)(unsigned int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v46; // eax
  struct _SYSTEMTIME *v47; // eax
  ModelFrame *v48; // ecx
  struct Mesh *v49; // eax
  _DWORD *v50; // ecx
  int (__thiscall *v51)(void *, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v52; // eax
  struct Mesh *v53; // eax
  char *v54; // esi
  ModelFrame *v55; // ecx
  struct Mesh *v56; // eax
  ModelFrame *v57; // ecx
  struct Mesh *v58; // eax
  ModelFrame *v59; // ecx
  struct Mesh *v60; // eax
  int (__thiscall *v61)(float *); // eax
  int v62; // esi
  int v63; // edx
  int v64; // eax
  int v65; // eax
  int v66; // edx
  int (__thiscall *v67)(int); // eax
  unsigned int v68; // eax
  int v69; // eax
  int v70; // ebx
  int v71; // eax
  int v72; // esi
  ModelFrame *v73; // edi
  bool v74; // bl
  char v75; // [esp-20h] [ebp-D4h] BYREF
  int v76; // [esp-1Ch] [ebp-D0h]
  int v77; // [esp-18h] [ebp-CCh] BYREF
  int v78; // [esp-14h] [ebp-C8h]
  int v79; // [esp-10h] [ebp-C4h]
  int v80; // [esp-Ch] [ebp-C0h]
  int v81; // [esp-8h] [ebp-BCh]
  char *v82; // [esp-4h] [ebp-B8h]
  const char *v83; // [esp+0h] [ebp-B4h]
  BOOL v84; // [esp+4h] [ebp-B0h] BYREF
  _BYTE v85[28]; // [esp+10h] [ebp-A4h] BYREF
  _BYTE v86[28]; // [esp+2Ch] [ebp-88h] BYREF
  _BYTE v87[28]; // [esp+48h] [ebp-6Ch] BYREF
  _DWORD v88[17]; // [esp+64h] [ebp-50h] BYREF
  int v89; // [esp+B0h] [ebp-4h]
  _BYTE v90[12]; // [esp+B4h] [ebp+0h] BYREF
  struct _SYSTEMTIME v91; // [esp+C0h] [ebp+Ch] BYREF
  bool v92[28]; // [esp+D0h] [ebp+1Ch] BYREF
  bool v93[4]; // [esp+ECh] [ebp+38h] BYREF
  void *v94; // [esp+F0h] [ebp+3Ch]
  char *v95; // [esp+F4h] [ebp+40h]
  unsigned int Int; // [esp+F8h] [ebp+44h]
  int v97; // [esp+FCh] [ebp+48h] BYREF
  char v98; // [esp+103h] [ebp+4Fh]

  v97 = 0;
  v5 = a3;
  v88[16] = &v84;
  v6 = (XMLSystem *)(this + 84);
  v95 = this;
  Name = XMLSystem::GetName(v92, a3);
  v89 = 0;
  v97 = 1;
  if ( (unsigned __int8)std::operator!=<char>(Name, "CollisionModel") || (v98 = 0, a5) )
    v98 = 1;
  v89 = -1;
  std::string::~string(v92);
  if ( v98
    && (!(*(int (__thiscall **)(float *, const wchar_t *))(*(_DWORD *)v5 + 164))(v5, L"Name")
     || !(*(int (__thiscall **)(float *, const wchar_t *))(*(_DWORD *)v5 + 164))(v5, L"NodeType")) )
  {
    return 0;
  }
  v9 = operator new(0x1C8u);
  v94 = v9;
  v89 = 1;
  if ( v9 )
    v10 = ModelFrame::ModelFrame((ModelFrame *)v9, a2);
  else
    v10 = 0;
  v11 = a4;
  v83 = "GeomData";
  v89 = -1;
  *(_DWORD *)a4 = v10;
  std::string::string(v85, v83);
  v89 = 2;
  v12 = XMLSystem::GetName(v92, v5);
  LOBYTE(v89) = 3;
  v98 = std::operator!=<char>(v12, "CollisionModel");
  LOBYTE(v89) = 2;
  std::string::~string(v92);
  if ( v98 )
  {
    v13 = (*(int (__thiscall **)(float *, const wchar_t *))(*(_DWORD *)v5 + 164))(v5, L"NodeType");
    String = XMLSystem::GetString(v92, v13, 0);
    LOBYTE(v89) = 4;
    std::string::operator=(v85, String);
    LOBYTE(v89) = 2;
    std::string::~string(v92);
    v15 = (*(int (__thiscall **)(float *, const wchar_t *))(*(_DWORD *)v5 + 164))(v5, L"Name");
    v16 = XMLSystem::GetString(v92, v15, 0);
    v17 = *(_DWORD *)v11;
    LOBYTE(v89) = 5;
    std::string::operator=(v17 + 44, v16);
    LOBYTE(v89) = 2;
    std::string::~string(v92);
  }
  else
  {
    std::string::operator=(*(_DWORD *)v11 + 44, "CollisionModel");
  }
  v94 = &v77;
  std::string::string(&v77, "NodeTM");
  FirstNode = XMLSystem::FindFirstNode(v5, v77, v78, v79, v80, v81, v82, v83);
  memset(v88, 0, 0x40u);
  sub_101786E0(1.0);
  *(float *)&v88[15] = 1.0;
  v83 = 0;
  v19 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 164))(FirstNode, L"Row0");
  Vector = (_DWORD *)XMLSystem::GetVector(v6, &v91.wDayOfWeek, v19, v83);
  v88[0] = *Vector;
  v88[1] = Vector[1];
  v88[2] = Vector[2];
  v21 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 164);
  v83 = 0;
  v22 = v21(FirstNode, L"Row1");
  v23 = (_DWORD *)XMLSystem::GetVector(v6, &v91.wDayOfWeek, v22, v83);
  v88[4] = *v23;
  v88[5] = v23[1];
  v88[6] = v23[2];
  v24 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 164);
  v83 = 0;
  v25 = v24(FirstNode, L"Row2");
  v26 = (_DWORD *)XMLSystem::GetVector(v6, &v91.wDayOfWeek, v25, v83);
  v88[8] = *v26;
  v88[9] = v26[1];
  v88[10] = v26[2];
  v27 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 164);
  v83 = 0;
  v28 = v27(FirstNode, L"Row3");
  v29 = (_DWORD *)XMLSystem::GetVector(v6, &v91.wDayOfWeek, v28, v83);
  v88[12] = *v29;
  v88[13] = v29[1];
  v88[14] = v29[2];
  if ( a5 || ISave::IsConverting )
  {
    qmemcpy((void *)(*(_DWORD *)v11 + 100), v88, 0x40u);
    v11 = a4;
  }
  v94 = &v77;
  Int = -1;
  std::string::string(&v77, "MaterialIndex");
  v30 = a3;
  v31 = (struct xercesc_2_5::DOMNode *)XMLSystem::FindFirstNode(a3, v77, v78, v79, v80, v81, v82, v83);
  if ( v31 )
    Int = XMLSystem::GetInt(v6, v31, 1);
  v94 = &v77;
  std::string::string(&v77, "GeomData");
  v32 = (void *)XMLSystem::FindFirstNode(v30, v77, v78, v79, v80, v81, v82, v83);
  v94 = v32;
  if ( v32 )
  {
    v33 = *(int (__thiscall **)(void *, const wchar_t *))(*(_DWORD *)v32 + 164);
    v83 = 0;
    v34 = v33(v32, L"Include");
    XMLSystem::GetString(v87, v34, v83);
    LOBYTE(v89) = 6;
    v35 = sub_1017A310(v90, v87);
    LOBYTE(v89) = 7;
    std::string::operator=(v87, v35);
    LOBYTE(v89) = 6;
    std::string::~string(v90);
    std::string::operator=(*(_DWORD *)v11 + 72, v87);
    last_of = std::string::find_last_of(v95 + 56, L"\\", std::string::npos, 1);
    v37 = std::string::substr(v95 + 56, v86, 0, last_of + 1);
    LOBYTE(v89) = 8;
    std::operator+<char>(v92, v37, v87);
    LOBYTE(v89) = 10;
    std::string::~string(v86);
    v83 = (const char *)Int;
    v82 = v11;
    v97 = (int)&v75;
    std::string::string(&v75, v92);
    if ( (unsigned __int8)ILoad::ReadMeshBinary(v75, v76, v77, v78, v79, v80, v81, v82, v83) )
    {
      v97 = (int)&v77;
      std::string::string(&v77, "Time");
      v38 = (int *)XMLSystem::FindFirstNode(v32, v77, v78, v79, v80, v81, v82, v83);
      v39 = *v38;
      Int = (unsigned int)v38;
      v40 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int *, const wchar_t *, _DWORD))(v39 + 164))(
                                             v38,
                                             L"Moved",
                                             0);
      Time = XMLSystem::GetTime(v6, &v91, v40, v84);
      v42 = *(ModelFrame **)v11;
      v97 = (int)Time;
      Mesh = ModelFrame::GetMesh(v42, 0);
      v44 = (_DWORD *)v97;
      *((_DWORD *)Mesh + 22) = *(_DWORD *)v97;
      Mesh = (struct Mesh *)((char *)Mesh + 88);
      *((_DWORD *)Mesh + 1) = v44[1];
      *((_DWORD *)Mesh + 2) = v44[2];
      *((_DWORD *)Mesh + 3) = v44[3];
      v45 = *(int (__thiscall **)(unsigned int, const wchar_t *))(*(_DWORD *)Int + 164);
      v84 = 0;
      v46 = (struct xercesc_2_5::DOMNode *)v45(Int, L"Modified");
      v47 = XMLSystem::GetTime(v6, &v91, v46, v84);
      v48 = *(ModelFrame **)v11;
      v97 = (int)v47;
      v49 = ModelFrame::GetMesh(v48, 0);
      v50 = (_DWORD *)v97;
      *((_DWORD *)v49 + 26) = *(_DWORD *)v97;
      v49 = (struct Mesh *)((char *)v49 + 104);
      *((_DWORD *)v49 + 1) = v50[1];
      *((_DWORD *)v49 + 2) = v50[2];
      *((_DWORD *)v49 + 3) = v50[3];
      if ( (*(int (__thiscall **)(void *, const wchar_t *))(*(_DWORD *)v32 + 164))(v32, L"LoadScale") )
      {
        v51 = *(int (__thiscall **)(void *, const wchar_t *))(*(_DWORD *)v32 + 164);
        v83 = 0;
        v52 = (struct xercesc_2_5::DOMNode *)v51(v32, L"LoadScale");
        *(float *)(*(_DWORD *)v11 + 368) = XMLSystem::GetFloat(v6, v52, (bool)v83);
        if ( 0.0 == *(float *)(*(_DWORD *)v11 + 368) )
          *(float *)(*(_DWORD *)v11 + 368) = 1.0;
      }
      v53 = ModelFrame::GetMesh(*(ModelFrame **)v11, 0);
      v82 = (char *)v32;
      v54 = v95;
      sub_100373D0(v95, v82, (char *)v53 + 120);
      v55 = *(ModelFrame **)v11;
      v83 = (const char *)&unk_101BBD8F;
      v56 = ModelFrame::GetMesh(v55, 0);
      if ( (unsigned __int8)std::operator==<char>((char *)v56 + 2383, v83) )
      {
        v57 = *(ModelFrame **)v11;
        v83 = (const char *)(*(_DWORD *)v11 + 44);
        v58 = ModelFrame::GetMesh(v57, 0);
        std::string::operator=((char *)v58 + 2383, v83);
        v59 = *(ModelFrame **)v11;
        v83 = (const char *)&unk_101BBD9A;
        v60 = ModelFrame::GetMesh(v59, 0);
        if ( (unsigned __int8)std::operator!=<char>((char *)v60 + 2383, v83) )
        {
          v97 = (int)ModelFrame::GetMesh(*(ModelFrame **)v11, 0) + 2383;
          sub_1003BE70((int)(v54 + 12), (int)&v97);
        }
      }
      v97 = (int)&v77;
      std::string::string(&v77, "CollisionData");
      if ( XMLSystem::FindFirstNode(a3, v77, v78, v79, v80, v81, v82, v83) )
        Error("TODO: CollisionData not implemented");
    }
    LOBYTE(v89) = 6;
    std::string::~string(v92);
    LOBYTE(v89) = 2;
    std::string::~string(v87);
  }
  v61 = *(int (__thiscall **)(float *))(*(_DWORD *)a3 + 20);
  *(_DWORD *)v93 = 0;
  v62 = v61(a3);
  v63 = *(_DWORD *)v62;
  v97 = 0;
  Int = 0;
  if ( (*(int (__thiscall **)(int))(v63 + 8))(v62) )
  {
    while ( 1 )
    {
      v64 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v62 + 4))(v62, Int);
      v65 = XMLSystem::GetName(v86, v64);
      LOBYTE(v89) = 11;
      v98 = std::operator==<char>(v65, "Node");
      LOBYTE(v89) = 2;
      std::string::~string(v86);
      v66 = *(_DWORD *)v62;
      if ( v98 )
        break;
      v67 = *(int (__thiscall **)(int))(v66 + 8);
      ++Int;
      v68 = v67(v62);
      if ( Int >= v68 )
        goto LABEL_33;
    }
    v69 = (*(int (__thiscall **)(int, unsigned int))(v66 + 4))(v62, Int);
  }
  else
  {
LABEL_33:
    v69 = v97;
  }
  v70 = a5 + 1;
  if ( v69 )
  {
    sub_100384A0(a2, v69, (bool)v93, a5 + 1);
    *(_DWORD *)(*(_DWORD *)v11 + 360) = *(_DWORD *)v93;
    if ( 1.0 != *(float *)(*(_DWORD *)v93 + 368) )
      *(float *)(*(_DWORD *)v11 + 368) = *(float *)(*(_DWORD *)v93 + 368);
  }
  v71 = (*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 36))(a3);
  v72 = v71;
  if ( v70 > 1 && v71 )
  {
    do
    {
      if ( (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)v72 + 12))(v72) != 3 )
        break;
      v72 = (*(int (__thiscall **)(int))(*(_DWORD *)v72 + 36))(v72);
    }
    while ( v72 );
    a3 = 0;
    if ( v72 )
    {
      if ( (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)v72 + 12))(v72) == 1 )
      {
        LOBYTE(v89) = 12;
        sub_100384A0(a2, v72, (bool)&a3, v70);
        *(_DWORD *)(*(_DWORD *)v11 + 356) = a3;
        if ( a3 )
        {
          if ( 1.0 != a3[92] )
            *(float *)(*(_DWORD *)v11 + 368) = a3[92];
        }
      }
    }
  }
  v74 = 1;
  if ( !v94 )
  {
    v73 = *(ModelFrame **)v11;
    if ( !*((_DWORD *)v73 + 89) && !*((_DWORD *)v73 + 90) )
      v74 = 0;
  }
  v89 = -1;
  std::string::~string(v85);
  return v74;
}
