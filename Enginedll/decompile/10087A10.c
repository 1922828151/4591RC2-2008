/*
 * func-name: ?MergeSceneUsingCam@Editor@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10087a10
 * callers: none
 * callees: 0x10001440, 0x10010f10, 0x10011750, 0x10012a30, 0x10013320, 0x1004d200, 0x10052ae0, 0x10080030, 0x10080200, 0x10082690, 0x10091470, 0x1009ff60, 0x100a01c0, 0x100ee930, 0x1011acf0, 0x1013a9b0, 0x1013df40, 0x101786e0, 0x1017a0b0, 0x101a2500, 0x101a2516, 0x101a251c, 0x101a2780
 */

int __fastcall Editor::MergeSceneUsingCam(Editor *a1, int a2, char a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  Editor *v9; // edi
  unsigned int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  char *v14; // ebp
  double v15; // st7
  int *v16; // edx
  int *v17; // ecx
  int *v18; // edi
  int *v19; // edi
  _DWORD *v20; // ecx
  _BYTE *v21; // edx
  void (__cdecl *v22)(); // ebp
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
  float v34; // ebx
  int *v35; // eax
  _DWORD **v36; // ecx
  int *v37; // ecx
  int v38; // edi
  bool v39; // zf
  float *v40; // eax
  double v41; // st7
  int v42; // edx
  FXManager *v43; // eax
  char *v44; // edi
  char *v45; // esi
  unsigned int v46; // ebp
  int v47; // esi
  _DWORD *v48; // ecx
  float *WorldBBox; // eax
  float *v50; // eax
  unsigned int v51; // ebp
  double v52; // st7
  float *v53; // eax
  double v54; // st7
  float v55; // ecx
  float v56; // edx
  int v57; // esi
  _BYTE *v58; // eax
  char *v59; // esi
  char *v60; // edi
  int v61; // eax
  char *v62; // ebp
  char *v63; // esi
  char *v64; // edi
  char v66; // [esp-38h] [ebp-11A8h] BYREF
  int v67; // [esp-34h] [ebp-11A4h]
  int v68; // [esp-30h] [ebp-11A0h]
  int v69; // [esp-2Ch] [ebp-119Ch]
  int v70; // [esp-28h] [ebp-1198h]
  int v71; // [esp-24h] [ebp-1194h]
  int v72; // [esp-20h] [ebp-1190h]
  char v73; // [esp-1Ch] [ebp-118Ch] BYREF
  int v74; // [esp-18h] [ebp-1188h]
  int v75; // [esp-14h] [ebp-1184h]
  int v76; // [esp-10h] [ebp-1180h]
  int v77; // [esp-Ch] [ebp-117Ch]
  int v78; // [esp-8h] [ebp-1178h]
  struct World *v79; // [esp-4h] [ebp-1174h]
  int *v80; // [esp+0h] [ebp-1170h]
  int v81; // [esp+14h] [ebp-115Ch] BYREF
  float v82; // [esp+18h] [ebp-1158h]
  float v83; // [esp+1Ch] [ebp-1154h]
  float v84; // [esp+20h] [ebp-1150h]
  int v85; // [esp+24h] [ebp-114Ch] BYREF
  void *v86; // [esp+28h] [ebp-1148h]
  char *v87; // [esp+2Ch] [ebp-1144h]
  int v88; // [esp+30h] [ebp-1140h]
  float v89; // [esp+34h] [ebp-113Ch]
  float v90; // [esp+38h] [ebp-1138h]
  float v91; // [esp+3Ch] [ebp-1134h]
  float v92; // [esp+40h] [ebp-1130h]
  float v93[2]; // [esp+44h] [ebp-112Ch] BYREF
  char v94; // [esp+4Ch] [ebp-1124h] BYREF
  void *v95; // [esp+50h] [ebp-1120h]
  int v96; // [esp+54h] [ebp-111Ch]
  int v97; // [esp+58h] [ebp-1118h]
  float v98; // [esp+5Ch] [ebp-1114h]
  float v99; // [esp+60h] [ebp-1110h]
  float v100; // [esp+64h] [ebp-110Ch]
  int v101; // [esp+68h] [ebp-1108h] BYREF
  void *v102; // [esp+6Ch] [ebp-1104h]
  int v103; // [esp+70h] [ebp-1100h]
  int v104; // [esp+74h] [ebp-10FCh]
  float v105; // [esp+78h] [ebp-10F8h]
  float v106; // [esp+7Ch] [ebp-10F4h]
  float v107; // [esp+80h] [ebp-10F0h]
  float v108[4]; // [esp+84h] [ebp-10ECh] BYREF
  float v109; // [esp+94h] [ebp-10DCh]
  float v110; // [esp+98h] [ebp-10D8h]
  float v111; // [esp+9Ch] [ebp-10D4h]
  float v112; // [esp+A0h] [ebp-10D0h]
  float v113; // [esp+A4h] [ebp-10CCh]
  float v114; // [esp+A8h] [ebp-10C8h]
  _DWORD v115[16]; // [esp+ACh] [ebp-10C4h] BYREF
  _BYTE v116[100]; // [esp+ECh] [ebp-1084h] BYREF
  char v117[44]; // [esp+150h] [ebp-1020h] BYREF
  void *v118; // [esp+17Ch] [ebp-FF4h]
  char *v119; // [esp+180h] [ebp-FF0h]
  int v120; // [esp+184h] [ebp-FECh]
  _BYTE v121[3220]; // [esp+290h] [ebp-EE0h] BYREF
  void *Destination; // [esp+F28h] [ebp-248h]
  void *Source; // [esp+F2Ch] [ebp-244h]
  int v124; // [esp+116Ch] [ebp-4h]

  v9 = a1;
  v89 = *(float *)&a1;
  v10 = 0;
  v124 = 0;
  Editor::UnSelectAll(a1);
  v80 = (int *)((char *)v9 + 252);
  *((_BYTE *)v9 + 2060) = 1;
  Camera::Camera((Camera *)v116, (const struct Camera *)v80);
  LOBYTE(v124) = 1;
  World::World((World *)v121);
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v80 = (int *)v121;
  LOBYTE(v124) = 3;
  v11 = std::string::c_str(&a3);
  v82 = COERCE_FLOAT(&v73);
  std::string::string(&v73, v11);
  Serializer::LoadWorld(v73, v74, v75, v76, v77, v78, v79, v80);
  v12 = *((_DWORD *)v9 + 512);
  v80 = (int *)&v94;
  v13 = std::string::c_str(v12 + 3188);
  v82 = COERCE_FLOAT(&v73);
  std::string::string(&v73, v13);
  v93[0] = COERCE_FLOAT(&v66);
  LOBYTE(v124) = 4;
  std::string::string(&v66, &a3);
  LOBYTE(v124) = 3;
  Editor::CopyPrtFiles(v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, (int)v79, v80);
  v14 = 0;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v15 = 0.0;
  v16 = (int *)Source;
  v90 = 0.0;
  v17 = (int *)Destination;
  v91 = 0.0;
  LOBYTE(v124) = 6;
  while ( 1 )
  {
    v92 = v15;
    if ( *(float *)&v17 == 0.0 )
    {
      *(float *)&v42 = 0.0;
      goto LABEL_54;
    }
    if ( v16 - v17 <= v10 )
      break;
    v18 = v17;
    if ( v17 > v16 )
    {
      invalid_parameter_noinfo();
      v16 = (int *)Source;
      v17 = (int *)Destination;
      v14 = v87;
    }
    v83 = *(float *)&v18;
    v19 = &v18[v10];
    if ( v19 > v16 || v19 < v17 )
    {
      invalid_parameter_noinfo();
      v14 = v87;
    }
    if ( v19 >= Source )
    {
      invalid_parameter_noinfo();
      v14 = v87;
    }
    if ( v86 && (v14 - (_BYTE *)v86) >> 2 < (unsigned int)((v88 - (int)v86) >> 2) )
    {
      *(_DWORD *)v14 = *v19;
      v87 = v14 + 4;
    }
    else
    {
      if ( v86 > v14 )
        invalid_parameter_noinfo();
      std::vector<Actor *>::insert(&v85, v93, &v85, v14, v19);
    }
    v20 = Destination;
    if ( Destination && (v21 = Source, v10 < ((_BYTE *)Source - (_BYTE *)Destination) >> 2) )
    {
      v22 = invalid_parameter_noinfo;
    }
    else
    {
      v22 = invalid_parameter_noinfo;
      invalid_parameter_noinfo();
      v21 = Source;
      v20 = Destination;
    }
    v23 = (_DWORD *)v20[v10];
    v24 = v23[64];
    v23 += 64;
    v115[0] = v24;
    v115[1] = v23[1];
    v25 = v23[2];
    v26 = v23[3];
    v115[2] = v25;
    v115[3] = v26;
    if ( !v20 || v10 >= (v21 - (_BYTE *)v20) >> 2 )
    {
      v22();
      v20 = Destination;
    }
    sub_10080030((GUID *)v20[v10]);
    v27 = Destination;
    if ( !Destination || v10 >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2 )
    {
      v22();
      v27 = Destination;
    }
    v28 = (_DWORD *)v27[v10];
    v29 = v28[65];
    v30 = v28[64];
    v28 += 64;
    v115[5] = v29;
    v115[4] = v30;
    v31 = v28[2];
    v32 = v28[3];
    v115[6] = v31;
    v115[7] = v32;
    sub_10091470((int)&v101, v115);
    v33 = (_DWORD **)Destination;
    if ( !Destination || v10 >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2 )
    {
      v22();
      v33 = (_DWORD **)Destination;
    }
    v34 = v89;
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v33[v10] + 28))(v33[v10], *(_DWORD *)(LODWORD(v89) + 2048));
    v35 = (int *)Destination;
    if ( !Destination || v10 >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2 )
    {
      v22();
      v35 = (int *)Destination;
    }
    std::vector<Actor *>::push_back((_DWORD *)(*(_DWORD *)(LODWORD(v34) + 2048) + 3220), &v35[v10]);
    v36 = (_DWORD **)Destination;
    if ( !Destination || v10 >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2 )
    {
      v22();
      v36 = (_DWORD **)Destination;
    }
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v36[v10] + 40))(v36[v10]) )
    {
      v37 = (int *)Destination;
      if ( !Destination || v10 >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2 )
      {
        v22();
        v37 = (int *)Destination;
      }
      v81 = v37[v10];
      sub_10052AE0((_DWORD *)(*(_DWORD *)(LODWORD(v34) + 2048) + 3236), &v81);
    }
    v17 = (int *)Destination;
    if ( !Destination || (v16 = (int *)Source, v10 >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2) )
    {
      v22();
      v16 = (int *)Source;
      v17 = (int *)Destination;
    }
    v38 = v17[v10];
    v39 = *(_BYTE *)(v38 + 442) == 0;
    v81 = v38;
    if ( !v39 )
    {
      if ( !*(_BYTE *)(v38 + 441) )
      {
        v80 = &v81;
        *(_BYTE *)(LODWORD(v34) + 2060) = 1;
        std::vector<Actor *>::push_back((_DWORD *)(LODWORD(v34) + 2244), v80);
      }
      *(_BYTE *)(v38 + 441) = 1;
      v16 = (int *)Source;
      v17 = (int *)Destination;
    }
    if ( *(float *)&v17 == 0.0 || v10 >= v16 - v17 )
    {
      v22();
      v16 = (int *)Source;
      v17 = (int *)Destination;
    }
    v40 = (float *)v17[v10];
    v14 = v87;
    v41 = v40[214] + v90;
    v40 += 214;
    ++v10;
    v9 = (Editor *)LODWORD(v34);
    v90 = v41;
    v91 = v40[1] + v91;
    v15 = v40[2] + v92;
  }
  v42 = v16 - v17;
