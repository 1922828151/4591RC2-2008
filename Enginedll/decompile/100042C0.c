/*
 * func-name: sub_100042C0
 * func-address: 0x100042c0
 * callers: 0x100042c0, 0x100049f0
 * callees: 0x10001c10, 0x10002020, 0x100042c0, 0x10009f20, 0x1000d300, 0x100116a0, 0x10014730, 0x10014b40, 0x100977a0, 0x1009dd90
 */

int __thiscall sub_100042C0(ISave *this, FILE *Stream, ModelFrame **a3)
{
  ModelFrame *v3; // eax
  FILE *v4; // edi
  void (__cdecl *v6)(const void *, size_t, size_t, FILE *); // ebx
  ModelFrame *v7; // ecx
  struct Mesh *Mesh; // eax
  int v9; // ecx
  char *v10; // eax
  unsigned int i; // ebx
  int v12; // ecx
  ModelFrame *v13; // ecx
  struct Mesh *v14; // eax
  int v15; // ecx
  char *v16; // edi
  ModelFrame *v17; // ecx
  struct Mesh *v18; // eax
  int v19; // ecx
  char *v20; // eax
  struct Mesh *v21; // eax
  int v22; // ecx
  char *v23; // eax
  FILE *v24; // eax
  ModelFrame *v25; // ecx
  const char *v26; // eax
  struct Mesh *v27; // eax
  int v28; // ecx
  char *v29; // eax
  const char *v30; // eax
  struct Mesh *v31; // eax
  int v32; // eax
  int v33; // eax
  ModelFrame *v34; // ecx
  ModelFrame *v35; // ecx
  struct Mesh *v36; // eax
  ModelFrame *v37; // ecx
  struct Mesh *v38; // eax
  void *v39; // eax
  struct Mesh *v40; // eax
  unsigned int v41; // eax
  bool v42; // cc
  int *v43; // ecx
  ModelFrame *v44; // ecx
  struct Mesh *v45; // eax
  ModelFrame *v46; // ecx
  struct Mesh *v47; // eax
  struct Mesh *v48; // eax
  struct Mesh *v49; // eax
  struct Mesh *v50; // eax
  ModelFrame *v51; // ecx
  ModelFrame *v52; // eax
  int last_of; // eax
  int v54; // eax
  ModelFrame *v55; // ecx
  bool v56; // zf
  char v58; // [esp-40h] [ebp-108h] BYREF
  int v59; // [esp-3Ch] [ebp-104h]
  int v60; // [esp-38h] [ebp-100h]
  int v61; // [esp-34h] [ebp-FCh]
  int v62; // [esp-30h] [ebp-F8h]
  int v63; // [esp-2Ch] [ebp-F4h]
  int v64; // [esp-28h] [ebp-F0h]
  FILE *v65; // [esp-24h] [ebp-ECh]
  char *v66; // [esp-20h] [ebp-E8h] BYREF
  int v67; // [esp-1Ch] [ebp-E4h] BYREF
  int v68; // [esp-18h] [ebp-E0h]
  int v69; // [esp-14h] [ebp-DCh]
  int v70; // [esp-10h] [ebp-D8h] BYREF
  unsigned int v71; // [esp-Ch] [ebp-D4h]
  size_t v72; // [esp-8h] [ebp-D0h]
  FILE *v73; // [esp-4h] [ebp-CCh]
  _WORD v74[3]; // [esp+12h] [ebp-B6h] BYREF
  unsigned int v75; // [esp+18h] [ebp-B0h]
  char v76; // [esp+1Fh] [ebp-A9h] BYREF
  int Buffer; // [esp+20h] [ebp-A8h] BYREF
  int v78[7]; // [esp+24h] [ebp-A4h] BYREF
  _BYTE v79[28]; // [esp+40h] [ebp-88h] BYREF
  int v80[7]; // [esp+5Ch] [ebp-6Ch] BYREF
  int v81[3]; // [esp+78h] [ebp-50h] BYREF
  char v82[28]; // [esp+84h] [ebp-44h] BYREF
  _BYTE v83[28]; // [esp+A0h] [ebp-28h] BYREF
  int v84; // [esp+C4h] [ebp-4h]

  v3 = *a3;
  v4 = Stream;
  v73 = Stream;
  *(_DWORD *)&v74[1] = &v66;
  std::string::string(&v66, (char *)v3 + 44);
  sub_10001C10((char)v66, v67, v68, v69, v70, v71, v72, v73);
  v6 = (void (__cdecl *)(const void *, size_t, size_t, FILE *))fwrite;
  fwrite((char *)*a3 + 100, 0x40u, 1u, Stream);
  v7 = *a3;
  Buffer = 9999;
  v75 = 0;
  if ( ModelFrame::GetMesh(v7, 0) )
  {
    do
    {
      Mesh = ModelFrame::GetMesh(*a3, 0);
      v9 = *((_DWORD *)Mesh + 616);
      v10 = (char *)Mesh + 2460;
      if ( !v9 || v75 >= (*((_DWORD *)v10 + 2) - v9) >> 2 )
        break;
      for ( i = 0; ; ++i )
      {
        v12 = *((_DWORD *)this + 18);
        if ( !v12 || i >= (*((_DWORD *)this + 19) - v12) >> 2 )
          break;
        v13 = *a3;
        *(_DWORD *)&v74[1] = *((_DWORD *)this + 18) + 4 * i;
        v14 = ModelFrame::GetMesh(v13, 0);
        v15 = *((_DWORD *)v14 + 616);
        v16 = (char *)v14 + 2460;
        if ( !v15 || v75 >= (*((_DWORD *)v14 + 617) - v15) >> 2 )
          invalid_parameter_noinfo();
        if ( (unsigned __int8)std::operator==<char>(
                                *(_DWORD *)(*((_DWORD *)v16 + 1) + 4 * v75) + 184,
                                **(_DWORD **)&v74[1] + 184)
          && (int)i < Buffer )
        {
          v4 = Stream;
          Buffer = i;
          break;
        }
        v4 = Stream;
      }
      v17 = *a3;
      ++v75;
      v6 = (void (__cdecl *)(const void *, size_t, size_t, FILE *))fwrite;
    }
    while ( ModelFrame::GetMesh(v17, 0) );
  }
  if ( Buffer == 9999 )
  {
    if ( ModelFrame::GetMesh(*a3, 0) )
    {
      v18 = ModelFrame::GetMesh(*a3, 0);
      v19 = *((_DWORD *)v18 + 616);
      v20 = (char *)v18 + 2460;
      if ( v19 )
      {
        if ( (*((_DWORD *)v20 + 2) - v19) >> 2 )
        {
          v21 = ModelFrame::GetMesh(*a3, 0);
          v22 = *((_DWORD *)v21 + 616);
          v23 = (char *)v21 + 2460;
          *(_DWORD *)&v74[1] = v23;
          if ( !v22 || !((*((_DWORD *)v23 + 2) - v22) >> 2) )
          {
            invalid_parameter_noinfo();
            v23 = *(char **)&v74[1];
          }
          v24 = (FILE *)std::string::c_str(**((_DWORD **)v23 + 1) + 184);
          v25 = *a3;
          v73 = v24;
          v26 = (const char *)std::string::c_str((char *)v25 + 44);
          SeriousWarning("Mat on mesh doesn't exist in scene Obj: %s Mat: %s", v26, (const char *)v73);
        }
      }
    }
  }
  if ( ModelFrame::GetMesh(*a3, 0) )
  {
    v27 = ModelFrame::GetMesh(*a3, 0);
    v28 = *((_DWORD *)v27 + 616);
    v29 = (char *)v27 + 2460;
    if ( !v28 || !((*((_DWORD *)v29 + 2) - v28) >> 2) )
    {
      v30 = (const char *)std::string::c_str((char *)*a3 + 44);
      SeriousWarning("No mats on Obj: %s", v30);
    }
  }
  v6(&Buffer, 4u, 1u, v4);
  v31 = ModelFrame::GetMesh(*a3, 0);
  v73 = v4;
  v72 = 1;
  v71 = 1;
  if ( v31 )
  {
    v76 = 1;
    v6(&v76, v71, v72, v73);
    ++*((_DWORD *)this + 21);
    if ( (unsigned __int8)std::operator==<char>((char *)*a3 + 72, &unk_101BAB5A) )
    {
      v71 = sub_10009F20(v78, *((_DWORD *)this + 21));
      v70 = (int)*a3 + 44;
      v84 = 0;
      v32 = std::operator+<char>(v83, v70, v71);
      LOBYTE(v84) = 1;
      v33 = std::operator+<char>(v82, v32, ".buf");
      v34 = *a3;
      LOBYTE(v84) = 2;
      std::string::operator=((char *)v34 + 72, v33);
      LOBYTE(v84) = 1;
      std::string::~string(v82);
      LOBYTE(v84) = 0;
      std::string::~string(v83);
      v84 = -1;
      std::string::~string(v78);
    }
    std::string::string(v79, (char *)*a3 + 72);
    v84 = 3;
    sub_100116A0((int)this + 32, v79);
    v35 = *a3;
    v73 = (FILE *)&unk_101BAB5B;
    v36 = ModelFrame::GetMesh(v35, 0);
    if ( (unsigned __int8)std::operator!=<char>((char *)v36 + 2383, v73) )
    {
      v37 = *a3;
      v73 = (FILE *)".prt";
      v38 = ModelFrame::GetMesh(v37, 0);
      v39 = (void *)std::operator+<char>(v78, (char *)v38 + 2383, v73);
      LOBYTE(v84) = 4;
      sub_100116A0((int)this + 32, v39);
      LOBYTE(v84) = 3;
      std::string::~string(v78);
    }
    v40 = ModelFrame::GetMesh(*a3, 0);
    LOBYTE(v74[1]) = (*(int (__thiscall **)(struct Mesh *))(*(_DWORD *)v40 + 20))(v40);
    v41 = *((_DWORD *)this + 14);
    v73 = *(FILE **)&v74[1];
    v42 = v41 <= *((_DWORD *)this + 15);
    v43 = &v70;
    v75 = (unsigned int)&v70;
    *(_DWORD *)&v74[1] = v41;
    if ( !v42 )
    {
      invalid_parameter_noinfo();
      v41 = *(_DWORD *)&v74[1];
      v43 = &v70;
    }
    v71 = v41;
    v70 = 0;
    v72 = 0;
    if ( this == (ISave *)-48 )
    {
      invalid_parameter_noinfo();
      v43 = (int *)v75;
    }
    *v43 = (int)this + 48;
    if ( *((_DWORD *)this + 12) )
      sub_1000D300(*((_DWORD *)this + 12));
    sub_10014B40(v81, v70, v71, v72, v73);
    v73 = v4;
    *(_DWORD *)&v74[1] = &v66;
    std::string::string(&v66, v79);
    sub_10001C10((char)v66, v67, v68, v69, v70, v71, v72, v73);
    v6((char *)*a3 + 368, 4u, 1u, v4);
    v6((char *)*a3 + 396, 0xCu, 1u, v4);
    v6((char *)*a3 + 408, 0xCu, 1u, v4);
    v44 = *a3;
    v73 = v4;
    v72 = 1;
    v71 = 16;
    v45 = ModelFrame::GetMesh(v44, 0);
    v6((char *)v45 + 88, v71, v72, v73);
    v46 = *a3;
    v73 = v4;
    v72 = 1;
    v71 = 16;
    v47 = ModelFrame::GetMesh(v46, 0);
    v6((char *)v47 + 104, v71, v72, v73);
    if ( *((_BYTE *)ModelFrame::GetMesh(*a3, 0) + 120)
      || (v48 = ModelFrame::GetMesh(*a3, 0),
          (*(unsigned __int8 (__thiscall **)(struct Mesh *))(*(_DWORD *)v48 + 12))(v48))
      || (v49 = ModelFrame::GetMesh(*a3, 0),
          (*(unsigned __int8 (__thiscall **)(struct Mesh *))(*(_DWORD *)v49 + 24))(v49)) )
    {
      HIBYTE(v74[0]) = 1;
      v6((char *)v74 + 1, 1u, 1u, v4);
      v50 = ModelFrame::GetMesh(*a3, 0);
      *(_DWORD *)&v74[1] = &v67;
      std::string::string(&v67, (char *)v50 + 2383);
      v51 = *a3;
      LOBYTE(v84) = 5;
      v66 = (char *)ModelFrame::GetMesh(v51, 0) + 120;
      v52 = *a3;
      v65 = v4;
      v75 = (unsigned int)&v58;
      std::string::string(&v58, (char *)v52 + 44);
      LOBYTE(v84) = 3;
      sub_10002020(v58, v59, v60, v61, v62, v63, v64, (int)v65, v66, v67, v68, v69, v70, v71, v72, (int)v73);
    }
    else
    {
      HIBYTE(v74[0]) = 0;
      v6((char *)v74 + 1, 1u, 1u, v4);
    }
    last_of = std::string::find_last_of((char *)this + 4, "\\", std::string::npos);
    v54 = std::string::substr((char *)this + 4, v78, 0, last_of + 1);
    LOBYTE(v84) = 6;
    std::operator+<char>(v80, v54, v79);
    LOBYTE(v84) = 8;
    std::string::~string(v78);
    if ( !ISave::IsConverting || ISave::ForceMeshSave )
    {
      v73 = (FILE *)a3;
      *(_DWORD *)&v74[1] = &v66;
      std::string::string(&v66, v80);
      ISave::WriteMeshBinary(this, (char)v66, v67, v68, v69, v70, v71, v72, (int)v73);
    }
    LOBYTE(v84) = 3;
    std::string::~string(v80);
    v84 = -1;
    std::string::~string(v79);
  }
  else
  {
    HIBYTE(v74[0]) = 0;
    v6((char *)v74 + 1, v71, v72, v73);
  }
  v55 = *a3;
  v73 = v4;
  LOBYTE(v74[0]) = 1;
  v56 = *((_DWORD *)v55 + 90) == 0;
  v72 = 1;
  v71 = 1;
  if ( v56 )
  {
    LOBYTE(v74[0]) = 0;
    v6(v74, v71, v72, v73);
  }
  else
  {
    v6(v74, v71, v72, v73);
    *(float *)(*((_DWORD *)*a3 + 90) + 368) = *((float *)*a3 + 92);
    sub_100042C0(v4, (int)*a3 + 360);
  }
  v56 = *((_DWORD *)*a3 + 89) == 0;
  v73 = v4;
  v72 = 1;
  v71 = 1;
  if ( v56 )
  {
    LOBYTE(v74[0]) = 0;
    return ((size_t (__cdecl *)(const void *, size_t, size_t, FILE *))v6)(v74, v71, v72, v73);
  }
  else
  {
    LOBYTE(v74[0]) = 1;
    v6(v74, v71, v72, v73);
    *(float *)(*((_DWORD *)*a3 + 89) + 368) = *((float *)*a3 + 92);
    return sub_100042C0(v4, (int)*a3 + 356);
  }
}
