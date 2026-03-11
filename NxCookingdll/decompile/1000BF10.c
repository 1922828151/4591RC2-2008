/*
 * func-name: sub_1000BF10
 * func-address: 0x1000bf10
 * callers: 0x10024d80, 0x10024f00
 * callees: 0x10006360, 0x100075d0, 0x10008400, 0x10008490, 0x10008530, 0x10008860, 0x10008fb0, 0x1000a460, 0x1000af30, 0x1000b780
 */

char __thiscall sub_1000BF10(int this, float *a2)
{
  char v3; // al
  bool v4; // cf
  int v5; // eax
  char v6; // cl
  float v7; // ecx
  _DWORD *v8; // esi
  unsigned int v9; // eax
  _DWORD *v10; // eax
  unsigned int v11; // ecx
  _DWORD *v12; // edx
  int v13; // ebp
  unsigned int v14; // ebx
  void *v15; // edi
  _DWORD *v16; // eax
  _DWORD *v17; // edx
  unsigned int j; // eax
  unsigned int v19; // ebx
  _DWORD *v20; // edx
  int v21; // ebp
  void *v22; // edi
  _DWORD *v23; // eax
  _DWORD *v24; // edx
  unsigned int k; // eax
  _DWORD *v26; // edi
  int v27; // ebx
  unsigned int v28; // ecx
  unsigned int v29; // eax
  int v30; // ebp
  int v31; // edx
  unsigned int v32; // eax
  unsigned int v33; // ecx
  int v34; // ebx
  int v35; // edi
  _DWORD *v36; // ecx
  _DWORD *v37; // eax
  _DWORD *m; // edx
  _DWORD *v39; // eax
  int v40; // edx
  unsigned int v41; // ecx
  unsigned int v42; // eax
  _DWORD *v43; // ebp
  unsigned int v44; // edx
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // edx
  int v48; // ebx
  int v49; // eax
  _DWORD *v50; // ecx
  _DWORD *v51; // edi
  _DWORD *v52; // eax
  _DWORD *v53; // edx
  _DWORD *v54; // edx
  bool v55; // zf
  unsigned int v56; // edx
  _DWORD *v57; // ebx
  _DWORD *v58; // esi
  int v59; // ebp
  unsigned int v60; // ecx
  unsigned int v61; // eax
  int v62; // edi
  _DWORD *ii; // eax
  _DWORD *v64; // edi
  int v65; // esi
  unsigned int v66; // edx
  unsigned int v67; // eax
  unsigned int v68; // eax
  unsigned int v69; // edx
  int v70; // ebp
  int v71; // eax
  _DWORD *v72; // ecx
  _DWORD *v73; // esi
  _DWORD *v74; // eax
  _DWORD *v75; // edx
  int v76; // edx
  unsigned int i; // [esp+48h] [ebp-358h]
  int v79; // [esp+48h] [ebp-358h]
  unsigned int n; // [esp+48h] [ebp-358h]
  unsigned int v82; // [esp+50h] [ebp-350h]
  _DWORD *v83; // [esp+50h] [ebp-350h]
  int v84; // [esp+50h] [ebp-350h]
  char v85; // [esp+57h] [ebp-349h]
  unsigned int v86; // [esp+58h] [ebp-348h]
  int v87; // [esp+58h] [ebp-348h]
  int v88; // [esp+58h] [ebp-348h]
  _DWORD *v89; // [esp+5Ch] [ebp-344h]
  _DWORD *v90; // [esp+5Ch] [ebp-344h]
  _DWORD *v91; // [esp+60h] [ebp-340h]
  unsigned int v92; // [esp+64h] [ebp-33Ch]
  int v93; // [esp+68h] [ebp-338h]
  unsigned int v94; // [esp+70h] [ebp-330h]
  int v95; // [esp+7Ch] [ebp-324h]
  unsigned int v96; // [esp+84h] [ebp-31Ch]
  int v97; // [esp+A8h] [ebp-2F8h]
  int v98[184]; // [esp+C0h] [ebp-2E0h] BYREF

  if ( *(_DWORD *)a2 == 1 )
  {
    v97 = *((_DWORD *)a2 + 11);
    if ( *((_DWORD *)a2 + 14) && *((_DWORD *)a2 + 12) < 4u )
    {
      v3 = 0;
      goto LABEL_49;
    }
    if ( *((_DWORD *)a2 + 15) && *((_DWORD *)a2 + 13) < 4u )
    {
      v3 = 0;
      goto LABEL_49;
    }
    if ( a2[10] < 0.0 )
    {
      v3 = 0;
      goto LABEL_49;
    }
    if ( *((_DWORD *)a2 + 1) > 0xFFFFu && (v97 & 2) != 0 )
    {
      v3 = 0;
      goto LABEL_49;
    }
    if ( !*((_DWORD *)a2 + 7) )
    {
      v3 = 0;
      goto LABEL_49;
    }
    if ( *((_DWORD *)a2 + 2) < 0xCu )
    {
      v3 = 0;
      goto LABEL_49;
    }
    if ( !*((_DWORD *)a2 + 8) )
      goto LABEL_48;
    if ( (v97 & 2) != 0 )
    {
      if ( *((_DWORD *)a2 + 4) < 6u )
      {
        v3 = 0;
        goto LABEL_49;
      }
      goto LABEL_48;
    }
    v4 = *((_DWORD *)a2 + 4) < 0xCu;
  }
  else
  {
    if ( *(_DWORD *)a2 != 2 )
      return 0;
    v5 = *((_DWORD *)a2 + 11);
    v6 = 0;
    if ( (v5 & 0x100) != 0 )
      v6 = 4;
    if ( (v5 & 2) != 0 )
      v6 |= 2u;
    if ( *((_DWORD *)a2 + 1) > 0xFFFFu && (v6 & 2) != 0 )
    {
      v3 = 0;
      goto LABEL_49;
    }
    if ( !*((_DWORD *)a2 + 7) )
    {
      v3 = 0;
      goto LABEL_49;
    }
    if ( *((_DWORD *)a2 + 2) < 0xCu )
    {
      v3 = 0;
      goto LABEL_49;
    }
    if ( !*((_DWORD *)a2 + 9) )
    {
      v3 = 0;
      goto LABEL_49;
    }
    if ( (v6 & 2) != 0 )
    {
      if ( *((_DWORD *)a2 + 6) < 6u )
      {
        v3 = 0;
        goto LABEL_49;
      }
    }
    else if ( *((_DWORD *)a2 + 6) < 0xCu )
    {
      v3 = 0;
      goto LABEL_49;
    }
    if ( *((_DWORD *)a2 + 14) && *((_DWORD *)a2 + 12) < 4u )
    {
      v3 = 0;
      goto LABEL_49;
    }
    if ( !*((_DWORD *)a2 + 15) )
      goto LABEL_48;
    v4 = *((_DWORD *)a2 + 13) < 4u;
  }
  if ( v4 )
  {
    v3 = 0;
    goto LABEL_49;
  }
LABEL_48:
  v3 = 1;
LABEL_49:
  if ( !v3 )
    return 0;
  sub_10008530((_DWORD *)this);
  v7 = *a2;
  *(float *)(this + 212) = *a2;
  *(float *)(this + 220) = a2[10];
  if ( LODWORD(v7) == 1 )
  {
    if ( sub_10008860((_DWORD *)this, a2) )
    {
      sub_1000A460((_DWORD *)this, ((_DWORD)a2[11] & 0x200) != 0, a2[10]);
      sub_1000AF30((_DWORD *)this);
      goto LABEL_56;
    }
    return 0;
  }
  if ( LODWORD(v7) != 2 || !sub_10008FB0((_DWORD *)this, a2) )
    return 0;
  sub_1000A460((_DWORD *)this, 0, 0.0);
  sub_1000B780((_DWORD *)this);
LABEL_56:
  v8 = (_DWORD *)(this + 124);
  v89 = (_DWORD *)(this + 84);
  sub_10008400(
    v98,
    *(_DWORD *)(this + 212),
    BYTE1(*(_DWORD *)(this + 216)) & 1,
    this + 164,
    this + 184,
    this + 84,
    this + 104,
    this + 124);
  sub_10006360((int)v98);
  sub_100075D0(v98);
  v9 = 0;
  for ( i = 0; i < (*(_DWORD *)(this + 128) - *(_DWORD *)(this + 124)) >> 2; ++i )
  {
    v10 = *(_DWORD **)(*v8 + 4 * v9);
    v11 = 0;
    v85 = 1;
    if ( !((v10[2] - v10[1]) >> 2) )
      goto LABEL_63;
    do
    {
      *(_DWORD *)(v10[1] + 4 * v11) = *(_DWORD *)(*(_DWORD *)(this + 84) + 4 * *(_DWORD *)(v10[1] + 4 * v11));
      if ( v11 && *(_DWORD *)(v10[1] + 4 * v11 - 4) + 1 != *(_DWORD *)(v10[1] + 4 * v11) )
        v85 = 0;
      ++v11;
    }
    while ( v11 < (v10[2] - v10[1]) >> 2 );
    if ( v85 )
LABEL_63:
      *v10 |= 2u;
    v9 = i + 1;
  }
  v12 = 0;
  v13 = 0;
  v14 = (*(_DWORD *)(this + 128) - *(_DWORD *)(this + 124)) >> 2;
  v92 = v14;
  v95 = 0;
  v96 = 0;
  if ( !v14 )
    goto LABEL_74;
  if ( 2 * v14 )
  {
    v13 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 8 * v14, 289);
    v96 = v13 + 8 * v14;
    v12 = (_DWORD *)v13;
    v95 = v13;
  }
  v15 = (void *)v13;
  v16 = (_DWORD *)v13;
  if ( (_DWORD *)v13 != v12 )
  {
    do
    {
      v16[v14] = *v16;
      ++v16;
    }
    while ( v16 != v12 );
    v15 = (void *)v13;
  }
  memset(v15, 0, 4 * v14);
  v17 = &v12[v14];
  if ( (_DWORD *)v13 == v17 )
  {
    if ( v13 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v13);
LABEL_74:
    v13 = 0;
    goto LABEL_77;
  }
  if ( v96 <= (unsigned int)v17 )
    goto LABEL_78;
  v13 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 16))(
          dword_100580A0,
          v13,
          4 * (((int)v17 - v13) >> 2));
