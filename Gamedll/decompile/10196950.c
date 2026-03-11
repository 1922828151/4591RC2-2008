/*
 * func-name: ?shoot@Weapon@GameClient@@IAEXABVVector@@0H@Z_0
 * func-address: 0x10196950
 * callers: 0x10002f4f
 * callees: 0x100029cd, 0x1000bf05, 0x10010519, 0x10010f8c, 0x10014669, 0x10014ace, 0x10014c86, 0x100157a8, 0x10018aca, 0x10018e71, 0x1001a0f5, 0x1001a5d2, 0x102c0ed0, 0x102c1270, 0x102c1be0, 0x102c2120, 0x102c23d0, 0x102c26d0, 0x102c9d50, 0x102c9ea2
 */

void __thiscall GameClient::Weapon::shoot(
        GameClient::Weapon *this,
        const struct Vector *a2,
        const struct Vector *a3,
        unsigned int a4)
{
  bool v5; // zf
  float *v6; // edi
  float v7; // ecx
  float v8; // edx
  int v9; // eax
  float v10; // ecx
  int v11; // edx
  int v12; // eax
  unsigned __int8 (__thiscall **v13)(_DWORD, int, float *, _DWORD); // esi
  int v14; // eax
  int v15; // eax
  unsigned __int8 (__thiscall **v16)(_DWORD, int, float *, _DWORD); // edi
  int v17; // eax
  int v18; // eax
  double v19; // st7
  const void *v20; // esi
  double v21; // st7
  float v22; // edi
  int v23; // ebx
  int v24; // eax
  int v25; // eax
  int v26; // esi
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  unsigned int v30; // ebx
  int v31; // eax
  bool v32; // cc
  int v33; // esi
  int v34; // eax
  int v35; // esi
  int v36; // eax
  int v37; // ecx
  int v38; // esi
  int v39; // eax
  int v40; // ecx
  int v41; // edx
  int v42; // eax
  int v43; // ebx
  int v44; // edi
  int v45; // ecx
  int v46; // esi
  int v47; // edi
  int v48; // eax
  int v49; // ecx
  int v50; // eax
  float *v51; // eax
  double v52; // st7
  int v53; // edi
  double v54; // st7
  int v55; // eax
  int v56; // eax
  int v57; // esi
  int v58; // eax
  int v59; // eax
  unsigned int v60; // [esp-8h] [ebp-204h]
  unsigned int v61; // [esp-8h] [ebp-204h]
  struct Vector *v62; // [esp-4h] [ebp-200h]
  struct Vector *v63; // [esp-4h] [ebp-200h]
  int v64; // [esp+4h] [ebp-1F8h]
  int v65; // [esp+8h] [ebp-1F4h]
  int v66; // [esp+8h] [ebp-1F4h]
  float v67; // [esp+10h] [ebp-1ECh]
  int v68; // [esp+10h] [ebp-1ECh]
  float v69; // [esp+10h] [ebp-1ECh]
  int v70; // [esp+14h] [ebp-1E8h]
  int v71; // [esp+14h] [ebp-1E8h]
  int v72; // [esp+2Ch] [ebp-1D0h] BYREF
  int v73; // [esp+30h] [ebp-1CCh] BYREF
  float v74; // [esp+34h] [ebp-1C8h]
  float v75; // [esp+38h] [ebp-1C4h]
  int v76; // [esp+3Ch] [ebp-1C0h] BYREF
  float v77; // [esp+40h] [ebp-1BCh]
  float v78; // [esp+44h] [ebp-1B8h]
  float v79; // [esp+48h] [ebp-1B4h]
  float v80; // [esp+4Ch] [ebp-1B0h] BYREF
  float v81; // [esp+50h] [ebp-1ACh]
  float v82; // [esp+54h] [ebp-1A8h]
  int v83; // [esp+58h] [ebp-1A4h] BYREF
  float v84; // [esp+5Ch] [ebp-1A0h]
  float v85; // [esp+60h] [ebp-19Ch]
  int v86; // [esp+64h] [ebp-198h] BYREF
  void *v87; // [esp+68h] [ebp-194h]
  float v88; // [esp+6Ch] [ebp-190h]
  float v89; // [esp+70h] [ebp-18Ch]
  float v90; // [esp+74h] [ebp-188h]
  int v91; // [esp+78h] [ebp-184h]
  float v92; // [esp+7Ch] [ebp-180h]
  int v93; // [esp+80h] [ebp-17Ch] BYREF
  float v94; // [esp+84h] [ebp-178h]
  int v95; // [esp+88h] [ebp-174h]
  int v96; // [esp+8Ch] [ebp-170h] BYREF
  float v97; // [esp+90h] [ebp-16Ch]
  int v98; // [esp+94h] [ebp-168h]
  int v99; // [esp+98h] [ebp-164h]
  float v100; // [esp+9Ch] [ebp-160h]
  int v101; // [esp+A0h] [ebp-15Ch]
  float v102[16]; // [esp+A4h] [ebp-158h] BYREF
  float v103[16]; // [esp+E4h] [ebp-118h] BYREF
  float v104[16]; // [esp+124h] [ebp-D8h] BYREF
  int v105[16]; // [esp+164h] [ebp-98h] BYREF
  _BYTE v106[12]; // [esp+1A4h] [ebp-58h] BYREF
  _BYTE v107[64]; // [esp+1B0h] [ebp-4Ch] BYREF
  int v108; // [esp+1F8h] [ebp-4h]

  v5 = *((_DWORD *)this + 45) == 0;
  v6 = (float *)a2;
  v7 = *((float *)a2 + 1);
  v8 = *((float *)a2 + 2);
  v80 = *(float *)a2;
  v9 = *(_DWORD *)a3;
  v81 = v7;
  v10 = *((float *)a3 + 1);
  v82 = v8;
  v11 = *((_DWORD *)a3 + 2);
  v93 = v9;
  v94 = v10;
  v95 = v11;
  if ( v5 || *(_BYTE *)(160 * *((_DWORD *)this + 185) + *((_DWORD *)this + 2) + 2121) )
    goto LABEL_16;
  sub_10014669(v102);
  v12 = *((_DWORD *)this + 37);
  if ( v12 && *(_BYTE *)(v12 + 700) && (*(_DWORD *)(v12 + 368) & 0x20) == 0 )
  {
    if ( a4 >= sub_10014C86() )
      goto LABEL_15;
    v13 = (unsigned __int8 (__thiscall **)(_DWORD, int, float *, _DWORD))(**((_DWORD **)this + 45) + 120);
    v14 = sub_100157A8(a4);
    if ( !(*v13)(*((_DWORD *)this + 45), v14, v102, 0) )
      goto LABEL_15;
    v80 = v102[12];
    v81 = v102[13];
    v82 = v102[14];
    sub_100157A8(a4);
    if ( !sub_1000BF05() )
      goto LABEL_15;
    goto LABEL_14;
  }
  v15 = *((_DWORD *)this + 70);
  if ( !v15 || a4 >= (*((_DWORD *)this + 71) - v15) / 148 )
    goto LABEL_16;
  v16 = (unsigned __int8 (__thiscall **)(_DWORD, int, float *, _DWORD))(**((_DWORD **)this + 45) + 120);
  v17 = sub_100157A8(a4);
  if ( (*v16)(*((_DWORD *)this + 45), v17, v102, 0) )
  {
    v80 = v102[12];
    v81 = v102[13];
    v82 = v102[14];
    sub_100157A8(a4);
    if ( sub_1000BF05() )
    {
LABEL_14:
      sub_1001A5D2(1);
      sub_10010519((int)v102, (int)&v80);
    }
  }
LABEL_15:
  v6 = (float *)a2;
LABEL_16:
  memset(v104, 0, sizeof(v104));
  sub_102C1270(1.0);
  v18 = *((_DWORD *)this + 185);
  v104[15] = 1.0;
  v19 = *(float *)a3;
  if ( *(_BYTE *)(160 * v18 + *((_DWORD *)this + 2) + 2122) )
  {
    *(float *)&v73 = v19 - v80;
    v74 = *((float *)a3 + 1) - v81;
    v75 = *((float *)a3 + 2) - v82;
    v76 = v73;
    v83 = v73;
    v77 = v74;
    v84 = v74;
    v78 = v75;
    v85 = v75;
    sub_100029CD();
    qmemcpy(v104, (const void *)sub_10018E71(v103, (int)&v83), sizeof(v104));
  }
  else
  {
    *(float *)&v73 = v19 - *v6;
    v74 = *((float *)a3 + 1) - v6[1];
    v75 = *((float *)a3 + 2) - v6[2];
    v76 = v73;
    v83 = v73;
    v77 = v74;
    v84 = v74;
    v78 = v75;
    v85 = v75;
    sub_100029CD();
    v20 = (const void *)sub_10018E71(v103, (int)&v83);
    v21 = *(float *)a3 - *(float *)a2;
    qmemcpy(v104, v20, sizeof(v104));
    *(float *)&v73 = v21;
    v74 = *((float *)a3 + 1) - *((float *)a2 + 1);
    v75 = *((float *)a3 + 2) - *((float *)a2 + 2);
    *(float *)&v73 = *(float *)&v73 + v80;
    v74 = v81 + v74;
    v75 = v82 + v75;
    v76 = v73;
    v93 = v73;
    v77 = v74;
    v94 = v74;
    v78 = v75;
    v95 = LODWORD(v75);
  }
  v22 = 0.0;
  if ( *(_DWORD *)(160 * *((_DWORD *)this + 185) + *((_DWORD *)this + 2) + 2140) )
  {
    *(float *)&v96 = 0.0;
    v97 = 0.0;
    *(float *)&v98 = 0.0;
    sub_10014669(v105);
    v29 = *((_DWORD *)this + 2);
    v30 = 0;
    v31 = 160 * *((_DWORD *)this + 185);
    v32 = *(_DWORD *)(v29 + v31 + 2140) <= 0;
    v75 = 0.0;
    if ( !v32 )
    {
      v74 = 0.0;
      while ( 1 )
      {
        v33 = v29 + v31 + 2148;
        v34 = *(_DWORD *)(v29 + v31 + 2152);
        if ( !v34 || v30 >= (*(_DWORD *)(v33 + 8) - v34) / 12 )
          _invalid_parameter_noinfo();
        v35 = LODWORD(v22) + *(_DWORD *)(v33 + 4);
        sub_102C23D0(v103);
        *(float *)&v76 = 0.0;
        v77 = 0.0;
        v78 = 0.0;
        sub_102C1BE0(v35, &v76);
        *(float *)&v73 = *(float *)&v76 + v80;
        v79 = v77 + v81;
        *(float *)&v72 = v78 + v82;
        v99 = v73;
        v96 = v73;
        v36 = *((_DWORD *)this + 185);
        v100 = v79;
        v101 = v72;
        v97 = v79;
        v37 = *((_DWORD *)this + 2);
        v38 = 160 * v36 + v37 + 2084;
        v98 = v72;
        v39 = *(_DWORD *)(160 * v36 + v37 + 2168);
        if ( !v39 || v30 >= (*(_DWORD *)(v38 + 88) - v39) / 12 )
          _invalid_parameter_noinfo();
        v40 = *((_DWORD *)this + 2);
        v41 = 160 * *((_DWORD *)this + 185);
        v42 = *(_DWORD *)(v41 + v40 + 2168);
        v43 = LODWORD(v22) + *(_DWORD *)(v38 + 84);
        v44 = v41 + v40 + 2084;
        if ( !v42 || LODWORD(v75) >= (*(_DWORD *)(v41 + v40 + 2172) - v42) / 12 )
          _invalid_parameter_noinfo();
        v45 = *((_DWORD *)this + 2);
        v46 = LODWORD(v74) + *(_DWORD *)(v44 + 84);
        v47 = 160 * *((_DWORD *)this + 185) + v45 + 2084;
        v48 = *(_DWORD *)(160 * *((_DWORD *)this + 185) + v45 + 2168);
        if ( !v48 || LODWORD(v75) >= (*(_DWORD *)(160 * *((_DWORD *)this + 185) + v45 + 2172) - v48) / 12 )
          _invalid_parameter_noinfo();
        v49 = *(_DWORD *)(v47 + 84);
        *(float *)&v72 = *(float *)(v43 + 8) * 3.141592741012573;
        v71 = v72;
        *(float *)&v72 = *(float *)(v46 + 4) * 3.141592741012573;
        v68 = v72;
        *(float *)&v72 = 3.141592741012573 * *(float *)(v49 + LODWORD(v74));
        sub_102C26D0(*(float *)&v72, *(float *)&v68, *(float *)&v71);
        memset(v102, 0, sizeof(v102));
        sub_102C1270(1.0);
        v102[15] = 1.0;
        sub_102C2120(v105, v104, v102);
        v50 = *((_DWORD *)this + 185);
        qmemcpy(v105, v102, sizeof(v105));
        if ( *(_BYTE *)(160 * v50 + *((_DWORD *)this + 2) + 2144) )
        {
          v72 = rand() % 100;
          *(float *)&v73 = (double)v72 * 0.009999999776482582 * *((float *)this + 230);
          if ( *(float *)&v73 < 0.0099999998 )
            *(float *)&v73 = 0.0099999998;
          v72 = rand() % 200 - 100;
          v79 = (float)v72;
          *(float *)&v72 = (float)(rand() % 200 - 100);
          v90 = v79;
          v91 = v72;
          v92 = 0.0;
          sub_100029CD();
          v90 = v90 * *(float *)&v73;
          *(float *)&v91 = *(float *)&v91 * *(float *)&v73;
          v92 = *(float *)&v73 * v92;
          memset(v103, 0, sizeof(v103));
          sub_102C1270(1.0);
          v103[15] = 1.0;
          sub_102C26D0(v90, *(float *)&v91, 0.0);
          qmemcpy(v105, (const void *)sub_10018ACA(v107, (int)v105), sizeof(v105));
        }
        *(float *)&v72 = (float)*(int *)(160 * *((_DWORD *)this + 185) + *((_DWORD *)this + 2) + 2196);
        v51 = (float *)sub_102C0ED0(v106);
        v52 = *(float *)&v72;
        v53 = -1;
        *(float *)&v72 = *(float *)&v72 * *v51;
        v79 = v51[1] * v52;
        v54 = v52 * v51[2];
        v87 = 0;
        v88 = 0.0;
        v89 = 0.0;
        *(float *)&v73 = v54;
        *(float *)&v72 = *(float *)&v72 + *(float *)&v96;
        v79 = v97 + v79;
        *(float *)&v73 = *(float *)&v98 + *(float *)&v73;
        v83 = v72;
        v93 = v72;
        v84 = v79;
        v94 = v79;
        v85 = *(float *)&v73;
        v95 = v73;
        *(float *)&v73 = NAN;
        v55 = *((_DWORD *)this + 37);
        v108 = 1;
        if ( v55 )
        {
          v72 = *(int *)(v55 + 12);
          sub_1001A0F5(&v86, (int)&v72);
          v73 = *(int *)(*((_DWORD *)this + 37) + 16);
        }
        v56 = *((_DWORD *)this + 67);
        if ( v56 )
        {
          v72 = *(int *)(v56 + 12);
          sub_1001A0F5(&v86, (int)&v72);
        }
        v57 = *((_DWORD *)this + 37);
        if ( v57 )
        {
          v58 = *(_DWORD *)(v57 + 308);
          if ( v58 )
          {
            if ( (*(_DWORD *)(v57 + 312) - v58) >> 2 )
              v53 = **(_DWORD **)(v57 + 308);
          }
        }
        v69 = *((float *)this + 227);
        v66 = *((_DWORD *)this + 1);
        v64 = v73;
        sub_10010F8C(*(_DWORD *)(160 * *((_DWORD *)this + 185) + *((_DWORD *)this + 2) + 2112), (int)&v96);
        sub_10014ACE(v61, v63, (struct Vector *)&v93, v64, v66, (int)&v86, v69, v53);
        v108 = -1;
        if ( v87 )
          operator delete(v87);
        v59 = *((_DWORD *)this + 185);
        v29 = *((_DWORD *)this + 2);
        LODWORD(v74) += 12;
        v31 = 160 * v59;
        v32 = LODWORD(v75) + 1 < *(_DWORD *)(v31 + v29 + 2140);
        v87 = 0;
        v88 = 0.0;
        v89 = 0.0;
        ++LODWORD(v75);
        if ( !v32 )
          break;
        v22 = v74;
        v30 = LODWORD(v75);
      }
    }
  }
  else
  {
    v23 = -1;
    v87 = 0;
    v88 = 0.0;
    v89 = 0.0;
    v24 = *((_DWORD *)this + 37);
    v108 = 0;
    if ( v24 )
    {
      v73 = *(int *)(v24 + 12);
      sub_1001A0F5(&v86, (int)&v73);
      v23 = *(_DWORD *)(*((_DWORD *)this + 37) + 16);
    }
    v25 = *((_DWORD *)this + 67);
    if ( v25 )
    {
      v73 = *(int *)(v25 + 12);
      sub_1001A0F5(&v86, (int)&v73);
    }
    v26 = *((_DWORD *)this + 37);
    v27 = -1;
    if ( v26 )
    {
      v28 = *(_DWORD *)(v26 + 308);
      if ( v28 )
      {
        if ( (*(_DWORD *)(v26 + 312) - v28) >> 2 )
          v27 = **(_DWORD **)(v26 + 308);
      }
    }
    v70 = v27;
    v67 = *((float *)this + 227);
    v65 = *((_DWORD *)this + 1);
    sub_10010F8C(*(_DWORD *)(160 * *((_DWORD *)this + 185) + *((_DWORD *)this + 2) + 2112), (int)&v80);
    sub_10014ACE(v60, v62, (struct Vector *)&v93, v23, v65, (int)&v86, v67, v70);
    if ( v87 )
      operator delete(v87);
  }
}
