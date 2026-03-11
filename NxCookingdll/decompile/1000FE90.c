/*
 * func-name: sub_1000FE90
 * func-address: 0x1000fe90
 * callers: 0x10011260
 * callees: 0x10014950, 0x100149b0, 0x10014b50, 0x10014c40, 0x10015980, 0x100159a0, 0x10015a80
 */

int __usercall sub_1000FE90@<eax>(int a1@<eax>, int a2@<esi>, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  char v5; // cl
  char v6; // al
  bool v7; // zf
  int v8; // ebx
  unsigned int v9; // edi
  unsigned int v10; // ebp
  unsigned int v11; // edx
  int v12; // edi
  unsigned int v13; // eax
  unsigned int v14; // ebp
  unsigned int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // edi
  char v19; // bp
  int v20; // eax
  int v21; // ebx
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // edi
  unsigned int v25; // ebx
  char v26; // al
  char v27; // al
  unsigned int v28; // ebx
  char v29; // al
  char v30; // al
  unsigned int v31; // ebx
  char v32; // cl
  char v33; // al
  unsigned int v34; // edi
  char v35; // dl
  char v36; // al
  unsigned int v37; // ebx
  char v38; // cl
  char v39; // al
  unsigned int v40; // ebx
  char v41; // dl
  char v42; // al
  unsigned int v43; // ebx
  char v44; // cl
  char v45; // al
  unsigned int v46; // edi
  char v47; // dl
  char v48; // al
  unsigned int v49; // ebx
  char v50; // cl
  char v51; // al
  unsigned int v52; // ebx
  char v53; // dl
  char v54; // al
  unsigned int v55; // ebx
  char v56; // cl
  char v57; // al
  unsigned int v58; // ebx
  char v59; // dl
  char v60; // al
  unsigned int v61; // ebx
  char v62; // cl
  char v63; // al
  unsigned int v64; // ebx
  char v65; // dl
  char v66; // al
  unsigned int v67; // ebx
  char v68; // cl
  char v69; // al
  unsigned int v70; // edi
  char v71; // dl
  char v72; // al
  unsigned int v73; // ebx
  char v74; // cl
  char v75; // al
  unsigned int v76; // ebx
  char v77; // dl
  char v78; // al
  unsigned int v79; // ebx
  char v80; // cl
  char v81; // al
  unsigned int v82; // ebx
  char v83; // dl
  char v84; // al
  unsigned int v85; // ebx
  char v86; // cl
  char v87; // al
  unsigned int v88; // ebx
  char v89; // dl
  char v90; // al
  unsigned int v91; // ebx
  char v92; // cl
  char v93; // al
  unsigned int v94; // ebx
  char v95; // dl
  char v96; // al
  unsigned int v97; // ebx
  char v98; // cl
  char v99; // al
  unsigned int v100; // ebx
  char v101; // dl
  char v102; // al
  unsigned int n; // edi
  char v104; // cl
  char v105; // al
  unsigned int v106; // ebx
  char v107; // dl
  char v108; // al
  unsigned int k; // edi
  char v110; // cl
  char v111; // al
  unsigned int v112; // ebx
  char v113; // dl
  char v114; // al
  unsigned int m; // edi
  char v116; // cl
  char v117; // al
  unsigned int v118; // ebx
  char v119; // dl
  char v120; // al
  unsigned int i; // edi
  char v122; // cl
  char v123; // al
  unsigned int j; // edi
  char v125; // dl
  char v126; // al
  unsigned int v127; // ebx
  char v128; // cl
  char v129; // al
  unsigned int ii; // edi
  char v131; // dl
  char v132; // al
  unsigned int jj; // edi
  char v134; // cl
  char v135; // al
  unsigned int v136; // ebx
  char v137; // dl
  char v138; // al
  int v139; // ebx
  unsigned int v140; // edi
  char v141; // cl
  char v142; // al
  unsigned int v143; // edi
  char v144; // dl
  char v145; // al
  unsigned int v146; // edi
  char v147; // cl
  char v148; // al
  bool v149; // cf
  char v151; // [esp-4h] [ebp-90h]
  unsigned int v152; // [esp+Ch] [ebp-80h]
  int v153; // [esp+Ch] [ebp-80h]
  unsigned int v154; // [esp+10h] [ebp-7Ch]
  int v155; // [esp+10h] [ebp-7Ch]
  int v156; // [esp+14h] [ebp-78h]
  int v157; // [esp+14h] [ebp-78h]
  int v158; // [esp+18h] [ebp-74h]
  int v159; // [esp+18h] [ebp-74h]
  unsigned int v160; // [esp+1Ch] [ebp-70h]
  unsigned int v161; // [esp+20h] [ebp-6Ch]
  unsigned int v162; // [esp+24h] [ebp-68h]
  int v163; // [esp+28h] [ebp-64h]
  unsigned int v164; // [esp+30h] [ebp-5Ch]
  int v165; // [esp+30h] [ebp-5Ch]
  int v166; // [esp+34h] [ebp-58h] BYREF
  int v167; // [esp+38h] [ebp-54h]
  int v168; // [esp+3Ch] [ebp-50h]
  int v169; // [esp+44h] [ebp-48h] BYREF
  int v170; // [esp+48h] [ebp-44h]
  int v171; // [esp+4Ch] [ebp-40h]
  int v172; // [esp+54h] [ebp-38h] BYREF
  int v173; // [esp+58h] [ebp-34h]
  int v174; // [esp+5Ch] [ebp-30h]
  int v175; // [esp+64h] [ebp-28h] BYREF
  int v176; // [esp+68h] [ebp-24h]
  int v177; // [esp+6Ch] [ebp-20h]
  _BYTE v178[24]; // [esp+74h] [ebp-18h] BYREF

  v152 = 0;
  if ( a3 > 0x20 )
  {
    if ( a3 > 0x40 )
    {
      if ( a3 > 0x80 )
      {
        if ( a3 <= 0x100 )
          v152 = 8;
      }
      else
      {
        v152 = 7;
      }
    }
    else
    {
      v152 = 6;
    }
  }
  else
  {
    v152 = 5;
  }
  v3 = *(_DWORD *)(a1 + 4);
  v160 = v3;
  v158 = *(_DWORD *)(a1 + 8);
  v4 = 0x80000000;
  do
  {
    v5 = *(_BYTE *)(a2 + 25);
    ++*(_BYTE *)(a2 + 24);
    v6 = (2 * v5) | ((v4 & v3) != 0);
    v7 = *(_BYTE *)(a2 + 24) == 8;
    *(_BYTE *)(a2 + 25) = v6;
    if ( v7 )
    {
      *(_BYTE *)(a2 + 24) = 0;
      sub_10014C40(v6);
    }
    v4 >>= 1;
  }
  while ( v4 );
  sub_10014950(&v175);
  sub_10014950(&v172);
  sub_10014950(&v169);
  sub_10014950(&v166);
  v154 = 0;
  if ( v3 )
  {
    v161 = a3 * a3;
    do
    {
      v8 = *(_DWORD *)(v158 + 4 * v154) / v161;
      v163 = v8;
      v9 = *(_DWORD *)(v158 + 4 * v154) % v161 / a3;
      v10 = *(_DWORD *)(v158 + 4 * v154) % v161 % a3;
      v164 = v9;
      v162 = v10;
      if ( v173 == v172 )
        sub_100149B0(1);
      *(_DWORD *)(v174 + 4 * v173++) = v10;
      if ( v170 == v169 )
        sub_100149B0(1);
      *(_DWORD *)(v171 + 4 * v170++) = v9;
      if ( v167 == v166 )
        sub_100149B0(1);
      *(_DWORD *)(v168 + 4 * v167++) = v8;
      v11 = 0;
      v156 = 0;
      if ( v152 )
      {
        v12 = 1;
        while ( 1 )
        {
          v13 = (v164 & (1 << v11)) >> v11;
          v14 = ((v8 & (unsigned int)(1 << v11)) >> v11 << (v12 - 1)) | ((v10 & (1 << v11)) >> v11 << (v12 + 1));
          ++v11;
          v15 = v13 << v12;
          v12 += 3;
          v156 |= v15 | v14;
          if ( v11 >= v152 )
            break;
          v10 = v162;
          v8 = v163;
        }
      }
      if ( v176 == v175 )
        sub_100149B0(1);
      *(_DWORD *)(v177 + 4 * v176++) = v156;
      ++v154;
    }
    while ( v154 < v160 );
  }
  sub_10015980(v178);
  v165 = *(_DWORD *)(sub_10015A80(v177, v160, 0) + 4);
  v159 = 0;
  if ( v160 )
  {
    v16 = dword_10056388;
    v17 = dword_1005638C;
    v18 = dword_10056390;
    v19 = v152;
    do
    {
      v20 = *(_DWORD *)(v165 + 4 * v159);
      v153 = *(_DWORD *)(v174 + 4 * v20);
      v155 = *(_DWORD *)(v171 + 4 * v20);
      v21 = v153 - v16;
      v157 = *(_DWORD *)(v168 + 4 * v20);
      v22 = v155 - v17;
      v23 = v157 - v18;
      switch ( v21 )
      {
        case -1:
          if ( v22 )
          {
            if ( v22 == -1 )
            {
              switch ( v23 )
              {
                case 0:
                  v40 = 16;
                  do
                  {
                    v41 = *(_BYTE *)(a2 + 25);
                    ++*(_BYTE *)(a2 + 24);
                    v42 = (2 * v41) | ((v40 & 6) != 0);
                    v7 = *(_BYTE *)(a2 + 24) == 8;
                    *(_BYTE *)(a2 + 25) = v42;
                    if ( v7 )
                    {
                      *(_BYTE *)(a2 + 24) = 0;
                      sub_10014C40(v42);
                    }
                    v40 >>= 1;
                  }
                  while ( v40 );
                  goto LABEL_279;
                case -1:
                  v76 = 16;
                  do
                  {
                    v77 = *(_BYTE *)(a2 + 25);
                    ++*(_BYTE *)(a2 + 24);
                    v78 = (2 * v77) | ((v76 & 0x12) != 0);
                    v7 = *(_BYTE *)(a2 + 24) == 8;
                    *(_BYTE *)(a2 + 25) = v78;
                    if ( v7 )
                    {
                      *(_BYTE *)(a2 + 24) = 0;
                      sub_10014C40(v78);
                    }
                    v76 >>= 1;
                  }
                  while ( v76 );
                  goto LABEL_279;
                case 1:
                  v82 = 16;
                  do
                  {
                    v83 = *(_BYTE *)(a2 + 25);
                    ++*(_BYTE *)(a2 + 24);
                    v84 = (2 * v83) | ((v82 & 0x14) != 0);
                    v7 = *(_BYTE *)(a2 + 24) == 8;
                    *(_BYTE *)(a2 + 25) = v84;
                    if ( v7 )
                    {
                      *(_BYTE *)(a2 + 24) = 0;
                      sub_10014C40(v84);
                    }
                    v82 >>= 1;
                  }
                  while ( v82 );
                  goto LABEL_279;
              }
LABEL_234:
              if ( !v23 )
              {
                v118 = 16;
                do
                {
                  v119 = *(_BYTE *)(a2 + 25);
                  ++*(_BYTE *)(a2 + 24);
                  v120 = (2 * v119) | ((v118 & 0x1D) != 0);
                  v7 = *(_BYTE *)(a2 + 24) == 8;
                  *(_BYTE *)(a2 + 25) = v120;
                  if ( v7 )
                  {
                    *(_BYTE *)(a2 + 24) = 0;
                    sub_10014C40(v120);
                  }
                  v118 >>= 1;
                }
                while ( v118 );
                for ( i = 1 << (v19 - 1); i; i >>= 1 )
                {
                  v122 = *(_BYTE *)(a2 + 25);
                  ++*(_BYTE *)(a2 + 24);
                  v123 = (2 * v122) | ((i & v153) != 0);
                  v7 = *(_BYTE *)(a2 + 24) == 8;
                  *(_BYTE *)(a2 + 25) = v123;
                  if ( v7 )
                  {
                    *(_BYTE *)(a2 + 24) = 0;
                    sub_10014C40(v123);
                  }
                }
                for ( j = 1 << (v19 - 1); j; j >>= 1 )
                {
                  v125 = *(_BYTE *)(a2 + 25);
                  ++*(_BYTE *)(a2 + 24);
                  v126 = (2 * v125) | ((j & v155) != 0);
                  v7 = *(_BYTE *)(a2 + 24) == 8;
                  *(_BYTE *)(a2 + 25) = v126;
                  if ( v7 )
                  {
                    *(_BYTE *)(a2 + 24) = 0;
                    sub_10014C40(v126);
                  }
                }
                goto LABEL_279;
              }
              goto LABEL_248;
            }
            if ( v22 == 1 )
            {
              switch ( v23 )
              {
                case 0:
                  v46 = 16;
                  do
                  {
                    v47 = *(_BYTE *)(a2 + 25);
                    ++*(_BYTE *)(a2 + 24);
                    v48 = (2 * v47) | ((v46 & 8) != 0);
                    v7 = *(_BYTE *)(a2 + 24) == 8;
                    *(_BYTE *)(a2 + 25) = v48;
                    if ( v7 )
                    {
                      *(_BYTE *)(a2 + 24) = 0;
                      sub_10014C40(v48);
                    }
                    v46 >>= 1;
                  }
                  while ( v46 );
                  goto LABEL_279;
                case 1:
                  v91 = 16;
                  do
                  {
                    v92 = *(_BYTE *)(a2 + 25);
                    ++*(_BYTE *)(a2 + 24);
                    v93 = (2 * v92) | ((v91 & 0x17) != 0);
                    v7 = *(_BYTE *)(a2 + 24) == 8;
                    *(_BYTE *)(a2 + 25) = v93;
                    if ( v7 )
                    {
                      *(_BYTE *)(a2 + 24) = 0;
                      sub_10014C40(v93);
                    }
                    v91 >>= 1;
                  }
                  while ( v91 );
                  goto LABEL_279;
                case -1:
                  v97 = 16;
                  do
                  {
                    v98 = *(_BYTE *)(a2 + 25);
                    ++*(_BYTE *)(a2 + 24);
                    v99 = (2 * v98) | ((v97 & 0x19) != 0);
                    v7 = *(_BYTE *)(a2 + 24) == 8;
                    *(_BYTE *)(a2 + 25) = v99;
                    if ( v7 )
                    {
                      *(_BYTE *)(a2 + 24) = 0;
                      sub_10014C40(v99);
                    }
                    v97 >>= 1;
                  }
                  while ( v97 );
                  goto LABEL_279;
              }
              goto LABEL_234;
            }
LABEL_200:
            if ( v22 )
              goto LABEL_233;
            break;
          }
          switch ( v23 )
          {
            case 0:
              v24 = 16;
              do
              {
                *(_BYTE *)(a2 + 25) *= 2;
                if ( ++*(_BYTE *)(a2 + 24) == 8 )
                {
                  v151 = *(_BYTE *)(a2 + 25);
                  *(_BYTE *)(a2 + 24) = 0;
                  sub_10014C40(v151);
                }
                v24 >>= 1;
              }
              while ( v24 );
              goto LABEL_279;
            case -1:
              v64 = 16;
              do
              {
                v65 = *(_BYTE *)(a2 + 25);
                ++*(_BYTE *)(a2 + 24);
                v66 = (2 * v65) | ((v64 & 0xE) != 0);
                v7 = *(_BYTE *)(a2 + 24) == 8;
                *(_BYTE *)(a2 + 25) = v66;
                if ( v7 )
                {
                  *(_BYTE *)(a2 + 24) = 0;
                  sub_10014C40(v66);
                }
                v64 >>= 1;
              }
              while ( v64 );
              goto LABEL_279;
            case 1:
              v70 = 16;
              do
              {
                v71 = *(_BYTE *)(a2 + 25);
                ++*(_BYTE *)(a2 + 24);
                v72 = (2 * v71) | ((v70 & 0x10) != 0);
                v7 = *(_BYTE *)(a2 + 24) == 8;
                *(_BYTE *)(a2 + 25) = v72;
                if ( v7 )
                {
                  *(_BYTE *)(a2 + 24) = 0;
                  sub_10014C40(v72);
                }
                v70 >>= 1;
              }
              while ( v70 );
              goto LABEL_279;
          }
          break;
        case 1:
          if ( v22 )
          {
            if ( v22 == 1 )
            {
              switch ( v23 )
              {
                case 0:
                  v43 = 16;
                  do
                  {
                    v44 = *(_BYTE *)(a2 + 25);
                    ++*(_BYTE *)(a2 + 24);
                    v45 = (2 * v44) | ((v43 & 7) != 0);
                    v7 = *(_BYTE *)(a2 + 24) == 8;
                    *(_BYTE *)(a2 + 25) = v45;
                    if ( v7 )
                    {
                      *(_BYTE *)(a2 + 24) = 0;
                      sub_10014C40(v45);
                    }
                    v43 >>= 1;
                  }
                  while ( v43 );
                  goto LABEL_279;
                case 1:
                  v79 = 16;
                  do
                  {
                    v80 = *(_BYTE *)(a2 + 25);
                    ++*(_BYTE *)(a2 + 24);
                    v81 = (2 * v80) | ((v79 & 0x13) != 0);
                    v7 = *(_BYTE *)(a2 + 24) == 8;
                    *(_BYTE *)(a2 + 25) = v81;
                    if ( v7 )
                    {
                      *(_BYTE *)(a2 + 24) = 0;
                      sub_10014C40(v81);
                    }
                    v79 >>= 1;
                  }
                  while ( v79 );
                  goto LABEL_279;
                case -1:
                  v85 = 16;
                  do
                  {
                    v86 = *(_BYTE *)(a2 + 25);
                    ++*(_BYTE *)(a2 + 24);
                    v87 = (2 * v86) | ((v85 & 0x15) != 0);
                    v7 = *(_BYTE *)(a2 + 24) == 8;
                    *(_BYTE *)(a2 + 25) = v87;
                    if ( v7 )
                    {
                      *(_BYTE *)(a2 + 24) = 0;
                      sub_10014C40(v87);
                    }
                    v85 >>= 1;
                  }
                  while ( v85 );
                  goto LABEL_279;
              }
              goto LABEL_234;
            }
            if ( v22 == -1 )
            {
              switch ( v23 )
              {
                case 0:
                  v49 = 16;
                  do
                  {
                    v50 = *(_BYTE *)(a2 + 25);
                    ++*(_BYTE *)(a2 + 24);
                    v51 = (2 * v50) | ((v49 & 9) != 0);
                    v7 = *(_BYTE *)(a2 + 24) == 8;
                    *(_BYTE *)(a2 + 25) = v51;
                    if ( v7 )
                    {
                      *(_BYTE *)(a2 + 24) = 0;
                      sub_10014C40(v51);
                    }
                    v49 >>= 1;
                  }
                  while ( v49 );
                  goto LABEL_279;
                case -1:
                  v88 = 16;
                  do
                  {
                    v89 = *(_BYTE *)(a2 + 25);
                    ++*(_BYTE *)(a2 + 24);
                    v90 = (2 * v89) | ((v88 & 0x16) != 0);
                    v7 = *(_BYTE *)(a2 + 24) == 8;
                    *(_BYTE *)(a2 + 25) = v90;
                    if ( v7 )
                    {
                      *(_BYTE *)(a2 + 24) = 0;
                      sub_10014C40(v90);
                    }
                    v88 >>= 1;
                  }
                  while ( v88 );
                  goto LABEL_279;
                case 1:
                  v94 = 16;
                  do
                  {
                    v95 = *(_BYTE *)(a2 + 25);
                    ++*(_BYTE *)(a2 + 24);
                    v96 = (2 * v95) | ((v94 & 0x18) != 0);
                    v7 = *(_BYTE *)(a2 + 24) == 8;
                    *(_BYTE *)(a2 + 25) = v96;
                    if ( v7 )
                    {
                      *(_BYTE *)(a2 + 24) = 0;
                      sub_10014C40(v96);
                    }
                    v94 >>= 1;
                  }
                  while ( v94 );
                  goto LABEL_279;
              }
              goto LABEL_234;
            }
            goto LABEL_200;
          }
          switch ( v23 )
          {
            case 0:
              v25 = 16;
              do
              {
                v26 = *(_BYTE *)(a2 + 25);
                ++*(_BYTE *)(a2 + 24);
                v27 = v25 & 1 | (2 * v26);
                v7 = *(_BYTE *)(a2 + 24) == 8;
                *(_BYTE *)(a2 + 25) = v27;
                if ( v7 )
                {
                  *(_BYTE *)(a2 + 24) = 0;
                  sub_10014C40(v27);
                }
                v25 >>= 1;
              }
              while ( v25 );
              goto LABEL_279;
            case 1:
              v67 = 16;
              do
              {
                v68 = *(_BYTE *)(a2 + 25);
                ++*(_BYTE *)(a2 + 24);
                v69 = (2 * v68) | ((v67 & 0xF) != 0);
                v7 = *(_BYTE *)(a2 + 24) == 8;
                *(_BYTE *)(a2 + 25) = v69;
                if ( v7 )
                {
                  *(_BYTE *)(a2 + 24) = 0;
                  sub_10014C40(v69);
                }
                v67 >>= 1;
              }
              while ( v67 );
              goto LABEL_279;
            case -1:
              v73 = 16;
              do
              {
                v74 = *(_BYTE *)(a2 + 25);
                ++*(_BYTE *)(a2 + 24);
                v75 = (2 * v74) | ((v73 & 0x11) != 0);
                v7 = *(_BYTE *)(a2 + 24) == 8;
                *(_BYTE *)(a2 + 25) = v75;
                if ( v7 )
                {
                  *(_BYTE *)(a2 + 24) = 0;
                  sub_10014C40(v75);
                }
                v73 >>= 1;
              }
              while ( v73 );
              goto LABEL_279;
          }
          break;
        case 0:
          if ( v22 == -1 )
          {
            switch ( v23 )
            {
              case 0:
                v28 = 16;
                do
                {
                  v29 = *(_BYTE *)(a2 + 25);
                  ++*(_BYTE *)(a2 + 24);
                  v28 >>= 1;
                  v30 = v28 & 1 | (2 * v29);
                  v7 = *(_BYTE *)(a2 + 24) == 8;
                  *(_BYTE *)(a2 + 25) = v30;
                  if ( v7 )
                  {
                    *(_BYTE *)(a2 + 24) = 0;
                    sub_10014C40(v30);
                  }
                }
                while ( v28 );
                goto LABEL_279;
              case -1:
                v52 = 16;
                do
                {
                  v53 = *(_BYTE *)(a2 + 25);
                  ++*(_BYTE *)(a2 + 24);
                  v54 = (2 * v53) | ((v52 & 0xA) != 0);
                  v7 = *(_BYTE *)(a2 + 24) == 8;
                  *(_BYTE *)(a2 + 25) = v54;
                  if ( v7 )
                  {
                    *(_BYTE *)(a2 + 24) = 0;
                    sub_10014C40(v54);
                  }
                  v52 >>= 1;
                }
                while ( v52 );
                goto LABEL_279;
              case 1:
                v58 = 16;
                do
                {
                  v59 = *(_BYTE *)(a2 + 25);
                  ++*(_BYTE *)(a2 + 24);
                  v60 = (2 * v59) | ((v58 & 0xC) != 0);
                  v7 = *(_BYTE *)(a2 + 24) == 8;
                  *(_BYTE *)(a2 + 25) = v60;
                  if ( v7 )
                  {
                    *(_BYTE *)(a2 + 24) = 0;
                    sub_10014C40(v60);
                  }
                  v58 >>= 1;
                }
                while ( v58 );
                goto LABEL_279;
            }
            goto LABEL_212;
          }
          if ( v22 == 1 )
          {
            switch ( v23 )
            {
              case 0:
                v31 = 16;
                do
                {
                  v32 = *(_BYTE *)(a2 + 25);
                  ++*(_BYTE *)(a2 + 24);
                  v33 = (2 * v32) | ((v31 & 3) != 0);
                  v7 = *(_BYTE *)(a2 + 24) == 8;
                  *(_BYTE *)(a2 + 25) = v33;
                  if ( v7 )
                  {
                    *(_BYTE *)(a2 + 24) = 0;
                    sub_10014C40(v33);
                  }
                  v31 >>= 1;
                }
                while ( v31 );
                goto LABEL_279;
              case 1:
                v55 = 16;
                do
                {
                  v56 = *(_BYTE *)(a2 + 25);
                  ++*(_BYTE *)(a2 + 24);
                  v57 = (2 * v56) | ((v55 & 0xB) != 0);
                  v7 = *(_BYTE *)(a2 + 24) == 8;
                  *(_BYTE *)(a2 + 25) = v57;
                  if ( v7 )
                  {
                    *(_BYTE *)(a2 + 24) = 0;
                    sub_10014C40(v57);
                  }
                  v55 >>= 1;
                }
                while ( v55 );
                goto LABEL_279;
              case -1:
                v61 = 16;
                do
                {
                  v62 = *(_BYTE *)(a2 + 25);
                  ++*(_BYTE *)(a2 + 24);
                  v63 = (2 * v62) | ((v61 & 0xD) != 0);
                  v7 = *(_BYTE *)(a2 + 24) == 8;
                  *(_BYTE *)(a2 + 25) = v63;
                  if ( v7 )
                  {
                    *(_BYTE *)(a2 + 24) = 0;
                    sub_10014C40(v63);
                  }
                  v61 >>= 1;
                }
                while ( v61 );
                goto LABEL_279;
            }
            goto LABEL_212;
          }
          if ( v22 )
          {
LABEL_212:
            if ( !v23 )
            {
              v106 = 16;
              do
              {
                v107 = *(_BYTE *)(a2 + 25);
                ++*(_BYTE *)(a2 + 24);
                v108 = (2 * v107) | ((v106 & 0x1B) != 0);
                v7 = *(_BYTE *)(a2 + 24) == 8;
                *(_BYTE *)(a2 + 25) = v108;
                if ( v7 )
                {
                  *(_BYTE *)(a2 + 24) = 0;
                  sub_10014C40(v108);
                }
                v106 >>= 1;
              }
              while ( v106 );
              for ( k = 1 << (v19 - 1); k; k >>= 1 )
              {
                v110 = *(_BYTE *)(a2 + 25);
                ++*(_BYTE *)(a2 + 24);
                v111 = (2 * v110) | ((k & v155) != 0);
                v7 = *(_BYTE *)(a2 + 24) == 8;
                *(_BYTE *)(a2 + 25) = v111;
                if ( v7 )
                {
                  *(_BYTE *)(a2 + 24) = 0;
                  sub_10014C40(v111);
                }
              }
              goto LABEL_279;
            }
          }
          else
          {
            if ( v23 == -1 )
            {
              v34 = 16;
              do
              {
                v35 = *(_BYTE *)(a2 + 25);
                ++*(_BYTE *)(a2 + 24);
                v36 = (2 * v35) | ((v34 & 4) != 0);
                v7 = *(_BYTE *)(a2 + 24) == 8;
                *(_BYTE *)(a2 + 25) = v36;
                if ( v7 )
                {
                  *(_BYTE *)(a2 + 24) = 0;
                  sub_10014C40(v36);
                }
                v34 >>= 1;
              }
              while ( v34 );
              goto LABEL_279;
            }
            if ( v23 == 1 )
            {
              v37 = 16;
              do
              {
                v38 = *(_BYTE *)(a2 + 25);
                ++*(_BYTE *)(a2 + 24);
                v39 = (2 * v38) | ((v37 & 5) != 0);
                v7 = *(_BYTE *)(a2 + 24) == 8;
                *(_BYTE *)(a2 + 25) = v39;
                if ( v7 )
                {
                  *(_BYTE *)(a2 + 24) = 0;
                  sub_10014C40(v39);
                }
                v37 >>= 1;
              }
              while ( v37 );
              goto LABEL_279;
            }
            if ( v23 )
            {
              v112 = 16;
              do
              {
                v113 = *(_BYTE *)(a2 + 25);
                ++*(_BYTE *)(a2 + 24);
                v114 = (2 * v113) | ((v112 & 0x1C) != 0);
                v7 = *(_BYTE *)(a2 + 24) == 8;
                *(_BYTE *)(a2 + 25) = v114;
                if ( v7 )
                {
                  *(_BYTE *)(a2 + 24) = 0;
                  sub_10014C40(v114);
                }
                v112 >>= 1;
              }
              while ( v112 );
              for ( m = 1 << (v19 - 1); m; m >>= 1 )
              {
                v116 = *(_BYTE *)(a2 + 25);
                ++*(_BYTE *)(a2 + 24);
                v117 = (2 * v116) | ((m & v157) != 0);
                v7 = *(_BYTE *)(a2 + 24) == 8;
                *(_BYTE *)(a2 + 25) = v117;
                if ( v7 )
                {
                  *(_BYTE *)(a2 + 24) = 0;
                  sub_10014C40(v117);
                }
              }
              goto LABEL_279;
            }
          }
LABEL_263:
          v136 = 16;
          do
          {
            v137 = *(_BYTE *)(a2 + 25);
            ++*(_BYTE *)(a2 + 24);
            v138 = (2 * v137) | ((v136 & 0x1F) != 0);
            v7 = *(_BYTE *)(a2 + 24) == 8;
            *(_BYTE *)(a2 + 25) = v138;
            if ( v7 )
            {
              *(_BYTE *)(a2 + 24) = 0;
              sub_10014C40(v138);
            }
            v136 >>= 1;
          }
          while ( v136 );
          v139 = 1 << (v19 - 1);
          v140 = v139;
          if ( v139 )
          {
            do
            {
              v141 = *(_BYTE *)(a2 + 25);
              ++*(_BYTE *)(a2 + 24);
              v142 = (2 * v141) | ((v140 & v153) != 0);
              v7 = *(_BYTE *)(a2 + 24) == 8;
              *(_BYTE *)(a2 + 25) = v142;
              if ( v7 )
              {
                *(_BYTE *)(a2 + 24) = 0;
                sub_10014C40(v142);
              }
              v140 >>= 1;
            }
            while ( v140 );
          }
          v143 = 1 << (v19 - 1);
          if ( v139 )
          {
            do
            {
              v144 = *(_BYTE *)(a2 + 25);
              ++*(_BYTE *)(a2 + 24);
              v145 = (2 * v144) | ((v143 & v155) != 0);
              v7 = *(_BYTE *)(a2 + 24) == 8;
              *(_BYTE *)(a2 + 25) = v145;
              if ( v7 )
              {
                *(_BYTE *)(a2 + 24) = 0;
                sub_10014C40(v145);
              }
              v143 >>= 1;
            }
            while ( v143 );
          }
          v146 = 1 << (v19 - 1);
          if ( v139 )
          {
            do
            {
              v147 = *(_BYTE *)(a2 + 25);
              ++*(_BYTE *)(a2 + 24);
              v148 = (2 * v147) | ((v146 & v157) != 0);
              v7 = *(_BYTE *)(a2 + 24) == 8;
              *(_BYTE *)(a2 + 25) = v148;
              if ( v7 )
              {
                *(_BYTE *)(a2 + 24) = 0;
                sub_10014C40(v148);
              }
              v146 >>= 1;
            }
            while ( v146 );
          }
          goto LABEL_279;
        default:
          goto LABEL_200;
      }
      if ( !v23 )
      {
        v100 = 16;
        do
        {
          v101 = *(_BYTE *)(a2 + 25);
          ++*(_BYTE *)(a2 + 24);
          v102 = (2 * v101) | ((v100 & 0x1A) != 0);
          v7 = *(_BYTE *)(a2 + 24) == 8;
          *(_BYTE *)(a2 + 25) = v102;
          if ( v7 )
          {
            *(_BYTE *)(a2 + 24) = 0;
            sub_10014C40(v102);
          }
          v100 >>= 1;
        }
        while ( v100 );
        for ( n = 1 << (v19 - 1); n; n >>= 1 )
        {
          v104 = *(_BYTE *)(a2 + 25);
          ++*(_BYTE *)(a2 + 24);
          v105 = (2 * v104) | ((n & v153) != 0);
          v7 = *(_BYTE *)(a2 + 24) == 8;
          *(_BYTE *)(a2 + 25) = v105;
          if ( v7 )
          {
            *(_BYTE *)(a2 + 24) = 0;
            sub_10014C40(v105);
          }
        }
        goto LABEL_279;
      }
LABEL_233:
      if ( v22 )
        goto LABEL_234;
LABEL_248:
      if ( v22 || !v23 )
        goto LABEL_263;
      v127 = 16;
      do
      {
        v128 = *(_BYTE *)(a2 + 25);
        ++*(_BYTE *)(a2 + 24);
        v129 = (2 * v128) | ((v127 & 0x1E) != 0);
        v7 = *(_BYTE *)(a2 + 24) == 8;
        *(_BYTE *)(a2 + 25) = v129;
        if ( v7 )
        {
          *(_BYTE *)(a2 + 24) = 0;
          sub_10014C40(v129);
        }
        v127 >>= 1;
      }
      while ( v127 );
      for ( ii = 1 << (v19 - 1); ii; ii >>= 1 )
      {
        v131 = *(_BYTE *)(a2 + 25);
        ++*(_BYTE *)(a2 + 24);
        v132 = (2 * v131) | ((ii & v153) != 0);
        v7 = *(_BYTE *)(a2 + 24) == 8;
        *(_BYTE *)(a2 + 25) = v132;
        if ( v7 )
        {
          *(_BYTE *)(a2 + 24) = 0;
          sub_10014C40(v132);
        }
      }
      for ( jj = 1 << (v19 - 1); jj; jj >>= 1 )
      {
        v134 = *(_BYTE *)(a2 + 25);
        ++*(_BYTE *)(a2 + 24);
        v135 = (2 * v134) | ((jj & v157) != 0);
        v7 = *(_BYTE *)(a2 + 24) == 8;
        *(_BYTE *)(a2 + 25) = v135;
        if ( v7 )
        {
          *(_BYTE *)(a2 + 24) = 0;
          sub_10014C40(v135);
        }
      }
LABEL_279:
      v16 = v153;
      v17 = v155;
      v18 = v157;
      v149 = v159 + 1 < v160;
      dword_10056388 = v153;
      dword_1005638C = v155;
      dword_10056390 = v157;
      ++v159;
    }
    while ( v149 );
  }
  sub_100159A0(v178);
  sub_10014B50(&v166);
  sub_10014B50(&v169);
  sub_10014B50(&v172);
  return sub_10014B50(&v175);
}
