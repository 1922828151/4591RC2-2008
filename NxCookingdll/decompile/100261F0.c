/*
 * func-name: sub_100261F0
 * func-address: 0x100261f0
 * callers: 0x1002af60
 * callees: none
 */

char __stdcall sub_100261F0(unsigned int a1, int a2, int a3, int *a4, int a5, float a6, float *a7)
{
  int v9; // edi
  int v10; // esi
  int v11; // eax
  char *v12; // ebp
  float *v13; // edx
  int v14; // ebx
  unsigned int v15; // ebx
  double v16; // st4
  double v17; // st3
  double v18; // st1
  double v19; // rt1
  double v20; // st1
  double v21; // st7
  double v22; // st0
  double v23; // st6
  double v24; // st2
  double v25; // st5
  double v26; // rt0
  double v27; // st2
  double v28; // st4
  double v29; // st1
  double v30; // rt0
  double v31; // st1
  double v32; // st3
  double v33; // st5
  float *v34; // ebp
  long double v35; // st4
  float *v36; // eax
  double v37; // st3
  double v38; // st2
  double v39; // st1
  double v40; // st1
  double v41; // rt2
  unsigned int v42; // edi
  float *v43; // esi
  double v44; // st4
  double v45; // st2
  double v46; // st5
  double v47; // st2
  float *v48; // eax
  bool v49; // zf
  double v50; // st5
  double v51; // st6
  double v52; // st7
  float *v53; // esi
  int v54; // edi
  char *v55; // ebp
  int v56; // ebx
  double v57; // st4
  double v58; // st3
  double v59; // st2
  double v60; // st5
  double v61; // st6
  double v62; // st7
  double v63; // st1
  double v64; // st3
  double v65; // st2
  double v66; // rtt
  double v67; // st1
  double v68; // st5
  double v69; // rtt
  double v70; // st2
  double v71; // rt1
  double v72; // st2
  double v73; // rt2
  double v74; // st2
  int v75; // eax
  float *v76; // eax
  int v77; // eax
  float *v78; // eax
  int v79; // eax
  float *v80; // eax
  double v81; // st6
  double v82; // rtt
  int v83; // eax
  float *v84; // eax
  int v85; // eax
  float *v86; // eax
  float *v87; // eax
  float *v88; // eax
  double v89; // st7
  double v90; // st0
  double v91; // st1
  double v92; // st5
  double v93; // st3
  double v94; // st2
  double v95; // st2
  double v96; // rt0
  double v97; // rt1
  double v98; // st1
  double v99; // st7
  float *v100; // edx
  double v101; // rt1
  double v102; // st2
  double v103; // rtt
  double v104; // st2
  double v105; // rt0
  double v106; // st2
  int v107; // edx
  float *v108; // edx
  double v109; // st4
  int v110; // edx
  float *v111; // edx
  int v112; // edx
  float *v113; // edx
  double v114; // rtt
  double v115; // rt1
  int v116; // edx
  float *v117; // edx
  int v118; // edx
  float *v119; // edx
  float *v120; // edx
  unsigned int v121; // [esp+4h] [ebp-20h]
  float v122; // [esp+Ch] [ebp-18h] BYREF
  float v123; // [esp+10h] [ebp-14h]
  float v124; // [esp+14h] [ebp-10h]
  float v125; // [esp+18h] [ebp-Ch] BYREF
  float v126; // [esp+1Ch] [ebp-8h]
  float v127; // [esp+20h] [ebp-4h]
  float v128; // [esp+28h] [ebp+4h]
  float v129; // [esp+2Ch] [ebp+8h]
  int v130; // [esp+30h] [ebp+Ch]
  int v131; // [esp+30h] [ebp+Ch]
  char *v132; // [esp+34h] [ebp+10h]

  if ( !a1 )
    return 0;
  *a4 = 0;
  if ( a7 )
  {
    *a7 = 1.0;
    a7[1] = 1.0;
    a7[2] = 1.0;
  }
  v122 = 3.4028235e38;
  v123 = 3.4028235e38;
  v9 = a2;
  v124 = 3.4028235e38;
  v125 = -3.4028235e38;
  v126 = -3.4028235e38;
  v127 = -3.4028235e38;
  v10 = -a2;
  v121 = a1;
  do
  {
    v11 = v10;
    v12 = (char *)&v122 + v10;
    v13 = (float *)v9;
    v9 += a3;
    v10 -= a3;
    v132 = (char *)&v125 + v11;
    v14 = 3;
    do
    {
      if ( *(float *)&v12[(_DWORD)v13] > (double)*v13 )
        *(float *)&v12[(_DWORD)v13] = *v13;
      if ( *(float *)((char *)v13 + (_DWORD)v132) < (double)*v13 )
        *(float *)((char *)v13 + (_DWORD)v132) = *v13;
      ++v13;
      --v14;
    }
    while ( v14 );
    --v121;
  }
  while ( v121 );
  v15 = a1;
  v16 = v125 - v122;
  v17 = v126 - v123;
  v18 = v122 + v16 * 0.5;
  v122 = v18;
  v19 = v18;
  v20 = v123 + v17 * 0.5;
  v21 = v19;
  v123 = v20;
  v22 = v127 - v124;
  v23 = v20;
  v24 = v124 + 0.5 * v22;
  v25 = v22;
  v124 = v24;
  if ( v16 < 0.000001 || v17 < 0.000001 || v22 < 0.000001 || a1 < 3 )
  {
    *(float *)&v131 = 3.4028235e38;
    if ( v16 > 0.000001 && v16 < 3.4028235e38 )
      *(float *)&v131 = v16;
    if ( v17 <= 0.000001 || *(float *)&v131 <= v17 )
      v90 = *(float *)&v131;
    else
      v90 = v17;
    v91 = v90;
    if ( v25 > 0.000001 && v90 > v25 )
      v91 = v25;
    if ( 3.4028235e38 == v91 )
    {
      v92 = v24;
      v16 = 0.0099999998;
      v93 = 0.0099999998;
      v94 = 0.0099999998;
    }
    else
    {
      if ( v16 < 0.000001 )
        v16 = v91 * 0.050000001;
      if ( v17 < 0.000001 )
        v17 = v91 * 0.050000001;
      if ( v25 >= 0.000001 )
      {
        v96 = v24;
        v95 = v25;
        v92 = v96;
      }
      else
      {
        v92 = v24;
        v95 = v91 * 0.050000001;
      }
      v97 = v95;
      v94 = v17;
      v93 = v97;
    }
    v98 = v21;
    v99 = v21 - v16;
    v100 = (float *)(a5 + 12 * *a4);
    v101 = v94 + v23;
    *v100 = v99;
    v102 = v23 - v94;
    v100[1] = v102;
    v103 = v102;
    v104 = v92 - v93;
    v100[2] = v104;
    ++*a4;
    v105 = v104;
    v106 = v16 + v98;
    v107 = 3 * *a4;
    *(float *)(a5 + 4 * v107) = v106;
    v108 = (float *)(a5 + 4 * v107);
    v108[1] = v103;
    v109 = v103;
    v108[2] = v105;
    ++*a4;
    v110 = 3 * *a4;
    *(float *)(a5 + 4 * v110) = v106;
    v111 = (float *)(a5 + 4 * v110);
    v111[1] = v101;
    v111[2] = v105;
    ++*a4;
    v112 = 3 * *a4;
    *(float *)(a5 + 4 * v112) = v99;
    v113 = (float *)(a5 + 4 * v112);
    v114 = v99;
    v113[1] = v101;
    v81 = v101;
    v113[2] = v105;
    ++*a4;
    v115 = v93 + v92;
    v116 = 3 * *a4;
    *(float *)(a5 + 4 * v116) = v99;
    v117 = (float *)(a5 + 4 * v116);
    v117[1] = v109;
    v117[2] = v115;
    ++*a4;
    v89 = v115;
    v118 = 3 * *a4;
    *(float *)(a5 + 4 * v118) = v106;
    v119 = (float *)(a5 + 4 * v118);
    v119[1] = v109;
    v119[2] = v115;
    ++*a4;
    v120 = (float *)(a5 + 12 * *a4);
    *v120 = v106;
    v120[1] = v81;
    v120[2] = v115;
    ++*a4;
    v88 = (float *)(a5 + 12 * *a4);
    *v88 = v114;
  }
  else
  {
    if ( a7 )
    {
      v26 = v24;
      v27 = v16;
      v28 = v26;
      *a7 = v27;
      a7[1] = v17;
      a7[2] = v22;
      v29 = 1.0 / v27;
      v125 = v29;
      v30 = v29;
      v31 = 1.0 / v17;
      v126 = v31;
      v127 = 1.0 / v22;
      v32 = v21 * v30;
      v122 = v32;
      v21 = v32;
      v23 = v23 * v31;
      v123 = v23;
      v33 = v28 * (1.0 / v22);
      v124 = v33;
    }
    else
    {
      v33 = v24;
    }
    v34 = (float *)a2;
    v35 = a6;
    do
    {
      v36 = v34;
      v37 = *v34;
      v34 = (float *)((char *)v34 + a3);
      v38 = v36[1];
      v128 = v36[1];
      v39 = v36[2];
      v129 = v36[2];
      if ( a7 )
      {
        v40 = v38 * v126;
        v128 = v40;
        v41 = v40;
        v39 = v36[2] * v127;
        v129 = v39;
        v37 = v37 * v125;
        v38 = v41;
      }
      v42 = 0;
      if ( *a4 )
      {
        v43 = (float *)a5;
        while ( fabs(*v43 - v37) >= v35 || fabs(v43[1] - v38) >= v35 || fabs(v43[2] - v39) >= v35 )
        {
          ++v42;
          v43 += 3;
          if ( v42 >= *a4 )
            goto LABEL_33;
        }
        v44 = (v38 - v23) * (v38 - v23) + (v39 - v33) * (v39 - v33) + (v37 - v21) * (v37 - v21);
        v45 = v43[2] - v33;
        v46 = v45 * v45;
        v47 = v43[1] - v23;
        if ( v44 <= (*v43 - v21) * (*v43 - v21) + v47 * v47 + v46 )
        {
          v23 = v123;
          v35 = a6;
          v38 = v128;
          v21 = v122;
          v39 = v129;
          v33 = v124;
        }
        else
        {
          *v43 = v37;
          v43[1] = v128;
          v43[2] = v129;
          v21 = v122;
          v23 = v123;
          v33 = v124;
          v35 = a6;
          v39 = v129;
          v38 = v128;
        }
      }
LABEL_33:
      if ( v42 == *a4 )
      {
        v48 = (float *)(a5 + 12 * *a4);
        *v48 = v37;
        v48[1] = v38;
        v48[2] = v39;
        ++*a4;
      }
      --v15;
    }
    while ( v15 );
    v49 = *a4 == 0;
    v50 = 3.4028235e38;
    v125 = 3.4028235e38;
    v126 = 3.4028235e38;
    v51 = 3.4028235e38;
    v127 = 3.4028235e38;
    v52 = 3.4028235e38;
    v122 = -3.4028235e38;
    v123 = -3.4028235e38;
    v124 = -3.4028235e38;
    if ( !v49 )
    {
      v53 = (float *)a5;
      v54 = -a5;
      v130 = *a4;
      do
      {
        v55 = (char *)&v125 + v54;
        v56 = 3;
        do
        {
          if ( *(float *)&v55[(_DWORD)v53] > (double)*v53 )
            *(float *)&v55[(_DWORD)v53] = *v53;
          if ( *(float *)((char *)v53 + (_DWORD)&v122 + v54) < (double)*v53 )
            *(float *)((char *)v53 + (_DWORD)&v122 + v54) = *v53;
          ++v53;
          --v56;
        }
        while ( v56 );
        v54 -= 12;
        --v130;
      }
      while ( v130 );
      v52 = v127;
      v51 = v126;
      v50 = v125;
    }
    v57 = v122 - v50;
    v58 = v123 - v51;
    v59 = v124 - v52;
    if ( v57 >= 0.000001 && v58 >= 0.000001 && v59 >= 0.000001 && (unsigned int)*a4 >= 3 )
      return 1;
    v60 = v50 + v57 * 0.5;
    v61 = v51 + v58 * 0.5;
    v62 = v52 + 0.5 * v59;
    v63 = 3.4028235e38;
    if ( v57 >= 0.000001 && v57 < 3.4028235e38 )
      v63 = v57;
    if ( v58 >= 0.000001 && v63 > v58 )
      v63 = v58;
    if ( v59 >= 0.000001 && v63 > v59 )
      v63 = v59;
    if ( 3.4028235e38 == v63 )
    {
      v57 = 0.0099999998;
      v64 = 0.0099999998;
      v65 = 0.0099999998;
    }
    else
    {
      if ( v57 < 0.000001 )
        v57 = v63 * 0.050000001;
      if ( v58 < 0.000001 )
        v58 = v63 * 0.050000001;
      if ( v59 < 0.000001 )
        v59 = v63 * 0.050000001;
      v66 = v59;
      v65 = v58;
      v64 = v66;
    }
    *a4 = 0;
    v67 = v60;
    v68 = v60 - v57;
    v69 = v65 + v61;
    *(float *)a5 = v68;
    v70 = v61 - v65;
    *(float *)(a5 + 4) = v70;
    v71 = v70;
    v72 = v62 - v64;
    *(float *)(a5 + 8) = v72;
    ++*a4;
    v73 = v72;
    v74 = v57 + v67;
    v75 = 3 * *a4;
    *(float *)(a5 + 4 * v75) = v74;
    v76 = (float *)(a5 + 4 * v75);
    v76[1] = v71;
    v76[2] = v73;
    ++*a4;
    v77 = 3 * *a4;
    *(float *)(a5 + 4 * v77) = v74;
    v78 = (float *)(a5 + 4 * v77);
    v78[1] = v69;
    v78[2] = v73;
    ++*a4;
    v79 = 3 * *a4;
    *(float *)(a5 + 4 * v79) = v68;
    v80 = (float *)(a5 + 4 * v79);
    v80[1] = v69;
    v81 = v69;
    v80[2] = v73;
    ++*a4;
    v82 = v64 + v62;
    v83 = 3 * *a4;
    *(float *)(a5 + 4 * v83) = v68;
    v84 = (float *)(a5 + 4 * v83);
    v84[1] = v71;
    v84[2] = v82;
    ++*a4;
    v85 = 3 * *a4;
    *(float *)(a5 + 4 * v85) = v74;
    v86 = (float *)(a5 + 4 * v85);
    v86[1] = v71;
    v86[2] = v82;
    ++*a4;
    v87 = (float *)(a5 + 12 * *a4);
    *v87 = v74;
    v87[1] = v81;
    v87[2] = v82;
    ++*a4;
    v88 = (float *)(a5 + 12 * *a4);
    *v88 = v68;
    v89 = v82;
  }
  v88[1] = v81;
  v88[2] = v89;
  ++*a4;
  return 1;
}
