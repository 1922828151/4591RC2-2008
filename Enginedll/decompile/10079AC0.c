/*
 * func-name: sub_10079AC0
 * func-address: 0x10079ac0
 * callers: 0x1004c410
 * callees: 0x10078d90
 */

BOOL __cdecl sub_10079AC0(float *a1, float *a2, _DWORD *a3)
{
  float *v3; // ecx
  double v4; // st7
  float *v5; // ecx
  double v6; // st6
  double v7; // st7
  double v8; // st4
  double v9; // st5
  double v10; // st3
  double v11; // st2
  double v13; // st3
  double v14; // st4
  double v15; // st3
  double v16; // st2
  double v17; // st4
  double v18; // st3
  double v19; // st5
  double v20; // st3
  double v21; // st2
  double v22; // st4
  double v23; // st7
  double v24; // st4
  double v25; // st3
  double v26; // st3
  double v27; // st2
  double v28; // st4
  double v29; // st5
  double v30; // st7
  double v31; // st3
  double v32; // st2
  double v33; // st3
  double v34; // st5
  double v35; // st3
  double v36; // st2
  double v37; // st2
  double v38; // st7
  double v39; // st3
  double v40; // st2
  double v41; // st5
  double v42; // st7
  double v43; // st6
  double v44; // st7
  float v46; // [esp+8h] [ebp-54h]
  float v47; // [esp+8h] [ebp-54h]
  float v48; // [esp+8h] [ebp-54h]
  float v49; // [esp+Ch] [ebp-50h]
  float v50; // [esp+Ch] [ebp-50h]
  float v51; // [esp+Ch] [ebp-50h]
  float v52; // [esp+10h] [ebp-4Ch]
  float v53; // [esp+10h] [ebp-4Ch]
  float v54; // [esp+10h] [ebp-4Ch]
  float v55; // [esp+14h] [ebp-48h]
  float v56; // [esp+18h] [ebp-44h]
  float v57; // [esp+1Ch] [ebp-40h]
  float v58; // [esp+20h] [ebp-3Ch]
  float v59; // [esp+24h] [ebp-38h]
  float v60; // [esp+28h] [ebp-34h]
  int v61; // [esp+2Ch] [ebp-30h] BYREF
  float v62; // [esp+30h] [ebp-2Ch]
  float v63; // [esp+34h] [ebp-28h]
  float v64; // [esp+38h] [ebp-24h]
  float v65; // [esp+3Ch] [ebp-20h]
  float v66; // [esp+40h] [ebp-1Ch]
  float v67; // [esp+44h] [ebp-18h]
  float v68; // [esp+48h] [ebp-14h]
  float v69; // [esp+4Ch] [ebp-10h]
  float v70; // [esp+50h] [ebp-Ch]
  float v71; // [esp+54h] [ebp-8h]
  float v72; // [esp+58h] [ebp-4h]
  float v73; // [esp+60h] [ebp+4h]
  float v74; // [esp+60h] [ebp+4h]
  float v75; // [esp+60h] [ebp+4h]
  float v76; // [esp+60h] [ebp+4h]
  float v77; // [esp+60h] [ebp+4h]
  float v78; // [esp+60h] [ebp+4h]
  float v79; // [esp+60h] [ebp+4h]
  float v80; // [esp+60h] [ebp+4h]
  float v81; // [esp+60h] [ebp+4h]
  float v82; // [esp+60h] [ebp+4h]
  float v83; // [esp+60h] [ebp+4h]
  float v84; // [esp+60h] [ebp+4h]
  float v85; // [esp+60h] [ebp+4h]
  float v86; // [esp+60h] [ebp+4h]
  float v87; // [esp+60h] [ebp+4h]
  int v88; // [esp+60h] [ebp+4h]
  float v89; // [esp+60h] [ebp+4h]
  float v90; // [esp+60h] [ebp+4h]
  int v91; // [esp+64h] [ebp+8h]
  int v92; // [esp+64h] [ebp+8h]
  int v93; // [esp+64h] [ebp+8h]
  int v94; // [esp+64h] [ebp+8h]
  int v95; // [esp+64h] [ebp+8h]
  int v96; // [esp+64h] [ebp+8h]
  int v97; // [esp+64h] [ebp+8h]
  int v98; // [esp+64h] [ebp+8h]
  int v99; // [esp+64h] [ebp+8h]
  int v100; // [esp+64h] [ebp+8h]
  int v101; // [esp+64h] [ebp+8h]
  int v102; // [esp+64h] [ebp+8h]
  int v103; // [esp+64h] [ebp+8h]
  int v104; // [esp+64h] [ebp+8h]
  float v105; // [esp+68h] [ebp+Ch]
  float v106; // [esp+68h] [ebp+Ch]
  float v107; // [esp+68h] [ebp+Ch]
  float v108; // [esp+68h] [ebp+Ch]
  float v109; // [esp+68h] [ebp+Ch]
  float v110; // [esp+68h] [ebp+Ch]
  float v111; // [esp+68h] [ebp+Ch]
  float v112; // [esp+68h] [ebp+Ch]
  float v113; // [esp+68h] [ebp+Ch]
  float v114; // [esp+68h] [ebp+Ch]
  float v115; // [esp+68h] [ebp+Ch]
  float v116; // [esp+68h] [ebp+Ch]
  float v117; // [esp+68h] [ebp+Ch]
  float v118; // [esp+68h] [ebp+Ch]
  float v119; // [esp+68h] [ebp+Ch]
  float v120; // [esp+68h] [ebp+Ch]
  float v121; // [esp+68h] [ebp+Ch]
  float v122; // [esp+68h] [ebp+Ch]
  float v123; // [esp+68h] [ebp+Ch]
  float v124; // [esp+68h] [ebp+Ch]
  float v125; // [esp+68h] [ebp+Ch]
  float v126; // [esp+68h] [ebp+Ch]
  float v127; // [esp+68h] [ebp+Ch]
  float v128; // [esp+68h] [ebp+Ch]
  int v129; // [esp+68h] [ebp+Ch]
  float v130; // [esp+68h] [ebp+Ch]
  float v131; // [esp+68h] [ebp+Ch]
  float v132; // [esp+68h] [ebp+Ch]

  v55 = *(float *)*a3 - *a1;
  v56 = *(float *)(*a3 + 4) - a1[1];
  v3 = (float *)a3[1];
  v57 = *(float *)(*a3 + 8) - a1[2];
  v58 = *v3 - *a1;
  v59 = v3[1] - a1[1];
  v4 = v3[2];
  v5 = (float *)a3[2];
  v60 = v4 - a1[2];
  *(float *)&v61 = *v5 - *a1;
  v62 = v5[1] - a1[1];
  v63 = v5[2] - a1[2];
  v64 = v58 - v55;
  v65 = v59 - v56;
  v66 = v60 - v57;
  v67 = *(float *)&v61 - v58;
  v68 = v62 - v59;
  v69 = v63 - v60;
  v6 = v57;
  v7 = v63;
  v70 = v55 - *(float *)&v61;
  v71 = v56 - v62;
  v72 = v57 - v63;
  v105 = fabs(v64);
  v52 = v105;
  v106 = fabs(v65);
  v49 = v106;
  v107 = fabs(v66);
  v46 = v107;
  v8 = v66;
  v108 = v56 * v66 - v65 * v57;
  v9 = v65;
  v73 = v62 * v66 - v65 * v63;
  v10 = v108;
  v11 = v73;
  if ( v73 > (double)v108 )
  {
    v11 = v108;
    v10 = v73;
  }
  v109 = v11;
  *(float *)&v91 = a2[1] * v46 + a2[2] * v49;
  if ( *(float *)&v91 >= (double)v109 )
  {
    v74 = v10;
    if ( -*(float *)&v91 <= v74 )
    {
      v110 = v64 * v6 - v8 * v55;
      v13 = v64 * v7 - v8 * *(float *)&v61;
      v14 = v64;
      v75 = v13;
      v15 = v110;
      v16 = v75;
      if ( v75 > (double)v110 )
      {
        v16 = v110;
        v15 = v75;
      }
      v111 = v16;
      *(float *)&v92 = a2[2] * v52 + *a2 * v46;
      if ( *(float *)&v92 < (double)v111 )
        return 0;
      v76 = v15;
      if ( -*(float *)&v92 > v76 )
        return 0;
      *(float *)&v93 = v9 * v58 - v14 * v59;
      v77 = v9 * *(float *)&v61 - v14 * v62;
      v17 = v77;
      v18 = *(float *)&v93;
      if ( *(float *)&v93 > (double)v77 )
      {
        v18 = v77;
        v17 = *(float *)&v93;
      }
      v112 = v18;
      *(float *)&v94 = v52 * a2[1] + *a2 * v49;
      if ( *(float *)&v94 < (double)v112 )
        return 0;
      v78 = v17;
      if ( -*(float *)&v94 > v78 )
        return 0;
      v19 = v67;
      v113 = fabs(v67);
      v53 = v113;
      v114 = fabs(v68);
      v50 = v114;
      v20 = v69;
      v115 = fabs(v69);
      v47 = v115;
      v116 = v69 * v56 - v68 * v6;
      v79 = v69 * v62 - v68 * v7;
      v21 = v116;
      if ( v79 <= (double)v116 )
        v116 = v69 * v62 - v68 * v7;
      else
        v21 = v79;
      *(float *)&v95 = a2[1] * v47 + a2[2] * v50;
      if ( *(float *)&v95 < (double)v116 )
        return 0;
      v80 = v21;
      if ( -*(float *)&v95 > v80 )
        return 0;
      v117 = v19 * v6 - v20 * v55;
      v22 = v7 * v19 - v20 * *(float *)&v61;
      v23 = v68;
      v81 = v22;
      v24 = v117;
      v25 = v81;
      if ( v81 > (double)v117 )
      {
        v25 = v117;
        v24 = v81;
      }
      v118 = v25;
      *(float *)&v96 = a2[2] * v53 + *a2 * v47;
      if ( *(float *)&v96 < (double)v118 )
        return 0;
      v82 = v24;
      if ( -*(float *)&v96 > v82 )
        return 0;
      v119 = v23 * v55 - v19 * v56;
      *(float *)&v97 = v23 * v58 - v19 * v59;
      v26 = v119;
      v27 = *(float *)&v97;
      if ( *(float *)&v97 > (double)v119 )
      {
        v27 = v119;
        v26 = *(float *)&v97;
      }
      v120 = v27;
      *(float *)&v98 = v53 * a2[1] + *a2 * v50;
      if ( *(float *)&v98 < (double)v120 )
        return 0;
      v83 = v26;
      if ( -*(float *)&v98 > v83 )
        return 0;
      v28 = v70;
      v121 = fabs(v70);
      v54 = v121;
      v122 = fabs(v71);
      v51 = v122;
      v123 = fabs(v72);
      v48 = v123;
      v29 = v72;
      v124 = v56 * v72 - v71 * v6;
      v30 = v71;
      *(float *)&v99 = v59 * v72 - v71 * v60;
      v31 = v124;
      v32 = *(float *)&v99;
      if ( *(float *)&v99 > (double)v124 )
      {
        v32 = v124;
        v31 = *(float *)&v99;
      }
      v125 = v32;
      *(float *)&v100 = a2[1] * v48 + a2[2] * v51;
      if ( *(float *)&v100 < (double)v125 )
        return 0;
      v84 = v31;
      if ( -*(float *)&v100 > v84 )
        return 0;
      v126 = v28 * v6 - v29 * v55;
      v33 = v28 * v60 - v29 * v58;
      v34 = v58;
      *(float *)&v101 = v33;
      v35 = v126;
      v36 = *(float *)&v101;
      if ( *(float *)&v101 > (double)v126 )
      {
        v36 = v126;
        v35 = *(float *)&v101;
      }
      v127 = v36;
      *(float *)&v102 = *a2 * v48 + a2[2] * v54;
      if ( *(float *)&v102 < (double)v127 )
        return 0;
      v85 = v35;
      if ( -*(float *)&v102 > v85 )
        return 0;
      *(float *)&v103 = v30 * v34 - v28 * v59;
      v37 = v30 * *(float *)&v61;
      v38 = *(float *)&v61;
      v86 = v37 - v28 * v62;
      v39 = v86;
      v40 = *(float *)&v103;
      if ( *(float *)&v103 > (double)v86 )
      {
        v40 = v86;
        v39 = *(float *)&v103;
      }
      v128 = v40;
      *(float *)&v104 = a2[1] * v54 + *a2 * v51;
      if ( *(float *)&v104 < (double)v128 )
        return 0;
      v87 = v39;
      if ( -*(float *)&v104 > v87 )
        return 0;
      *(float *)&v88 = v55;
      *(float *)&v129 = v55;
      if ( v55 > v34 )
        *(float *)&v129 = v58;
      if ( v55 >= v34 )
      {
        v41 = v59;
      }
      else
      {
        v41 = v59;
        *(float *)&v88 = v58;
      }
      if ( *(float *)&v129 > v38 )
        v129 = v61;
      if ( *(float *)&v88 >= v38 )
      {
        v42 = v41;
      }
      else
      {
        v42 = v41;
        v88 = v61;
      }
      if ( *a2 >= (double)*(float *)&v129 && -*a2 <= *(float *)&v88 )
      {
        v89 = v56;
        v130 = v56;
        if ( v56 > v42 )
          v130 = v42;
        if ( v56 >= v42 )
        {
          v44 = v57;
        }
        else
        {
          v43 = v42;
          v44 = v57;
          v89 = v43;
        }
        if ( v130 > (double)v62 )
          v130 = v62;
        if ( v89 < (double)v62 )
          v89 = v62;
        if ( a2[1] >= (double)v130 && -a2[1] <= v89 )
        {
          v90 = v44;
          v131 = v44;
          if ( v60 < v44 )
            v131 = v60;
          if ( v60 > v44 )
            v90 = v60;
          if ( v131 > (double)v63 )
            v131 = v63;
          if ( v90 < (double)v63 )
            v90 = v63;
          if ( a2[2] >= (double)v131 && -a2[2] <= v90 )
          {
            *(float *)&v61 = v69 * v65 - v68 * v66;
            v62 = v66 * v67 - v69 * v64;
            v63 = v64 * v68 - v67 * v65;
            v132 = -(v44 * v63 + v62 * v56 + *(float *)&v61 * v55);
            return sub_10078D90((float *)&v61, v132, a2);
          }
        }
      }
    }
  }
  return 0;
}