LABEL_77:
  v95 = v13;
LABEL_78:
  for ( j = 0; j < v14; ++j )
    *(_DWORD *)(v13 + 4 * j) = *(_DWORD *)(*v8 + 4 * j);
  v8[1] = *v8;
  v19 = (*(_DWORD *)(this + 108) - *(_DWORD *)(this + 104)) >> 2;
  v20 = 0;
  v21 = 0;
  v93 = 0;
  v94 = 0;
  if ( !v19 )
    goto LABEL_89;
  if ( 2 * v19 )
  {
    v21 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 8 * v19, 289);
    v94 = v21 + 8 * v19;
    v20 = (_DWORD *)v21;
    v93 = v21;
  }
  v22 = (void *)v21;
  v23 = (_DWORD *)v21;
  if ( (_DWORD *)v21 != v20 )
  {
    do
    {
      v23[v19] = *v23;
      ++v23;
    }
    while ( v23 != v20 );
    v22 = (void *)v21;
  }
  memset(v22, 0, 4 * v19);
  v24 = &v20[v19];
  if ( (_DWORD *)v21 == v24 )
  {
    if ( v21 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v21);
LABEL_89:
    v21 = 0;
LABEL_92:
    v93 = v21;
    goto LABEL_93;
  }
  if ( v94 > (unsigned int)v24 )
  {
    v21 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 16))(
            dword_100580A0,
            v21,
            4 * (((int)v24 - v21) >> 2));
    goto LABEL_92;
  }
