/*
 * func-name: ?MergeSceneUsingPosAndRotMat@Editor@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAVVector@@AAVMatrix@@@Z
 * func-address: 0x10088400
 * callers: none
 * callees: 0x10001440, 0x10010f10, 0x10011750, 0x10012a30, 0x10013320, 0x100194a0, 0x10052ae0, 0x10076ef0, 0x10080030, 0x10080200, 0x10091470, 0x1009ff60, 0x100a01c0, 0x1011acf0, 0x1013a9b0, 0x1013df40, 0x101786e0, 0x10178c30, 0x10179590, 0x1017a0b0, 0x101a2500, 0x101a251c, 0x101a2780
 */

int __fastcall Editor::MergeSceneUsingPosAndRotMat(
        int a1,
        int a2,
        char a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        float *a10,
        int a11)
{
  float v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  char *v15; // edx
  int *v16; // ecx
  unsigned int i; // esi
  int *v18; // edi
  int *v19; // edi
  char *v20; // ebp
  _DWORD *v21; // ecx
  _BYTE *v22; // edx
  _DWORD *v23; // eax
  int v24; // edi
  int v25; // edi
  int v26; // eax
  _DWORD *v27; // ecx
  _DWORD *v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // edx
  int v32; // eax
  _DWORD **v33; // eax
  float v34; // ebp
  int *v35; // eax
  _DWORD **v36; // ecx
  int *v37; // ecx
  int v38; // edi
  bool v39; // zf
  FXManager *v40; // eax
  unsigned int v41; // edi
  int v42; // eax
  char *v43; // esi
  float *v44; // ecx
  double v45; // st7
  unsigned int j; // ebp
  char *v47; // edi
  char *v48; // edi
  float *v49; // eax
  char *v50; // edi
  char *v51; // edi
  float v52; // ecx
  int v53; // eax
  float v54; // edx
  char *v55; // ecx
  unsigned int v56; // edx
  char *v57; // esi
  char *v58; // esi
  char *v59; // edx
  unsigned int v60; // ecx
  char *v61; // esi
  char *v62; // esi
  void *v63; // edi
  _BYTE *v64; // eax
  char *v65; // esi
  char *v66; // edi
  int v67; // eax
  char *v68; // ebp
  char *v69; // esi
  char *v70; // edi
  char v72; // [esp-38h] [ebp-11A0h] BYREF
  int v73; // [esp-34h] [ebp-119Ch]
  int v74; // [esp-30h] [ebp-1198h]
  int v75; // [esp-2Ch] [ebp-1194h]
  int v76; // [esp-28h] [ebp-1190h]
  int v77; // [esp-24h] [ebp-118Ch]
  int v78; // [esp-20h] [ebp-1188h]
  char v79; // [esp-1Ch] [ebp-1184h] BYREF
  int v80; // [esp-18h] [ebp-1180h]
  int v81; // [esp-14h] [ebp-117Ch]
  int v82; // [esp-10h] [ebp-1178h]
  int v83; // [esp-Ch] [ebp-1174h]
  int v84; // [esp-8h] [ebp-1170h]
  struct World *v85; // [esp-4h] [ebp-116Ch]
  int *v86; // [esp+0h] [ebp-1168h]
  int v87; // [esp+14h] [ebp-1154h] BYREF
  void *v88; // [esp+18h] [ebp-1150h]
  unsigned int v89; // [esp+1Ch] [ebp-114Ch]
  int v90; // [esp+20h] [ebp-1148h]
  float v91; // [esp+24h] [ebp-1144h]
  int v92; // [esp+28h] [ebp-1140h] BYREF
  float v93; // [esp+2Ch] [ebp-113Ch]
  float v94; // [esp+30h] [ebp-1138h]
  float v95; // [esp+34h] [ebp-1134h]
  float v96; // [esp+38h] [ebp-1130h]
  float v97; // [esp+3Ch] [ebp-112Ch]
  float v98; // [esp+40h] [ebp-1128h]
  float v99; // [esp+44h] [ebp-1124h]
  int v100; // [esp+48h] [ebp-1120h] BYREF
  char *v101; // [esp+4Ch] [ebp-111Ch]
  char v102; // [esp+50h] [ebp-1118h] BYREF
  void *v103; // [esp+54h] [ebp-1114h]
  int v104; // [esp+58h] [ebp-1110h]
  int v105; // [esp+5Ch] [ebp-110Ch]
  float v106; // [esp+60h] [ebp-1108h]
  float v107; // [esp+64h] [ebp-1104h]
  float v108; // [esp+68h] [ebp-1100h]
  int v109; // [esp+6Ch] [ebp-10FCh] BYREF
  void *v110; // [esp+70h] [ebp-10F8h]
  int v111; // [esp+74h] [ebp-10F4h]
  int v112; // [esp+78h] [ebp-10F0h]
  _DWORD v113[16]; // [esp+7Ch] [ebp-10ECh] BYREF
  float v114[10]; // [esp+BCh] [ebp-10ACh] BYREF
  _BYTE v115[100]; // [esp+E4h] [ebp-1084h] BYREF
  char v116[44]; // [esp+148h] [ebp-1020h] BYREF
  void *v117; // [esp+174h] [ebp-FF4h]
  char *v118; // [esp+178h] [ebp-FF0h]
  int v119; // [esp+17Ch] [ebp-FECh]
  _BYTE v120[3220]; // [esp+288h] [ebp-EE0h] BYREF
  void *Destination; // [esp+F20h] [ebp-248h]
  void *Source; // [esp+F24h] [ebp-244h]
  int v123; // [esp+1164h] [ebp-4h]

  v11 = *(float *)&a1;
  v93 = *(float *)&a1;
  v86 = (int *)(a1 + 252);
  v123 = 0;
  *(_BYTE *)(a1 + 2060) = 1;
  LODWORD(v91) = a1 + 252;
  Camera::Camera((Camera *)v115, (const struct Camera *)v86);
  LOBYTE(v123) = 1;
  World::World((World *)v120);
  v103 = 0;
  v104 = 0;
  v105 = 0;
  v86 = (int *)v120;
  LOBYTE(v123) = 3;
  v12 = std::string::c_str(&a3);
  *(float *)&v92 = COERCE_FLOAT(&v79);
  std::string::string(&v79, v12);
  Serializer::LoadWorld(v79, v80, v81, v82, v83, v84, v85, v86);
  v13 = *(_DWORD *)(LODWORD(v11) + 2048);
  v86 = (int *)&v102;
  v14 = std::string::c_str(v13 + 3188);
  *(float *)&v92 = COERCE_FLOAT(&v79);
  std::string::string(&v79, v14);
  v97 = COERCE_FLOAT(&v72);
  LOBYTE(v123) = 4;
  std::string::string(&v72, &a3);
  LOBYTE(v123) = 3;
  Editor::CopyPrtFiles(v72, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, (int)v85, v86);
  v15 = 0;
  v88 = 0;
  v89 = 0;
  v90 = 0;
  v110 = 0;
  v111 = 0;
  v112 = 0;
  v16 = (int *)Destination;
  LOBYTE(v123) = 6;
  for ( i = 0; *(float *)&v16 != 0.0 && ((_BYTE *)Source - (_BYTE *)v16) >> 2 > i; ++i )
  {
    v18 = v16;
    if ( v16 > Source )
    {
      invalid_parameter_noinfo();
      v16 = (int *)Destination;
      v15 = (char *)v89;
    }
    v98 = *(float *)&v18;
    v19 = &v18[i];
    if ( v19 > Source || v19 < v16 )
    {
      invalid_parameter_noinfo();
      v15 = (char *)v89;
    }
    if ( v19 >= Source )
    {
      invalid_parameter_noinfo();
      v15 = (char *)v89;
    }
    if ( v88 && (v15 - (_BYTE *)v88) >> 2 < (unsigned int)((v90 - (int)v88) >> 2) )
    {
      *(_DWORD *)v15 = *v19;
      v89 = (unsigned int)(v15 + 4);
    }
    else
    {
      v20 = v15;
      if ( v88 > v15 )
        invalid_parameter_noinfo();
      std::vector<Actor *>::insert(&v87, &v100, &v87, v20, v19);
    }
    v21 = Destination;
    if ( *(float *)&Destination == 0.0 || (v22 = Source, i >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2) )
    {
      invalid_parameter_noinfo();
      v22 = Source;
      v21 = Destination;
    }
    v23 = (_DWORD *)v21[i];
    v24 = v23[64];
    v23 += 64;
    v113[0] = v24;
    v113[1] = v23[1];
    v25 = v23[2];
    v26 = v23[3];
    v113[2] = v25;
    v113[3] = v26;
    if ( !v21 || i >= (v22 - (_BYTE *)v21) >> 2 )
    {
      invalid_parameter_noinfo();
      v21 = Destination;
    }
    sub_10080030((GUID *)v21[i]);
    v27 = Destination;
    if ( *(float *)&Destination == 0.0 || i >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2 )
    {
      invalid_parameter_noinfo();
      v27 = Destination;
    }
    v28 = (_DWORD *)v27[i];
    v29 = v28[65];
    v30 = v28[64];
    v28 += 64;
    v113[5] = v29;
    v113[4] = v30;
    v31 = v28[2];
    v32 = v28[3];
    v113[6] = v31;
    v113[7] = v32;
    sub_10091470((int)&v109, v113);
    v33 = (_DWORD **)Destination;
    if ( *(float *)&Destination == 0.0 || i >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2 )
    {
      invalid_parameter_noinfo();
      v33 = (_DWORD **)Destination;
    }
    v34 = v93;
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v33[i] + 28))(v33[i], *(_DWORD *)(LODWORD(v93) + 2048));
    v35 = (int *)Destination;
    if ( *(float *)&Destination == 0.0 || i >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2 )
    {
      invalid_parameter_noinfo();
      v35 = (int *)Destination;
    }
    std::vector<Actor *>::push_back((_DWORD *)(*(_DWORD *)(LODWORD(v34) + 2048) + 3220), &v35[i]);
    v36 = (_DWORD **)Destination;
    if ( *(float *)&Destination == 0.0 || i >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2 )
    {
      invalid_parameter_noinfo();
      v36 = (_DWORD **)Destination;
    }
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v36[i] + 40))(v36[i]) )
    {
      v37 = (int *)Destination;
      if ( *(float *)&Destination == 0.0 || i >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2 )
      {
        invalid_parameter_noinfo();
        v37 = (int *)Destination;
      }
      v92 = v37[i];
      sub_10052AE0((_DWORD *)(*(_DWORD *)(LODWORD(v34) + 2048) + 3236), &v92);
    }
    v16 = (int *)Destination;
    if ( *(float *)&Destination == 0.0 || i >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2 )
    {
      invalid_parameter_noinfo();
      v16 = (int *)Destination;
    }
    v38 = v16[i];
    v39 = *(_BYTE *)(v38 + 442) == 0;
    v92 = v38;
    if ( !v39 )
    {
      if ( !*(_BYTE *)(v38 + 441) )
      {
        v86 = &v92;
        *(_BYTE *)(LODWORD(v34) + 2060) = 1;
        std::vector<Actor *>::push_back((_DWORD *)(LODWORD(v34) + 2244), v86);
      }
      *(_BYTE *)(v38 + 441) = 1;
      v16 = (int *)Destination;
    }
    v15 = (char *)v89;
    v11 = v34;
  }
  v86 = *(int **)(LODWORD(v11) + 2048);
  v85 = (struct World *)v120;
  v40 = FXManager::Instance();
  FXManager::ChangeSystemsWorld(v40, v85, (struct World *)v86);
  Camera::operator=(SLODWORD(v91), (int)v115);
  sub_10001440(v114);
  v94 = 0.0;
  v95 = 0.0;
  LOBYTE(v123) = 7;
  v96 = 0.0;
  v41 = 0;
  v42 = std::vector<Model *>::size(&v87);
  v43 = (char *)v88;
  if ( v42 )
  {
    do
    {
      if ( !v43 || v41 >= (int)(v89 - (_DWORD)v43) >> 2 )
      {
        invalid_parameter_noinfo();
        v43 = (char *)v88;
      }
      v97 = COERCE_FLOAT(std::vector<Model *>::size(&v87));
      v91 = (float)LODWORD(v97);
      v44 = (float *)(*(_DWORD *)&v43[4 * v41++] + 856);
      v91 = 1.0 / v91;
      v45 = v91;
      v91 = *v44 * v91;
      *(float *)&v92 = v44[1] * v45;
      v93 = v45 * v44[2];
      v94 = v91 + v94;
      v95 = v95 + *(float *)&v92;
      v96 = v96 + v93;
    }
    while ( v41 < LODWORD(v97) );
  }
  for ( j = 0; v43 && (int)(v89 - (_DWORD)v43) >> 2 > j; ++j )
  {
    v47 = v43;
    if ( (unsigned int)v43 > v89 )
    {
      invalid_parameter_noinfo();
      v43 = (char *)v88;
    }
    v101 = v47;
    v48 = &v47[4 * j];
    if ( (unsigned int)v48 > v89 || v48 < v43 )
    {
      invalid_parameter_noinfo();
      v43 = (char *)v88;
    }
    if ( (unsigned int)v48 >= v89 )
    {
      invalid_parameter_noinfo();
      v43 = (char *)v88;
    }
    v49 = (float *)(*(_DWORD *)v48 + 856);
    v97 = *v49 - v94;
    v98 = v49[1] - v95;
    v99 = v49[2] - v96;
    v106 = *a10 + v97;
    v107 = a10[1] + v98;
    v108 = a10[2] + v99;
    if ( !v43 || (int)(v89 - (_DWORD)v43) >> 2 <= j )
      goto LABEL_91;
    v50 = v43;
    if ( (unsigned int)v43 > v89 )
    {
      invalid_parameter_noinfo();
      v43 = (char *)v88;
    }
    v101 = v50;
    v51 = &v50[4 * j];
    if ( (unsigned int)v51 > v89 || v51 < v43 )
      invalid_parameter_noinfo();
    if ( (unsigned int)v51 >= v89 )
      invalid_parameter_noinfo();
    v52 = v107;
    v53 = *(_DWORD *)v51 + 856;
    *(float *)v53 = v106;
    v54 = v108;
    *(float *)(v53 + 4) = v52;
    *(float *)(v53 + 8) = v54;
    v55 = (char *)v88;
    if ( !v88 )
      goto LABEL_91;
    v56 = v89;
    if ( (int)(v89 - (_DWORD)v88) >> 2 <= j )
      goto LABEL_91;
    v57 = (char *)v88;
    if ( (unsigned int)v88 > v89 )
    {
      invalid_parameter_noinfo();
      v56 = v89;
      v55 = (char *)v88;
    }
    v101 = v57;
    v58 = &v57[4 * j];
    if ( (unsigned int)v58 > v56 || v58 < v55 )
      invalid_parameter_noinfo();
    if ( (unsigned int)v58 >= v89 )
      invalid_parameter_noinfo();
    sub_10178C30(*(_DWORD *)v58 + 868);
    v59 = (char *)v88;
    if ( !v88 || (v60 = v89, (int)(v89 - (_DWORD)v88) >> 2 <= j) )
LABEL_91:
      std::vector<Actor *>::_Xran();
    v61 = (char *)v88;
    if ( (unsigned int)v88 > v89 )
    {
      invalid_parameter_noinfo();
      v60 = v89;
      v59 = (char *)v88;
    }
    v101 = v61;
    v62 = &v61[4 * j];
    if ( (unsigned int)v62 > v60 || v62 < v59 )
      invalid_parameter_noinfo();
    if ( (unsigned int)v62 >= v89 )
      invalid_parameter_noinfo();
    v63 = (void *)(*(_DWORD *)v62 + 868);
    memset(v113, 0, sizeof(v113));
    sub_101786E0(1.0);
    *(float *)&v113[15] = 1.0;
    sub_10179590(v63, a11, v113);
    qmemcpy(v63, v113, 0x40u);
    v43 = (char *)v88;
  }
  v64 = Source;
  v65 = (char *)Destination;
  v66 = (char *)Source;
  if ( Destination > Source )
  {
    invalid_parameter_noinfo();
    v64 = Source;
    v65 = (char *)Destination;
    if ( Destination > Source )
    {
      invalid_parameter_noinfo();
      v64 = Source;
    }
  }
  if ( v65 != v66 )
  {
    v67 = (v64 - v66) >> 2;
    v68 = &v65[4 * v67];
    if ( v67 > 0 )
      memmove_s(v65, 4 * v67, v66, 4 * v67);
    Source = v68;
  }
  LOBYTE(v123) = 6;
  sub_1017A0B0(v114);
  if ( v110 )
    operator delete(v110);
  v110 = 0;
  v111 = 0;
  v112 = 0;
  if ( v88 )
    operator delete(v88);
  v88 = 0;
  v89 = 0;
  v90 = 0;
  if ( v103 )
    operator delete(v103);
  v103 = 0;
  v104 = 0;
  v105 = 0;
  LOBYTE(v123) = 1;
  World::~World((World *)v120);
  v69 = (char *)v117;
  LOBYTE(v123) = 8;
  if ( v117 )
  {
    v70 = v118;
    if ( v117 != v118 )
    {
      do
      {
        sub_1017A0B0(v69 + 100);
        v69 += 140;
      }
      while ( v69 != v70 );
      v69 = (char *)v117;
    }
    operator delete(v69);
  }
  v117 = 0;
  v118 = 0;
  v119 = 0;
  LOBYTE(v123) = 0;
  sub_1017A0B0(v116);
  v123 = -1;
  return std::string::~string(&a3);
}
