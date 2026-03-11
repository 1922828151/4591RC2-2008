/*
 * func-name: sub_100072C0
 * func-address: 0x100072c0
 * callers: 0x10008e70
 * callees: none
 */

int __usercall sub_100072C0@<eax>(int a1@<eax>, int *a2@<ecx>, int a3, int a4, int *a5, int *a6, int *a7, int a8)
{
  int *v8; // ebp
  int result; // eax
  int (__thiscall *v12)(int); // edx
  void (__thiscall ***v13)(_DWORD, float *); // eax
  _DWORD *v14; // ecx
  int v15; // edx
  int v16; // edx
  double v17; // st7
  _DWORD *v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // eax
  _DWORD *v26; // ecx
  int v27; // ebx
  _DWORD *v28; // eax
  bool v29; // zf
  _DWORD *v30; // edx
  int v31; // edx
  _DWORD *v32; // edx
  _DWORD *i; // ecx
  _DWORD *v34; // ecx
  int v35; // eax
  int v36; // esi
  int v37; // ebx
  int v38; // ecx
  int v39; // edi
  unsigned int v40; // eax
  unsigned int v41; // ecx
  unsigned int v42; // edx
  int v43; // edi
  unsigned int v44; // ecx
  unsigned int v45; // eax
  int v46; // ebx
  int v47; // eax
  float *v48; // esi
  int v49; // ebp
  float *v50; // ecx
  int v51; // eax
  int v52; // edi
  double v53; // st7
  int v54; // edi
  int v55; // edx
  int v56; // ebp
  float *v57; // esi
  int v58; // ebx
  float *v59; // ecx
  int v60; // eax
  int v61; // ebp
  double v62; // st7
  int v63; // ebp
  int v64; // eax
  char *v65; // ecx
  float *v66; // edx
  int v67; // esi
  double v68; // st7
  int *v69; // edi
  int v70; // esi
  int v71; // ecx
  int v72; // ebp
  unsigned int v73; // eax
  unsigned int v74; // ecx
  int v75; // ebx
  unsigned int v76; // ecx
  unsigned int v77; // eax
  int v78; // ebx
  int v79; // eax
  float *v80; // esi
  int v81; // ebp
  float *v82; // ecx
  int v83; // eax
  int v84; // edi
  double v85; // st7
  int v86; // edi
  int v87; // edx
  int v88; // edi
  float *v89; // esi
  int v90; // ebx
  float *v91; // ecx
  int v92; // eax
  int v93; // edi
  double v94; // st7
  int v95; // edi
  int v96; // eax
  char *v97; // ecx
  float *v98; // edx
  int v99; // esi
  double v100; // st7
  int v101; // ebx
  int v102; // ecx
  float *v103; // esi
  double v104; // st7
  double v105; // st6
  double v106; // st5
  int v107; // edx
  int v108; // eax
  char *v109; // edi
  char *v110; // ebp
  float *v111; // ecx
  int v112; // eax
  int v113; // edx
  double v114; // st7
  int *v115; // edi
  unsigned int v116; // edx
  unsigned int v117; // eax
  unsigned int v118; // eax
  unsigned int v119; // edx
  int v120; // ebp
  int v121; // edi
  _DWORD *v122; // ecx
  _DWORD *v123; // eax
  _DWORD *m; // edx
  int v125; // ebp
  int v126; // edx
  int v127; // [esp+54h] [ebp-A0h]
  int v128; // [esp+54h] [ebp-A0h]
  int v129; // [esp+54h] [ebp-A0h]
  int v130; // [esp+54h] [ebp-A0h]
  char v131; // [esp+5Bh] [ebp-99h]
  int v132; // [esp+5Ch] [ebp-98h] BYREF
  int v133; // [esp+60h] [ebp-94h]
  int j; // [esp+64h] [ebp-90h]
  float *v135; // [esp+68h] [ebp-8Ch]
  int k; // [esp+6Ch] [ebp-88h]
  int v137; // [esp+70h] [ebp-84h] BYREF
  int *v138; // [esp+74h] [ebp-80h] BYREF
  float v139; // [esp+78h] [ebp-7Ch]
  float v140; // [esp+7Ch] [ebp-78h]
  float v141; // [esp+80h] [ebp-74h]
  float v142; // [esp+84h] [ebp-70h]
  float v143; // [esp+88h] [ebp-6Ch]
  float v144; // [esp+8Ch] [ebp-68h]
  float v145[3]; // [esp+90h] [ebp-64h] BYREF
  float v146[9]; // [esp+9Ch] [ebp-58h] BYREF
  int v147; // [esp+C0h] [ebp-34h]
  float v148; // [esp+C4h] [ebp-30h]
  int v149; // [esp+C8h] [ebp-2Ch]
  float v150; // [esp+CCh] [ebp-28h]
  int v151; // [esp+D0h] [ebp-24h] BYREF
  _DWORD v152[8]; // [esp+D4h] [ebp-20h] BYREF

  v8 = a5;
  result = (*(int (__thiscall **)(int, int, int, int *, int **))(*(_DWORD *)a3 + 176))(a3, a8, 1, &v132, &v138);
  if ( (_BYTE)result )
  {
    v148 = 0.0;
    memset(v146, 0, sizeof(v146));
    v150 = 0.001;
    v149 = 0;
    v12 = *(int (__thiscall **)(int))(*(_DWORD *)a3 + 164);
    v147 = 255;
    v13 = (void (__thiscall ***)(_DWORD, float *))v12(a3);
    (**v13)(v13, v146);
    if ( v147 == 255 || (v131 = 1, v148 <= 0.0) )
      v131 = 0;
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)a4 + 68))(a4, v145);
    v14 = (_DWORD *)*a2;
    v15 = a2[1] - *a2;
    v139 = v145[0] - *(double *)a1;
    v16 = v15 >> 2;
    v17 = v145[1] - *(double *)(a1 + 8);
    j = 4 * v16;
    v18 = &v14[v16];
    v140 = v17;
    v141 = v145[2] - *(double *)(a1 + 16);
    if ( v14 )
      v19 = (a2[2] - (int)v14) >> 2;
    else
      v19 = 0;
    v20 = v16 + 12;
    if ( v19 < v20 )
    {
      v21 = 2 * v20;
      v127 = v18 - v14;
      if ( v14 )
        v22 = (a2[2] - (int)v14) >> 2;
      else
        v22 = 0;
      if ( v22 < v21 )
      {
        v23 = 4 * v21;
        v24 = *(_DWORD *)dword_1002F7BC;
        v135 = (float *)v23;
        v25 = (*(int (__thiscall **)(int, int, int))(v24 + 8))(dword_1002F7BC, v23, 289);
        v26 = (_DWORD *)a2[1];
        v27 = v25;
        v28 = (_DWORD *)*a2;
        v29 = *a2 == (_DWORD)v26;
        v133 = v27;
        v30 = (_DWORD *)v27;
        if ( !v29 )
        {
          do
            *v30++ = *v28++;
          while ( v28 != v26 );
          v27 = v133;
        }
        if ( *a2 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, *a2);
        v31 = (a2[1] - *a2) >> 2;
        a2[2] = (int)v135 + v27;
        a2[1] = v27 + 4 * v31;
        *a2 = v27;
      }
      v18 = (_DWORD *)(*a2 + 4 * v127);
    }
    v32 = (_DWORD *)a2[1];
    for ( i = v18; i != v32; ++i )
      i[12] = *i;
    *v18 = 0;
    v18[1] = 0;
    v18[2] = 0;
    v18[3] = 0;
    v18[4] = 0;
    v18[5] = 0;
    v18[6] = 0;
    v18[7] = 0;
    v18[8] = 0;
    v18[9] = 0;
    v18[10] = 0;
    v18[11] = 0;
    a2[1] += 48;
    v34 = (_DWORD *)(j + *a2);
    v34[1] = a4;
    *v34 = 2;
    v34[2] = *(_DWORD *)a1;
    v34[3] = *(_DWORD *)(a1 + 4);
    v34[4] = *(_DWORD *)(a1 + 8);
    v34[5] = *(_DWORD *)(a1 + 12);
    v34[6] = *(_DWORD *)(a1 + 16);
    v34[7] = *(_DWORD *)(a1 + 20);
    v34[8] = v132;
    v34[9] = (a5[1] - *a5) / 36;
    if ( a6 )
      v35 = (a6[1] - *a6) / 36;
    else
      v35 = 0;
    v34[10] = v35;
    v34[11] = (a7[1] - *a7) >> 2;
    v36 = *a5;
    v37 = v132;
    v38 = (a5[1] - *a5) / 36;
    result = 36 * v38;
    v128 = v132;
    k = 36 * v38;
    v39 = 36 * v38 + v36;
    if ( v132 )
    {
      if ( v36 )
        v40 = (a5[2] - v36) / 36;
      else
        v40 = 0;
      v41 = v132 + v38;
      if ( v40 < v41 )
      {
        v42 = (int)((unsigned __int64)(954437177LL * (v39 - v36)) >> 32) >> 3;
        v43 = (v39 - v36) / 36;
        v44 = 2 * v41;
        v135 = (float *)(v42 + (v42 >> 31));
        if ( v36 )
          v45 = (a5[2] - v36) / 36;
        else
          v45 = 0;
        if ( v45 < v44 )
        {
          v46 = 36 * v44;
          v47 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_1002F7BC + 8))(
                  dword_1002F7BC,
                  36 * v44,
                  289);
          v48 = (float *)*a5;
          v133 = v47;
          v49 = v47;
          for ( j = a5[1]; v48 != (float *)j; v49 += 36 )
          {
            v50 = v48;
            v51 = v49 + 4;
            v52 = 3;
            do
            {
              v53 = *v50;
              v50 += 3;
              *(float *)(v51 - 4) = v53;
              v51 += 12;
              --v52;
              *(float *)(v51 - 12) = *(float *)((char *)v48 + v51 - v49 - 12);
              *(float *)(v51 - 8) = *(v50 - 1);
            }
            while ( v52 );
            v48 += 9;
          }
          if ( *a5 )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, *a5);
          v54 = v133;
          v55 = v133 + 36 * ((a5[1] - *a5) / 36);
          a5[2] = v133 + v46;
          v37 = v132;
          *a5 = v54;
          v43 = (int)v135;
          a5[1] = v55;
          v8 = a5;
        }
        v39 = *v8 + 36 * v43;
      }
      v56 = v8[1];
      v133 = 36 * v128;
      j = v56;
      v57 = (float *)v39;
      if ( v39 != v56 )
      {
        v58 = v39 + 36 * v128;
        do
        {
          v59 = v57;
          v60 = v58 + 4;
          v61 = 3;
          do
          {
            v62 = *v59;
            v59 += 3;
            *(float *)(v60 - 4) = v62;
            v60 += 12;
            --v61;
            *(float *)(v60 - 12) = *(float *)((char *)v57 + v60 - v58 - 12);
            *(float *)(v60 - 8) = *(v59 - 1);
          }
          while ( v61 );
          v57 += 9;
          v58 += 36;
        }
        while ( v57 != (float *)j );
        v37 = v132;
      }
      v63 = v128;
      if ( v128 )
      {
        v64 = v39 + 4;
        v65 = (char *)v152 - v39;
        do
        {
          v66 = (float *)&v151;
          v67 = 3;
          do
          {
            v68 = *v66;
            v66 += 3;
            *(float *)(v64 - 4) = v68;
            v64 += 12;
            --v67;
            *(float *)(v64 - 12) = *(float *)&v65[v64 - 16];
            *(float *)(v64 - 8) = *(float *)&v65[v64 - 12];
          }
          while ( v67 );
          --v63;
          v65 -= 36;
        }
        while ( v63 );
        v37 = v132;
      }
      a5[1] += v133;
      result = k;
      v8 = a5;
    }
    v135 = (float *)(result + *v8);
    if ( a6 )
    {
      v69 = a6;
      v70 = *a6;
      v71 = (a6[1] - *a6) / 36;
      result = 36 * v71;
      v129 = v37;
      v137 = 36 * v71;
      v72 = 36 * v71 + v70;
      if ( v37 )
      {
        if ( v70 )
          v73 = (a6[2] - v70) / 36;
        else
          v73 = 0;
        v74 = v132 + v71;
        if ( v73 < v74 )
        {
          v75 = (v72 - v70) / 36;
          v76 = 2 * v74;
          v133 = v75;
          if ( v70 )
            v77 = (a6[2] - v70) / 36;
          else
            v77 = 0;
          if ( v77 < v76 )
          {
            v78 = 36 * v76;
            v79 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_1002F7BC + 8))(
                    dword_1002F7BC,
                    36 * v76,
                    289);
            v80 = (float *)*a6;
            j = v79;
            v81 = v79;
            for ( k = a6[1]; v80 != (float *)k; v81 += 36 )
            {
              v82 = v80;
              v83 = v81 + 4;
              v84 = 3;
              do
              {
                v85 = *v82;
                v82 += 3;
                *(float *)(v83 - 4) = v85;
                v83 += 12;
                --v84;
                *(float *)(v83 - 12) = *(float *)((char *)v80 + v83 - v81 - 12);
                *(float *)(v83 - 8) = *(v82 - 1);
              }
              while ( v84 );
              v80 += 9;
            }
            if ( *a6 )
              (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, *a6);
            v86 = j;
            v87 = j + 36 * ((a6[1] - *a6) / 36);
            a6[2] = j + v78;
            v75 = v133;
            *a6 = v86;
            a6[1] = v87;
            v69 = a6;
          }
          v72 = *v69 + 36 * v75;
        }
        v88 = v69[1];
        j = 36 * v129;
        k = v88;
        v89 = (float *)v72;
        if ( v72 != v88 )
        {
          v90 = v72 + 36 * v129;
          do
          {
            v91 = v89;
            v92 = v90 + 4;
            v93 = 3;
            do
            {
              v94 = *v91;
              v91 += 3;
              *(float *)(v92 - 4) = v94;
              v92 += 12;
              --v93;
              *(float *)(v92 - 12) = *(float *)((char *)v89 + v92 - v90 - 12);
              *(float *)(v92 - 8) = *(v91 - 1);
            }
            while ( v93 );
            v89 += 9;
            v90 += 36;
          }
          while ( v89 != (float *)k );
        }
        v95 = v129;
        if ( v129 )
        {
          v96 = v72 + 4;
          v97 = (char *)v152 - v72;
          do
          {
            v98 = (float *)&v151;
            v99 = 3;
            do
            {
              v100 = *v98;
              v98 += 3;
              *(float *)(v96 - 4) = v100;
              v96 += 12;
              --v99;
              *(float *)(v96 - 12) = *(float *)&v97[v96 - 16];
              *(float *)(v96 - 8) = *(float *)&v97[v96 - 12];
            }
            while ( v99 );
            --v95;
            v97 -= 36;
          }
          while ( v95 );
        }
        a6[1] += j;
        result = v137;
        v69 = a6;
      }
      v101 = result + *v69;
      v130 = v101;
    }
    else
    {
      v130 = 0;
      v101 = 0;
    }
    if ( v132 )
    {
      v133 = -v101;
      do
      {
        --v132;
        v102 = *v138++;
        v103 = v135;
        v135 += 9;
        (*(void (__thiscall **)(int, float *, int *, int *, int, _DWORD, int))(*(_DWORD *)a3 + 168))(
          a3,
          v103,
          &v151,
          &v137,
          v102,
          0,
          1);
        v104 = v139;
        *v103 = *v103 + v139;
        v105 = v140;
        v103[1] = v103[1] + v140;
        v106 = v141;
        v103[2] = v141 + v103[2];
        v103[3] = v103[3] + v104;
        v103[4] = v103[4] + v105;
        v103[5] = v103[5] + v106;
        v103[6] = v104 + v103[6];
        v103[7] = v105 + v103[7];
        v103[8] = v106 + v103[8];
        if ( v101 )
        {
          v107 = v133;
          v108 = v101;
          v101 += 36;
          v133 -= 36;
          v109 = (char *)&v152[-1] + v107;
          v110 = (char *)v152 + v107;
          v130 = v101;
          v111 = (float *)&v151;
          v112 = v108 + 4;
          v113 = 3;
          do
          {
            v114 = *v111;
            v111 += 3;
            *(float *)(v112 - 4) = v114;
            v112 += 12;
            --v113;
            *(float *)(v112 - 12) = *(float *)&v109[v112 - 12];
            *(float *)(v112 - 8) = *(float *)&v110[v112 - 12];
          }
          while ( v113 );
        }
        v115 = a7;
        v116 = a7[2];
        v117 = a7[1];
        if ( v116 <= v117 )
        {
          v118 = 2 * ((int)(v117 - *a7) >> 2) + 2;
          v119 = *a7 ? (int)(v116 - *a7) >> 2 : 0;
          if ( v119 < v118 )
          {
            v120 = 4 * v118;
            v121 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_1002F7BC + 8))(
                     dword_1002F7BC,
                     4 * v118,
                     289);
            v122 = (_DWORD *)a7[1];
            v123 = (_DWORD *)*a7;
            for ( m = (_DWORD *)v121; v123 != v122; ++m )
              *m = *v123++;
            if ( *a7 )
              (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, *a7);
            v125 = v121 + v120;
            v126 = v121 + 4 * ((a7[1] - *a7) >> 2);
            *a7 = v121;
            v115 = a7;
            a7[2] = v125;
            a7[1] = v126;
            v101 = v130;
          }
        }
        result = v115[1];
        *(_DWORD *)result = v137;
        v115[1] += 4;
        if ( v131 )
        {
          v142 = v103[3];
          v143 = v103[4];
          v144 = v103[5];
          v103[3] = v103[6];
          v103[4] = v103[7];
          v103[5] = v103[8];
          v103[6] = v142;
          v103[7] = v143;
          v103[8] = v144;
        }
      }
      while ( v132 );
    }
  }
  return result;
}
