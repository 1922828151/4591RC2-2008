/*
 * func-name: sub_10029F00
 * func-address: 0x10029f00
 * callers: 0x1002acb0
 * callees: 0x10025be0, 0x10025eb0, 0x10026c00, 0x10026e40, 0x10027880, 0x100295d0
 */

int __usercall sub_10029F00@<eax>(int a1@<ebx>, int a2, int a3, int a4, int *a5, float a6)
{
  int *v6; // ebp
  int v7; // edx
  int v8; // eax
  int v9; // edi
  _DWORD *v10; // ebx
  float *v11; // eax
  int v12; // edx
  double v13; // st7
  double v14; // st5
  double v15; // st6
  double v16; // st4
  float *v17; // ecx
  float *v18; // eax
  double v19; // st3
  double v20; // st2
  double v21; // st1
  float *v22; // eax
  float v23; // ecx
  float v24; // edx
  float v25; // eax
  float *v27; // edi
  float v28; // ecx
  float v29; // edx
  int v30; // eax
  float v31; // ecx
  int v32; // edx
  int v33; // edi
  int v34; // ecx
  int v35; // eax
  _DWORD *v36; // edx
  int *v37; // edi
  float *v38; // ebp
  float *v39; // ebx
  int v40; // eax
  float *v41; // ebp
  int v42; // edx
  double v43; // st7
  double v44; // st6
  double v45; // st5
  double v46; // st4
  double v47; // st3
  double v48; // st2
  double v49; // st5
  double v50; // rt1
  double v51; // st2
  double v52; // st6
  double v53; // st7
  double v54; // st4
  double v55; // st3
  double v56; // st2
  double v57; // st1
  double v58; // st0
  double v59; // rt1
  double v60; // st4
  int v61; // eax
  float *v62; // eax
  float *v63; // edx
  float v64; // edi
  float v65; // ebx
  int v66; // eax
  int v67; // eax
  float *v68; // eax
  int v69; // esi
  int v70; // edx
  float *v71; // ecx
  float v72; // edi
  int v73; // ebx
  int v74; // eax
  int v75; // eax
  float *v76; // eax
  int i; // esi
  int v78; // eax
  int v79; // [esp+10h] [ebp-A0h]
  int v80; // [esp+10h] [ebp-A0h]
  int v81; // [esp+10h] [ebp-A0h]
  int v82; // [esp+14h] [ebp-9Ch]
  int v83; // [esp+14h] [ebp-9Ch]
  _DWORD *v84; // [esp+18h] [ebp-98h]
  float *v85; // [esp+18h] [ebp-98h]
  int v86; // [esp+1Ch] [ebp-94h]
  int v87; // [esp+1Ch] [ebp-94h]
  float v88; // [esp+20h] [ebp-90h]
  float v89; // [esp+24h] [ebp-8Ch]
  float v90; // [esp+28h] [ebp-88h]
  float v91; // [esp+28h] [ebp-88h]
  int v92; // [esp+28h] [ebp-88h]
  float v93; // [esp+2Ch] [ebp-84h]
  int v94; // [esp+2Ch] [ebp-84h]
  float v95; // [esp+30h] [ebp-80h] BYREF
  float v96; // [esp+34h] [ebp-7Ch]
  float v97; // [esp+38h] [ebp-78h]
  float v98; // [esp+3Ch] [ebp-74h] BYREF
  float v99; // [esp+40h] [ebp-70h]
  float v100; // [esp+44h] [ebp-6Ch]
  float v101; // [esp+48h] [ebp-68h]
  float v102; // [esp+4Ch] [ebp-64h] BYREF
  float v103; // [esp+50h] [ebp-60h]
  float v104; // [esp+54h] [ebp-5Ch]
  float v105; // [esp+58h] [ebp-58h] BYREF
  float v106; // [esp+5Ch] [ebp-54h]
  float v107; // [esp+60h] [ebp-50h]
  int v108; // [esp+64h] [ebp-4Ch] BYREF
  int v109; // [esp+68h] [ebp-48h]
  int v110; // [esp+6Ch] [ebp-44h]
  float v111; // [esp+70h] [ebp-40h]
  float v112; // [esp+74h] [ebp-3Ch]
  float v113; // [esp+78h] [ebp-38h]
  float *v114; // [esp+7Ch] [ebp-34h]
  float *v115; // [esp+80h] [ebp-30h]
  float *v116; // [esp+84h] [ebp-2Ch]
  float v117[6]; // [esp+88h] [ebp-28h] BYREF
  int v118; // [esp+A0h] [ebp-10h]
  float v119[3]; // [esp+A4h] [ebp-Ch] BYREF

  v6 = a5;
  v109 = 0;
  v110 = 0;
  v108 = 0;
  a5[1] = 0;
  if ( !sub_100295D0(a1, (int)a5, a2, a2, a3, a4) )
    return 0;
  v7 = dword_1005B474;
  v8 = 0;
  v79 = 0;
  v101 = cos(flt_10056874 * 0.017453292);
  if ( dword_1005B474 <= 0 )
  {
    v9 = dword_1005B470;
  }
  else
  {
    do
    {
      v9 = dword_1005B470;
      if ( *(_DWORD *)(dword_1005B470 + 4 * v8) )
      {
        v10 = *(_DWORD **)(dword_1005B470 + 4 * v8);
        v11 = sub_10025EB0(v119, (float *)(a2 + 12 * *v10), (float *)(a2 + 12 * v10[1]), (float *)(a2 + 12 * v10[2]));
        v88 = *v11;
        v89 = v11[1];
        v12 = 2;
        v90 = v11[2];
        v82 = 2;
        v84 = v10 + 3;
        while ( 1 )
        {
          if ( *v84 >= v10[6] )
          {
            sub_10025EB0(
              &v98,
              (float *)(a2 + 12 * **(_DWORD **)(v9 + 4 * *v84)),
              (float *)(a2 + 12 * *(_DWORD *)(*(_DWORD *)(v9 + 4 * *v84) + 4)),
              (float *)(a2 + 12 * *(_DWORD *)(*(_DWORD *)(v9 + 4 * *v84) + 8)));
            v13 = v98;
            v14 = v100;
            v15 = v90;
            v16 = v89;
            if ( cos(a6 * 0.017453292) > v99 * v89 + v100 * v90 + v88 * v98 )
            {
              v17 = (float *)(a2 + 12 * v10[(v12 - 1) % 3]);
              v18 = (float *)(a2 + 12 * v10[v82 % 3]);
              v19 = *v18 - *v17;
              v20 = v18[1] - v17[1];
              v21 = v18[2] - v17[2];
              if ( 0.0 == v19 && 0.0 == v20 && 0.0 == v21 )
              {
                v22 = &v105;
                v105 = v13 + v88;
                v106 = v89 + v99;
                v107 = v100 + v15;
              }
              else
              {
                v22 = &v102;
                v111 = v15 * v20 - v21 * v16;
                v112 = v21 * v88 - v90 * v19;
                v113 = v16 * v19 - v20 * v88;
                v102 = v21 * v99 - v20 * v14 + v111;
                v103 = v14 * v19 - v21 * v13 + v112;
                v104 = v13 * v20 - v99 * v19 + v113;
              }
              v23 = *v22;
              v24 = v22[1];
              v25 = v22[2];
              v95 = v23;
              v97 = v25;
              v96 = v24;
              if ( 0.0 == v23 && 0.0 == v96 && 0.0 == v97 )
              {
                if ( v108 )
                  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v108);
                return 0;
              }
              v27 = sub_10025BE0(v117, &v95);
              v28 = v27[1];
              v29 = v27[2];
              v95 = *v27;
              v96 = v28;
              v97 = v29;
              v30 = sub_10026C00(a2, a3, &v95);
              v31 = *v27;
              v32 = *((_DWORD *)v27 + 1);
              v33 = *((_DWORD *)v27 + 2);
              *(float *)&v118 = -(*(float *)(a2 + 12 * v30 + 8) * v97
                                + *(float *)(a2 + 12 * v30 + 4) * v96
                                + *(float *)(a2 + 12 * v30) * v95);
              sub_10027880(&v108, SLODWORD(v31), v32, v33, v118);
              v9 = dword_1005B470;
              v12 = v82;
            }
          }
          ++v84;
          v82 = ++v12;
          if ( v12 - 2 >= 3 )
          {
            v8 = v79;
            break;
          }
        }
      }
      v7 = dword_1005B474;
      v79 = ++v8;
    }
    while ( v8 < dword_1005B474 );
  }
  if ( v7 > 0 )
  {
    v34 = 0;
    v35 = 1;
    v80 = 0;
    v86 = 1;
    do
    {
      if ( *(_DWORD *)(v34 + v9) )
      {
        v83 = v35;
        if ( v35 < v7 )
        {
          do
          {
            if ( *(_DWORD *)(v34 + v9) && *(_DWORD *)(v9 + 4 * v35) )
            {
              v36 = *(_DWORD **)(v34 + v9);
              v37 = *(int **)(v9 + 4 * v35);
              v38 = (float *)(a2 + 12 * v36[1]);
              v39 = (float *)(a2 + 12 * *v36);
              v116 = (float *)(a2 + 12 * v36[2]);
              v114 = v38;
              sub_10025EB0(&v105, v39, v38, v116);
              v85 = (float *)(a2 + 12 * v37[1]);
              v40 = *v37;
              v115 = (float *)(a2 + 12 * v37[2]);
              v41 = (float *)(a2 + 12 * v40);
              sub_10025EB0(&v102, v41, v85, v115);
              if ( v102 * v105 + v106 * v103 + v107 * v104 > v101 )
              {
                v43 = *v116 - *v39;
                v44 = v116[1] - v39[1];
                v45 = v116[2] - v39[2];
                v46 = *v39 - *v114;
                v47 = v39[1] - v114[1];
                v48 = v47 * v45 - (v39[2] - v114[2]) * v44;
                v49 = (v39[2] - v114[2]) * v43 - v45 * v46;
                v50 = v48;
                v51 = v44;
                v52 = v50;
                v53 = v46 * v51 - v43 * v47;
                v54 = *v115 - *v41;
                v55 = v115[1] - v41[1];
                v56 = v115[2] - v41[2];
                v98 = *v41 - *v85;
                v57 = v41[1] - v85[1];
                v99 = v57;
                v58 = v41[2] - v85[2];
                v100 = v58;
                v111 = v57 * v56 - v58 * v55;
                v59 = v100 * v54 - v56 * v98;
                v60 = v55 * v98 - v54 * v99;
                if ( v52 * v52 + v49 * v49 + v53 * v53 >= v59 * v59 + v60 * v60 + v111 * v111 )
                {
                  if ( v37 )
                  {
                    *(_DWORD *)(dword_1005B470 + 4 * v37[6]) = 0;
                    (*(void (__thiscall **)(int, int *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v37);
                  }
                  *(_DWORD *)(dword_1005B470 + 4 * v83) = 0;
                }
                else
                {
                  if ( v42 )
                  {
                    *(_DWORD *)(dword_1005B470 + 4 * *(_DWORD *)(v42 + 24)) = 0;
                    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v42);
                  }
                  *(_DWORD *)(v80 + dword_1005B470) = 0;
                }
              }
              v6 = a5;
              v9 = dword_1005B470;
            }
            v7 = dword_1005B474;
            v34 = v80;
            v35 = ++v83;
          }
          while ( v83 < dword_1005B474 );
          v35 = v86;
        }
      }
      ++v35;
      v34 += 4;
      v86 = v35;
      v80 = v34;
    }
    while ( v35 - 1 < v7 );
  }
  v61 = 0;
  v81 = 0;
  if ( v7 > 0 )
  {
    do
    {
      if ( *(_DWORD *)(v9 + 4 * v61) )
      {
        v62 = sub_10025EB0(
                v117,
                (float *)(a2 + 12 * **(_DWORD **)(v9 + 4 * v61)),
                (float *)(a2 + 12 * *(_DWORD *)(*(_DWORD *)(v9 + 4 * v61) + 4)),
                (float *)(a2 + 12 * *(_DWORD *)(*(_DWORD *)(v9 + 4 * v61) + 8)));
        v64 = *v62;
        v65 = v62[1];
        v91 = v62[2];
        v66 = v6[2];
        v93 = -(v63[2] * v91 + v63[1] * v65 + *v63 * v64);
        if ( v6[1] == v66 )
        {
          if ( v66 )
            v67 = 2 * v66;
          else
            v67 = 16;
          sub_10026E40(v6, v67);
        }
        v68 = (float *)(*v6 + 16 * v6[1]);
        *v68 = v64;
        v68[1] = v65;
        v68[2] = v91;
        v68[3] = v93;
        ++v6[1];
        v9 = dword_1005B470;
        v61 = v81;
      }
      v81 = ++v61;
    }
    while ( v61 < dword_1005B474 );
  }
  if ( v109 > 0 )
  {
    v69 = v108;
    v87 = v109;
    do
    {
      v70 = 0;
      if ( v6[1] > 0 )
      {
        v71 = (float *)*v6;
        do
        {
          if ( v71[2] * *(float *)(v69 + 8) + v71[1] * *(float *)(v69 + 4) + *v71 * *(float *)v69 > v101 )
            break;
          ++v70;
          v71 += 4;
        }
        while ( v70 < v6[1] );
      }
      if ( v70 == v6[1] )
      {
        v72 = *(float *)v69;
        v73 = *(_DWORD *)(v69 + 4);
        v92 = *(_DWORD *)(v69 + 8);
        v74 = v6[2];
        v94 = *(_DWORD *)(v69 + 12);
        if ( v6[1] == v74 )
        {
          if ( v74 )
            v75 = 2 * v74;
          else
            v75 = 16;
          sub_10026E40(v6, v75);
        }
        v76 = (float *)(*v6 + 16 * v6[1]);
        *v76 = v72;
        *((_DWORD *)v76 + 1) = v73;
        *((_DWORD *)v76 + 2) = v92;
        *((_DWORD *)v76 + 3) = v94;
        ++v6[1];
      }
      v69 += 16;
      --v87;
    }
    while ( v87 );
    v9 = dword_1005B470;
  }
  for ( i = 0; i < dword_1005B474; ++i )
  {
    if ( *(_DWORD *)(v9 + 4 * i) )
    {
      v78 = *(_DWORD *)(v9 + 4 * i);
      if ( v78 )
      {
        *(_DWORD *)(v9 + 4 * *(_DWORD *)(v78 + 24)) = 0;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v78);
        v9 = dword_1005B470;
      }
    }
  }
  dword_1005B474 = 0;
  if ( v108 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v108);
  return 1;
}
