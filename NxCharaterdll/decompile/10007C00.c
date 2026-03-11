/*
 * func-name: sub_10007C00
 * func-address: 0x10007c00
 * callers: 0x10008e70
 * callees: none
 */

int __usercall sub_10007C00@<eax>(int a1@<eax>, int *a2@<ecx>, int a3, int a4, float **a5, int *a6, _DWORD *a7, int a8)
{
  int result; // eax
  _DWORD *v11; // ecx
  int v12; // edx
  int v13; // edx
  double v14; // st7
  _DWORD *v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // eax
  int v20; // eax
  int v21; // edx
  int v22; // eax
  _DWORD *v23; // ecx
  int v24; // ebx
  _DWORD *v25; // eax
  bool v26; // zf
  _DWORD *v27; // edx
  int v28; // eax
  _DWORD *v29; // edx
  _DWORD *i; // ecx
  _DWORD *v31; // ecx
  int v32; // eax
  float *v33; // esi
  int v34; // ecx
  int v35; // edi
  unsigned int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // edx
  int v39; // edi
  unsigned int v40; // ecx
  unsigned int v41; // eax
  int v42; // edx
  int v43; // eax
  float *v44; // esi
  int v45; // ebx
  float *v46; // ecx
  int v47; // eax
  int v48; // edi
  double v49; // st7
  int v50; // esi
  int v51; // ecx
  float *v52; // esi
  int v53; // eax
  char *v54; // edx
  float *v55; // ecx
  int v56; // ebx
  double v57; // st7
  int v58; // ebx
  int v59; // eax
  _BYTE *v60; // ecx
  float *v61; // edx
  int v62; // esi
  double v63; // st7
  float *v64; // edi
  int v65; // esi
  int v66; // ecx
  int v67; // ebx
  unsigned int v68; // eax
  unsigned int v69; // ecx
  int v70; // edi
  unsigned int v71; // ecx
  unsigned int v72; // eax
  int (__thiscall *v73)(int, unsigned int, int); // edx
  int v74; // edi
  int v75; // eax
  float *v76; // esi
  int v77; // ebx
  int v78; // eax
  float *v79; // ecx
  int v80; // eax
  int v81; // edi
  double v82; // st7
  int v83; // eax
  int v84; // ebp
  float *v85; // esi
  int v86; // ebp
  float *v87; // ecx
  int v88; // eax
  int v89; // edi
  double v90; // st7
  int v91; // edi
  int v92; // eax
  _BYTE *v93; // ecx
  float *v94; // edx
  int v95; // esi
  double v96; // st7
  int v97; // ebp
  int v98; // ebp
  void (__thiscall *v99)(int, float *, _BYTE *, int *, int, _DWORD, int); // edx
  double v100; // st7
  double v101; // st6
  double v102; // st5
  int v103; // edx
  int v104; // eax
  _BYTE *v105; // esi
  _BYTE *v106; // edi
  float *v107; // ecx
  int v108; // eax
  int v109; // edx
  double v110; // st7
  unsigned int v111; // edx
  unsigned int v112; // eax
  unsigned int v113; // eax
  unsigned int v114; // edx
  int v115; // edi
  int v116; // eax
  _DWORD *v117; // ecx
  _DWORD *v118; // esi
  _DWORD *v119; // eax
  _DWORD *v120; // edx
  _DWORD *v121; // edx
  int v122; // [esp+34h] [ebp-7Ch]
  int v123; // [esp+50h] [ebp-60h] BYREF
  int v124; // [esp+54h] [ebp-5Ch]
  int v125; // [esp+58h] [ebp-58h]
  int *v126; // [esp+5Ch] [ebp-54h] BYREF
  int v127; // [esp+60h] [ebp-50h]
  int j; // [esp+64h] [ebp-4Ch]
  int v129; // [esp+68h] [ebp-48h]
  int v130; // [esp+6Ch] [ebp-44h]
  int v131; // [esp+70h] [ebp-40h] BYREF
  float v132; // [esp+74h] [ebp-3Ch]
  float v133; // [esp+78h] [ebp-38h]
  float v134; // [esp+7Ch] [ebp-34h]
  float v135[3]; // [esp+80h] [ebp-30h] BYREF
  _BYTE v136[4]; // [esp+8Ch] [ebp-24h] BYREF
  _BYTE v137[32]; // [esp+90h] [ebp-20h] BYREF

  result = (*(int (__thiscall **)(int, int, int, int *, int **))(*(_DWORD *)a3 + 196))(a3, a8, 1, &v123, &v126);
  if ( (_BYTE)result )
  {
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)a4 + 68))(a4, v135);
    v11 = (_DWORD *)*a2;
    v12 = a2[1] - *a2;
    v132 = v135[0] - *(double *)a1;
    v13 = v12 >> 2;
    v14 = v135[1] - *(double *)(a1 + 8);
    j = 4 * v13;
    v15 = &v11[v13];
    v133 = v14;
    v134 = v135[2] - *(double *)(a1 + 16);
    if ( v11 )
      v16 = (a2[2] - (int)v11) >> 2;
    else
      v16 = 0;
    v17 = v13 + 12;
    if ( v16 < v17 )
    {
      v18 = 2 * v17;
      v124 = v15 - v11;
      if ( v11 )
        v19 = (a2[2] - (int)v11) >> 2;
      else
        v19 = 0;
      if ( v19 < v18 )
      {
        v20 = 4 * v18;
        v21 = *(_DWORD *)dword_1002F7BC;
        v125 = v20;
        v22 = (*(int (__thiscall **)(int, int, int))(v21 + 8))(dword_1002F7BC, v20, 289);
        v23 = (_DWORD *)a2[1];
        v24 = v22;
        v25 = (_DWORD *)*a2;
        v26 = *a2 == (_DWORD)v23;
        v127 = v24;
        v27 = (_DWORD *)v24;
        if ( !v26 )
        {
          do
            *v27++ = *v25++;
          while ( v25 != v23 );
          v24 = v127;
        }
        if ( *a2 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, *a2);
        v28 = (a2[1] - *a2) >> 2;
        a2[2] = v24 + v125;
        a2[1] = v24 + 4 * v28;
        *a2 = v24;
      }
      v15 = (_DWORD *)(*a2 + 4 * v124);
    }
    v29 = (_DWORD *)a2[1];
    for ( i = v15; i != v29; ++i )
      i[12] = *i;
    *v15 = 0;
    v15[1] = 0;
    v15[2] = 0;
    v15[3] = 0;
    v15[4] = 0;
    v15[5] = 0;
    v15[6] = 0;
    v15[7] = 0;
    v15[8] = 0;
    v15[9] = 0;
    v15[10] = 0;
    v15[11] = 0;
    a2[1] += 48;
    v31 = (_DWORD *)(j + *a2);
    v31[1] = a4;
    *v31 = 2;
    v31[2] = *(_DWORD *)a1;
    v31[3] = *(_DWORD *)(a1 + 4);
    v31[4] = *(_DWORD *)(a1 + 8);
    v31[5] = *(_DWORD *)(a1 + 12);
    v31[6] = *(_DWORD *)(a1 + 16);
    v31[7] = *(_DWORD *)(a1 + 20);
    v31[8] = v123;
    v31[9] = ((char *)a5[1] - (char *)*a5) / 36;
    if ( a6 )
      v32 = (a6[1] - *a6) / 36;
    else
      v32 = 0;
    v31[10] = v32;
    v31[11] = (a7[1] - *a7) >> 2;
    v33 = *a5;
    v34 = ((char *)a5[1] - (char *)*a5) / 36;
    result = 36 * v34;
    v125 = v123;
    v130 = 36 * v34;
    v35 = (int)&v33[9 * v34];
    if ( v123 )
    {
      if ( v33 )
        v36 = ((char *)a5[2] - (char *)v33) / 36;
      else
        v36 = 0;
      v37 = v123 + v34;
      if ( v36 < v37 )
      {
        v38 = (int)((unsigned __int64)(954437177LL * (v35 - (int)v33)) >> 32) >> 3;
        v39 = (v35 - (int)v33) / 36;
        v40 = 2 * v37;
        v129 = v38 + (v38 >> 31);
        if ( v33 )
          v41 = ((char *)a5[2] - (char *)v33) / 36;
        else
          v41 = 0;
        if ( v41 < v40 )
        {
          v42 = *(_DWORD *)dword_1002F7BC;
          v127 = 36 * v40;
          v43 = (*(int (__thiscall **)(int, unsigned int, int))(v42 + 8))(dword_1002F7BC, 36 * v40, 289);
          v44 = *a5;
          v124 = v43;
          v45 = v43;
          for ( j = (int)a5[1]; v44 != (float *)j; v45 += 36 )
          {
            v46 = v44;
            v47 = v45 + 4;
            v48 = 3;
            do
            {
              v49 = *v46;
              v46 += 3;
              *(float *)(v47 - 4) = v49;
              v47 += 12;
              --v48;
              *(float *)(v47 - 12) = *(float *)((char *)v44 + v47 - v45 - 12);
              *(float *)(v47 - 8) = *(v46 - 1);
            }
            while ( v48 );
            v44 += 9;
          }
          if ( *a5 )
            (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, *a5);
          v50 = v124;
          v39 = v129;
          a5[2] = (float *)(v124 + v127);
          a5[1] = (float *)(v50 + 36 * (((char *)a5[1] - (char *)*a5) / 36));
          *a5 = (float *)v50;
        }
        v35 = (int)&(*a5)[9 * v39];
      }
      v51 = (int)a5[1];
      j = 36 * v125;
      v129 = v51;
      v52 = (float *)v35;
      if ( v35 != v51 )
      {
        v124 = v35 + 36 * v125;
        do
        {
          v53 = v124 + 4;
          v54 = (char *)v52 - v124;
          v55 = v52;
          v56 = 3;
          do
          {
            v57 = *v55;
            v55 += 3;
            *(float *)(v53 - 4) = v57;
            v53 += 12;
            --v56;
            *(float *)(v53 - 12) = *(float *)&v54[v53 - 12];
            *(float *)(v53 - 8) = *(v55 - 1);
          }
          while ( v56 );
          v124 += 36;
          v52 += 9;
        }
        while ( v52 != (float *)v129 );
      }
      v58 = v125;
      if ( v125 )
      {
        v59 = v35 + 4;
        v60 = &v137[-v35];
        do
        {
          v61 = (float *)v136;
          v62 = 3;
          do
          {
            v63 = *v61;
            v61 += 3;
            *(float *)(v59 - 4) = v63;
            v59 += 12;
            --v62;
            *(float *)(v59 - 12) = *(float *)&v60[v59 - 16];
            *(float *)(v59 - 8) = *(float *)&v60[v59 - 12];
          }
          while ( v62 );
          --v58;
          v60 -= 36;
        }
        while ( v58 );
      }
      a5[1] = (float *)((char *)a5[1] + j);
      result = v130;
    }
    v64 = (float *)((char *)*a5 + result);
    v124 = (int)v64;
    if ( a6 )
    {
      v65 = *a6;
      v125 = v123;
      v66 = (a6[1] - v65) / 36;
      result = 36 * v66;
      v131 = 36 * v66;
      v67 = 36 * v66 + v65;
      if ( v123 )
      {
        if ( v65 )
          v68 = (a6[2] - v65) / 36;
        else
          v68 = 0;
        v69 = v123 + v66;
        if ( v68 < v69 )
        {
          v70 = (v67 - v65) / 36;
          v71 = 2 * v69;
          v127 = v70;
          if ( v65 )
            v72 = (a6[2] - v65) / 36;
          else
            v72 = 0;
          if ( v72 < v71 )
          {
            v73 = *(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_1002F7BC + 8);
            v74 = 36 * v71;
            v129 = 36 * v71;
            v75 = v73(dword_1002F7BC, 36 * v71, 289);
            v76 = (float *)*a6;
            v77 = v75;
            v78 = a6[1];
            v26 = *a6 == v78;
            j = v77;
            v130 = v78;
            if ( !v26 )
            {
              do
              {
                v79 = v76;
                v80 = v77 + 4;
                v81 = 3;
                do
                {
                  v82 = *v79;
                  v79 += 3;
                  *(float *)(v80 - 4) = v82;
                  v80 += 12;
                  --v81;
                  *(float *)(v80 - 12) = *(float *)((char *)v76 + v80 - v77 - 12);
                  *(float *)(v80 - 8) = *(v79 - 1);
                }
                while ( v81 );
                v76 += 9;
                v77 += 36;
              }
              while ( v76 != (float *)v130 );
              v74 = v129;
              v77 = j;
            }
            if ( *a6 )
              (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, *a6);
            v83 = (a6[1] - *a6) / 36;
            a6[2] = v77 + v74;
            v70 = v127;
            a6[1] = v77 + 36 * v83;
            *a6 = v77;
          }
          v67 = *a6 + 36 * v70;
        }
        v84 = a6[1];
        v129 = 36 * v125;
        v130 = v84;
        v85 = (float *)v67;
        if ( v67 != v84 )
        {
          v86 = v67 + 36 * v125;
          do
          {
            v87 = v85;
            v88 = v86 + 4;
            v89 = 3;
            do
            {
              v90 = *v87;
              v87 += 3;
              *(float *)(v88 - 4) = v90;
              v88 += 12;
              --v89;
              *(float *)(v88 - 12) = *(float *)((char *)v85 + v88 - v86 - 12);
              *(float *)(v88 - 8) = *(v87 - 1);
            }
            while ( v89 );
            v85 += 9;
            v86 += 36;
          }
          while ( v85 != (float *)v130 );
        }
        v91 = v125;
        if ( v125 )
        {
          v92 = v67 + 4;
          v93 = &v137[-v67];
          do
          {
            v94 = (float *)v136;
            v95 = 3;
            do
            {
              v96 = *v94;
              v94 += 3;
              *(float *)(v92 - 4) = v96;
              v92 += 12;
              --v95;
              *(float *)(v92 - 12) = *(float *)&v93[v92 - 16];
              *(float *)(v92 - 8) = *(float *)&v93[v92 - 12];
            }
            while ( v95 );
            --v91;
            v93 -= 36;
          }
          while ( v91 );
        }
        result = v131;
        v97 = *a6;
        a6[1] += v129;
        v64 = (float *)v124;
        v98 = result + v97;
      }
      else
      {
        v98 = result + *a6;
      }
    }
    else
    {
      v98 = 0;
    }
    v125 = v98;
    if ( v123 )
    {
      v127 = -v98;
      while ( 1 )
      {
        --v123;
        v122 = *v126++;
        v99 = *(void (__thiscall **)(int, float *, _BYTE *, int *, int, _DWORD, int))(*(_DWORD *)a3 + 188);
        v124 = (int)(v64 + 9);
        v99(a3, v64, v136, &v131, v122, 0, 1);
        v100 = v132;
        *v64 = *v64 + v132;
        v101 = v133;
        v64[1] = v133 + v64[1];
        v102 = v134;
        v64[2] = v64[2] + v134;
        v64[3] = v64[3] + v100;
        v64[4] = v101 + v64[4];
        v64[5] = v64[5] + v102;
        v64[6] = v100 + v64[6];
        v64[7] = v101 + v64[7];
        v64[8] = v102 + v64[8];
        if ( v98 )
        {
          v103 = v127;
          v104 = v98;
          v98 += 36;
          v127 -= 36;
          v105 = &v136[v103];
          v106 = &v137[v103];
          v125 = v98;
          v107 = (float *)v136;
          v108 = v104 + 4;
          v109 = 3;
          do
          {
            v110 = *v107;
            v107 += 3;
            *(float *)(v108 - 4) = v110;
            v108 += 12;
            --v109;
            *(float *)(v108 - 12) = *(float *)&v105[v108 - 12];
            *(float *)(v108 - 8) = *(float *)&v106[v108 - 12];
          }
          while ( v109 );
        }
        v111 = a7[2];
        v112 = a7[1];
        if ( v111 <= v112 )
        {
          v113 = 2 * ((int)(v112 - *a7) >> 2) + 2;
          v114 = *a7 ? (int)(v111 - *a7) >> 2 : 0;
          if ( v114 < v113 )
          {
            v115 = v113;
            v116 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_1002F7BC + 8))(
                     dword_1002F7BC,
                     4 * v113,
                     289);
            v117 = (_DWORD *)a7[1];
            v118 = (_DWORD *)v116;
            v119 = (_DWORD *)*a7;
            v120 = v118;
            if ( (_DWORD *)*a7 != v117 )
            {
              do
                *v120++ = *v119++;
              while ( v119 != v117 );
              v98 = v125;
            }
            if ( *a7 )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, *a7);
            v121 = &v118[(a7[1] - *a7) >> 2];
            a7[2] = &v118[v115];
            a7[1] = v121;
            *a7 = v118;
          }
        }
        result = a7[1];
        *(_DWORD *)result = v131;
        a7[1] += 4;
        if ( !v123 )
          break;
        v64 = (float *)v124;
      }
    }
  }
  return result;
}
