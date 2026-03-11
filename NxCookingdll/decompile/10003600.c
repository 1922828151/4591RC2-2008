/*
 * func-name: sub_10003600
 * func-address: 0x10003600
 * callers: 0x100043e0
 * callees: none
 */

char __cdecl sub_10003600(float *a1, int a2, int a3)
{
  double v5; // st7
  int v6; // esi
  double v7; // st6
  unsigned int v8; // edi
  double v9; // st5
  double v10; // st4
  double v11; // st3
  double v12; // st2
  unsigned int v13; // edx
  float *v14; // ecx
  double v15; // rt0
  double v16; // st2
  double v17; // rt1
  double v18; // rt2
  double v19; // st2
  double v20; // st7
  double v21; // rt1
  double v22; // st2
  double v23; // st5
  double v24; // rt2
  double v25; // st2
  double v26; // st6
  double v27; // rtt
  double v28; // st2
  double v29; // st3
  double v30; // rt0
  double v31; // st2
  double v32; // st4
  double v33; // rt1
  double v34; // st2
  double v35; // st5
  double v36; // rt0
  double v37; // st2
  double v38; // st6
  double v39; // rt1
  double v40; // st2
  double v41; // st3
  double v42; // rt2
  double v43; // st2
  double v44; // st4
  double v45; // rtt
  double v46; // st2
  double v47; // st5
  double v48; // rt0
  double v49; // st2
  double v50; // st6
  double v51; // rtt
  double v52; // st2
  double v53; // st3
  double v54; // rt0
  double v55; // st2
  double v56; // st4
  double v57; // rt1
  double v58; // st2
  double v59; // st5
  double v60; // rt2
  double v61; // st2
  double v62; // st6
  double v63; // rtt
  double v64; // st2
  double v65; // st3
  double v66; // rt2
  double v67; // st2
  double v68; // st4
  double v69; // rtt
  double v70; // st2
  double v71; // rt0
  double v72; // st2
  double v73; // rt1
  double v74; // st2
  double v75; // rt2
  double v76; // st2
  double v77; // st3
  double v78; // rtt
  double v79; // st2
  double v80; // st6
  double v81; // rt0
  double v82; // st2
  double v83; // st7
  float *v84; // ecx
  unsigned int v85; // edx
  double v86; // rt0
  double v87; // st2
  double v88; // rt2
  double v89; // st2
  double v90; // rt2
  double v91; // rtt
  double v92; // st2
  double v93; // st4
  double v94; // rt2
  double v95; // st2
  double v96; // st5
  double v97; // rtt
  double v98; // st2
  double v99; // st7
  double v100; // rt0
  double v101; // st2
  double v102; // st6
  double v103; // rt1
  double v104; // st2
  double v105; // st3
  double v106; // rt2
  double v107; // st2
  double v108; // st3
  double v109; // st4
  double v110; // rt1
  double v111; // st3
  double v112; // st7
  double v113; // rt2
  double v114; // st3
  double v115; // rtt
  double v116; // st6
  double v117; // st2
  double v118; // st7
  double v119; // st6
  double v120; // st5
  double v121; // st4
  double v122; // st3
  double v123; // st1
  double v124; // st1
  double v125; // st1
  double v126; // rtt
  double v127; // rt0
  double v128; // st1
  double v129; // st7
  double v130; // st1
  double v131; // rtt
  double v132; // st1
  double v133; // rt0
  double v134; // st1
  long double v135; // st7
  double v136; // st5
  float *v137; // edx
  double v138; // st2
  double v139; // st1
  double v140; // st3
  double v141; // st2
  long double v142; // st4
  double v143; // rt2
  long double v144; // st5
  long double v145; // st4
  long double v146; // st2
  long double v147; // st5
  float v148; // [esp+4h] [ebp-48h]
  float v149; // [esp+8h] [ebp-44h]
  float v150; // [esp+Ch] [ebp-40h]
  float v151; // [esp+10h] [ebp-3Ch]
  float v152; // [esp+14h] [ebp-38h]
  float v153; // [esp+18h] [ebp-34h]
  float v154; // [esp+1Ch] [ebp-30h]
  float v155; // [esp+20h] [ebp-2Ch]
  float v156; // [esp+24h] [ebp-28h]
  float v157; // [esp+28h] [ebp-24h]
  float v158; // [esp+2Ch] [ebp-20h]
  float v159; // [esp+30h] [ebp-1Ch]
  float v160; // [esp+38h] [ebp-14h]
  float v161; // [esp+3Ch] [ebp-10h]
  float v162; // [esp+44h] [ebp-8h]
  float v163; // [esp+48h] [ebp-4h]
  float v164; // [esp+58h] [ebp+Ch]

  if ( !a3 )
    return 0;
  v5 = 3.4028235e38;
  v6 = a2;
  v150 = 3.4028235e38;
  v7 = 3.4028235e38;
  v152 = 3.4028235e38;
  v8 = 0;
  v9 = -3.4028235e38;
  v10 = -3.4028235e38;
  v159 = -3.4028235e38;
  v11 = -3.4028235e38;
  v155 = -3.4028235e38;
  v12 = v162;
  if ( a2 < 4 )
  {
    v83 = 3.4028235e38;
    v80 = -3.4028235e38;
    v68 = 3.4028235e38;
    v82 = v162;
    v77 = -3.4028235e38;
  }
  else
  {
    v13 = ((unsigned int)(a2 - 4) >> 2) + 1;
    v14 = (float *)(a3 + 20);
    v8 = 4 * v13;
    while ( 1 )
    {
      v18 = v12;
      v19 = v5;
      v20 = v18;
      if ( v19 > *(v14 - 5) )
      {
        v163 = *(v14 - 3);
        v20 = *(v14 - 4);
        v19 = *(v14 - 5);
      }
      v21 = v19;
      v22 = v9;
      v23 = v21;
      if ( v22 < *(v14 - 5) )
      {
        v22 = *(v14 - 5);
        v160 = *(v14 - 4);
        v161 = *(v14 - 3);
      }
      v24 = v22;
      v25 = v7;
      v26 = v24;
      if ( v25 > *(v14 - 4) )
      {
        v151 = *(v14 - 5);
        v25 = *(v14 - 4);
        v153 = *(v14 - 3);
      }
      v27 = v25;
      v28 = v11;
      v29 = v27;
      if ( v28 < *(v14 - 4) )
      {
        v154 = *(v14 - 5);
        v28 = *(v14 - 4);
        v156 = *(v14 - 3);
      }
      if ( v150 > (double)*(v14 - 3) )
      {
        v148 = *(v14 - 5);
        v149 = *(v14 - 4);
        v150 = *(v14 - 3);
      }
      v30 = v28;
      v31 = v10;
      v32 = v30;
      if ( v31 < *(v14 - 3) )
      {
        v157 = *(v14 - 5);
        v158 = *(v14 - 4);
        v31 = *(v14 - 3);
      }
      v33 = v31;
      v34 = v23;
      v35 = v33;
      if ( v34 > *(v14 - 2) )
      {
        v163 = *v14;
        v20 = *(v14 - 1);
        v34 = *(v14 - 2);
      }
      v36 = v34;
      v37 = v26;
      v38 = v36;
      if ( v37 < *(v14 - 2) )
      {
        v37 = *(v14 - 2);
        v160 = *(v14 - 1);
        v161 = *v14;
      }
      v39 = v37;
      v40 = v29;
      v41 = v39;
      if ( v40 > *(v14 - 1) )
      {
        v151 = *(v14 - 2);
        v40 = *(v14 - 1);
        v153 = *v14;
      }
      v42 = v40;
      v43 = v32;
      v44 = v42;
      if ( v43 < *(v14 - 1) )
      {
        v154 = *(v14 - 2);
        v43 = *(v14 - 1);
        v156 = *v14;
      }
      if ( v150 > (double)*v14 )
      {
        v148 = *(v14 - 2);
        v149 = *(v14 - 1);
        v150 = *v14;
      }
      v45 = v43;
      v46 = v35;
      v47 = v45;
      if ( v46 < *v14 )
      {
        v157 = *(v14 - 2);
        v158 = *(v14 - 1);
        v46 = *v14;
      }
      v48 = v46;
      v49 = v38;
      v50 = v48;
      if ( v49 > v14[1] )
      {
        v163 = v14[3];
        v20 = v14[2];
        v49 = v14[1];
      }
      v51 = v49;
      v52 = v41;
      v53 = v51;
      if ( v52 < v14[1] )
      {
        v52 = v14[1];
        v160 = v14[2];
        v161 = v14[3];
      }
      v54 = v52;
      v55 = v44;
      v56 = v54;
      if ( v55 > v14[2] )
      {
        v151 = v14[1];
        v55 = v14[2];
        v153 = v14[3];
      }
      v57 = v55;
      v58 = v47;
      v59 = v57;
      if ( v58 < v14[2] )
      {
        v154 = v14[1];
        v58 = v14[2];
        v156 = v14[3];
      }
      if ( v150 > (double)v14[3] )
      {
        v148 = v14[1];
        v149 = v14[2];
        v150 = v14[3];
      }
      v60 = v58;
      v61 = v50;
      v62 = v60;
      if ( v61 < v14[3] )
      {
        v157 = v14[1];
        v158 = v14[2];
        v61 = v14[3];
      }
      v63 = v61;
      v64 = v53;
      v65 = v63;
      if ( v64 > v14[4] )
      {
        v163 = v14[6];
        v20 = v14[5];
        v64 = v14[4];
      }
      v66 = v64;
      v67 = v56;
      v68 = v66;
      if ( v67 < v14[4] )
      {
        v67 = v14[4];
        v160 = v14[5];
        v161 = v14[6];
      }
      v69 = v67;
      v70 = v59;
      v9 = v69;
      if ( v70 > v14[5] )
      {
        v151 = v14[4];
        v70 = v14[5];
        v153 = v14[6];
      }
      v71 = v70;
      v72 = v62;
      v7 = v71;
      if ( v72 < v14[5] )
      {
        v154 = v14[4];
        v72 = v14[5];
        v156 = v14[6];
      }
      if ( v150 > (double)v14[6] )
      {
        v148 = v14[4];
        v149 = v14[5];
        v150 = v14[6];
      }
      v73 = v72;
      v74 = v65;
      v11 = v73;
      if ( v74 < v14[6] )
      {
        v157 = v14[4];
        v158 = v14[5];
        v74 = v14[6];
      }
      v14 += 12;
      if ( !--v13 )
        break;
      v15 = v74;
      v16 = v68;
      v10 = v15;
      v17 = v16;
      v12 = v20;
      v5 = v17;
    }
    v159 = v74;
    v75 = v74;
    v76 = v11;
    v77 = v75;
    v155 = v76;
    v78 = v76;
    v79 = v7;
    v80 = v78;
    v152 = v79;
    v81 = v79;
    v82 = v20;
    v83 = v81;
    v162 = v82;
  }
  if ( v8 >= a2 )
  {
    v112 = v82;
  }
  else
  {
    v84 = (float *)(a3 + 12 * v8 + 8);
    v85 = a2 - v8;
    while ( 1 )
    {
      v91 = v82;
      v92 = v68;
      v93 = v91;
      if ( v92 > *(v84 - 2) )
      {
        v163 = *v84;
        v93 = *(v84 - 1);
        v92 = *(v84 - 2);
      }
      v94 = v92;
      v95 = v9;
      v96 = v94;
      if ( v95 < *(v84 - 2) )
      {
        v95 = *(v84 - 2);
        v160 = *(v84 - 1);
        v161 = *v84;
      }
      v97 = v95;
      v98 = v83;
      v99 = v97;
      if ( v98 > *(v84 - 1) )
      {
        v151 = *(v84 - 2);
        v98 = *(v84 - 1);
        v153 = *v84;
      }
      v100 = v98;
      v101 = v80;
      v102 = v100;
      if ( v101 < *(v84 - 1) )
      {
        v154 = *(v84 - 2);
        v101 = *(v84 - 1);
        v156 = *v84;
      }
      if ( v150 > (double)*v84 )
      {
        v148 = *(v84 - 2);
        v149 = *(v84 - 1);
        v150 = *v84;
      }
      v103 = v101;
      v104 = v77;
      v105 = v103;
      if ( v104 < *v84 )
      {
        v157 = *(v84 - 2);
        v158 = *(v84 - 1);
        v104 = *v84;
      }
      v84 += 3;
      if ( !--v85 )
        break;
      v86 = v104;
      v87 = v99;
      v83 = v102;
      v88 = v87;
      v80 = v105;
      v77 = v86;
      v89 = v96;
      v9 = v88;
      v90 = v89;
      v82 = v93;
      v68 = v90;
    }
    v159 = v104;
    v106 = v104;
    v155 = v105;
    v107 = v102;
    v80 = v105;
    v152 = v107;
    v108 = v93;
    v109 = v106;
    v162 = v108;
    v110 = v108;
    v111 = v99;
    v112 = v110;
    v113 = v111;
    v114 = v96;
    v9 = v113;
    v115 = v114;
    v77 = v109;
    v68 = v115;
  }
  v116 = (v154 - v151) * (v154 - v151) + (v80 - v152) * (v80 - v152) + (v156 - v153) * (v156 - v153);
  v164 = (v158 - v149) * (v158 - v149) + (v77 - v150) * (v77 - v150) + (v157 - v148) * (v157 - v148);
  v117 = v160;
  v118 = (v160 - v112) * (v160 - v112) + (v161 - v163) * (v161 - v163) + (v9 - v68) * (v9 - v68);
  if ( v118 >= v116 )
  {
    v124 = v68;
    v121 = v163;
    v119 = v124;
    v125 = v9;
    v120 = v162;
    v126 = v125;
    v123 = v161;
    v122 = v126;
  }
  else
  {
    v118 = v116;
    v119 = v151;
    v120 = v152;
    v121 = v153;
    v122 = v154;
    v117 = v155;
    v123 = v156;
  }
  v127 = v123;
  v128 = v118;
  v129 = v127;
  if ( v128 < v164 )
  {
    v129 = v159;
    v119 = v148;
    v120 = v149;
    v121 = v150;
    v117 = v158;
    v122 = v157;
  }
  v130 = (v119 + v122) * 0.5;
  *a1 = v130;
  v131 = v130;
  v132 = (v120 + v117) * 0.5;
  a1[1] = v132;
  v133 = v132;
  v134 = (v121 + v129) * 0.5;
  a1[2] = v134;
  v135 = (v129 - v134) * (v129 - v134) + (v117 - v133) * (v117 - v133) + (v122 - v131) * (v122 - v131);
  a1[3] = sqrt(v135);
  if ( !a2 )
    return 1;
  v136 = 1.0;
  v137 = (float *)(a3 + 8);
  do
  {
    v138 = *v137 - a1[2];
    v139 = *(v137 - 1) - a1[1];
    v140 = v139 * v139 + v138 * v138;
    v141 = *(v137 - 2) - *a1;
    v142 = v141 * v141 + v140;
    if ( v142 > v135 )
    {
      v143 = v136;
      v144 = sqrt(v142);
      v145 = (a1[3] + v144) * 0.5;
      a1[3] = v145;
      v146 = v144 - v145;
      v147 = v143 / v144;
      *a1 = (*(v137 - 2) * v146 + v145 * *a1) * v147;
      a1[1] = (v145 * a1[1] + v146 * *(v137 - 1)) * v147;
      a1[2] = v147 * (v145 * a1[2] + v146 * *v137);
      v136 = v143;
      v135 = v145 * v145;
    }
    v137 += 3;
    --v6;
  }
  while ( v6 );
  return 1;
}
