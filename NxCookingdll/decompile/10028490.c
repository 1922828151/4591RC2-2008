/*
 * func-name: sub_10028490
 * func-address: 0x10028490
 * callers: 0x1002a6f0
 * callees: 0x10025dd0, 0x10026e40, 0x10027110, 0x10027bb0, 0x10034ca4, 0x10035300, 0x100363f0
 */

void **__cdecl sub_10028490(float **a1, int a2)
{
  int v2; // ecx
  float *v3; // eax
  int v4; // edi
  float *v5; // eax
  int v6; // esi
  char v7; // bl
  int v8; // ecx
  float *v9; // ebp
  double v10; // st7
  double v11; // st6
  int v12; // eax
  int v14; // ebx
  int v15; // edi
  bool v16; // cc
  float *v17; // ebp
  int v18; // ecx
  int v19; // edx
  bool v20; // zf
  __int16 v21; // ax
  int v22; // eax
  _BYTE *v23; // eax
  float v24; // edi
  float v25; // ebp
  int v26; // eax
  float *v27; // eax
  float v28; // ecx
  unsigned __int8 *v29; // edx
  float *v30; // eax
  int v31; // edi
  int v32; // ebp
  int v33; // eax
  int v34; // ecx
  _DWORD *v35; // eax
  int v36; // edx
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  _BYTE *v40; // eax
  int v41; // ecx
  float v42; // edx
  float *v43; // eax
  int v44; // ecx
  int v45; // eax
  float *v46; // eax
  float v47; // edx
  int v48; // ecx
  float *v49; // eax
  int v50; // ecx
  int v51; // edx
  int v52; // eax
  int v53; // eax
  _DWORD *v54; // eax
  int v55; // edx
  int v56; // ecx
  int v57; // eax
  __int16 v58; // ax
  char v59; // dl
  __int16 v60; // ax
  int v61; // ebp
  float *v62; // eax
  _DWORD *v63; // ecx
  int v64; // edx
  int v65; // eax
  int v66; // eax
  int v67; // ebp
  _DWORD *v68; // eax
  int v69; // ecx
  int v70; // edi
  int v71; // edx
  int v72; // esi
  char v73; // cl
  int v74; // eax
  int v75; // ecx
  int *v76; // eax
  int v77; // edx
  int *v78; // esi
  int v79; // edi
  int i; // eax
  int v81; // ebp
  float **v82; // eax
  int v83; // ecx
  int v84; // edi
  float *v85; // eax
  _DWORD *v86; // ecx
  _DWORD *v87; // ecx
  int v88; // ebp
  _DWORD *v89; // eax
  int v90; // edi
  int v91; // eax
  int v92; // edi
  unsigned __int16 v93; // cx
  char v94; // dl
  __int16 v95; // [esp+11h] [ebp-2993h]
  unsigned __int8 v96; // [esp+13h] [ebp-2991h]
  char v97; // [esp+13h] [ebp-2991h]
  int v98; // [esp+14h] [ebp-2990h]
  int v99; // [esp+18h] [ebp-298Ch]
  int v100; // [esp+20h] [ebp-2984h]
  unsigned __int8 *v101; // [esp+20h] [ebp-2984h]
  _DWORD *v102; // [esp+24h] [ebp-2980h] BYREF
  int v103; // [esp+28h] [ebp-297Ch]
  int v104; // [esp+2Ch] [ebp-2978h]
  int v105; // [esp+30h] [ebp-2974h]
  unsigned int v106; // [esp+34h] [ebp-2970h]
  int v107; // [esp+38h] [ebp-296Ch]
  _DWORD *v108; // [esp+3Ch] [ebp-2968h]
  int v109; // [esp+40h] [ebp-2964h]
  int v110; // [esp+44h] [ebp-2960h]
  int v111; // [esp+48h] [ebp-295Ch]
  int v112; // [esp+4Ch] [ebp-2958h]
  int v113; // [esp+50h] [ebp-2954h]
  int v114; // [esp+54h] [ebp-2950h]
  int v115; // [esp+58h] [ebp-294Ch]
  float v116; // [esp+5Ch] [ebp-2948h]
  int v117; // [esp+60h] [ebp-2944h]
  int v118; // [esp+64h] [ebp-2940h]
  int v119; // [esp+68h] [ebp-293Ch]
  int v120; // [esp+6Ch] [ebp-2938h]
  float v121; // [esp+78h] [ebp-292Ch]
  int v122; // [esp+84h] [ebp-2920h]
  float v123[3]; // [esp+88h] [ebp-291Ch] BYREF
  float v124[259]; // [esp+94h] [ebp-2910h] BYREF
  _WORD Src[3584]; // [esp+4A0h] [ebp-2504h] BYREF
  _BYTE v126[8]; // [esp+20A0h] [ebp-904h] BYREF
  _BYTE v127[2296]; // [esp+20A8h] [ebp-8FCh] BYREF

  v98 = 0;
  v2 = 127;
  v3 = (float *)v127;
  do
  {
    *(v3 - 2) = 0.0;
    v3 += 4;
    --v2;
    *(v3 - 5) = 0.0;
    *(v3 - 4) = 0.0;
    *(v3 - 3) = 0.0;
  }
  while ( v2 >= 0 );
  v4 = (int)a1[1];
  v5 = (float *)a2;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v107 = 0;
  v103 = 0;
  v104 = 0;
  v102 = 0;
  if ( v4 > 0 )
  {
    v9 = *a1;
    v10 = flt_10056870;
    while ( 1 )
    {
      v11 = v9[1] * v5[1] + v9[2] * v5[2] + *v9 * *v5 + v5[3];
      v12 = v11 <= v10 ? -v10 > v11 : 2;
      if ( v12 == 1 )
        BYTE2(v124[v8 + 3]) = v98++;
      else
        BYTE2(v124[v8 + 3]) = -1;
      HIBYTE(v124[v8 + 3]) = -1;
      LOBYTE(v124[v8++ + 3]) = v12;
      v7 |= v12;
      v9 += 3;
      if ( v8 >= v4 )
        break;
      v5 = (float *)a2;
    }
  }
  if ( (v7 & 2) == 0 )
    return sub_10027BB0((int)a1);
  v14 = 0;
  v15 = 0;
  v16 = (int)a1[7] <= 0;
  v100 = 0;
  v99 = 0;
  v109 = 0;
  if ( !v16 )
  {
    v106 = 0;
    v108 = v126;
    while ( 1 )
    {
      v113 = v15;
      v105 = v15 + 1;
      v95 = -1;
      v112 = 255;
      v110 = 0;
      do
      {
        if ( v105 >= (int)a1[4] || HIBYTE(a1[3][v105]) != v109 )
        {
          v111 = v105;
          v105 = v113;
        }
        v17 = a1[3];
        v18 = SLOWORD(v17[v15]);
        v96 = LOBYTE(v124[BYTE2(v17[v15]) + 3]);
        v110 |= v96;
        if ( v96 != 1 || (v19 = BYTE2(v17[v105]), v20 = LOBYTE(v124[v19 + 3]) == 1, v114 = (int)&v17[v105] + 2, v20) )
        {
          v36 = BYTE2(v17[v15]);
          v97 = LOBYTE(v124[v36 + 3]);
          if ( v97 != 1 )
          {
            if ( LOBYTE(v124[BYTE2(v17[v105]) + 3]) == 1 )
            {
              if ( v18 >= v15 )
              {
                if ( v97 )
                {
                  v49 = sub_10025DD0(v124, &a1[6][4 * HIBYTE(v17[v15])], &a1[6][4 * HIBYTE(v17[v18])], (float *)a2);
                  v50 = *(_DWORD *)v49;
                  v51 = *((_DWORD *)v49 + 1);
                  v52 = *((_DWORD *)v49 + 2);
                  v118 = v50;
                  v119 = v51;
                  v120 = v52;
                  if ( v6 == v104 )
                  {
                    if ( v104 )
                      v53 = 2 * v104;
                    else
                      v53 = 16;
                    sub_10027110((int *)&v102, v53);
                    v6 = v103;
                  }
                  v54 = &v102[3 * v6];
                  v55 = v119;
                  *v54 = v118;
                  v56 = v120;
                  v54[1] = v55;
                  v54[2] = v56;
                  ++v6;
                  LOBYTE(v95) = v98;
                  v103 = v6;
                  ++v98;
                }
                else
                {
                  v40 = (char *)&v124[v36 + 3] + 2;
                  if ( *v40 == 0xFF )
                  {
                    v41 = 3 * v36;
                    v42 = (*a1)[3 * v36 + 1];
                    v43 = &(*a1)[v41];
                    v44 = *(_DWORD *)v43;
                    v117 = *((_DWORD *)v43 + 2);
                    v115 = v44;
                    v116 = v42;
                    if ( v6 == v104 )
                    {
                      if ( v104 )
                        v45 = 2 * v104;
                      else
                        v45 = 16;
                      sub_10027110((int *)&v102, v45);
                      v6 = v103;
                    }
                    v46 = (float *)&v102[3 * v6];
                    v47 = v116;
                    *(_DWORD *)v46 = v115;
                    v48 = v117;
                    v46[1] = v47;
                    *((_DWORD *)v46 + 2) = v48;
                    v40 = (char *)&v124[BYTE2(v17[v15]) + 3] + 2;
                    ++v6;
                    *v40 = v98;
                    v103 = v6;
                    ++v98;
                  }
                  LOBYTE(v95) = *v40;
                }
              }
              else
              {
                v37 = (__int16)Src[3 * v18 + 2049];
                v38 = v37 + 1;
                v16 = v37 + 1 < v14;
                v39 = HIBYTE(Src[2 * v37 + 1]);
                if ( !v16 || HIBYTE(Src[2 * v38 + 1]) != v39 )
                {
                  v38 -= 2;
                  if ( v38 > 0 )
                  {
                    v101 = (unsigned __int8 *)&v124[v38 + 258] + 3;
                    do
                    {
                      if ( *v101 != v39 )
                        break;
                      v101 -= 4;
                      --v38;
                    }
                    while ( v38 > 0 );
                  }
                }
                LOBYTE(v95) = Src[2 * v38 + 1];
              }
              if ( HIBYTE(v95) != 0xFF && (_BYTE)v95 != HIBYTE(v95) )
              {
                v112 = v14;
                LOBYTE(Src[2 * v14 + 1]) = HIBYTE(v95);
                HIBYTE(Src[2 * v14 + 1]) = v99;
                Src[2 * v14++] = 255;
              }
              LOBYTE(Src[2 * v14 + 1]) = v95;
              v57 = SLOWORD(v17[v15]);
              HIBYTE(Src[2 * v14 + 1]) = v99;
              Src[3 * v15 + 2049] = v14;
              if ( v57 < v15 )
              {
                v58 = Src[3 * v57 + 2049];
                Src[2 * v14] = v58;
                Src[2 * v58] = v14;
              }
              goto LABEL_77;
            }
            if ( v97 != 1 )
              goto LABEL_78;
          }
          if ( LOBYTE(v124[BYTE2(v17[v105]) + 3]) != 1 )
            goto LABEL_78;
          v59 = BYTE2(v124[v36 + 3]);
          Src[3 * v15 + 2049] = v14;
          LOBYTE(Src[2 * v14 + 1]) = v59;
          HIBYTE(Src[2 * v14 + 1]) = v99;
          if ( v18 < v15 )
          {
            v60 = Src[3 * v18 + 2049];
            Src[2 * v14] = v60;
            Src[2 * v60] = v14;
          }
          goto LABEL_77;
        }
        Src[3 * v15 + 2049] = v14;
        LOBYTE(Src[2 * v100 + 1]) = BYTE2(v124[BYTE2(v17[v15]) + 3]);
        HIBYTE(Src[2 * v100 + 1]) = v99;
        if ( v18 >= v15 )
        {
          if ( LOBYTE(v124[v19 + 3]) )
          {
            v30 = sub_10025DD0(v123, &a1[6][4 * HIBYTE(v17[v15])], &a1[6][4 * HIBYTE(v17[v18])], (float *)a2);
            v31 = *(_DWORD *)v30;
            v32 = *((_DWORD *)v30 + 1);
            v122 = *((_DWORD *)v30 + 2);
            if ( v6 == v104 )
            {
              if ( v104 )
                v33 = 2 * v104;
              else
                v33 = 16;
              sub_10027110((int *)&v102, v33);
              v6 = v103;
            }
            v34 = v122;
            v35 = &v102[3 * v6];
            *v35 = v31;
            v35[1] = v32;
            v35[2] = v34;
            ++v6;
            HIBYTE(v95) = v98;
            v103 = v6;
            ++v98;
          }
          else
          {
            v23 = (char *)&v124[v19 + 3] + 2;
            if ( *v23 == 0xFF )
            {
              v24 = (*a1)[3 * v19];
              v25 = (*a1)[3 * v19 + 1];
              v121 = (*a1)[3 * v19 + 2];
              if ( v6 == v104 )
              {
                if ( v104 )
                  v26 = 2 * v104;
                else
                  v26 = 16;
                sub_10027110((int *)&v102, v26);
                v6 = v103;
              }
              v27 = (float *)&v102[3 * v6];
              v28 = v121;
              v29 = (unsigned __int8 *)v114;
              *v27 = v24;
              v27[1] = v25;
              v27[2] = v28;
              v23 = (char *)&v124[*v29 + 3] + 2;
              ++v6;
              *v23 = v98;
              v103 = v6;
              ++v98;
            }
            HIBYTE(v95) = *v23;
          }
        }
        else
        {
          v21 = Src[3 * v18 + 2049];
          Src[2 * v100] = v21;
          v22 = 2 * v21;
          Src[v22] = v100;
          HIBYTE(v95) = Src[v22 + 1];
        }
        v14 = ++v100;
        if ( (_BYTE)v95 != 0xFF && (_BYTE)v95 != HIBYTE(v95) )
        {
          v112 = v14;
          LOBYTE(Src[2 * v14 + 1]) = HIBYTE(v95);
          HIBYTE(Src[2 * v14 + 1]) = v99;
          Src[2 * v14] = 255;
LABEL_77:
          v100 = ++v14;
        }
LABEL_78:
        v15 = v105;
        v20 = v105++ == v113;
      }
      while ( !v20 );
      v15 = v111;
      v61 = v109;
      if ( (v110 & 1) != 0 )
      {
        v62 = &a1[6][v106 / 4];
        v63 = v108;
        ++v99;
        *v108 = *(_DWORD *)v62;
        v63[1] = *((_DWORD *)v62 + 1);
        v64 = *((_DWORD *)v62 + 2);
        v65 = *((_DWORD *)v62 + 3);
        v63[2] = v64;
        v63[3] = v65;
        v108 = v63 + 4;
      }
      else
      {
        v127[2 * v109 + 2040] = 0;
      }
      if ( v112 != 255 )
      {
        v66 = v107;
        Src[2 * v107 + 1024] = v112;
        LOBYTE(Src[2 * v66 + 1025]) = v95;
        HIBYTE(Src[2 * v66 + 1025]) = HIBYTE(v95);
        v107 = v66 + 1;
      }
      v106 += 16;
      v67 = v61 + 1;
      v16 = v67 < (int)a1[7];
      v109 = v67;
      if ( !v16 )
      {
        if ( v107 > 0 )
        {
          v68 = &v126[16 * v99];
          *v68 = *(_DWORD *)a2;
          v68[1] = *(_DWORD *)(a2 + 4);
          v69 = *(_DWORD *)(a2 + 12);
          v68[2] = *(_DWORD *)(a2 + 8);
          v68[3] = v69;
          ++v99;
        }
        break;
      }
    }
  }
  v70 = v107;
  v71 = v107 - 1;
  v72 = 0;
  if ( v107 - 1 <= 0 )
  {
LABEL_97:
    v76 = (int *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 36, 261);
    v78 = v76;
    if ( v76 )
    {
      v79 = v14 + v70;
      v76[1] = 0;
      v76[2] = 0;
      *v76 = 0;
      if ( v98 )
        sub_10027110(v76, v98);
      v78[4] = 0;
      v78[5] = 0;
      v78[3] = 0;
      if ( v79 )
      {
        v78[5] = v79;
        v78[3] = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 4 * v79, 261);
        for ( i = 0; i < v78[4]; ++i )
        {
          v77 = *(_DWORD *)(4 * i);
          *(_DWORD *)(v78[3] + 4 * i) = v77;
        }
      }
      v78[7] = 0;
      v78[8] = 0;
      v78[6] = 0;
      if ( v99 )
        sub_10026E40(v78 + 6, v99);
      v81 = v98;
      v78[1] = v98;
      v78[4] = v79;
      v78[7] = v99;
    }
    else
    {
      v81 = v98;
      v78 = 0;
    }
    v82 = a1;
    v83 = 0;
    v84 = 0;
    v16 = (int)a1[1] <= 0;
    v108 = 0;
    if ( !v16 )
    {
      v77 = 0;
      v106 = 0;
      do
      {
        if ( LOBYTE(v124[v83 + 3]) == 1 )
        {
          v85 = &(*v82)[v106 / 4];
          v86 = (_DWORD *)(v77 + *v78);
          *v86 = *(_DWORD *)v85;
          v86[1] = *((_DWORD *)v85 + 1);
          v86[2] = *((_DWORD *)v85 + 2);
          v82 = a1;
          v83 = (int)v108;
          ++v84;
          v77 += 12;
        }
        v106 += 12;
        v16 = ++v83 < (int)v82[1];
        v108 = (_DWORD *)v83;
      }
      while ( v16 );
      v81 = v98;
    }
    if ( v84 < v81 )
    {
      v87 = v102;
      v77 = 12 * v84;
      v88 = v81 - v84;
      do
      {
        v89 = (_DWORD *)(v77 + *v78);
        *v89 = *v87;
        v89[1] = v87[1];
        v90 = v87[2];
        v77 += 12;
        v87 += 3;
        --v88;
        v89[2] = v90;
      }
      while ( v88 );
    }
    v91 = 0;
    if ( v107 > 0 )
    {
      LOBYTE(v77) = v99 - 1;
      v92 = 4 * v14;
      do
      {
        *(_BYTE *)(v78[3] + v92 + 3) = v77;
        v93 = Src[2 * v91 + 1024];
        *(_WORD *)(v92 + v78[3]) = v93;
        v111 = v77;
        v94 = Src[2 * v91 + 1025];
        Src[2 * v93] = v91 + v14;
        *(_BYTE *)(v78[3] + v92 + 2) = v94;
        v77 = v111;
        ++v91;
        v92 += 4;
      }
      while ( v91 < v107 );
    }
    memcpy_0((void *)v78[3], Src, 4 * v14);
    memcpy_0((void *)v78[6], v126, 16 * v99);
    if ( v102 )
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v102);
    return (void **)v78;
  }
  else
  {
    while ( 1 )
    {
      v73 = HIBYTE(Src[2 * v72 + 1025]);
      if ( v73 != LOBYTE(Src[2 * v72 + 1027]) )
      {
        v74 = v72 + 2;
        if ( v72 + 2 >= v70 )
          break;
        while ( v73 != LOBYTE(Src[2 * v74 + 1025]) )
        {
          if ( ++v74 >= v70 )
            goto LABEL_92;
        }
        v75 = *(_DWORD *)&Src[2 * v72 + 1026];
        *(_DWORD *)&Src[2 * v72 + 1026] = *(_DWORD *)&Src[2 * v74 + 1024];
        *(_DWORD *)&Src[2 * v74 + 1024] = v75;
        if ( v74 >= v70 )
          break;
      }
      if ( ++v72 >= v71 )
        goto LABEL_97;
    }
LABEL_92:
    if ( v102 )
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v102);
    return 0;
  }
}
