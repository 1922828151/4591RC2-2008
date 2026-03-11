/*
 * func-name: sub_100431A0
 * func-address: 0x100431a0
 * callers: 0x100431a0, 0x10043b90
 * callees: 0x10009f20, 0x1000d300, 0x100116a0, 0x10014730, 0x10014b40, 0x1003f520, 0x100431a0, 0x1004a0f0, 0x1004a170, 0x1004a1f0, 0x1004a290, 0x1004a3d0, 0x1004a460, 0x1004a4a0, 0x100977a0, 0x1009dd90
 */

ModelFrame *__thiscall sub_100431A0(int *this, struct xercesc_2_5::DOMNode *a2, ModelFrame **a3, int a4)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  struct xercesc_2_5::DOMNode *Node; // eax
  ModelFrame *v7; // edx
  struct xercesc_2_5::DOMNode *v8; // ebx
  ModelFrame *v9; // ecx
  struct Mesh *Mesh; // eax
  int v11; // ecx
  char *v12; // eax
  unsigned int i; // ebx
  int v14; // ecx
  ModelFrame *v15; // ecx
  struct Mesh *v16; // eax
  int v17; // ecx
  char *v18; // edi
  ModelFrame *v19; // ecx
  struct Mesh *v20; // eax
  int v21; // ecx
  char *v22; // eax
  struct Mesh *v23; // edi
  int v24; // eax
  char *v25; // edi
  ModelFrame **v26; // eax
  ModelFrame *v27; // ecx
  const char *v28; // eax
  struct Mesh *v29; // eax
  int v30; // ecx
  char *v31; // eax
  const char *v32; // eax
  struct xercesc_2_5::DOMNode *v33; // eax
  int v34; // eax
  int v35; // eax
  ModelFrame *v36; // ecx
  ModelFrame *v37; // ecx
  struct Mesh *v38; // eax
  ModelFrame *v39; // ecx
  struct Mesh *v40; // eax
  void *v41; // eax
  struct Mesh *v42; // eax
  struct xercesc_2_5::DOMNode **v43; // eax
  int *v44; // edi
  bool v45; // cc
  struct xercesc_2_5::DOMElement *v46; // eax
  struct xercesc_2_5::DOMNode *v47; // ebx
  ModelFrame *v48; // ecx
  struct Mesh *v49; // eax
  ModelFrame *v50; // ecx
  struct Mesh *v51; // eax
  ModelFrame *v52; // ecx
  struct Mesh *v53; // eax
  int v54; // edx
  int v55; // edx
  int v56; // eax
  ModelFrame *v57; // ecx
  struct Mesh *v58; // eax
  int v59; // edx
  int v60; // edx
  int v61; // eax
  struct Mesh *v62; // eax
  struct Mesh *v63; // eax
  struct Mesh *v64; // eax
  ModelFrame *v65; // ecx
  struct Mesh *v66; // eax
  ModelFrame *v67; // edx
  int last_of; // eax
  int v69; // eax
  int v70; // ecx
  double v71; // st7
  ModelFrame *result; // eax
  int v73; // ecx
  double v74; // st7
  int v75; // eax
  struct xercesc_2_5::DOMNode *v76; // eax
  char v77; // [esp-38h] [ebp-15Ch] BYREF
  int v78; // [esp-34h] [ebp-158h]
  int v79; // [esp-30h] [ebp-154h]
  int v80; // [esp-2Ch] [ebp-150h]
  int v81; // [esp-28h] [ebp-14Ch]
  int v82; // [esp-24h] [ebp-148h]
  int v83; // [esp-20h] [ebp-144h]
  struct xercesc_2_5::DOMNode *v84; // [esp-1Ch] [ebp-140h]
  struct xercesc_2_5::DOMNode *v85; // [esp-18h] [ebp-13Ch] BYREF
  int v86; // [esp-14h] [ebp-138h] BYREF
  int v87; // [esp-10h] [ebp-134h]
  struct _SYSTEMTIME v88; // [esp-Ch] [ebp-130h] BYREF
  ModelFrame **v89; // [esp+4h] [ebp-120h]
  struct xercesc_2_5::DOMNode **v90; // [esp+18h] [ebp-10Ch]
  int v91; // [esp+1Ch] [ebp-108h]
  unsigned int v92; // [esp+20h] [ebp-104h]
  _BYTE v93[28]; // [esp+24h] [ebp-100h] BYREF
  int v94[7]; // [esp+40h] [ebp-E4h] BYREF
  int v95[7]; // [esp+5Ch] [ebp-C8h] BYREF
  struct _SYSTEMTIME v96; // [esp+78h] [ebp-ACh] BYREF
  _BYTE v97[28]; // [esp+A0h] [ebp-84h] BYREF
  char v98[28]; // [esp+BCh] [ebp-68h] BYREF
  char Buffer[64]; // [esp+D8h] [ebp-4Ch] BYREF
  struct _EXCEPTION_REGISTRATION_RECORD *v100; // [esp+118h] [ebp-Ch]
  void *v101; // [esp+11Ch] [ebp-8h]
  int v102; // [esp+120h] [ebp-4h]

  v102 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v101 = &loc_101A81B3;
  v100 = ExceptionList;
  if ( a4 )
  {
    Node = XMLSystem::CreateNode((XMLSystem *)(this + 24), a2, "Node");
    v7 = *a3;
    v89 = 0;
    v8 = Node;
    v90 = &v85;
    a2 = Node;
    std::string::string(&v85, (char *)v7 + 44);
    XMLSystem::Attrib(
      (XMLSystem *)(this + 24),
      "Name",
      (char)v85,
      v86,
      v87,
      *(int *)&v88.wYear,
      *(int *)&v88.wDayOfWeek,
      *(int *)&v88.wHour,
      *(int *)&v88.wSecond,
      (struct xercesc_2_5::DOMNode *)v89);
    XMLSystem::Attrib((XMLSystem *)(this + 24), "NodeType", "GeomData", 0);
    XMLSystem::CreateNode((XMLSystem *)(this + 24), v8, "NodeTM");
    XMLSystem::Attrib((XMLSystem *)(this + 24), "Row0", (ModelFrame *)((char *)*a3 + 100), 0);
    XMLSystem::Attrib((XMLSystem *)(this + 24), "Row1", (ModelFrame *)((char *)*a3 + 116), 0);
    XMLSystem::Attrib((XMLSystem *)(this + 24), "Row2", (ModelFrame *)((char *)*a3 + 132), 0);
    XMLSystem::Attrib((XMLSystem *)(this + 24), "Row3", (ModelFrame *)((char *)*a3 + 148), 0);
  }
  v9 = *a3;
  v91 = 9999;
  v92 = 0;
  if ( !ModelFrame::GetMesh(v9, 0) )
    goto LABEL_53;
  do
  {
    Mesh = ModelFrame::GetMesh(*a3, 0);
    v11 = *((_DWORD *)Mesh + 616);
    v12 = (char *)Mesh + 2460;
    if ( !v11 || v92 >= (*((_DWORD *)v12 + 2) - v11) >> 2 )
      break;
    for ( i = 0; ; ++i )
    {
      v14 = this[18];
      if ( !v14 || i >= (this[19] - v14) >> 2 )
        break;
      v15 = *a3;
      v90 = (struct xercesc_2_5::DOMNode **)(this[18] + 4 * i);
      v16 = ModelFrame::GetMesh(v15, 0);
      v17 = *((_DWORD *)v16 + 616);
      v18 = (char *)v16 + 2460;
      if ( !v17 || v92 >= (*((_DWORD *)v16 + 617) - v17) >> 2 )
        invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(*(_DWORD *)(*((_DWORD *)v18 + 1) + 4 * v92) + 184, (char *)*v90 + 184)
        && (int)i < v91 )
      {
        v91 = i;
        break;
      }
    }
    v19 = *a3;
    ++v92;
  }
  while ( ModelFrame::GetMesh(v19, 0) );
  if ( v91 == 9999 )
  {
LABEL_53:
    if ( ModelFrame::GetMesh(*a3, 0) )
    {
      v20 = ModelFrame::GetMesh(*a3, 0);
      v21 = *((_DWORD *)v20 + 616);
      v22 = (char *)v20 + 2460;
      if ( v21 )
      {
        if ( (*((_DWORD *)v22 + 2) - v21) >> 2 )
        {
          v23 = ModelFrame::GetMesh(*a3, 0);
          v24 = *((_DWORD *)v23 + 616);
          v25 = (char *)v23 + 2460;
          if ( !v24 || !((*((_DWORD *)v25 + 2) - v24) >> 2) )
            invalid_parameter_noinfo();
          v26 = (ModelFrame **)std::string::c_str(**((_DWORD **)v25 + 1) + 184);
          v27 = *a3;
          v89 = v26;
          v28 = (const char *)std::string::c_str((char *)v27 + 44);
          SeriousWarning("Mat on mesh doesn't exist in scene Obj: %s Mat: %s", v28, (const char *)v89);
        }
      }
    }
  }
  if ( ModelFrame::GetMesh(*a3, 0) )
  {
    v29 = ModelFrame::GetMesh(*a3, 0);
    v30 = *((_DWORD *)v29 + 616);
    v31 = (char *)v29 + 2460;
    if ( !v30 || !((*((_DWORD *)v31 + 2) - v30) >> 2) )
    {
      v32 = (const char *)std::string::c_str((char *)*a3 + 44);
      SeriousWarning("No mats on Obj: %s", v32);
    }
  }
  if ( v91 != 9999 )
  {
    sprintf(Buffer, "%d", v91);
    v33 = XMLSystem::CreateNode((XMLSystem *)(this + 24), a2, "MaterialIndex");
    XMLSystem::CreateTextNode((XMLSystem *)(this + 24), v33, Buffer);
  }
  if ( ModelFrame::GetMesh(*a3, 0) )
  {
    ++this[23];
    if ( (unsigned __int8)std::operator==<char>((char *)*a3 + 72, &unk_101BCE7A) )
    {
      *(_DWORD *)&v88.wHour = sub_10009F20((int)v94, this[23]);
      *(_DWORD *)&v88.wDayOfWeek = (char *)*a3 + 44;
      v102 = 0;
      v34 = std::operator+<char>(v98, *(_DWORD *)&v88.wDayOfWeek, *(_DWORD *)&v88.wHour);
      LOBYTE(v102) = 1;
      v35 = std::operator+<char>(&v96.wSecond, v34, ".buf");
      v36 = *a3;
      LOBYTE(v102) = 2;
      std::string::operator=((char *)v36 + 72, v35);
      LOBYTE(v102) = 1;
      std::string::~string(&v96.wSecond);
      LOBYTE(v102) = 0;
      std::string::~string(v98);
      v102 = -1;
      std::string::~string(v94);
    }
    std::string::string(v93, (char *)*a3 + 72);
    v102 = 3;
    sub_100116A0(this + 8, v93);
    v37 = *a3;
    v89 = (ModelFrame **)&unk_101BCE7B;
    v38 = ModelFrame::GetMesh(v37, 0);
    if ( (unsigned __int8)std::operator!=<char>((char *)v38 + 2383, v89) )
    {
      v39 = *a3;
      v89 = (ModelFrame **)".prt";
      v40 = ModelFrame::GetMesh(v39, 0);
      v41 = (void *)std::operator+<char>(v94, (char *)v40 + 2383, v89);
      LOBYTE(v102) = 4;
      sub_100116A0(this + 8, v41);
      LOBYTE(v102) = 3;
      std::string::~string(v94);
    }
    v42 = ModelFrame::GetMesh(*a3, 0);
    LOBYTE(v90) = (*(int (__thiscall **)(struct Mesh *))(*(_DWORD *)v42 + 20))(v42);
    v43 = (struct xercesc_2_5::DOMNode **)this[14];
    v44 = this + 12;
    v89 = v90;
    v45 = (unsigned int)v43 <= this[15];
    v90 = v43;
    if ( !v45 )
    {
      invalid_parameter_noinfo();
      v43 = v90;
    }
    *(_DWORD *)&v88.wDayOfWeek = 0;
    *(_DWORD *)&v88.wHour = v43;
    *(_DWORD *)&v88.wSecond = 0;
    if ( this == (int *)-48 )
      invalid_parameter_noinfo();
    *(_DWORD *)&v88.wDayOfWeek = this + 12;
    if ( *v44 )
      sub_1000D300(&v88.wDayOfWeek, *v44);
    sub_10014B40(this + 12, &v96, *(int **)&v88.wDayOfWeek, *(_DWORD **)&v88.wHour, *(int *)&v88.wSecond, (char)v89);
    v46 = XMLSystem::CreateNode((XMLSystem *)(this + 24), a2, "GeomData");
    v89 = 0;
    v90 = &v85;
    v47 = v46;
    std::string::string(&v85, v93);
    XMLSystem::Attrib(
      (XMLSystem *)(this + 24),
      "Include",
      (char)v85,
      v86,
      v87,
      *(int *)&v88.wYear,
      *(int *)&v88.wDayOfWeek,
      *(int *)&v88.wHour,
      *(int *)&v88.wSecond,
      (struct xercesc_2_5::DOMNode *)v89);
    XMLSystem::Attrib((XMLSystem *)(this + 24), "LoadScale", *((float *)*a3 + 92), 0);
    v48 = *a3;
    v89 = 0;
    v49 = ModelFrame::GetMesh(v48, 0);
    XMLSystem::Attrib(
      (XMLSystem *)(this + 24),
      "BBoxMin",
      (struct Mesh *)((char *)v49 + 2436),
      (struct xercesc_2_5::DOMNode *)v89);
    v50 = *a3;
    v89 = 0;
    v51 = ModelFrame::GetMesh(v50, 0);
    XMLSystem::Attrib(
      (XMLSystem *)(this + 24),
      "BBoxMax",
      (struct Mesh *)((char *)v51 + 2448),
      (struct xercesc_2_5::DOMNode *)v89);
    XMLSystem::CreateNode((XMLSystem *)(this + 24), v47, "Time");
    v52 = *a3;
    v89 = 0;
    v53 = ModelFrame::GetMesh(v52, 0);
    v54 = *((_DWORD *)v53 + 22);
    v53 = (struct Mesh *)((char *)v53 + 88);
    *(_DWORD *)&v88.wYear = v54;
    *(_DWORD *)&v88.wDayOfWeek = *((_DWORD *)v53 + 1);
    v55 = *((_DWORD *)v53 + 2);
    v56 = *((_DWORD *)v53 + 3);
    *(_DWORD *)&v88.wHour = v55;
    *(_DWORD *)&v88.wSecond = v56;
    XMLSystem::Attrib((XMLSystem *)(this + 24), "Moved", v88, (struct xercesc_2_5::DOMNode *)v89);
    v57 = *a3;
    v89 = 0;
    v58 = ModelFrame::GetMesh(v57, 0);
    v59 = *((_DWORD *)v58 + 26);
    v58 = (struct Mesh *)((char *)v58 + 104);
    *(_DWORD *)&v88.wYear = v59;
    *(_DWORD *)&v88.wDayOfWeek = *((_DWORD *)v58 + 1);
    v60 = *((_DWORD *)v58 + 2);
    v61 = *((_DWORD *)v58 + 3);
    *(_DWORD *)&v88.wHour = v60;
    *(_DWORD *)&v88.wSecond = v61;
    XMLSystem::Attrib((XMLSystem *)(this + 24), "Modified", v88, (struct xercesc_2_5::DOMNode *)v89);
    if ( *((_BYTE *)ModelFrame::GetMesh(*a3, 0) + 120)
      || (v62 = ModelFrame::GetMesh(*a3, 0),
          (*(unsigned __int8 (__thiscall **)(struct Mesh *))(*(_DWORD *)v62 + 12))(v62))
      || (v63 = ModelFrame::GetMesh(*a3, 0),
          (*(unsigned __int8 (__thiscall **)(struct Mesh *))(*(_DWORD *)v63 + 24))(v63)) )
    {
      v64 = ModelFrame::GetMesh(*a3, 0);
      v90 = (struct xercesc_2_5::DOMNode **)&v86;
      std::string::string(&v86, (char *)v64 + 2383);
      v65 = *a3;
      LOBYTE(v102) = 5;
      v66 = ModelFrame::GetMesh(v65, 0);
      v67 = *a3;
      v85 = (struct Mesh *)((char *)v66 + 120);
      v84 = v47;
      v91 = (int)&v77;
      std::string::string(&v77, (char *)v67 + 44);
      LOBYTE(v102) = 3;
      sub_1003F520(
        (int)this,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87,
        *(int *)&v88.wYear,
        *(int *)&v88.wDayOfWeek,
        *(int *)&v88.wHour,
        *(int *)&v88.wSecond,
        (int)v89);
    }
    last_of = std::string::find_last_of(this + 1, "\\", std::string::npos);
    v69 = std::string::substr(this + 1, v97, 0, last_of + 1);
    LOBYTE(v102) = 6;
    std::operator+<char>(v95, v69, v93);
    LOBYTE(v102) = 8;
    std::string::~string(v97);
    v89 = a3;
    v90 = &v85;
    std::string::string(&v85, v95);
    ISave::WriteMeshBinary(
      (ISave *)this,
      (char)v85,
      v86,
      v87,
      *(int *)&v88.wYear,
      *(int *)&v88.wDayOfWeek,
      *(int *)&v88.wHour,
      *(int *)&v88.wSecond,
      v89);
    LOBYTE(v102) = 3;
    std::string::~string(v95);
    v102 = -1;
    std::string::~string(v93);
  }
  v70 = *((_DWORD *)*a3 + 90);
  if ( v70 )
  {
    v71 = *((float *)*a3 + 92);
    v89 = (ModelFrame **)(a4 + 1);
    *(float *)(v70 + 368) = v71;
    sub_100431A0(a2, (int)*a3 + 360, (int)v89);
  }
  result = *a3;
  v73 = *((_DWORD *)*a3 + 89);
  if ( v73 )
  {
    v74 = *((float *)result + 92);
    v89 = (ModelFrame **)(a4 + 1);
    *(float *)(v73 + 368) = v74;
    v75 = *(_DWORD *)a2;
    *(_DWORD *)&v88.wSecond = (char *)*a3 + 356;
    v76 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMNode *))(v75 + 16))(a2);
    return (ModelFrame *)sub_100431A0(v76, *(int *)&v88.wSecond, (int)v89);
  }
  return result;
}
