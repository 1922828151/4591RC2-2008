/*
 * func-name: ?Split@MeshOps@@UAE_NPAVMesh@@HHH@Z
 * func-address: 0x100eb8b0
 * callers: none
 * callees: 0x10001370, 0x10001440, 0x1002bf00, 0x100977a0, 0x100e9620, 0x100ece10, 0x100ed200, 0x100ee100, 0x1017a0b0, 0x101a2500
 */

char __thiscall MeshOps::Split(MeshOps *this, struct Mesh *a2, int a3, int a4, int a5)
{
  struct Mesh *v5; // edi
  int v6; // eax
  int v8; // ebx
  double v9; // st7
  double v10; // st7
  int v11; // ecx
  float v12; // edi
  int v13; // eax
  int (__thiscall *v14)(struct Mesh *); // eax
  int v15; // ecx
  unsigned int *v16; // eax
  unsigned int v17; // ebx
  int v18; // ecx
  unsigned int v19; // esi
  unsigned int v20; // eax
  _DWORD *v21; // ecx
  unsigned int v22; // ebx
  int v23; // esi
  int v24; // edi
  bool v25; // cf
  unsigned int v26; // eax
  int v27; // esi
  unsigned int v28; // edx
  unsigned int *v29; // eax
  void *v30; // edi
  char *v31; // esi
  unsigned int v32; // eax
  int v33; // esi
  unsigned int v34; // edx
  unsigned int *v35; // eax
  void *v36; // edi
  char *v37; // esi
  unsigned int v38; // eax
  int v39; // esi
  unsigned int v40; // edx
  unsigned int *v41; // eax
  void *v42; // ebx
  int (__thiscall *v43)(struct Mesh *); // eax
  int v44; // esi
  int v45; // eax
  int v46; // esi
  char *v47; // ecx
  int v48; // edi
  unsigned int v49; // ebx
  char *v50; // ecx
  int v51; // esi
  int v52; // eax
  unsigned int v53; // ebx
  int v54; // edx
  int v55; // eax
  char *v56; // esi
  int v57; // edx
  int v58; // eax
  int v59; // eax
  char *v60; // esi
  __int16 v61; // cx
  int v62; // edx
  char *v63; // ebx
  _DWORD *v64; // ebx
  int v65; // edx
  char *v66; // ebx
  _DWORD *v67; // ebx
  char *v68; // edi
  int v69; // edx
  char *v70; // esi
  char *v71; // edi
  char *v72; // ebx
  char *v73; // eax
  int v74; // ecx
  const void *v75; // edi
  void *v76; // ebx
  int v77; // eax
  int v78; // edi
  char *v79; // ebx
  int v80; // eax
  int v81; // esi
  char *v82; // esi
  char *v83; // esi
  int v84; // esi
  unsigned int v85; // eax
  unsigned int v86; // edx
  int *v87; // eax
  void *v88; // edi
  unsigned int v89; // [esp+18h] [ebp-100h]
  unsigned int v90; // [esp+18h] [ebp-100h]
  unsigned int v91; // [esp+18h] [ebp-100h]
  int i; // [esp+1Ch] [ebp-FCh]
  unsigned int v93; // [esp+1Ch] [ebp-FCh]
  unsigned int k; // [esp+1Ch] [ebp-FCh]
  unsigned int v95; // [esp+1Ch] [ebp-FCh]
  int j; // [esp+20h] [ebp-F8h]
  unsigned int v97; // [esp+20h] [ebp-F8h]
  int v98; // [esp+20h] [ebp-F8h]
  int v99; // [esp+20h] [ebp-F8h]
  int v100; // [esp+24h] [ebp-F4h] BYREF
  void *v101; // [esp+28h] [ebp-F0h]
  int v102; // [esp+2Ch] [ebp-ECh]
  int v103; // [esp+30h] [ebp-E8h]
  int v104; // [esp+34h] [ebp-E4h]
  bool v105; // [esp+3Bh] [ebp-DDh]
  int v106; // [esp+3Ch] [ebp-DCh]
  int v107[2]; // [esp+40h] [ebp-D8h] BYREF
  double v108; // [esp+48h] [ebp-D0h]
  double v109; // [esp+50h] [ebp-C8h]
  double v110; // [esp+58h] [ebp-C0h]
  int v111; // [esp+64h] [ebp-B4h] BYREF
  float v112; // [esp+68h] [ebp-B0h]
  float v113; // [esp+6Ch] [ebp-ACh]
  float v114[4]; // [esp+70h] [ebp-A8h] BYREF
  float v115; // [esp+80h] [ebp-98h]
  float v116; // [esp+84h] [ebp-94h]
  float v117; // [esp+88h] [ebp-90h]
  float v118; // [esp+8Ch] [ebp-8Ch]
  float v119; // [esp+90h] [ebp-88h]
  float v120; // [esp+94h] [ebp-84h]
  int v121; // [esp+98h] [ebp-80h] BYREF
  int v122; // [esp+9Ch] [ebp-7Ch] BYREF
  int v123; // [esp+A0h] [ebp-78h]
  int v124; // [esp+A4h] [ebp-74h] BYREF
  int v125[2]; // [esp+A8h] [ebp-70h] BYREF
  double v126; // [esp+B0h] [ebp-68h] BYREF
  int v127; // [esp+B8h] [ebp-60h] BYREF
  void *v128; // [esp+BCh] [ebp-5Ch]
  int v129; // [esp+C0h] [ebp-58h]
  int v130; // [esp+C4h] [ebp-54h]
  int v131; // [esp+C8h] [ebp-50h]
  int v132; // [esp+CCh] [ebp-4Ch]
  int v133; // [esp+D0h] [ebp-48h]
  int v134; // [esp+D4h] [ebp-44h]
  int v135; // [esp+D8h] [ebp-40h]
  unsigned int v136; // [esp+DCh] [ebp-3Ch]
  float v137[11]; // [esp+E0h] [ebp-38h] BYREF
  int v138; // [esp+114h] [ebp-4h]

  v5 = a2;
  v6 = *((_DWORD *)a2 + 616);
  if ( v6 && (*((_DWORD *)a2 + 617) - v6) >> 2 )
  {
    (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)a2 + 120))(a2);
    (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)a2 + 116))(a2);
    v123 = (*(int (__thiscall **)(struct Mesh *, int *))(*(_DWORD *)a2 + 128))(a2, &v122);
    HIDWORD(v109) = (*(int (__thiscall **)(struct Mesh *, int *))(*(_DWORD *)a2 + 136))(a2, &v121);
    v105 = v121 == 4;
    v8 = 0;
    v101 = 0;
    v102 = 0;
    v103 = 0;
    v9 = *((float *)a2 + 612) - *((float *)a2 + 609);
    v138 = 0;
    v89 = 0;
    *(float *)&v106 = v9;
    *(float *)&v104 = *((float *)a2 + 613) - *((float *)a2 + 610);
    *(float *)&v110 = *((float *)a2 + 614) - *((float *)a2 + 611);
    *(float *)&v111 = *(float *)&v106 / (double)a3;
    v112 = *(float *)&v104 / (double)a4;
    v113 = *(float *)&v110 / (double)a5;
    v10 = 0.009999999776482582;
    while ( 1 )
    {
      v11 = *((_DWORD *)v5 + 616);
      if ( !v11 || v89 >= (*((_DWORD *)v5 + 617) - v11) >> 2 )
        break;
      for ( i = 0; i < a3; ++i )
      {
        for ( j = 0; j < a4; ++j )
        {
          v12 = 0.0;
          *(float *)&v104 = 0.0;
          if ( a5 > 0 )
          {
            *(double *)v107 = (double)i * *(float *)&v111 - v10;
            v110 = (double)j * v112 - v10;
            v106 = j + 1;
            v126 = *(float *)&v111 * (double)(i + 1) + v10;
            *(double *)v125 = v10 + v112 * (double)(j + 1);
            v108 = v113;
            do
            {
              sub_10001370(v114, (float *)a2 + 609, (float *)a2 + 609);
              ++LODWORD(v12);
              *(float *)&v106 = v12;
              v115 = v115 + *(double *)v107;
              v128 = 0;
              v129 = 0;
              v130 = 0;
              v116 = v116 + v110;
              v117 = (double)v104 * v108 - 0.009999999776482582 + v117;
              v118 = v118 + v126;
              v119 = v119 + *(double *)v125;
              v120 = v108 * (double)SLODWORD(v12) + 0.009999999776482582 + v120;
              LOBYTE(v138) = 2;
              sub_10001440(v137);
              v137[2] = v114[2];
              v137[5] = v116;
              v137[1] = v114[1];
              v137[3] = v114[3];
              v137[8] = v119;
              v137[4] = v115;
              v137[6] = v117;
              v132 = 0;
              v133 = 0;
              v135 = 0;
              v137[7] = v118;
              v137[9] = v120;
              v131 = v8;
              LOBYTE(v138) = 3;
              v136 = v89;
              v134 = 9999999;
              ++v8;
              sub_100EE100((int)&v100, &v127);
              LOBYTE(v138) = 4;
              sub_1017A0B0(v137);
              if ( v128 )
                operator delete(v128);
              v128 = 0;
              v129 = 0;
              v130 = 0;
              LOBYTE(v138) = 0;
              sub_1017A0B0(v114);
              *(float *)&v104 = v12;
            }
            while ( SLODWORD(v12) < a5 );
            v10 = 0.009999999776482582;
          }
        }
      }
      ++v89;
      v5 = a2;
    }
    v13 = (*(int (__thiscall **)(struct Mesh *))(*(_DWORD *)v5 + 4))(v5);
    (*(void (__stdcall **)(int, _DWORD, int *))(*(_DWORD *)v13 + 96))(v13, 0, &v124);
    v14 = *(int (__thiscall **)(struct Mesh *))(*(_DWORD *)v5 + 116);
    LODWORD(v108) = 0;
    if ( v14(v5) > 0 )
    {
      v15 = HIDWORD(v109) + 4;
      v16 = (unsigned int *)(HIDWORD(v109) + 8);
      v104 = HIDWORD(v109) + 4;
      LODWORD(v110) = HIDWORD(v109) + 8;
      while ( 1 )
      {
        if ( v105 )
        {
          v17 = *(v16 - 2);
          v90 = *(v16 - 1);
          v93 = *v16;
        }
        else
        {
          v17 = *(unsigned __int16 *)(v15 - 4);
          v90 = *(unsigned __int16 *)(v15 - 2);
          v93 = *(unsigned __int16 *)v15;
        }
        v18 = *((_DWORD *)v5 + 10);
        v19 = *(_DWORD *)(v124 + 4 * LODWORD(v108));
        v97 = v17;
        if ( v18 && v19 < (*((_DWORD *)v5 + 11) - v18) >> 2 )
          v19 = *(_DWORD *)(*((_DWORD *)v5 + 10) + 4 * v19);
        v20 = sub_100E9620(
                (int)&v100,
                (float *)(v123 + v122 * v17),
                (float *)(v123 + v122 * v90),
                (float *)(v123 + v122 * v93),
                v19);
        v21 = v101;
        v22 = v20;
        if ( !v101 || (v23 = v102, v20 >= (v102 - (int)v101) / 80) )
        {
          invalid_parameter_noinfo();
          v23 = v102;
          v21 = v101;
        }
        v24 = 80 * v22;
        v25 = v97 < v21[20 * v22 + 7];
        v106 = 80 * v22;
        if ( v25 )
        {
          if ( !v21 || v22 >= (v23 - (int)v21) / 80 )
          {
            invalid_parameter_noinfo();
            v21 = v101;
          }
          *(_DWORD *)((char *)v21 + v24 + 28) = v97;
          v23 = v102;
          v21 = v101;
        }
        if ( !v21 || v22 >= (v23 - (int)v21) / 80 )
        {
          invalid_parameter_noinfo();
          v23 = v102;
          v21 = v101;
        }
        if ( v90 < *(_DWORD *)((char *)v21 + v24 + 28) )
        {
          if ( !v21 || v22 >= (v23 - (int)v21) / 80 )
          {
            invalid_parameter_noinfo();
            v21 = v101;
          }
          *(_DWORD *)((char *)v21 + v24 + 28) = v90;
          v23 = v102;
          v21 = v101;
        }
        if ( !v21 || v22 >= (v23 - (int)v21) / 80 )
        {
          invalid_parameter_noinfo();
          v23 = v102;
          v21 = v101;
        }
        if ( v93 < *(_DWORD *)((char *)v21 + v24 + 28) )
        {
          if ( !v21 || v22 >= (v23 - (int)v21) / 80 )
          {
            invalid_parameter_noinfo();
            v21 = v101;
          }
          *(_DWORD *)((char *)v21 + v24 + 28) = v93;
          v23 = v102;
          v21 = v101;
        }
        v107[0] = v97;
        if ( !v21 || v22 >= (v23 - (int)v21) / 80 )
        {
          invalid_parameter_noinfo();
          v21 = v101;
        }
        v26 = *(_DWORD *)((char *)v21 + v24 + 4);
        v27 = (int)v21 + v24;
        v28 = v26 ? (int)(*(_DWORD *)(v27 + 8) - v26) >> 2 : 0;
        if ( v26 && v28 < (int)(*(_DWORD *)(v27 + 12) - v26) >> 2 )
        {
          v29 = *(unsigned int **)(v27 + 8);
          *v29 = v97;
          *(_DWORD *)(v27 + 8) = v29 + 1;
        }
        else
        {
          v30 = *(void **)(v27 + 8);
          if ( v26 > (unsigned int)v30 )
            invalid_parameter_noinfo();
          sub_100ECE10((int)v125, v27, v30, (int)v107);
          v24 = v106;
        }
        v31 = (char *)v101;
        v107[0] = v90;
        if ( !v101 || v22 >= (v102 - (int)v101) / 80 )
        {
          invalid_parameter_noinfo();
          v31 = (char *)v101;
        }
        v32 = *(_DWORD *)&v31[v24 + 4];
        v33 = (int)&v31[v24];
        v34 = v32 ? (int)(*(_DWORD *)(v33 + 8) - v32) >> 2 : 0;
        if ( v32 && v34 < (int)(*(_DWORD *)(v33 + 12) - v32) >> 2 )
        {
          v35 = *(unsigned int **)(v33 + 8);
          *v35 = v90;
          *(_DWORD *)(v33 + 8) = v35 + 1;
        }
        else
        {
          v36 = *(void **)(v33 + 8);
          if ( v32 > (unsigned int)v36 )
            invalid_parameter_noinfo();
          sub_100ECE10((int)&v126, v33, v36, (int)v107);
          v24 = v106;
        }
        v37 = (char *)v101;
        v107[0] = v93;
        if ( !v101 || v22 >= (v102 - (int)v101) / 80 )
        {
          invalid_parameter_noinfo();
          v37 = (char *)v101;
        }
        v38 = *(_DWORD *)&v37[v24 + 4];
        v39 = (int)&v37[v24];
        v40 = v38 ? (int)(*(_DWORD *)(v39 + 8) - v38) >> 2 : 0;
        if ( v38 && v40 < (int)(*(_DWORD *)(v39 + 12) - v38) >> 2 )
        {
          v41 = *(unsigned int **)(v39 + 8);
          *v41 = v93;
          *(_DWORD *)(v39 + 8) = v41 + 1;
        }
        else
        {
          v42 = *(void **)(v39 + 8);
          if ( v38 > (unsigned int)v42 )
            invalid_parameter_noinfo();
          sub_100ECE10((int)&v111, v39, v42, (int)v107);
        }
        v43 = *(int (__thiscall **)(struct Mesh *))(*(_DWORD *)a2 + 116);
        LODWORD(v110) += 12;
        v104 += 6;
        v44 = ++LODWORD(v108);
        if ( v44 >= v43(a2) )
          break;
        v5 = a2;
        v16 = (unsigned int *)LODWORD(v110);
        v15 = v104;
      }
    }
    v45 = (*(int (__thiscall **)(struct Mesh *))(*(_DWORD *)a2 + 4))(a2);
    (*(void (__stdcall **)(int))(*(_DWORD *)v45 + 100))(v45);
    v46 = v102;
    v47 = (char *)v101;
    v48 = 0;
    v49 = 0;
    v98 = 0;
    v91 = 0;
    while ( 1 )
    {
      LODWORD(v108) = v48;
      if ( !v47 || v49 >= (v46 - (int)v47) / 80 )
        break;
      *(_DWORD *)&v47[v48 + 20] = v98 / 3;
      v50 = (char *)v101;
      if ( !v101 || (v51 = v102, v49 >= (v102 - (int)v101) / 80) )
      {
        invalid_parameter_noinfo();
        v51 = v102;
        v50 = (char *)v101;
      }
      v52 = *(_DWORD *)&v50[v48 + 4];
      if ( v52 )
        v53 = (*(_DWORD *)&v50[v48 + 8] - v52) >> 2;
      else
        v53 = 0;
      if ( !v50 || v91 >= (v51 - (int)v50) / 80 )
      {
        invalid_parameter_noinfo();
        v50 = (char *)v101;
      }
      *(_DWORD *)&v50[v48 + 24] = v53 / 3;
      v46 = v102;
      v47 = (char *)v101;
      for ( k = 0; ; ++k )
      {
        if ( !v47 || v91 >= (v46 - (int)v47) / 80 )
        {
          invalid_parameter_noinfo();
          v46 = v102;
          v47 = (char *)v101;
        }
        v54 = *(_DWORD *)&v47[v48 + 4];
        if ( !v54 || k >= (*(_DWORD *)&v47[v48 + 8] - v54) >> 2 )
          break;
        if ( v105 )
        {
          if ( !v47 || v91 >= (v46 - (int)v47) / 80 )
          {
            invalid_parameter_noinfo();
            v47 = (char *)v101;
          }
          v55 = *(_DWORD *)&v47[v48 + 4];
          v56 = &v47[v48 + 4];
          if ( !v55 || k >= (*(_DWORD *)&v47[v48 + 8] - v55) >> 2 )
            invalid_parameter_noinfo();
          v57 = *(_DWORD *)(4 * k + *(_DWORD *)v56);
          v104 = 4 * k;
          v58 = v98;
          *(_DWORD *)(HIDWORD(v109) + 4 * v98) = v57;
        }
        else
        {
          if ( !v47 || v91 >= (v46 - (int)v47) / 80 )
          {
            invalid_parameter_noinfo();
            v47 = (char *)v101;
          }
          v59 = *(_DWORD *)&v47[v48 + 4];
          v60 = &v47[v48 + 4];
          if ( !v59 || k >= (*(_DWORD *)&v47[v48 + 8] - v59) >> 2 )
            invalid_parameter_noinfo();
          v61 = *(_WORD *)(4 * k + *(_DWORD *)v60);
          v104 = 4 * k;
          v58 = v98;
          *(_WORD *)(HIDWORD(v109) + 2 * v98) = v61;
        }
        v47 = (char *)v101;
        v98 = v58 + 1;
        if ( !v101 || (v46 = v102, v91 >= (v102 - (int)v101) / 80) )
        {
          invalid_parameter_noinfo();
          v46 = v102;
          v47 = (char *)v101;
        }
        v62 = *(_DWORD *)&v47[v48 + 4];
        v63 = &v47[v48 + 4];
        if ( !v62 || k >= (*(_DWORD *)&v47[v48 + 8] - v62) >> 2 )
        {
          invalid_parameter_noinfo();
          v46 = v102;
          v47 = (char *)v101;
        }
        v64 = (_DWORD *)(v104 + *(_DWORD *)v63);
        if ( !v47 || v91 >= (v46 - (int)v47) / 80 )
        {
          invalid_parameter_noinfo();
          v46 = v102;
          v47 = (char *)v101;
        }
        v107[0] = (int)&v47[v48];
        if ( !v47 || v91 >= (v46 - (int)v47) / 80 )
        {
          invalid_parameter_noinfo();
          v46 = v102;
          v47 = (char *)v101;
        }
        if ( *v64 >= (unsigned int)(*(_DWORD *)(v107[0] + 28) + *(_DWORD *)&v47[v48 + 32]) )
        {
          if ( !v47 || v91 >= (v46 - (int)v47) / 80 )
          {
            invalid_parameter_noinfo();
            v46 = v102;
            v47 = (char *)v101;
          }
          v65 = *(_DWORD *)&v47[v48 + 4];
          v66 = &v47[v48 + 4];
          if ( !v65 || k >= (*(_DWORD *)&v47[v48 + 8] - v65) >> 2 )
          {
            invalid_parameter_noinfo();
            v46 = v102;
            v47 = (char *)v101;
          }
          v67 = (_DWORD *)(v104 + *(_DWORD *)v66);
          if ( !v47 || v91 >= (v46 - (int)v47) / 80 )
          {
            invalid_parameter_noinfo();
            v46 = v102;
            v47 = (char *)v101;
          }
          v68 = &v47[LODWORD(v108)];
          if ( !v47 || v91 >= (v46 - (int)v47) / 80 )
          {
            invalid_parameter_noinfo();
            v47 = (char *)v101;
          }
          v69 = LODWORD(v108);
          *(_DWORD *)&v47[LODWORD(v108) + 32] = *v67 - *((_DWORD *)v68 + 7) + 1;
          v46 = v102;
          v47 = (char *)v101;
          v48 = v69;
        }
      }
      v49 = ++v91;
      v48 += 80;
    }
    (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)a2 + 140))(a2);
    (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)a2 + 132))(a2);
    v70 = (char *)*((_DWORD *)a2 + 621);
    if ( *((_DWORD *)a2 + 620) > (unsigned int)v70 )
      invalid_parameter_noinfo();
    v71 = (char *)*((_DWORD *)a2 + 620);
    if ( (unsigned int)v71 > *((_DWORD *)a2 + 621) )
      invalid_parameter_noinfo();
    if ( v71 != v70 )
    {
      v72 = (char *)*((_DWORD *)a2 + 621);
      v73 = v70;
      if ( v70 != v72 )
      {
        v74 = v71 - v70;
        do
        {
          *(_DWORD *)&v73[v74] = *(_DWORD *)v73;
          *(_DWORD *)&v73[v74 + 4] = *((_DWORD *)v73 + 1);
          *(_DWORD *)&v73[v74 + 8] = *((_DWORD *)v73 + 2);
          *(_DWORD *)&v73[v74 + 12] = *((_DWORD *)v73 + 3);
          *(_DWORD *)&v73[v74 + 16] = *((_DWORD *)v73 + 4);
          v73 += 20;
        }
        while ( v73 != v72 );
      }
      *((_DWORD *)a2 + 621) = &v71[20 * ((v72 - v70) / 20)];
    }
    v75 = (const void *)*((_DWORD *)a2 + 11);
    if ( *((_DWORD *)a2 + 10) > (unsigned int)v75 )
      invalid_parameter_noinfo();
    v76 = (void *)*((_DWORD *)a2 + 10);
    if ( (unsigned int)v76 > *((_DWORD *)a2 + 11) )
      invalid_parameter_noinfo();
    if ( v76 != v75 )
    {
      v77 = (*((_DWORD *)a2 + 11) - (int)v75) >> 2;
      v107[0] = (int)v76 + 4 * v77;
      if ( v77 > 0 )
        memmove_s(v76, 4 * v77, v75, 4 * v77);
      *((_DWORD *)a2 + 11) = v107[0];
    }
    v78 = v102;
    v79 = (char *)v101;
    v95 = 0;
    v99 = 0;
    while ( v79 && v95 < (v78 - (int)v79) / 80 )
    {
      if ( *(_DWORD *)&v79[v99 + 24] )
      {
        v80 = *((_DWORD *)a2 + 620);
        if ( v80 )
          v81 = (*((_DWORD *)a2 + 621) - v80) / 20;
        else
          v81 = 0;
        if ( v95 >= (v78 - (int)v79) / 80 )
        {
          invalid_parameter_noinfo();
          v79 = (char *)v101;
        }
        *(_DWORD *)&v79[v99 + 16] = v81;
        v82 = (char *)v101;
        if ( !v101 || v95 >= (v102 - (int)v101) / 80 )
        {
          invalid_parameter_noinfo();
          v82 = (char *)v101;
        }
        std::vector<AttributeRange>::push_back((_DWORD *)a2 + 619, &v82[v99 + 16]);
        v83 = (char *)v101;
        if ( !v101 || v95 >= (v102 - (int)v101) / 80 )
        {
          invalid_parameter_noinfo();
          v83 = (char *)v101;
        }
        v84 = *(_DWORD *)&v83[v99 + 36];
        v85 = *((_DWORD *)a2 + 10);
        v107[0] = v84;
        if ( v85 )
          v86 = (int)(*((_DWORD *)a2 + 11) - v85) >> 2;
        else
          v86 = 0;
        if ( v85 && v86 < (int)(*((_DWORD *)a2 + 12) - v85) >> 2 )
        {
          v87 = (int *)*((_DWORD *)a2 + 11);
          *v87 = v84;
          *((_DWORD *)a2 + 11) = v87 + 1;
        }
        else
        {
          v88 = (void *)*((_DWORD *)a2 + 11);
          if ( v85 > (unsigned int)v88 )
            invalid_parameter_noinfo();
          sub_100ECE10((int)&v111, (int)a2 + 36, v88, (int)v107);
        }
        v79 = (char *)v101;
        v78 = v102;
      }
      ++v95;
      v99 += 80;
    }
    (*(void (__thiscall **)(struct Mesh *, int))(*(_DWORD *)a2 + 104))(a2, 1);
    v138 = -1;
    if ( v101 )
    {
      sub_100ED200(v101, v102);
      operator delete(v101);
    }
    return 1;
  }
  else
  {
    SeriousWarning("MeshOps::Split: Mesh has no materials, cannot continue.");
    return 0;
  }
}
