/*
 * func-name: sub_1000AF30
 * func-address: 0x1000af30
 * callers: 0x1000bf10
 * callees: 0x100079f0
 */

unsigned int __thiscall sub_1000AF30(_DWORD *this)
{
  unsigned int v2; // ebx
  char *v3; // eax
  int v4; // esi
  int *v5; // esi
  unsigned int v6; // edi
  int v7; // ecx
  int v8; // ebx
  float v9; // edx
  float v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // edx
  int v13; // eax
  char *v14; // edx
  int v15; // edi
  char *v16; // eax
  _DWORD *v17; // ecx
  int v18; // ecx
  float v19; // ecx
  int v20; // eax
  char *v21; // edx
  int v22; // ebx
  float v23; // ecx
  float v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  char *v28; // edx
  int v29; // edi
  char *v30; // eax
  _DWORD *v31; // ecx
  int v32; // ecx
  int v33; // eax
  char *v34; // edx
  int v35; // ebx
  float v36; // ecx
  float v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // ecx
  int v40; // eax
  char *v41; // edx
  int v42; // edi
  char *v43; // eax
  _DWORD *v44; // ecx
  int v45; // ecx
  int v46; // edx
  unsigned int result; // eax
  unsigned int v48; // edi
  unsigned int v49; // ebx
  int v50; // esi
  int v51; // ecx
  int v52; // eax
  int v53; // edx
  int v54; // ecx
  double v55; // st6
  int v56; // eax
  unsigned int v57; // edi
  double v58; // st5
  double v59; // st4
  double v60; // st4
  char *v61; // esi
  bool v62; // zf
  int v63; // esi
  int v64; // eax
  double v65; // st6
  double v66; // st5
  double v67; // st4
  double v68; // st7
  double v69; // st6
  double v70; // st5
  double v71; // st4
  double v72; // st3
  double v73; // st2
  double v74; // st1
  double v75; // rt1
  double v76; // st2
  double v77; // st6
  double v78; // rt2
  double v79; // st3
  double v80; // st5
  double v81; // st2
  double v82; // st3
  double v83; // st7
  long double v84; // st1
  long double v85; // st1
  double v86; // st1
  double v87; // st6
  long double v88; // rt1
  double v89; // st1
  long double v90; // st5
  double v91; // st4
  long double v92; // st1
  long double v93; // st1
  long double v94; // st7
  unsigned int v95; // edi
  int v96; // ecx
  unsigned int v97; // esi
  int v98; // ebx
  int v99; // eax
  char *v100; // edx
  const void *v101; // esi
  void *v102; // edi
  int v103; // edx
  int v104; // ebx
  int v105; // [esp+3Ch] [ebp-84h]
  int v106; // [esp+3Ch] [ebp-84h]
  int v107; // [esp+3Ch] [ebp-84h]
  int v108; // [esp+3Ch] [ebp-84h]
  unsigned int v109; // [esp+3Ch] [ebp-84h]
  char *v110; // [esp+40h] [ebp-80h] BYREF
  char *v111; // [esp+44h] [ebp-7Ch]
  unsigned int v112; // [esp+48h] [ebp-78h]
  unsigned int v113; // [esp+54h] [ebp-6Ch]
  int v114; // [esp+58h] [ebp-68h]
  char *v115; // [esp+5Ch] [ebp-64h]
  float v116; // [esp+60h] [ebp-60h]
  float v117; // [esp+64h] [ebp-5Ch]
  float v118; // [esp+68h] [ebp-58h]
  float v119; // [esp+70h] [ebp-50h]
  float v120; // [esp+74h] [ebp-4Ch]
  float v121; // [esp+78h] [ebp-48h]
  _DWORD v122[17]; // [esp+7Ch] [ebp-44h] BYREF

  v2 = ((this[17] - this[16]) >> 2) / 3u;
  v3 = 0;
  v115 = (char *)v2;
  v110 = 0;
  v111 = 0;
  v112 = 0;
  if ( 3 * v2 )
  {
    v4 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 48 * v2, 289);
    v3 = (char *)(v4 + 16 * ((v111 - v110) >> 4));
    v112 = v4 + 48 * v2;
    v111 = v3;
    v110 = (char *)v4;
  }
  v5 = (int *)this[16];
  v6 = 0;
  v113 = 0;
  if ( v2 )
  {
    do
    {
      v7 = this[36];
      v8 = *v5;
      v114 = *(_DWORD *)(v7 + 4 * v5[2]);
      v9 = *(float *)(v7 + 4 * v5[1]);
      v10 = *(float *)(v7 + 4 * v8);
      if ( LODWORD(v10) >= LODWORD(v9) )
      {
        v116 = v9;
        v117 = v10;
      }
      else
      {
        v116 = v10;
        v117 = v9;
      }
      if ( v112 <= (unsigned int)v3 )
      {
        v11 = 2 * ((v3 - v110) >> 4) + 2;
        v12 = v110 ? (int)(v112 - (_DWORD)v110) >> 4 : 0;
        if ( v12 < v11 )
        {
          v105 = 16 * v11;
          v13 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                  dword_100580A0,
                  16 * v11,
                  289);
          v14 = v111;
          v15 = v13;
          v16 = v110;
          v17 = (_DWORD *)v15;
          if ( v110 != v111 )
          {
            do
            {
              *v17 = *(_DWORD *)v16;
              v17[1] = *((_DWORD *)v16 + 1);
              v17[2] = *((_DWORD *)v16 + 2);
              v17[3] = *((_DWORD *)v16 + 3);
              v16 += 16;
              v17 += 4;
            }
            while ( v16 != v14 );
            v14 = v111;
            v16 = v110;
          }
          if ( v16 )
          {
            (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v16);
            v14 = v111;
            v16 = v110;
          }
          v18 = v15 + v105;
          v3 = (char *)(v15 + 16 * ((v14 - v16) >> 4));
          v110 = (char *)v15;
          v6 = v113;
          v112 = v18;
          v111 = v3;
        }
      }
      v19 = v117;
      *(float *)v3 = v116;
      *((float *)v111 + 1) = v19;
      *((_DWORD *)v111 + 2) = v114;
      *((_DWORD *)v111 + 3) = v6;
      v20 = this[36];
      v21 = v111 + 16;
      v111 += 16;
      v22 = v5[1];
      v114 = *(_DWORD *)(v20 + 4 * *v5);
      v23 = *(float *)(v20 + 4 * v5[2]);
      v24 = *(float *)(v20 + 4 * v22);
      if ( LODWORD(v24) >= LODWORD(v23) )
      {
        v116 = v23;
        v117 = v24;
      }
      else
      {
        v116 = v24;
        v117 = v23;
      }
      if ( v112 <= (unsigned int)v21 )
      {
        v25 = 2 * ((v21 - v110) >> 4) + 2;
        v26 = v110 ? (int)(v112 - (_DWORD)v110) >> 4 : 0;
        if ( v26 < v25 )
        {
          v106 = 16 * v25;
          v27 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                  dword_100580A0,
                  16 * v25,
                  289);
          v28 = v111;
          v29 = v27;
          v30 = v110;
          v31 = (_DWORD *)v29;
          if ( v110 != v111 )
          {
            do
            {
              *v31 = *(_DWORD *)v30;
              v31[1] = *((_DWORD *)v30 + 1);
              v31[2] = *((_DWORD *)v30 + 2);
              v31[3] = *((_DWORD *)v30 + 3);
              v30 += 16;
              v31 += 4;
            }
            while ( v30 != v28 );
            v28 = v111;
            v30 = v110;
          }
          if ( v30 )
          {
            (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v30);
            v28 = v111;
            v30 = v110;
          }
          v32 = v29 + v106;
          v21 = (char *)(v29 + 16 * ((v28 - v30) >> 4));
          v110 = (char *)v29;
          v6 = v113;
          v112 = v32;
          v111 = v21;
        }
      }
      *(float *)v21 = v116;
      *((float *)v111 + 1) = v117;
      *((_DWORD *)v111 + 2) = v114;
      *((_DWORD *)v111 + 3) = v6;
      v33 = this[36];
      v34 = v111 + 16;
      v111 += 16;
      v35 = v5[2];
      v114 = *(_DWORD *)(v33 + 4 * v5[1]);
      v36 = *(float *)(v33 + 4 * *v5);
      v37 = *(float *)(v33 + 4 * v35);
      if ( LODWORD(v37) >= LODWORD(v36) )
      {
        v116 = v36;
        v117 = v37;
      }
      else
      {
        v116 = v37;
        v117 = v36;
      }
      if ( v112 <= (unsigned int)v34 )
      {
        v38 = 2 * ((v34 - v110) >> 4) + 2;
        v39 = v110 ? (int)(v112 - (_DWORD)v110) >> 4 : 0;
        if ( v39 < v38 )
        {
          v107 = 16 * v38;
          v40 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                  dword_100580A0,
                  16 * v38,
                  289);
          v41 = v111;
          v42 = v40;
          v43 = v110;
          v44 = (_DWORD *)v42;
          if ( v110 != v111 )
          {
            do
            {
              *v44 = *(_DWORD *)v43;
              v44[1] = *((_DWORD *)v43 + 1);
              v44[2] = *((_DWORD *)v43 + 2);
              v44[3] = *((_DWORD *)v43 + 3);
              v43 += 16;
              v44 += 4;
            }
            while ( v43 != v41 );
            v41 = v111;
            v43 = v110;
          }
          if ( v43 )
          {
            (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v43);
            v41 = v111;
            v43 = v110;
          }
          v45 = v42 + v107;
          v34 = (char *)(v42 + 16 * ((v41 - v43) >> 4));
          v110 = (char *)v42;
          v6 = v113;
          v112 = v45;
          v111 = v34;
        }
      }
      *(float *)v34 = v116;
      *((float *)v111 + 1) = v117;
      *((_DWORD *)v111 + 2) = v114;
      *((_DWORD *)v111 + 3) = v6++;
      v3 = v111 + 16;
      v5 += 3;
      v111 += 16;
      v113 = v6;
    }
    while ( v6 < (unsigned int)v115 );
  }
  sub_100079F0((int *)&v110, 0, ((v3 - v110) >> 4) - 1);
  v46 = (int)v110;
  result = -1;
  v48 = 0;
  v49 = (v111 - v110) >> 4;
  v122[4] = -1;
  v122[5] = -1;
  if ( v49 )
  {
    while ( 1 )
    {
      v50 = this[41];
      v51 = *(_DWORD *)(16 * v48 + v46);
      v52 = v46 + 16 * v48;
      v108 = *(_DWORD *)(v52 + 4);
      v122[1] = v108;
      v114 = v51;
      v122[0] = v51;
      v53 = 12 * v108;
      v54 = 12 * v51;
      v55 = *(float *)(12 * v108 + v50) - *(float *)(v54 + v50);
      v56 = *(_DWORD *)(v52 + 8);
      v57 = v48 + 1;
      v58 = *(float *)(12 * v108 + v50 + 4) - *(float *)(v54 + v50 + 4);
      v59 = *(float *)(12 * v108 + v50 + 8);
      v122[2] = v56;
      v60 = v59 - *(float *)(v54 + v50 + 8);
      v122[3] = -1;
      LOWORD(v122[6]) = 0;
      v113 = v57;
      *(float *)&v122[7] = sqrt(v55 * v55 + v60 * v60 + v58 * v58);
      *(float *)&v122[9] = 0.0;
      *(float *)&v122[8] = 0.0;
      if ( v57 < v49 )
      {
        v61 = &v110[16 * v57];
        v62 = v114 == *(_DWORD *)v61;
        v115 = v61;
        if ( v62 && v108 == *((_DWORD *)v61 + 1) )
        {
          v122[3] = *((_DWORD *)v61 + 2);
          v63 = 12 * v56;
          v122[2] = v56;
          v64 = this[41];
          v65 = *(float *)(12 * v122[3] + v64 + 4) - *(float *)(v64 + v63 + 4);
          v66 = *(float *)(12 * v122[3] + v64 + 8) - *(float *)(v64 + v63 + 8);
          v67 = *(float *)(12 * v122[3] + v64) - *(float *)(v64 + v63);
          *(float *)&v122[8] = sqrt(v67 * v67 + v66 * v66 + v65 * v65);
          v68 = *(float *)(v54 + v64);
          v69 = *(float *)(v54 + v64 + 4);
          v70 = *(float *)(v54 + v64 + 8);
          v71 = *(float *)(v53 + v64) - v68;
          v72 = *(float *)(v53 + v64 + 4) - v69;
          v73 = *(float *)(v53 + v64 + 8) - v70;
          v74 = *(float *)(v64 + v63) - v68;
          v117 = *(float *)(v64 + v63 + 4) - v69;
          v118 = *(float *)(v64 + v63 + 8) - v70;
          v119 = *(float *)(v64 + 12 * v122[3]) - v68;
          v75 = v73;
          v76 = *(float *)(v64 + 12 * v122[3] + 4) - v69;
          v77 = v75;
          v120 = v76;
          v78 = v72;
          v79 = *(float *)(v64 + 12 * v122[3] + 8) - v70;
          v80 = v78;
          v121 = v79;
          v81 = v118 * v78 - v117 * v75;
          v82 = v75 * v74 - v118 * v71;
          v83 = v117 * v71 - v74 * v78;
          v84 = sqrt(v81 * v81 + v83 * v83 + v82 * v82);
          if ( 0.0 != v84 )
          {
            v85 = 1.0 / v84;
            v81 = v81 * v85;
            v82 = v82 * v85;
            v83 = v83 * v85;
          }
          v86 = v77;
          v87 = v121 * v80 - v120 * v77;
          v88 = v86 * v119 - v121 * v71;
          v89 = v80;
          v90 = v88;
          v91 = v71 * v120 - v89 * v119;
          v92 = sqrt(v91 * v91 + v88 * v88 + v87 * v87);
          if ( 0.0 != v92 )
          {
            v93 = 1.0 / v92;
            v87 = v87 * v93;
            v90 = v90 * v93;
            v91 = v91 * v93;
          }
          v61 = v115;
          v94 = v81 * v87 + v90 * v82 + v83 * v91;
          *(float *)&v122[9] = 1.5707964
                             - v94
                             * (v94
                              * v94
                              * (((0.030381944 * (v94 * v94) * (v94 * v94) + 0.044642858) * (v94 * v94) + 0.075000003)
                               * (v94
                                * v94)
                               + 0.16666667)
                              + 1.0);
        }
        do
        {
          if ( *(_DWORD *)v61 != v114 )
            break;
          if ( *((_DWORD *)v61 + 1) != v108 )
            break;
          v61 += 16;
          ++v113;
        }
        while ( v113 < v49 );
      }
      v95 = this[48];
      result = this[47];
      if ( v95 <= result )
      {
        v96 = this[46];
        v97 = 2 * ((int)(result - v96) / 68) + 2;
        result = v96 ? (int)(v95 - v96) / 68 : 0;
        if ( result < v97 )
        {
          v98 = 68 * v97;
          v99 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                  dword_100580A0,
                  68 * v97,
                  289);
          v100 = (char *)this[46];
          v109 = v99;
          v115 = (char *)this[47];
          if ( v100 != v115 )
          {
            do
            {
              v101 = v100;
              v102 = (void *)v99;
              v100 += 68;
              v99 += 68;
              v62 = v100 == v115;
              qmemcpy(v102, v101, 0x44u);
            }
            while ( !v62 );
          }
          if ( this[46] )
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[46]);
          v103 = 17 * ((this[47] - this[46]) / 68);
          result = v109;
          this[48] = v109 + v98;
          this[47] = v109 + 4 * v103;
          this[46] = v109;
        }
      }
      qmemcpy((void *)this[47], v122, 0x44u);
      v104 = v111 - v110;
      this[47] += 68;
      v46 = (int)v110;
      v49 = v104 >> 4;
      if ( v113 >= v49 )
        break;
      v48 = v113;
    }
  }
  if ( v46 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v46);
  return result;
}
