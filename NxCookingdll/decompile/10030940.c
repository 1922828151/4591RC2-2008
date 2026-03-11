/*
 * func-name: sub_10030940
 * func-address: 0x10030940
 * callers: 0x100313a0
 * callees: 0x1000f320, 0x1000f330, 0x1000f360, 0x10014c10, 0x10015020, 0x100150a0, 0x10015980, 0x100159a0, 0x10015a80, 0x100307a0, 0x100307f0, 0x10031570, 0x10031600, 0x100316b0, 0x10033dc0, 0x10034200, 0x10034f10
 */

char __cdecl sub_10030940(
        unsigned int a1,
        size_t Size,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int *a13)
{
  unsigned int v13; // ebx
  unsigned __int8 *v14; // ebp
  unsigned __int8 *v15; // esi
  unsigned int v16; // eax
  int v17; // ecx
  unsigned int j; // eax
  void *v19; // edi
  unsigned int *v20; // eax
  unsigned int *v21; // eax
  unsigned int v22; // edi
  int v23; // eax
  int v24; // ebp
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int k; // eax
  int *v28; // eax
  unsigned int v29; // ecx
  int v30; // edx
  unsigned int m; // ecx
  int v32; // eax
  unsigned int *v33; // edi
  float *v34; // esi
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // edi
  _DWORD *v39; // ecx
  int v40; // edx
  double v41; // st7
  float *v42; // edx
  double v43; // st7
  double v44; // st7
  double v45; // st7
  double v46; // st7
  double v47; // st7
  int v48; // eax
  double v49; // st7
  float *v50; // edx
  double v51; // st7
  double v52; // st7
  double v53; // st7
  double v54; // st7
  double v55; // st7
  double v56; // st7
  double v57; // st6
  float *v58; // ecx
  double v59; // st7
  double v60; // st7
  double v61; // st7
  double v62; // st7
  double v63; // st7
  bool v64; // zf
  unsigned int v65; // edx
  unsigned int *v66; // eax
  int v67; // eax
  float *v68; // edi
  _DWORD *v69; // ecx
  float *v70; // esi
  double v71; // st7
  float *v72; // eax
  float *v73; // edx
  double v74; // st6
  double v75; // st5
  double v76; // st3
  long double v77; // st2
  double v78; // st0
  long double v79; // st5
  long double v80; // st7
  long double v81; // st1
  long double v82; // rt0
  long double v83; // st5
  long double v84; // st7
  long double v85; // rt2
  long double v86; // st6
  int v87; // ecx
  int v88; // eax
  unsigned __int16 v89; // dx
  int v90; // eax
  int v91; // ecx
  int v92; // edi
  int v93; // eax
  unsigned int v94; // ebx
  _DWORD *v95; // ecx
  int v96; // eax
  int v97; // esi
  int v98; // edi
  int v99; // edi
  int v100; // edx
  int v101; // eax
  int v102; // esi
  int v103; // edi
  int v104; // edx
  _DWORD *v105; // esi
  int v106; // edi
  int v107; // eax
  char *v108; // eax
  int v110; // [esp+48h] [ebp-10Ch]
  char *v111; // [esp+60h] [ebp-F4h]
  int v112; // [esp+60h] [ebp-F4h]
  int v113; // [esp+60h] [ebp-F4h]
  unsigned int v114; // [esp+64h] [ebp-F0h]
  unsigned int v115; // [esp+64h] [ebp-F0h]
  unsigned int v116; // [esp+68h] [ebp-ECh]
  _DWORD *v117; // [esp+68h] [ebp-ECh]
  unsigned int *v118; // [esp+6Ch] [ebp-E8h]
  _DWORD *v119; // [esp+6Ch] [ebp-E8h]
  unsigned int v120; // [esp+70h] [ebp-E4h]
  int v121; // [esp+74h] [ebp-E0h]
  int v122; // [esp+78h] [ebp-DCh]
  int v123; // [esp+7Ch] [ebp-D8h]
  unsigned int *v124; // [esp+80h] [ebp-D4h]
  unsigned int v125; // [esp+84h] [ebp-D0h]
  void *v126; // [esp+8Ch] [ebp-C8h]
  int v127; // [esp+90h] [ebp-C4h]
  int v128; // [esp+94h] [ebp-C0h]
  int v129; // [esp+94h] [ebp-C0h]
  unsigned int v130; // [esp+98h] [ebp-BCh]
  unsigned __int8 *i; // [esp+9Ch] [ebp-B8h]
  unsigned __int8 *v132; // [esp+A0h] [ebp-B4h]
  unsigned int v133; // [esp+A4h] [ebp-B0h] BYREF
  int v134; // [esp+A8h] [ebp-ACh]
  _DWORD v135[6]; // [esp+ACh] [ebp-A8h] BYREF
  unsigned __int16 v136; // [esp+C4h] [ebp-90h]
  __int16 v137; // [esp+C6h] [ebp-8Eh]
  unsigned __int16 v138; // [esp+C8h] [ebp-8Ch]
  int v139; // [esp+CAh] [ebp-8Ah]
  int v140; // [esp+D0h] [ebp-84h]
  _DWORD v141[5]; // [esp+D4h] [ebp-80h] BYREF
  _BYTE v142[44]; // [esp+E8h] [ebp-6Ch] BYREF
  unsigned int v143[6]; // [esp+114h] [ebp-40h] BYREF
  _DWORD v144[7]; // [esp+12Ch] [ebp-28h] BYREF
  int v145; // [esp+150h] [ebp-4h]

  v13 = a1;
  v122 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 4 * a1, 1);
  v14 = (unsigned __int8 *)(*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                             dword_100580A0,
                             4 * a1,
                             1);
  v132 = v14;
  v15 = (unsigned __int8 *)(*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                             dword_100580A0,
                             4 * a1,
                             1);
  v16 = 0;
  for ( i = v15; v16 < a1; ++v16 )
  {
    if ( a6 >= 0x100 )
      v17 = *(unsigned __int16 *)(a9 + 2 * v16);
    else
      v17 = *(unsigned __int8 *)(v16 + a8);
    *(_DWORD *)&v14[4 * v16] = v17;
  }
  for ( j = 0; j < a1; ++j )
    *(_DWORD *)&v15[4 * j] = *(unsigned __int16 *)(a7 + 2 * j);
  v19 = (void *)(*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                  dword_100580A0,
                  4 * a1,
                  1);
  v121 = (int)v19;
  if ( a1 )
    memset(v19, 0xFFu, 4 * a1);
  sub_10015980(v143);
  v145 = 0;
  v20 = sub_10015A80(v143, v14, a1, 0);
  v21 = sub_10015A80(v20, v15, a1, 0);
  v22 = sub_100307F0((int)v19, a3, a1, Size, (int)v15, v21[1]);
  v120 = v22;
  v23 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 24 * v22, 1);
  v24 = v23;
  v124 = (unsigned int *)v23;
  if ( v22 )
  {
    v25 = v23 + 8;
    v26 = v22;
    do
    {
      *(_DWORD *)(v25 - 8) = 0;
      *(_DWORD *)(v25 - 4) = 0;
      *(_DWORD *)v25 = 0;
      *(_DWORD *)(v25 + 8) = 0;
      *(_BYTE *)(v25 + 12) = 0;
      v25 += 24;
      --v26;
    }
    while ( v26 );
  }
  v127 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 24 * v22, 1);
  for ( k = 0; k < a1; ++k )
    ++*(_DWORD *)(v24 + 24 * *(_DWORD *)(v121 + 4 * k));
  if ( v22 > 1 )
  {
    v28 = (int *)(v24 + 8);
    v29 = v22 - 1;
    do
    {
      v30 = *v28 + *(v28 - 2);
      v28 += 6;
      --v29;
      *v28 = v30;
    }
    while ( v29 );
  }
  for ( m = 0; m < a1; ++m )
  {
    v32 = v24 + 24 * *(_DWORD *)(v121 + 4 * m);
    *(_DWORD *)(v122 + 4 * (*(_DWORD *)(v32 + 16) + *(_DWORD *)(v32 + 8))) = m;
    ++*(_DWORD *)(v32 + 16);
  }
  v126 = (void *)(*(int (__thiscall **)(int, size_t, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, Size, 1);
  memset(v126, 0, Size);
  LOBYTE(v145) = 1;
  if ( v22 )
  {
    v33 = v124;
    v34 = (float *)(v127 + 12);
    v118 = v124;
    v111 = (char *)v124 - v127;
    v114 = v120;
    do
    {
      *(v34 - 3) = 3.4028235e38;
      *(v34 - 2) = 3.4028235e38;
      *(v34 - 1) = 3.4028235e38;
      *v34 = -3.4028235e38;
      v34[1] = -3.4028235e38;
      v34[2] = -3.4028235e38;
      memset(v126, 0, Size);
      v35 = 0;
      v125 = 0;
      v116 = 0;
      if ( *v33 )
      {
        do
        {
          v36 = 3 * *(_DWORD *)(v122 + 4 * (v35 + *(_DWORD *)&v111[(_DWORD)v34 - 4]));
          v37 = *(_DWORD *)(a3 + 12 * *(_DWORD *)(v122 + 4 * (v35 + *(_DWORD *)&v111[(_DWORD)v34 - 4])));
          v38 = *(_DWORD *)(a3 + 4 * v36 + 8);
          v39 = (_DWORD *)(a3 + 4 * v36);
          v40 = v39[1];
          if ( !*((_BYTE *)v126 + v37) )
          {
            ++v125;
            *((_BYTE *)v126 + v37) = 1;
          }
          if ( !*((_BYTE *)v126 + v40) )
          {
            ++v125;
            *((_BYTE *)v126 + v40) = 1;
          }
          if ( !*((_BYTE *)v126 + v38) )
          {
            ++v125;
            *((_BYTE *)v126 + v38) = 1;
          }
          v41 = *v34;
          v42 = (float *)(a4 + 12 * *v39);
          if ( *v42 > v41 )
            v41 = *(float *)(a4 + 12 * *v39);
          *v34 = v41;
          v43 = v34[1];
          if ( v42[1] > v43 )
            v43 = v42[1];
          v34[1] = v43;
          v44 = v34[2];
          if ( v42[2] > v44 )
            v44 = v42[2];
          v34[2] = v44;
          v45 = *(v34 - 3);
          if ( *v42 <= v45 )
            v45 = *v42;
          *(v34 - 3) = v45;
          v46 = *(v34 - 2);
          if ( v42[1] <= v46 )
            v46 = v42[1];
          *(v34 - 2) = v46;
          v47 = *(v34 - 1);
          if ( v42[2] <= v47 )
            v47 = v42[2];
          *(v34 - 1) = v47;
          v48 = v39[1];
          v49 = *v34;
          v50 = (float *)(a4 + 12 * v48);
          if ( *v50 > v49 )
            v49 = *(float *)(a4 + 12 * v48);
          *v34 = v49;
          v51 = v34[1];
          if ( v50[1] > v51 )
            v51 = v50[1];
          v34[1] = v51;
          v52 = v34[2];
          if ( v50[2] > v52 )
            v52 = v50[2];
          v34[2] = v52;
          v53 = *(v34 - 3);
          if ( *v50 <= v53 )
            v53 = *v50;
          *(v34 - 3) = v53;
          v54 = *(v34 - 2);
          if ( v50[1] <= v54 )
            v54 = v50[1];
          *(v34 - 2) = v54;
          v55 = *(v34 - 1);
          if ( v50[2] <= v55 )
            v55 = v50[2];
          *(v34 - 1) = v55;
          v56 = *v34;
          v57 = *(float *)(a4 + 12 * v39[2]);
          v58 = (float *)(a4 + 12 * v39[2]);
          if ( v57 > v56 )
            v56 = v57;
          *v34 = v56;
          v59 = v34[1];
          if ( v58[1] > v59 )
            v59 = v58[1];
          v34[1] = v59;
          v60 = v34[2];
          if ( v58[2] > v60 )
            v60 = v58[2];
          v34[2] = v60;
          v61 = *(v34 - 3);
          if ( *v58 <= v61 )
            v61 = *v58;
          *(v34 - 3) = v61;
          v62 = *(v34 - 2);
          if ( v58[1] <= v62 )
            v62 = v58[1];
          *(v34 - 2) = v62;
          v63 = *(v34 - 1);
          if ( v58[2] <= v63 )
            v63 = v58[2];
          *(v34 - 1) = v63;
          v33 = v118;
          v35 = ++v116;
        }
        while ( v116 < *v118 );
        v13 = a1;
      }
      v33[1] = v125;
      v33 += 6;
      v34 += 6;
      v64 = v114-- == 1;
      v118 = v33;
    }
    while ( !v64 );
  }
  v65 = v120;
  if ( v120 )
  {
    v66 = v124 + 3;
    do
    {
      *v66 = (12 * *(v66 - 2) + 20 * *(v66 - 3) + 63) & 0xFFFFFFE0;
      v66 += 6;
      --v65;
    }
    while ( v65 );
  }
  *(float *)&v141[4] = 0.1;
  v141[2] = 0;
  v141[0] = v13;
  v141[1] = a3;
  v141[3] = a4;
  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)&v133);
  LOBYTE(v145) = 2;
  sub_1000F360(&v133, (int)v141);
  v67 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 12 * v13, 1);
  v123 = v67;
  if ( v13 )
  {
    v68 = (float *)v67;
    v69 = (_DWORD *)(a3 + 8);
    v112 = v67 - a3;
    do
    {
      v70 = (float *)(a4 + 12 * *v69);
      v71 = *v70 - *(float *)(a4 + 12 * *(v69 - 1));
      v72 = (float *)(a4 + 12 * *(v69 - 1));
      v73 = (float *)(a4 + 12 * *(v69 - 2));
      v74 = v70[1] - v72[1];
      v75 = v70[2] - v72[2];
      v76 = v72[1] - v73[1];
      v77 = v76 * v75 - (v72[2] - v73[2]) * v74;
      v78 = *v72 - *v73;
      v79 = (v72[2] - v73[2]) * v71 - v75 * v78;
      v80 = v74 * v78 - v71 * v76;
      v81 = sqrt(v80 * v80 + v79 * v79 + v77 * v77);
      if ( 0.0 == v81 )
      {
        v86 = v80;
        v84 = v77;
      }
      else
      {
        v82 = v79 * (1.0 / v81);
        v83 = v80 * (1.0 / v81);
        v84 = v77 * (1.0 / v81);
        v85 = v83;
        v79 = v82;
        v86 = v85;
      }
      *v68 = v84;
      v69 += 3;
      v68 += 3;
      --v13;
      *(v68 - 2) = v79;
      *(float *)((char *)v69 + v112 - 12) = v86;
    }
    while ( v13 );
  }
  sub_10031570(v120);
  LOBYTE(v145) = 3;
  v115 = 0;
  if ( v120 )
  {
    v119 = (_DWORD *)v127;
    v117 = v124 + 1;
    do
    {
      v135[0] = *v119;
      v135[1] = v119[1];
      v135[2] = v119[2];
      v135[3] = v119[3];
      v87 = v119[4];
      v88 = v119[5];
      v137 = v115;
      v89 = *((_WORD *)v117 + 4);
      v135[4] = v87;
      LOWORD(v87) = *((_WORD *)v117 - 2);
      v135[5] = v88;
      LOWORD(v88) = *(_WORD *)v117;
      v136 = v89;
      v138 = v87;
      LOWORD(v139) = v88;
      v90 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, v89, 1);
      v91 = v117[1];
      v92 = v138;
      v140 = v90;
      v128 = v122 + 4 * v91;
      v130 = v138;
      v93 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 32 * v138, 1);
      v94 = 0;
      v113 = v93;
      if ( v92 )
      {
        v95 = (_DWORD *)(v93 + 8);
        do
        {
          v96 = 12 * *(_DWORD *)(v128 + 4 * v94);
          v97 = a4 + 12 * *(_DWORD *)(v96 + a3);
          v98 = a4 + 12 * *(_DWORD *)(v96 + a3 + 4);
          *v95 = a4 + 12 * *(_DWORD *)(v96 + a3 + 8);
          v95[1] = v96 + v123;
          *(v95 - 2) = v97;
          v95[2] = 0;
          v95[3] = 0;
          v95[4] = 0;
          *(v95 - 1) = v98;
          v99 = *(_DWORD *)(v96 + v134 + 4);
          v100 = *(_DWORD *)(v96 + v134) & 0x1FFFFFFF;
          v101 = *(_DWORD *)(v96 + v134 + 8) & 0x1FFFFFFF;
          v102 = v99 & 0x1FFFFFFF;
          if ( v100 == 0x1FFFFFFF )
          {
            v104 = v123;
          }
          else
          {
            v103 = 3 * v100;
            v104 = v123;
            v95[2] = v123 + 4 * v103;
          }
          if ( v101 != 0x1FFFFFFF )
            v95[3] = v104 + 12 * v101;
          if ( v102 != 0x1FFFFFFF )
            v95[4] = v104 + 12 * v102;
          ++v94;
          v95 += 8;
        }
        while ( v94 < v130 );
      }
      sub_10034200(v140, v113, v130, v139);
      if ( v113 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v113);
      sub_100316B0(v135);
      v119 += 6;
      v117 += 6;
      ++v115;
    }
    while ( v115 < v120 );
  }
  sub_10033DC0(v142);
  v105 = (_DWORD *)sub_100307A0(v142, (int)v135);
  LOBYTE(v145) = 4;
  v106 = sub_100307A0(v142, (int)v144);
  v107 = *a13;
  LOBYTE(v145) = 5;
  v129 = v107;
  v110 = sub_10014C10(v105);
  v108 = sub_100150A0(v106, 0);
  (*(void (__thiscall **)(int *, char *, int))(v129 + 48))(a13, v108, v110);
  LOBYTE(v145) = 4;
  sub_10015020(v144);
  LOBYTE(v145) = 3;
  sub_10015020(v135);
  if ( i )
    (*(void (__thiscall **)(int, unsigned __int8 *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, i);
  if ( v132 )
    (*(void (__thiscall **)(int, unsigned __int8 *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v132);
  if ( v123 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v123);
  if ( v122 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v122);
  if ( v124 )
    (*(void (__thiscall **)(int, unsigned int *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v124);
  if ( v127 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v127);
  if ( v121 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v121);
  LOBYTE(v145) = 2;
  sub_10031600();
  LOBYTE(v145) = 1;
  sub_1000F330(&v133);
  LOBYTE(v145) = 0;
  if ( v126 )
    (*(void (__thiscall **)(int, void *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v126);
  v145 = -1;
  sub_100159A0((int)v143);
  return 1;
}