LABEL_54:
  v82 = *(float *)&v42;
  v80 = (int *)*((_DWORD *)v9 + 512);
  v79 = (struct World *)v121;
  *(float *)&v81 = 1.0 / (double)(unsigned int)v42;
  v90 = *(float *)&v81 * v90;
  v91 = v91 * *(float *)&v81;
  v92 = *(float *)&v81 * v92;
  v43 = FXManager::Instance();
  FXManager::ChangeSystemsWorld(v43, v79, (struct World *)v80);
  Camera::operator=((int)v9 + 252, (int)v116);
  sub_10001440(v108);
  v44 = v87;
  v82 = 0.0;
  v45 = (char *)v86;
  v83 = 0.0;
  v84 = 0.0;
  v109 = 0.0;
  v110 = 0.0;
  v111 = 0.0;
  LOBYTE(v124) = 7;
  v112 = 0.0;
  v113 = 0.0;
  v114 = 0.0;
  v46 = 0;
  while ( v45 && v46 < (v44 - v45) >> 2 )
  {
    if ( *(_DWORD *)(*(_DWORD *)&v45[4 * v46] + 716) )
    {
      if ( v46 >= (v44 - v45) >> 2 )
      {
        invalid_parameter_noinfo();
        v45 = (char *)v86;
      }
      v47 = *(_DWORD *)(*(_DWORD *)&v45[4 * v46] + 716);
      memset(v115, 0, sizeof(v115));
      sub_101786E0(1.0);
      *(float *)&v115[15] = 1.0;
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v47 + 32))(v47, v115);
      v48 = v86;
      if ( !v86 || v46 >= (v87 - (_BYTE *)v86) >> 2 )
      {
        invalid_parameter_noinfo();
        v48 = v86;
      }
      WorldBBox = (float *)StaticModel::GetWorldBBox(*(_DWORD *)(v48[v46] + 716), v115);
      sub_1004D200(v108, WorldBBox);
      sub_1017A0B0(v115);
      v44 = v87;
      v45 = (char *)v86;
      ++v46;
    }
    else
    {
      if ( v46 >= (v44 - v45) >> 2 )
      {
        invalid_parameter_noinfo();
        v44 = v87;
        v45 = (char *)v86;
      }
      sub_1004D200(v108, (float *)(*(_DWORD *)&v45[4 * v46++] + 768));
    }
  }
  *(float *)&v81 = v112 + v109;
  v93[0] = v110 + v113;
  v82 = v111 + v114;
  *(float *)&v81 = *(float *)&v81 * 0.5;
  v93[0] = v93[0] * 0.5;
  v82 = 0.5 * v82;
  *(float *)&v81 = *(float *)&v81 - v112;
  v93[0] = v93[0] - v113;
  v82 = v82 - v114;
  v82 = v93[0] * v93[0] + *(float *)&v81 * *(float *)&v81 + v82 * v82;
  v82 = sqrt(v82);
  *(float *)&v81 = v82;
  if ( 0.0 == v82 )
    *(float *)&v81 = 1.0;
  v50 = (float *)LODWORD(v89);
  v51 = 0;
  v82 = *(float *)&v81 * 3.0;
  v52 = v82;
  v82 = *(float *)(LODWORD(v89) + 628) * v82;
  v93[0] = *(float *)(LODWORD(v89) + 632) * v52;
  v89 = v52 * *(float *)(LODWORD(v89) + 636);
  v82 = v50[151] + v82;
  v93[0] = v50[152] + v93[0];
  v89 = v50[153] + v89;
  while ( v45 && v51 < (v44 - v45) >> 2 )
  {
    v53 = *(float **)&v45[4 * v51];
    v54 = v53[214];
    v53 += 214;
    v105 = v54 - v90;
    v106 = v53[1] - v91;
    v107 = v53[2] - v92;
    v98 = v105 + v82;
    v99 = v106 + v93[0];
    v100 = v107 + v89;
    v55 = v99;
    v56 = v100;
    v57 = *(_DWORD *)&v45[4 * v51] + 856;
    *(float *)v57 = v98;
    *(float *)(v57 + 4) = v55;
    *(float *)(v57 + 8) = v56;
    v44 = v87;
    v45 = (char *)v86;
    ++v51;
  }
  v58 = Source;
  v59 = (char *)Destination;
  v60 = (char *)Source;
  if ( Destination > Source )
  {
    invalid_parameter_noinfo();
    v58 = Source;
    v59 = (char *)Destination;
    if ( Destination > Source )
    {
      invalid_parameter_noinfo();
      v58 = Source;
    }
  }
  if ( v59 != v60 )
  {
    v61 = (v58 - v60) >> 2;
    v62 = &v59[4 * v61];
    if ( v61 > 0 )
      memmove_s(v59, 4 * v61, v60, 4 * v61);
    Source = v62;
  }
  LOBYTE(v124) = 6;
  sub_1017A0B0(v108);
  if ( v102 )
    operator delete(v102);
  v102 = 0;
  v103 = 0;
  v104 = 0;
  if ( v86 )
    operator delete(v86);
  v86 = 0;
  v87 = 0;
  v88 = 0;
  if ( v95 )
    operator delete(v95);
  v95 = 0;
  v96 = 0;
  v97 = 0;
  LOBYTE(v124) = 1;
  World::~World((World *)v121);
  v63 = (char *)v118;
  LOBYTE(v124) = 8;
  if ( v118 )
  {
    v64 = v119;
    if ( v118 != v119 )
    {
      do
      {
        sub_1017A0B0(v63 + 100);
        v63 += 140;
      }
      while ( v63 != v64 );
      v63 = (char *)v118;
    }
    operator delete(v63);
  }
  v118 = 0;
  v119 = 0;
  v120 = 0;
  LOBYTE(v124) = 0;
  sub_1017A0B0(v117);
  v124 = -1;
  return std::string::~string(&a3);
}
