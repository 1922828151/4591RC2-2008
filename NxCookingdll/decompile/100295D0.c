/*
 * func-name: sub_100295D0
 * func-address: 0x100295d0
 * callers: 0x10029dd0, 0x10029f00
 * callees: 0x10025eb0, 0x10026de0, 0x10027790, 0x100278e0, 0x10028ec0, 0x10028fa0, 0x100291a0
 */

int __usercall sub_100295D0@<eax>(int a1@<ebx>, int a2@<ebp>, int a3@<esi>, int a4, int a5, int a6)
{
  float v7; // ecx
  float v8; // edx
  int v9; // ebx
  int v10; // ebp
  int v11; // edx
  int v12; // ecx
  float *v13; // edi
  int v14; // eax
  int v15; // eax
  bool v16; // c0
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // st7
  bool v21; // c0
  bool v22; // c3
  double v23; // st7
  double v24; // st6
  bool v25; // c0
  bool v26; // c3
  double v27; // st6
  double v28; // st5
  bool v29; // c0
  bool v30; // c3
  double v31; // st5
  bool v32; // zf
  int v33; // edi
  int v34; // ebx
  int v35; // ebp
  int v36; // eax
  float *v37; // ecx
  double v38; // st6
  double v39; // st5
  float *v40; // eax
  double v41; // rt0
  double v42; // st5
  double v43; // st6
  double v44; // st7
  float *v45; // eax
  double v46; // st5
  double v47; // st6
  double v48; // st4
  int (__thiscall *v49)(int, int, int, int, int, int); // eax
  float *v50; // eax
  float *v51; // eax
  float *v52; // eax
  float *v53; // eax
  float *v54; // eax
  float *v55; // eax
  float *v56; // eax
  float *v57; // eax
  int v58; // ecx
  int v59; // eax
  int v60; // ebx
  float *v61; // edi
  int v62; // eax
  float v63; // ecx
  int v64; // eax
  int v65; // eax
  int *v66; // edi
  float *v67; // edx
  int v68; // eax
  _DWORD *v69; // edi
  float *v70; // ebp
  float *v71; // ebx
  float *v72; // edx
  double v73; // st7
  double v74; // st6
  double v75; // st5
  double v76; // st4
  double v77; // st3
  double v78; // st2
  int v79; // ebx
  int v80; // ebp
  int v81; // edi
  int v82; // eax
  int v83; // eax
  int v86; // [esp+34h] [ebp-58h]
  int v87; // [esp+34h] [ebp-58h]
  float v88; // [esp+38h] [ebp-54h]
  int v89; // [esp+3Ch] [ebp-50h]
  int v90; // [esp+3Ch] [ebp-50h]
  int v91; // [esp+40h] [ebp-4Ch] BYREF
  int v92; // [esp+44h] [ebp-48h]
  int v93; // [esp+48h] [ebp-44h]
  int v94; // [esp+4Ch] [ebp-40h] BYREF
  int v95; // [esp+50h] [ebp-3Ch]
  int v96; // [esp+54h] [ebp-38h]
  float v97; // [esp+58h] [ebp-34h] BYREF
  float v98; // [esp+5Ch] [ebp-30h]
  float v99; // [esp+60h] [ebp-2Ch]
  float v100; // [esp+64h] [ebp-28h] BYREF
  float v101; // [esp+68h] [ebp-24h]
  float v102; // [esp+6Ch] [ebp-20h]
  float v103; // [esp+70h] [ebp-1Ch] BYREF
  float v104; // [esp+74h] [ebp-18h]
  float v105; // [esp+78h] [ebp-14h]
  int v106; // [esp+7Ch] [ebp-10h]
  float v107; // [esp+80h] [ebp-Ch]
  float v108; // [esp+84h] [ebp-8h]
  float v109; // [esp+88h] [ebp-4h]
  int i; // [esp+98h] [ebp+Ch]

  if ( a5 < 4 )
    return 0;
  if ( !a6 )
    a6 = 1000000000;
  v7 = *(float *)(a4 + 4);
  v8 = *(float *)(a4 + 8);
  v100 = *(float *)a4;
  v101 = v7;
  v102 = v8;
  v97 = v100;
  v98 = v7;
  v99 = v8;
  v95 = 0;
  v96 = 0;
  v94 = 0;
  sub_10026DE0(&v94, a5);
  v9 = v95;
  v92 = 0;
  v93 = 0;
  v91 = 0;
  sub_10026DE0(&v91, a5);
  v10 = v92;
  v11 = v93;
  v12 = v96;
  v13 = (float *)(a4 + 4);
  v89 = a5;
  do
  {
    if ( v10 == v11 )
    {
      v14 = 2 * v11;
      if ( !v11 )
        v14 = 16;
      sub_10026DE0(&v91, v14);
      v10 = v92;
      v11 = v93;
      v12 = v96;
    }
    *(_DWORD *)(v91 + 4 * v10++) = 1;
    v92 = v10;
    if ( v9 == v12 )
    {
      v15 = 2 * v12;
      if ( !v12 )
        v15 = 16;
      sub_10026DE0(&v94, v15);
      v9 = v95;
      v11 = v93;
      v12 = v96;
    }
    *(_DWORD *)(v94 + 4 * v9++) = 0;
    v16 = v102 < (double)v13[1];
    v95 = v9;
    v17 = v102;
    if ( !v16 )
      v17 = v13[1];
    v18 = v101;
    if ( v101 >= (double)*v13 )
      v18 = *v13;
    v19 = v100;
    if ( v100 >= (double)*(v13 - 1) )
      v19 = *(v13 - 1);
    v103 = v19;
    v100 = v103;
    v104 = v18;
    v101 = v104;
    v105 = v17;
    v20 = v13[1];
    v102 = v105;
    v21 = v99 < v20;
    v22 = v99 == v20;
    v23 = v99;
    if ( v21 || v22 )
      v23 = v13[1];
    v24 = *v13;
    v25 = v98 < v24;
    v26 = v98 == v24;
    v27 = v98;
    if ( v25 || v26 )
      v27 = *v13;
    v28 = *(v13 - 1);
    v29 = v97 < v28;
    v30 = v97 == v28;
    v31 = v97;
    if ( v29 || v30 )
      v31 = *(v13 - 1);
    v107 = v31;
    v97 = v107;
    v108 = v27;
    v98 = v108;
    v109 = v23;
    v13 += 3;
    v32 = v89-- == 1;
    v99 = v109;
  }
  while ( !v32 );
  v88 = sqrt((v97 - v100) * (v97 - v100) + (v99 - v102) * (v99 - v102) + (v98 - v101) * (v98 - v101)) * 0.001;
  sub_100291A0((int *)&v103, a4, a5, &v91);
  v33 = LODWORD(v103);
  if ( v103 == NAN )
  {
    if ( v91 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v91);
    if ( v94 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v94);
    return 0;
  }
  else
  {
    v34 = LODWORD(v104);
    v35 = LODWORD(v105);
    v36 = a4 + 12 * LODWORD(v104);
    v37 = (float *)(a4 + 12 * LODWORD(v103));
    v38 = v37[1] + *(float *)(v36 + 4);
    v39 = v37[2] + *(float *)(v36 + 8);
    v40 = (float *)(a4 + 12 * LODWORD(v105));
    v41 = v39;
    v42 = *(float *)(a4 + 12 * LODWORD(v104)) + *v37 + *v40;
    v43 = v38 + v40[1];
    v44 = v41 + v40[2];
    v45 = (float *)(a4 + 12 * v106);
    v46 = v42 + *v45;
    v47 = v43 + v45[1];
    v48 = v45[2];
    v49 = *(int (__thiscall **)(int, int, int, int, int, int))(*(_DWORD *)dword_100580A0 + 8);
    v107 = v46 * 0.25;
    v108 = v47 * 0.25;
    v109 = (v44 + v48) * 0.25;
    v50 = (float *)v49(dword_100580A0, 36, 261, a3, a1, a2);
    if ( v50 )
      v51 = sub_10028EC0(v50, v35, SLODWORD(v109), v34);
    else
      v51 = 0;
    *((_DWORD *)v51 + 3) = 2;
    *((_DWORD *)v51 + 4) = 3;
    *((_DWORD *)v51 + 5) = 1;
    v52 = (float *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 36, 261);
    if ( v52 )
      v53 = sub_10028EC0(v52, SLODWORD(v109), v35, v33);
    else
      v53 = 0;
    *((_DWORD *)v53 + 3) = 3;
    *((_DWORD *)v53 + 4) = 2;
    v53[5] = 0.0;
    v54 = (float *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 36);
    if ( v54 )
      v55 = sub_10028EC0(v54, v33, v34, SLODWORD(v108));
    else
      v55 = 0;
    v55[3] = 0.0;
    *((_DWORD *)v55 + 4) = 1;
    *((_DWORD *)v55 + 5) = 3;
    v56 = (float *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 36, 261);
    if ( v56 )
      v57 = sub_10028EC0(v56, v34, v33, v35);
    else
      v57 = 0;
    *((_DWORD *)v57 + 3) = 1;
    v57[4] = 0.0;
    v58 = v106;
    *((_DWORD *)v57 + 5) = 2;
    v59 = v94;
    *(_DWORD *)(v94 + 4 * v58) = 1;
    *(_DWORD *)(v59 + 4 * v35) = 1;
    *(_DWORD *)(v59 + 4 * v34) = 1;
    v60 = 0;
    for ( *(_DWORD *)(v59 + 4 * v33) = 1;
          v60 < dword_1005B474;
          v61[8] = (*(float *)(a4 + 12 * v62) - *(float *)(a4 + 12 * LODWORD(v63))) * v103
                 + (*(float *)(a4 + 12 * v62 + 4) - *(float *)(a4 + 12 * LODWORD(v63) + 4)) * v104
                 + (*(float *)(a4 + 12 * v62 + 8) - *(float *)(a4 + 12 * LODWORD(v63) + 8)) * v105 )
    {
      v61 = *(float **)(dword_1005B470 + 4 * v60);
      sub_10025EB0(
        &v103,
        (float *)(a4 + 12 * *(_DWORD *)v61),
        (float *)(a4 + 12 * *((_DWORD *)v61 + 1)),
        (float *)(a4 + 12 * *((_DWORD *)v61 + 2)));
      v62 = sub_100278E0(a4, a5, &v103, &v91);
      v63 = *v61;
      *((_DWORD *)v61 + 7) = v62;
      ++v60;
    }
    for ( i = a6 - 4; i > 0; --i )
    {
      v64 = sub_10027790(v88);
      if ( !v64 )
        break;
      v90 = *(_DWORD *)(v64 + 28);
      *(_DWORD *)(v94 + 4 * v90) = 1;
      v65 = dword_1005B474;
      if ( dword_1005B474 )
      {
        do
        {
          v86 = --v65;
          if ( *(_DWORD *)(dword_1005B470 + 4 * v65) )
          {
            v66 = *(int **)(dword_1005B470 + 4 * v65);
            sub_10025EB0(&v100, (float *)(a4 + 12 * *v66), (float *)(a4 + 12 * v66[1]), (float *)(a4 + 12 * v66[2]));
            if ( v88 * 0.0099999998 < (*(float *)(a4 + 12 * v90 + 4) - v67[1]) * v101
                                    + (*(float *)(a4 + 12 * v90 + 8) - v67[2]) * v102
                                    + (*(float *)(a4 + 12 * v90) - *v67) * v100 )
              sub_10028FA0(v66, v90);
            v65 = v86;
          }
        }
        while ( v65 );
        v65 = dword_1005B474;
        if ( dword_1005B474 )
        {
          while ( 1 )
          {
            v68 = v65 - 1;
            v87 = v68;
            if ( *(_DWORD *)(dword_1005B470 + 4 * v68) )
            {
              v69 = *(_DWORD **)(dword_1005B470 + 4 * v68);
              if ( *v69 != v90 && v69[1] != v90 && v69[2] != v90 )
              {
LABEL_66:
                v65 = dword_1005B474;
                break;
              }
              v70 = (float *)(a4 + 12 * v69[2]);
              v71 = (float *)(a4 + 12 * v69[1]);
              sub_10025EB0(&v97, (float *)(a4 + 12 * *v69), v71, v70);
              if ( v88 * 0.0099999998 < (v108 - v72[1]) * v98 + (v109 - v72[2]) * v99 + (v107 - *v72) * v97
                || (v73 = *v70 - *v71,
                    v74 = v70[1] - v71[1],
                    v75 = v70[2] - v71[2],
                    v76 = *v71 - *v72,
                    v77 = v71[1] - v72[1],
                    v78 = v71[2] - v72[2],
                    v88 * v88 * 0.1 > sqrt(
                                        (v76 * v74 - v73 * v77) * (v76 * v74 - v73 * v77)
                                      + (v78 * v73 - v75 * v76) * (v78 * v73 - v75 * v76)
                                      + (v77 * v75 - v78 * v74) * (v77 * v75 - v78 * v74))) )
              {
                sub_10028FA0(*(int **)(dword_1005B470 + 4 * v69[3]), v90);
                v87 = dword_1005B474;
              }
            }
            if ( !v87 )
              goto LABEL_66;
            v65 = v87;
          }
        }
      }
      v79 = v65;
      if ( v65 )
      {
        v80 = v94;
        do
        {
          v81 = *(_DWORD *)(dword_1005B470 + 4 * v79-- - 4);
          if ( v81 )
          {
            if ( *(int *)(v81 + 28) >= 0 )
              break;
            sub_10025EB0(
              &v103,
              (float *)(a4 + 12 * *(_DWORD *)v81),
              (float *)(a4 + 12 * *(_DWORD *)(v81 + 4)),
              (float *)(a4 + 12 * *(_DWORD *)(v81 + 8)));
            v82 = sub_100278E0(a4, a5, &v103, &v91);
            *(_DWORD *)(v81 + 28) = v82;
            if ( *(_DWORD *)(v80 + 4 * v82) )
            {
              *(_DWORD *)(v81 + 28) = -1;
            }
            else
            {
              v83 = 3 * v82;
              *(float *)(v81 + 32) = (*(float *)(a4 + 4 * v83) - *(float *)(a4 + 12 * *(_DWORD *)v81)) * v103
                                   + (*(float *)(a4 + 4 * v83 + 4) - *(float *)(a4 + 12 * *(_DWORD *)v81 + 4)) * v104
                                   + (*(float *)(a4 + 4 * v83 + 8) - *(float *)(a4 + 12 * *(_DWORD *)v81 + 8)) * v105;
            }
          }
        }
        while ( v79 );
      }
    }
    if ( v91 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v91);
    if ( v94 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v94);
    return 1;
  }
}
