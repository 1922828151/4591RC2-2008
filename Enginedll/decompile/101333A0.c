/*
 * func-name: sub_101333A0
 * func-address: 0x101333a0
 * callers: 0x10134090
 * callees: 0x10132870
 */

BOOL __cdecl sub_101333A0(float *a1, float *a2)
{
  double v2; // st7
  double v3; // st6
  double v4; // st4
  double v5; // st5
  double v6; // st3
  double v7; // st2
  double v8; // st3
  double v9; // st4
  double v10; // st3
  double v11; // st2
  double v12; // st4
  double v13; // st3
  double v14; // st5
  double v15; // st3
  double v16; // st2
  double v17; // st4
  double v18; // st6
  double v19; // st4
  double v20; // st3
  double v21; // st3
  double v22; // st2
  double v23; // st4
  double v24; // st5
  double v25; // st6
  double v26; // st3
  double v27; // st2
  double v28; // st3
  double v29; // st5
  double v30; // st3
  double v31; // st2
  double v32; // st2
  double v33; // st6
  double v34; // st3
  double v35; // st2
  double v36; // st5
  double v37; // st6
  float v39; // [esp+8h] [ebp-64h]
  float v40; // [esp+8h] [ebp-64h]
  float v41; // [esp+8h] [ebp-64h]
  float v42; // [esp+8h] [ebp-64h]
  float v43; // [esp+8h] [ebp-64h]
  float v44; // [esp+8h] [ebp-64h]
  float v45; // [esp+8h] [ebp-64h]
  float v46; // [esp+8h] [ebp-64h]
  float v47; // [esp+8h] [ebp-64h]
  float v48; // [esp+8h] [ebp-64h]
  float v49; // [esp+8h] [ebp-64h]
  float v50; // [esp+8h] [ebp-64h]
  float v51; // [esp+8h] [ebp-64h]
  float v52; // [esp+8h] [ebp-64h]
  float v53; // [esp+Ch] [ebp-60h]
  float v54; // [esp+Ch] [ebp-60h]
  float v55; // [esp+Ch] [ebp-60h]
  float v56; // [esp+10h] [ebp-5Ch]
  float v57; // [esp+10h] [ebp-5Ch]
  float v58; // [esp+10h] [ebp-5Ch]
  float v59; // [esp+14h] [ebp-58h]
  float v60; // [esp+14h] [ebp-58h]
  float v61; // [esp+14h] [ebp-58h]
  int v62; // [esp+18h] [ebp-54h] BYREF
  float v63; // [esp+1Ch] [ebp-50h]
  float v64; // [esp+20h] [ebp-4Ch]
  float v65; // [esp+24h] [ebp-48h]
  float v66; // [esp+28h] [ebp-44h]
  float v67; // [esp+2Ch] [ebp-40h]
  int v68; // [esp+30h] [ebp-3Ch] BYREF
  float v69; // [esp+34h] [ebp-38h]
  float v70; // [esp+38h] [ebp-34h]
  float v71; // [esp+3Ch] [ebp-30h]
  float v72; // [esp+40h] [ebp-2Ch]
  float v73; // [esp+44h] [ebp-28h]
  float v74; // [esp+48h] [ebp-24h]
  float v75; // [esp+4Ch] [ebp-20h]
  float v76; // [esp+50h] [ebp-1Ch]
  float v77; // [esp+54h] [ebp-18h]
  float v78; // [esp+58h] [ebp-14h]
  float v79; // [esp+5Ch] [ebp-10h]
  float v80; // [esp+60h] [ebp-Ch]
  float v81; // [esp+64h] [ebp-8h]
  float v82; // [esp+68h] [ebp-4h]
  float v83; // [esp+70h] [ebp+4h]
  float v84; // [esp+70h] [ebp+4h]
  float v85; // [esp+70h] [ebp+4h]
  float v86; // [esp+70h] [ebp+4h]
  float v87; // [esp+70h] [ebp+4h]
  float v88; // [esp+70h] [ebp+4h]
  float v89; // [esp+70h] [ebp+4h]
  float v90; // [esp+70h] [ebp+4h]
  float v91; // [esp+70h] [ebp+4h]
  float v92; // [esp+70h] [ebp+4h]
  float v93; // [esp+70h] [ebp+4h]
  float v94; // [esp+70h] [ebp+4h]
  float v95; // [esp+70h] [ebp+4h]
  float v96; // [esp+70h] [ebp+4h]
  float v97; // [esp+70h] [ebp+4h]
  float v98; // [esp+70h] [ebp+4h]
  float v99; // [esp+70h] [ebp+4h]
  float v100; // [esp+70h] [ebp+4h]
  float v101; // [esp+70h] [ebp+4h]
  float v102; // [esp+70h] [ebp+4h]
  float v103; // [esp+70h] [ebp+4h]
  float v104; // [esp+70h] [ebp+4h]
  float v105; // [esp+70h] [ebp+4h]
  float v106; // [esp+70h] [ebp+4h]
  float v107; // [esp+70h] [ebp+4h]
  float v108; // [esp+70h] [ebp+4h]
  float v109; // [esp+70h] [ebp+4h]
  float v110; // [esp+70h] [ebp+4h]
  float v111; // [esp+74h] [ebp+8h]
  float v112; // [esp+74h] [ebp+8h]
  float v113; // [esp+74h] [ebp+8h]
  float v114; // [esp+74h] [ebp+8h]
  float v115; // [esp+74h] [ebp+8h]
  float v116; // [esp+74h] [ebp+8h]
  float v117; // [esp+74h] [ebp+8h]
  float v118; // [esp+74h] [ebp+8h]
  float v119; // [esp+74h] [ebp+8h]
  float v120; // [esp+74h] [ebp+8h]
  float v121; // [esp+74h] [ebp+8h]
  float v122; // [esp+74h] [ebp+8h]
  float v123; // [esp+74h] [ebp+8h]
  float v124; // [esp+74h] [ebp+8h]
  float v125; // [esp+74h] [ebp+8h]
  float v126; // [esp+74h] [ebp+8h]
  float v127; // [esp+74h] [ebp+8h]
  float v128; // [esp+74h] [ebp+8h]

  v77 = a1[4] + a1[7];
  v78 = a1[5] + a1[8];
  v79 = a1[6] + a1[9];
  v74 = v77 * 0.5;
  v75 = v78 * 0.5;
  v76 = v79 * 0.5;
  v77 = a1[7] - a1[4];
  v78 = a1[8] - a1[5];
  v79 = a1[9] - a1[6];
  *(float *)&v62 = v77 * 0.5;
  v63 = v78 * 0.5;
  v64 = 0.5 * v79;
  v71 = a2[2] - v74;
  v72 = a2[3] - v75;
  v73 = a2[4] - v76;
  v65 = a2[16] - v74;
  v66 = a2[17] - v75;
  v67 = a2[18] - v76;
  *(float *)&v68 = a2[30] - v74;
  v69 = a2[31] - v75;
  v70 = a2[32] - v76;
  v74 = v65 - v71;
  v75 = v66 - v72;
  v76 = v67 - v73;
  v2 = v73;
  v77 = *(float *)&v68 - v65;
  v78 = v69 - v66;
  v79 = v70 - v67;
  v3 = v70;
  v80 = v71 - *(float *)&v68;
  v81 = v72 - v69;
  v82 = v73 - v70;
  v83 = fabs(v74);
  v59 = v83;
  v84 = fabs(v75);
  v56 = v84;
  v85 = fabs(v76);
  v53 = v85;
  v4 = v76;
  v86 = v72 * v76 - v75 * v73;
  v5 = v75;
  v111 = v69 * v76 - v75 * v70;
  v6 = v86;
  v7 = v111;
  if ( v111 > (double)v86 )
  {
    v7 = v86;
    v6 = v111;
  }
  v87 = v7;
  v39 = v63 * v53 + v64 * v56;
  if ( v39 < (double)v87 )
    return 0;
  v112 = v6;
  if ( -v39 > v112 )
    return 0;
  v88 = v74 * v2 - v4 * v71;
  v8 = v74 * v3 - v4 * *(float *)&v68;
  v9 = v74;
  v113 = v8;
  v10 = v88;
  v11 = v113;
  if ( v113 > (double)v88 )
  {
    v11 = v88;
    v10 = v113;
  }
  v89 = v11;
  v40 = v64 * v59 + *(float *)&v62 * v53;
  if ( v40 < (double)v89 )
    return 0;
  v114 = v10;
  if ( -v40 > v114 )
    return 0;
  v41 = v5 * v65 - v9 * v66;
  v115 = v5 * *(float *)&v68 - v9 * v69;
  v12 = v115;
  v13 = v41;
  if ( v41 > (double)v115 )
  {
    v13 = v115;
    v12 = v41;
  }
  v90 = v13;
  v42 = v59 * v63 + *(float *)&v62 * v56;
  if ( v42 < (double)v90 )
    return 0;
  v116 = v12;
  if ( -v42 > v116 )
    return 0;
  v14 = v77;
  v91 = fabs(v77);
  v60 = v91;
  v92 = fabs(v78);
  v57 = v92;
  v15 = v79;
  v93 = fabs(v79);
  v54 = v93;
  v94 = v79 * v72 - v78 * v2;
  v117 = v79 * v69 - v78 * v3;
  v16 = v94;
  if ( v117 <= (double)v94 )
    v94 = v79 * v69 - v78 * v3;
  else
    v16 = v117;
  v43 = v63 * v54 + v64 * v57;
  if ( v43 < (double)v94 )
    return 0;
  v118 = v16;
  if ( -v43 > v118 )
    return 0;
  v95 = v14 * v2 - v15 * v71;
  v17 = v3 * v14 - v15 * *(float *)&v68;
  v18 = v78;
  v119 = v17;
  v19 = v95;
  v20 = v119;
  if ( v119 > (double)v95 )
  {
    v20 = v95;
    v19 = v119;
  }
  v96 = v20;
  v44 = v64 * v60 + *(float *)&v62 * v54;
  if ( v44 < (double)v96 )
    return 0;
  v120 = v19;
  if ( -v44 > v120 )
    return 0;
  v97 = v18 * v71 - v14 * v72;
  v45 = v18 * v65 - v14 * v66;
  v21 = v97;
  v22 = v45;
  if ( v45 > (double)v97 )
  {
    v22 = v97;
    v21 = v45;
  }
  v98 = v22;
  v46 = v60 * v63 + *(float *)&v62 * v57;
  if ( v46 < (double)v98 )
    return 0;
  v121 = v21;
  if ( -v46 > v121 )
    return 0;
  v23 = v80;
  v99 = fabs(v80);
  v61 = v99;
  v100 = fabs(v81);
  v58 = v100;
  v101 = fabs(v82);
  v55 = v101;
  v24 = v82;
  v102 = v72 * v82 - v81 * v2;
  v25 = v81;
  v47 = v66 * v82 - v81 * v67;
  v26 = v102;
  v27 = v47;
  if ( v47 > (double)v102 )
  {
    v27 = v102;
    v26 = v47;
  }
  v103 = v27;
  v48 = v63 * v55 + v64 * v58;
  if ( v48 < (double)v103 )
    return 0;
  v122 = v26;
  if ( -v48 > v122 )
    return 0;
  v104 = v23 * v2 - v24 * v71;
  v28 = v23 * v67 - v24 * v65;
  v29 = v65;
  v49 = v28;
  v30 = v104;
  v31 = v49;
  if ( v49 > (double)v104 )
  {
    v31 = v104;
    v30 = v49;
  }
  v105 = v31;
  v50 = v64 * v61 + *(float *)&v62 * v55;
  if ( v50 < (double)v105 )
    return 0;
  v123 = v30;
  if ( -v50 > v123 )
    return 0;
  v51 = v25 * v29 - v23 * v66;
  v32 = v25 * *(float *)&v68;
  v33 = *(float *)&v68;
  v124 = v32 - v23 * v69;
  v34 = v124;
  v35 = v51;
  if ( v51 > (double)v124 )
  {
    v35 = v124;
    v34 = v51;
  }
  v106 = v35;
  v52 = v61 * v63 + *(float *)&v62 * v58;
  if ( v52 < (double)v106 )
    return 0;
  v125 = v34;
  if ( -v52 > v125 )
    return 0;
  v126 = v71;
  v107 = v71;
  if ( v71 > v29 )
    v107 = v65;
  if ( v71 >= v29 )
  {
    v36 = v63;
  }
  else
  {
    v36 = v63;
    v126 = v65;
  }
  if ( v107 > v33 )
    v107 = *(float *)&v68;
  if ( v126 >= v33 )
  {
    v37 = *(float *)&v62;
  }
  else
  {
    v37 = *(float *)&v62;
    v126 = *(float *)&v68;
  }
  if ( v107 > v37 || -v37 > v126 )
    return 0;
  v127 = v72;
  v108 = v72;
  if ( v66 < (double)v72 )
    v108 = v66;
  if ( v66 > (double)v72 )
    v127 = v66;
  if ( v108 > (double)v69 )
    v108 = v69;
  if ( v127 < (double)v69 )
    v127 = v69;
  if ( v108 > v36 )
    return 0;
  if ( -v36 <= v127 )
  {
    v128 = v73;
    v109 = v73;
    if ( v67 < v2 )
      v109 = v67;
    if ( v67 > v2 )
      v128 = v67;
    if ( v109 > (double)v70 )
      v109 = v70;
    if ( v128 < (double)v70 )
      v128 = v70;
    if ( v64 >= (double)v109 )
    {
      if ( -v64 <= v128 )
      {
        *(float *)&v68 = v79 * v75 - v78 * v76;
        v69 = v76 * v77 - v79 * v74;
        v70 = v74 * v78 - v77 * v75;
        v110 = -(v2 * v70 + v69 * v72 + *(float *)&v68 * v71);
        return sub_10132870((float *)&v68, v110, (float *)&v62);
      }
      return 0;
    }
    return 0;
  }
  return 0;
}
