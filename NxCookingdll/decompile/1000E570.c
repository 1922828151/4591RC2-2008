/*
 * func-name: sub_1000E570
 * func-address: 0x1000e570
 * callers: 0x1000ee20
 * callees: 0x10013710, 0x10014910, 0x10015590, 0x10034f10
 */

char __userpurge sub_1000E570@<al>(
        unsigned int *a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9)
{
  int v10; // esi
  _DWORD *v11; // ebx
  unsigned int v12; // edi
  int (__thiscall ***v13)(_DWORD, int, int); // eax
  int v14; // eax
  int v15; // edx
  int v16; // ebp
  int v17; // edi
  int v18; // eax
  _DWORD *v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  int v25; // eax
  int v26; // ebx
  float *v27; // edi
  float *v28; // esi
  float *v29; // ebp
  float *v30; // eax
  float *v31; // eax
  float *v32; // eax
  double v33; // st6
  double v34; // st4
  double v35; // st7
  double v36; // st5
  double v37; // st3
  long double v38; // st2
  double v39; // st7
  double v40; // st5
  long double v41; // st6
  long double v42; // st4
  long double v43; // st4
  double v44; // st3
  double v45; // st1
  double v46; // st4
  double v47; // rt1
  double v48; // st1
  double v49; // st0
  double v50; // st2
  double v51; // st4
  double v52; // st3
  long double v53; // st1
  long double v54; // st1
  unsigned int *v55; // edi
  unsigned int v56; // ebx
  int v57; // edx
  unsigned int v58; // eax
  int v59; // ecx
  unsigned int *v60; // eax
  int v61; // ecx
  int v62; // ecx
  unsigned int i; // eax
  int v64; // eax
  unsigned int v65; // esi
  int v66; // ecx
  unsigned int *v67; // eax
  size_t v68; // esi
  int (__thiscall ***v69)(_DWORD, size_t, int); // eax
  _BYTE *v70; // eax
  _BYTE *v71; // ebx
  float v72; // ebx
  int v73; // edi
  int v74; // esi
  unsigned __int16 *v75; // edx
  int v76; // ebp
  float *v77; // ecx
  int *v78; // eax
  int v79; // eax
  unsigned __int16 *v80; // edi
  int v81; // ecx
  float *v82; // edx
  float v83; // eax
  _DWORD *v84; // eax
  int v85; // ecx
  int v86; // ecx
  int v87; // eax
  int v89; // [esp+0h] [ebp-D0h]
  int v90; // [esp+0h] [ebp-D0h]
  char v93; // [esp+13h] [ebp-BDh]
  char *v94; // [esp+14h] [ebp-BCh]
  int v95; // [esp+14h] [ebp-BCh]
  int v96; // [esp+14h] [ebp-BCh]
  _DWORD *v97; // [esp+18h] [ebp-B8h]
  int v98; // [esp+1Ch] [ebp-B4h]
  int v99; // [esp+1Ch] [ebp-B4h]
  _BYTE *v100; // [esp+1Ch] [ebp-B4h]
  int v102; // [esp+24h] [ebp-ACh]
  int v103; // [esp+28h] [ebp-A8h]
  int v104; // [esp+2Ch] [ebp-A4h]
  _DWORD *v105; // [esp+30h] [ebp-A0h]
  float v106; // [esp+34h] [ebp-9Ch]
  float v107; // [esp+38h] [ebp-98h]
  float v108; // [esp+3Ch] [ebp-94h]
  unsigned int v109; // [esp+40h] [ebp-90h]
  int v110; // [esp+44h] [ebp-8Ch]
  int v111; // [esp+48h] [ebp-88h]
  int v112; // [esp+4Ch] [ebp-84h]
  int v113; // [esp+50h] [ebp-80h]
  float v114; // [esp+54h] [ebp-7Ch]
  float v115; // [esp+58h] [ebp-78h]
  float v116; // [esp+5Ch] [ebp-74h]
  int v117; // [esp+78h] [ebp-58h]
  int v118; // [esp+7Ch] [ebp-54h]
  float v119; // [esp+80h] [ebp-50h]
  float v120; // [esp+84h] [ebp-4Ch]
  float v121; // [esp+88h] [ebp-48h]
  float v122; // [esp+8Ch] [ebp-44h]
  float v123; // [esp+90h] [ebp-40h]
  float v124; // [esp+94h] [ebp-3Ch]
  float v125; // [esp+98h] [ebp-38h]
  float v126; // [esp+A8h] [ebp-28h]
  float v127; // [esp+ACh] [ebp-24h]
  float v128; // [esp+B0h] [ebp-20h]
  float v129; // [esp+B4h] [ebp-1Ch]
  float v130; // [esp+BCh] [ebp-14h]
  float v131; // [esp+C4h] [ebp-Ch]

  if ( !a6 && !a7 )
    return sub_10013710(
             "EdgeList::ComputeActiveEdges: null parameter!",
             (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\EdgeList.cpp",
             303);
  if ( !a8 )
    return sub_10013710(
             "EdgeList::ComputeActiveEdges: null parameter!",
             (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\EdgeList.cpp",
             304);
  v10 = *a1;
  if ( !*a1 )
    return sub_10013710(
             "ActiveEdges::ComputeConvexEdges: no edges in edge list!",
             (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\EdgeList.cpp",
             307);
  v11 = (_DWORD *)a1[1];
  v97 = v11;
  if ( !v11 )
    return sub_10013710(
             "ActiveEdges::ComputeConvexEdges: no edge data in edge list!",
             (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\EdgeList.cpp",
             310);
  v12 = a1[4];
  if ( !v12 )
    return sub_10013710(
             "ActiveEdges::ComputeConvexEdges: no edge-to-triangle in edge list!",
             (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\EdgeList.cpp",
             313);
  v109 = a1[5];
  if ( !v109 )
    return sub_10013710(
             "ActiveEdges::ComputeConvexEdges: no faces-by-edges in edge list!",
             (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\EdgeList.cpp",
             316);
  v13 = (int (__thiscall ***)(_DWORD, int, int))((int (*)(void))sub_10014910)();
  v14 = (**v13)(v13, v10, 1);
  v98 = v14;
  if ( !v14 )
    return 0;
  v15 = v103;
  v16 = v104;
  v105 = (_DWORD *)(v12 + 4);
  v17 = v102;
  v94 = (char *)v14;
  do
  {
    v18 = *((unsigned __int16 *)v105 - 1);
    v112 = --v10;
    v93 = 0;
    if ( v18 == 1 )
    {
      v93 = 1;
      goto LABEL_52;
    }
    if ( v18 == 2 )
    {
      v19 = (_DWORD *)(v109 + 4 * *v105);
      v20 = 3 * *v19;
      v21 = 3 * v19[1];
      if ( a6 )
      {
        v15 = *(_DWORD *)(a6 + 4 * v20);
        v17 = *(_DWORD *)(a6 + 4 * v20 + 4);
        v16 = *(_DWORD *)(a6 + 4 * v20 + 8);
        v110 = *(_DWORD *)(a6 + 4 * v21);
        v22 = *(_DWORD *)(a6 + 4 * v21 + 4);
        v23 = *(_DWORD *)(a6 + 4 * v21 + 8);
      }
      else
      {
        if ( !a7 )
          goto LABEL_25;
        v15 = *(unsigned __int16 *)(a7 + 2 * v20);
        v17 = *(unsigned __int16 *)(a7 + 2 * v20 + 2);
        v16 = *(unsigned __int16 *)(a7 + 2 * v20 + 4);
        v110 = *(unsigned __int16 *)(a7 + 2 * v21);
        v22 = *(unsigned __int16 *)(a7 + 2 * v21 + 2);
        v23 = *(unsigned __int16 *)(a7 + 2 * v21 + 4);
      }
      v111 = v23;
      v113 = v22;
      v104 = v16;
      v102 = v17;
      v103 = v15;
LABEL_25:
      v24 = *v11;
      v25 = v11[1];
      if ( v15 == *v11 && v17 == v25 )
      {
        v26 = v16;
      }
      else if ( v15 == v25 && v17 == v24 )
      {
        v26 = v16;
      }
      else if ( v15 == v24 && v16 == v25 )
      {
        v26 = v17;
      }
      else if ( v15 == v25 && v16 == v24 )
      {
        v26 = v17;
      }
      else if ( v17 == v24 && v16 == v25 )
      {
        v26 = v15;
      }
      else if ( v17 == v25 && v16 == v24 )
      {
        v26 = v15;
      }
      else
      {
        v26 = -1;
      }
      v27 = (float *)(a8 + 12 * v113);
      v28 = (float *)(a8 + 12 * v111);
      v29 = (float *)(a8 + 12 * v110);
      sub_10015590(v29, v27, v28);
      if ( *(float *)(a8 + 12 * v26 + 4) * v127
         + *(float *)(a8 + 12 * v26 + 8) * v128
         + *(float *)(a8 + 12 * v26) * v126
         + v129 < 0.0 )
      {
        v30 = (float *)(a8 + 12 * v103);
        v120 = *v30;
        v122 = v30[2];
        v121 = v30[1];
        v31 = (float *)(a8 + 12 * v102);
        v123 = *v31;
        v125 = v31[2];
        v124 = v31[1];
        v32 = (float *)(a8 + 12 * v104);
        v33 = v120 - *v32;
        v34 = v121 - v32[1];
        v114 = *v29;
        v35 = v122 - v32[2];
        v115 = v29[1];
        v36 = v120 - v123;
        v116 = v29[2];
        v37 = v121 - v124;
        v38 = v37 * v35 - (v122 - v125) * v34;
        v39 = (v122 - v125) * v33 - v35 * v36;
        v40 = v36 * v34 - v33 * v37;
        v41 = v38;
        v119 = v40;
        v42 = v41 * v41 + v40 * v40 + v39 * v39;
        if ( 0.0 != v42 )
        {
          v43 = 1.0 / sqrt(v42);
          v41 = v38 * v43;
          v39 = v39 * v43;
          v40 = v40 * v43;
          v119 = v40;
        }
        v44 = v114 - *v28;
        v45 = v115 - v28[1];
        v130 = v45;
        v46 = v116 - v28[2];
        v106 = v114 - *v27;
        v47 = v45;
        v48 = v115 - v27[1];
        v107 = v48;
        v49 = v116 - v27[2];
        v108 = v49;
        v50 = v48 * v46 - v47 * v49;
        v51 = v108 * v44 - v46 * v106;
        v52 = v106 * v130 - v44 * v107;
        v53 = v52 * v52 + v51 * v51 + v50 * v50;
        if ( 0.0 != v53 )
        {
          v54 = 1.0 / sqrt(v53);
          v50 = v50 * v54;
          v51 = v51 * v54;
          v52 = v52 * v54;
        }
        v131 = v52 * v39 - v51 * v40;
        if ( fabs(
               atan2(
                 sqrt(
                   (v40 * v50 - v52 * v41) * (v40 * v50 - v52 * v41)
                 + (v51 * v41 - v39 * v50) * (v51 * v41 - v39 * v50)
                 + v131 * v131),
                 v39 * v51 + v41 * v50 + v52 * v119)) > a9 )
          v93 = 1;
      }
      v10 = v112;
      v15 = v103;
      v17 = v102;
      v16 = v104;
      v11 = v97;
    }
LABEL_52:
    v105 += 2;
    *v94 = v93;
    v11 += 2;
    ++v94;
    v97 = v11;
  }
  while ( v10 );
  v55 = a1;
  v56 = 0;
  if ( a1[2] )
  {
    v57 = 0;
    do
    {
      v58 = a1[3];
      v59 = *(_DWORD *)(v58 + v57);
      v60 = (unsigned int *)(v57 + v58);
      if ( v59 >= 0 && *(_BYTE *)(v98 + (v59 & 0xFFFFFFF)) )
        *v60 = v59 | 0x80000000;
      v61 = v60[1];
      if ( v61 >= 0 && *(_BYTE *)(v98 + (v61 & 0xFFFFFFF)) )
        v60[1] = v61 | 0x80000000;
      v62 = v60[2];
      if ( v62 >= 0 && *(_BYTE *)(v98 + (v62 & 0xFFFFFFF)) )
        v60[2] = v62 | 0x80000000;
      ++v56;
      v57 += 12;
    }
    while ( v56 < a1[2] );
  }
  for ( i = 0; i < *a1; ++i )
  {
    if ( *(_BYTE *)(i + v98) )
      *(_WORD *)(a1[4] + 8 * i) |= 1u;
  }
  v64 = sub_10014910(a3);
  (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v64 + 12))(v64, v98, v89, a4);
  v65 = 0;
  if ( a7 )
  {
    v66 = LODWORD(a9) + 4;
    v99 = a7;
    v67 = (unsigned int *)(a8 + 8);
    do
    {
      if ( *(v67 - 2) > v65 )
        v65 = *(v67 - 2);
      if ( *(v67 - 1) > v65 )
        v65 = *(v67 - 1);
      if ( *v67 > v65 )
        v65 = *v67;
      v67 += 3;
      v66 += 6;
      --v99;
    }
    while ( v99 );
    v55 = (unsigned int *)v103;
  }
  v68 = v65 + 1;
  v69 = (int (__thiscall ***)(_DWORD, size_t, int))sub_10014910(a2);
  v70 = (_BYTE *)(**v69)(v69, v68, 1);
  v71 = v70;
  v100 = v70;
  if ( !v70 )
    return 0;
  memset(v70, 0, v68);
  v95 = 0;
  if ( v55[2] )
  {
    v72 = v119;
    v73 = v118;
    v74 = v117;
    v75 = (unsigned __int16 *)(a7 + 4);
    v76 = -8 - a6;
    v77 = (float *)(a6 + 8);
    while ( 1 )
    {
      if ( a6 )
      {
        v74 = *((_DWORD *)v77 - 2);
        v73 = *((_DWORD *)v77 - 1);
        v72 = *v77;
      }
      else if ( a7 )
      {
        v74 = *(v75 - 2);
        v73 = *(v75 - 1);
        LODWORD(v72) = *v75;
      }
      v78 = (int *)((char *)v77 + v76 + a1[3]);
      if ( *v78 < 0 )
      {
        v100[v73] = 1;
        v100[v74] = 1;
      }
      if ( v78[1] < 0 )
      {
        v100[LODWORD(v72)] = 1;
        v100[v73] = 1;
      }
      if ( v78[2] < 0 )
      {
        v100[LODWORD(v72)] = 1;
        v100[v74] = 1;
      }
      v75 += 3;
      v77 += 3;
      if ( ++v95 >= a1[2] )
        break;
      v76 = -8 - a6;
    }
    v71 = v100;
  }
  v96 = 0;
  if ( a1[2] )
  {
    v79 = a6;
    v80 = (unsigned __int16 *)(a7 + 4);
    v81 = -8 - a6;
    v82 = (float *)(a6 + 8);
    while ( !v79 )
    {
      if ( a7 )
      {
        LODWORD(v106) = *(v80 - 2);
        LODWORD(v107) = *(v80 - 1);
        LODWORD(v83) = *v80;
        goto LABEL_103;
      }
LABEL_104:
      v84 = (_DWORD *)((char *)v82 + a1[3] + v81);
      if ( (*v84 & 0x40000000) == 0 && v71[LODWORD(v106)] )
        *v84 |= 0x40000000u;
      v85 = v84[1];
      if ( (v85 & 0x40000000) == 0 && v71[LODWORD(v107)] )
        v84[1] = v85 | 0x40000000;
      v86 = v84[2];
      if ( (v86 & 0x40000000) == 0 )
      {
        if ( v71[LODWORD(v108)] )
          v84[2] = v86 | 0x40000000;
      }
      v80 += 3;
      v82 += 3;
      if ( ++v96 >= a1[2] )
        goto LABEL_114;
      v79 = a6;
      v81 = -8 - a6;
    }
    v106 = *(v82 - 2);
    v107 = *(v82 - 1);
    v83 = *v82;
LABEL_103:
    v108 = v83;
    goto LABEL_104;
  }
LABEL_114:
  v87 = sub_10014910(v90);
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v87 + 12))(v87, v71);
  return 1;
}