LABEL_93:
  for ( k = 0; k < v19; ++k )
    *(_DWORD *)(v21 + 4 * k) = *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * k);
  *(_DWORD *)(this + 108) = *(_DWORD *)(this + 104);
  v79 = v19 - 1;
  if ( (int)(v19 - 1) >= 0 )
  {
    v26 = (_DWORD *)this;
    v86 = v19 - 1;
    v27 = v19 - 1;
    do
    {
      v28 = v26[28];
      v29 = v26[27];
      v30 = (v8[1] - *v8) >> 2;
      if ( v28 <= v29 )
      {
        v31 = v26[26];
        v32 = 2 * ((int)(v29 - v31) >> 2) + 2;
        v33 = v31 ? (int)(v28 - v31) >> 2 : 0;
        if ( v33 < v32 )
        {
          v34 = 4 * v32;
          v35 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                  dword_100580A0,
                  4 * v32,
                  289);
          v36 = *(_DWORD **)(this + 108);
          v37 = *(_DWORD **)(this + 104);
          for ( m = (_DWORD *)v35; v37 != v36; ++m )
            *m = *v37++;
          v39 = (_DWORD *)this;
          if ( *(_DWORD *)(this + 104) )
          {
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(
              dword_100580A0,
              *(_DWORD *)(this + 104));
            v39 = (_DWORD *)this;
          }
          v40 = v35 + 4 * ((v39[27] - v39[26]) >> 2);
          v39[28] = v35 + v34;
          v27 = v79;
          v39[26] = v35;
          v26 = (_DWORD *)this;
          v39[27] = v40;
        }
      }
      *(_DWORD *)v26[27] = v30;
      v26[27] += 4;
      v41 = *(_DWORD *)(v93 + 4 * v27);
      if ( v27 == v86 )
        v42 = v92;
      else
        v42 = *(_DWORD *)(v93 + 4 * v27 + 4);
      if ( v41 < v42 )
      {
        v43 = (_DWORD *)(v95 + 4 * v41);
        v91 = v43;
        v82 = v42 - v41;
        do
        {
          v44 = v8[2];
          v45 = v8[1];
          if ( v44 <= v45 )
          {
            v46 = 2 * ((int)(v45 - *v8) >> 2) + 2;
            v47 = *v8 ? (int)(v44 - *v8) >> 2 : 0;
            if ( v47 < v46 )
            {
              v48 = v46;
              v49 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                      dword_100580A0,
                      4 * v46,
                      289);
              v50 = (_DWORD *)v8[1];
              v51 = (_DWORD *)v49;
              v52 = (_DWORD *)*v8;
              v53 = v51;
              if ( (_DWORD *)*v8 != v50 )
              {
                do
                  *v53++ = *v52++;
                while ( v52 != v50 );
                v43 = v91;
              }
              if ( *v8 )
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *v8);
              v54 = &v51[(v8[1] - *v8) >> 2];
              v8[2] = &v51[v48];
              v27 = v79;
              *v8 = v51;
              v26 = (_DWORD *)this;
              v8[1] = v54;
            }
          }
          *(_DWORD *)v8[1] = *v43;
          v8[1] += 4;
          if ( !v27 )
            *(_DWORD *)*v43 |= 1u;
          ++v43;
          v55 = v82-- == 1;
          v91 = v43;
        }
        while ( !v55 );
      }
      v79 = --v27;
    }
    while ( v27 >= 0 );
  }
  v56 = 0;
  v57 = 0;
  v58 = 0;
  for ( n = 0; n < (*(_DWORD *)(this + 148) - *(_DWORD *)(this + 144)) >> 2; ++n )
  {
    v83 = (_DWORD *)(*v89 + 4 * *(_DWORD *)(*(_DWORD *)(this + 144) + 4 * n));
    if ( v56 <= (unsigned int)v58 )
    {
      v59 = v58 - v57;
      v60 = 2 * v59 + 2;
      v61 = v57 ? (int)(v56 - (_DWORD)v57) >> 2 : 0;
      if ( v61 < v60 )
      {
        v87 = 4 * v60;
        v62 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                dword_100580A0,
                4 * v60,
                289);
        for ( ii = v57; ii != v58; ++ii )
          *(_DWORD *)((char *)ii + v62 - (_DWORD)v57) = *ii;
        if ( v57 )
          (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v57);
        v56 = v87 + v62;
        v58 = (_DWORD *)(v62 + 4 * v59);
        v57 = (_DWORD *)v62;
      }
    }
    *v58++ = *v83;
  }
  v64 = v89;
  v65 = v58 - v57;
  v89[1] = *v89;
  if ( v65 )
  {
    v90 = v57;
    v84 = v65;
    do
    {
      v66 = v64[2];
      v67 = v64[1];
      if ( v66 <= v67 )
      {
        v68 = 2 * ((int)(v67 - *v64) >> 2) + 2;
        v69 = *v64 ? (int)(v66 - *v64) >> 2 : 0;
        if ( v69 < v68 )
        {
          v70 = 4 * v68;
          v88 = 4 * v68;
          v71 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                  dword_100580A0,
                  4 * v68,
                  289);
          v72 = (_DWORD *)v64[1];
          v73 = (_DWORD *)v71;
          v74 = (_DWORD *)*v64;
          v75 = v73;
          if ( (_DWORD *)*v64 != v72 )
          {
            do
              *v75++ = *v74++;
            while ( v74 != v72 );
            v70 = v88;
          }
          if ( *v64 )
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *v64);
          v76 = (v64[1] - *v64) >> 2;
          v64[2] = (char *)v73 + v70;
          v64[1] = &v73[v76];
          *v64 = v73;
        }
      }
      *(_DWORD *)v64[1] = *v90;
      v64[1] += 4;
      v55 = v84-- == 1;
      ++v90;
    }
    while ( !v55 );
  }
  if ( v57 )
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v57);
  if ( v93 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v93);
  if ( v95 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v95);
  sub_10008490(v98);
  return 1;
}
