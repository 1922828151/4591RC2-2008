/*
 * func-name: ?CreateTriangleMesh@NxPhysics@@QAEPAVNxTriangleMesh@@PAVModel@@@Z
 * func-address: 0x101430d0
 * callers: 0x101438a0
 * callees: 0x10001330, 0x10076ef0, 0x100977a0, 0x1009dd00, 0x1009ee50, 0x10148ee0, 0x10179050, 0x101a2500, 0x101a2534
 */

struct NxTriangleMesh *__thiscall NxPhysics::CreateTriangleMesh(NxPhysics *this, ModelFrame **a2)
{
  ModelFrame **v2; // edi
  int v3; // esi
  bool v4; // zf
  char *v6; // eax
  int v7; // ebx
  ModelFrame *v8; // ecx
  void *v9; // eax
  char *v10; // ebp
  _DWORD *v11; // ebx
  unsigned int v12; // ecx
  _DWORD *v13; // esi
  unsigned int v14; // edx
  int v15; // edi
  int v16; // ecx
  unsigned int v17; // ebp
  int v18; // eax
  int v19; // ebp
  char *v20; // eax
  int v21; // eax
  unsigned int v22; // ebp
  int v23; // eax
  unsigned int v24; // ebx
  int v25; // ebp
  char *v26; // eax
  int v27; // eax
  unsigned int v28; // ebp
  int v29; // eax
  int v30; // ebp
  char *v31; // eax
  char *v32; // eax
  void (__thiscall ***v33)(_DWORD, int); // edi
  const CHAR *v34; // eax
  char *v35; // eax
  int v36; // eax
  char *v37; // edi
  ModelFrame *v38; // ecx
  _DWORD *v39; // esi
  float v40; // edi
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  int v43; // [esp+Ch] [ebp-E8h] BYREF
  void *v44; // [esp+10h] [ebp-E4h]
  int v45; // [esp+14h] [ebp-E0h]
  int v46; // [esp+18h] [ebp-DCh]
  char *v47; // [esp+1Ch] [ebp-D8h]
  unsigned int v48; // [esp+20h] [ebp-D4h]
  unsigned int v49; // [esp+24h] [ebp-D0h]
  float v50; // [esp+28h] [ebp-CCh]
  float v51; // [esp+2Ch] [ebp-C8h] BYREF
  void *v52; // [esp+30h] [ebp-C4h]
  float v53; // [esp+34h] [ebp-C0h]
  float v54; // [esp+38h] [ebp-BCh]
  NxPhysics *v55; // [esp+3Ch] [ebp-B8h]
  float v56; // [esp+40h] [ebp-B4h] BYREF
  float v57; // [esp+44h] [ebp-B0h]
  float v58; // [esp+48h] [ebp-ACh]
  float v59; // [esp+4Ch] [ebp-A8h] BYREF
  float v60; // [esp+50h] [ebp-A4h]
  float v61; // [esp+54h] [ebp-A0h]
  _BYTE v62[28]; // [esp+58h] [ebp-9Ch] BYREF
  _DWORD v63[13]; // [esp+74h] [ebp-80h] BYREF
  float v64[16]; // [esp+A8h] [ebp-4Ch] BYREF
  int v65; // [esp+F0h] [ebp-4h]

  v2 = a2;
  v3 = 0;
  v4 = a2[77] == 0;
  v55 = this;
  if ( v4 )
    return 0;
  std::operator+<char>(v62, a2 + 80, ".240physx");
  v65 = 0;
  v47 = (char *)operator new(8u);
  LOBYTE(v65) = 1;
  if ( v47 )
  {
    v6 = (char *)std::string::c_str(v62);
    v7 = sub_10148EE0(v6, 1);
  }
  else
  {
    v7 = 0;
  }
  v4 = *(_DWORD *)(v7 + 4) == 0;
  LOBYTE(v65) = 0;
  v47 = (char *)v7;
  v49 = 0;
  if ( v4 )
  {
    (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    if ( a2[36] )
    {
      v2 = (ModelFrame **)a2[36];
      a2 = v2;
    }
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v8 = v2[77];
    LOBYTE(v65) = 2;
    ModelFrame::EnumerateMeshes(v8, (int)&v43);
    v9 = v44;
    if ( !v44 )
      goto LABEL_60;
    if ( !((v45 - (int)v44) >> 2) )
      goto LABEL_59;
    v10 = 0;
    v47 = 0;
    sub_10001330(v64, v2 + 56);
    (*((void (__thiscall **)(ModelFrame **, void *))*v2 + 8))(v2, &unk_11241C28);
    ModelFrame::UpdateChildrenMatrices(v2[77]);
    v11 = v44;
    v12 = 0;
    v48 = 0;
    while ( v11 && v12 < (v45 - (int)v11) >> 2 )
    {
      v13 = *(_DWORD **)(v11[v48] + 452);
      if ( v13 )
      {
        if ( v13[9] )
        {
          v3 = v13[9];
          operator delete(v11);
          v44 = 0;
          v45 = 0;
          v46 = 0;
          goto LABEL_93;
        }
        v14 = 0;
        v15 = 36 * (_DWORD)v10;
        v50 = 0.0;
        while ( 1 )
        {
          v16 = v13[5];
          v49 = v14;
          if ( !v16 || v14 >= (v13[6] - v16) >> 6 || v15 > 1799964 )
            break;
          if ( v14 >= (v13[6] - v16) >> 6 )
          {
            invalid_parameter_noinfo();
            v11 = v44;
          }
          v17 = *(_DWORD *)(LODWORD(v50) + v13[5]);
          v18 = v13[1];
          if ( !v18 || v17 >= (v13[2] - v18) / 12 )
          {
            invalid_parameter_noinfo();
            v11 = v44;
          }
          v19 = v13[1] + 12 * v17;
          if ( !v11 || v48 >= (v45 - (int)v11) >> 2 )
            invalid_parameter_noinfo();
          v56 = 0.0;
          v57 = 0.0;
          v58 = 0.0;
          sub_10179050(v19, &v56);
          v20 = (char *)dword_11241C20;
          *(float *)((char *)dword_11241C20 + v15) = v56;
          *(float *)&v20[v15 + 4] = v57;
          *(float *)&v20[v15 + 8] = v58;
          v21 = v13[5];
          if ( !v21 || v49 >= (v13[6] - v21) >> 6 )
            invalid_parameter_noinfo();
          v22 = *(_DWORD *)(LODWORD(v50) + v13[5] + 4);
          v23 = v13[1];
          if ( !v23 || v22 >= (v13[2] - v23) / 12 )
            invalid_parameter_noinfo();
          v24 = v48;
          v25 = v13[1] + 12 * v22;
          if ( !v44 || v48 >= (v45 - (int)v44) >> 2 )
            invalid_parameter_noinfo();
          v59 = 0.0;
          v60 = 0.0;
          v61 = 0.0;
          sub_10179050(v25, &v59);
          v26 = (char *)dword_11241C20;
          *(float *)((char *)dword_11241C20 + v15 + 12) = v59;
          *(float *)&v26[v15 + 16] = v60;
          *(float *)&v26[v15 + 20] = v61;
          v27 = v13[5];
          if ( !v27 || v49 >= (v13[6] - v27) >> 6 )
            invalid_parameter_noinfo();
          v28 = *(_DWORD *)(LODWORD(v50) + v13[5] + 8);
          v29 = v13[1];
          if ( !v29 || v28 >= (v13[2] - v29) / 12 )
            invalid_parameter_noinfo();
          v30 = v13[1] + 12 * v28;
          if ( !v44 || v24 >= (v45 - (int)v44) >> 2 )
            invalid_parameter_noinfo();
          v51 = 0.0;
          *(float *)&v52 = 0.0;
          v53 = 0.0;
          sub_10179050(v30, &v51);
          v31 = (char *)dword_11241C20;
          *(float *)((char *)dword_11241C20 + v15 + 24) = v51;
          *(float *)&v31[v15 + 28] = *(float *)&v52;
          *(float *)&v31[v15 + 32] = v53;
          v11 = v44;
          v10 = v47 + 1;
          v15 += 36;
          v14 = v49 + 1;
          LODWORD(v50) += 64;
          ++v47;
        }
        v2 = a2;
        v49 = (unsigned int)v13;
      }
      v12 = ++v48;
      v3 = 0;
    }
    (*((void (__thiscall **)(ModelFrame **, float *))*v2 + 8))(v2, v64);
    ModelFrame::UpdateChildrenMatrices(v2[77]);
    if ( !v10 )
    {
LABEL_58:
      v9 = v44;
      if ( !v44 )
      {
LABEL_60:
        v44 = 0;
        v45 = 0;
        v46 = 0;
LABEL_74:
        v65 = -1;
        std::string::~string(v62);
        return 0;
      }
LABEL_59:
      operator delete(v9);
      goto LABEL_60;
    }
    *(float *)&v63[12] = 0.001;
    v63[0] = 3 * (_DWORD)v10;
    *(float *)&v63[10] = 0.0;
    v63[11] = 0;
    v63[1] = v10;
    v63[2] = 12;
    v63[3] = 12;
    v63[4] = dword_11241C20;
    v63[5] = dword_11241C24;
    memset(&v63[6], 0, 12);
    v63[9] = 255;
    v47 = (char *)operator new(8u);
    LOBYTE(v65) = 3;
    if ( v47 )
    {
      v32 = (char *)std::string::c_str(v62);
      v33 = (void (__thiscall ***)(_DWORD, int))sub_10148EE0(v32, 0);
    }
    else
    {
      v33 = 0;
    }
    LOBYTE(v65) = 2;
    if ( !(unsigned __int8)NxCookTriangleMesh(v63, v33) )
    {
      if ( v33 )
        (**v33)(v33, 1);
      v34 = (const CHAR *)std::string::c_str(v62);
      DeleteFileA(v34);
      goto LABEL_58;
    }
    if ( v33 )
      (**v33)(v33, 1);
    v47 = (char *)operator new(8u);
    LOBYTE(v65) = 4;
    if ( v47 )
    {
      v35 = (char *)std::string::c_str(v62);
      v36 = sub_10148EE0(v35, 1);
    }
    else
    {
      v36 = 0;
    }
    v37 = (char *)v36;
    LOBYTE(v65) = 0;
    if ( v44 )
      operator delete(v44);
    v44 = 0;
    v45 = 0;
    v46 = 0;
  }
  else
  {
    *(float *)&v52 = 0.0;
    v53 = 0.0;
    v54 = 0.0;
    v38 = a2[77];
    LOBYTE(v65) = 5;
    ModelFrame::EnumerateMeshes(v38, (int)&v51);
    v39 = v52;
    if ( *(float *)&v52 == 0.0 || (v40 = v53, !((LODWORD(v53) - (int)v52) >> 2)) )
    {
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
      if ( *(float *)&v52 != 0.0 )
        operator delete(v52);
      *(float *)&v52 = 0.0;
      v53 = 0.0;
      v54 = 0.0;
      goto LABEL_74;
    }
    v41 = 0;
    if ( std::vector<Model *>::size(&v51) )
    {
      while ( 1 )
      {
        if ( !v39 || v41 >= (LODWORD(v40) - (int)v39) >> 2 )
        {
          invalid_parameter_noinfo();
          v40 = v53;
          v39 = v52;
        }
        if ( *(_DWORD *)(v39[v41] + 452) )
          break;
        if ( ++v41 >= std::vector<Model *>::size(&v51) )
          goto LABEL_86;
      }
      if ( !v39 || v41 >= (LODWORD(v40) - (int)v39) >> 2 )
      {
        invalid_parameter_noinfo();
        v39 = v52;
      }
      v49 = *(_DWORD *)(v39[v41] + 452);
    }
LABEL_86:
    LOBYTE(v65) = 0;
    if ( v39 )
      operator delete(v39);
    v37 = v47;
    *(float *)&v52 = 0.0;
    v53 = 0.0;
    v54 = 0.0;
    v3 = 0;
  }
  if ( *((_DWORD *)v37 + 1) )
  {
    v42 = v49;
    if ( v49 )
    {
      v3 = (*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)v55 + 2) + 32))(*((_DWORD *)v55 + 2), v37);
      *(_DWORD *)(v42 + 36) = v3;
    }
  }
  (**(void (__thiscall ***)(char *, int))v37)(v37, 1);
LABEL_93:
  v65 = -1;
  std::string::~string(v62);
  return (struct NxTriangleMesh *)v3;
}
