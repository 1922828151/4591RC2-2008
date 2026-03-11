/*
 * func-name: sub_100169D0
 * func-address: 0x100169d0
 * callers: 0x10016e90
 * callees: 0x10004500, 0x10014910, 0x10016950
 */

char __thiscall sub_100169D0(int this, _DWORD *a2)
{
  int v4; // eax
  int v5; // eax
  double v6; // st6
  double v7; // st5
  double v8; // st4
  double v9; // st5
  int v10; // ecx
  bool v11; // c0
  bool v12; // c3
  int v13; // eax
  int v14; // edi
  int v15; // ecx
  double v16; // st7
  int *v17; // edi
  int v18; // eax
  double v19; // st6
  int *v20; // ebp
  double v21; // st5
  double v22; // st4
  double v23; // st7
  double v24; // st6
  double v25; // st5
  double v26; // st4
  double v27; // rt2
  double v28; // st4
  double v29; // rtt
  int *v30; // edi
  double v31; // st2
  double v32; // st6
  double v33; // st5
  double v34; // st7
  double v35; // st6
  double v36; // st5
  double v37; // rtt
  double v38; // st5
  double v39; // rt1
  double v40; // st3
  double v41; // st4
  double v42; // rtt
  double v43; // st4
  double v44; // st5
  char v45; // fps^1
  bool v46; // c0
  char v47; // c2
  bool v48; // c3
  double v49; // st7
  double v50; // st6
  double v51; // st5
  double v52; // st4
  double v53; // rt0
  double v54; // st5
  float v55; // edi
  int v56; // ebp
  double v57; // st6
  double v58; // st5
  int v59; // ecx
  int v60; // edx
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int (__stdcall ***v64)(size_t, int); // eax
  _DWORD *v65; // eax
  _DWORD *v66; // ebp
  unsigned int v67; // eax
  unsigned int v68; // ecx
  int v69; // [esp+4h] [ebp-3Ch]
  int v70; // [esp+4h] [ebp-3Ch]
  float v71; // [esp+1Ch] [ebp-24h]
  int v72; // [esp+20h] [ebp-20h]
  int v73; // [esp+24h] [ebp-1Ch]
  float v74; // [esp+28h] [ebp-18h] BYREF
  int v75; // [esp+2Ch] [ebp-14h]
  int v76; // [esp+30h] [ebp-10h]
  float v77; // [esp+34h] [ebp-Ch] BYREF
  float v78; // [esp+38h] [ebp-8h]
  float v79; // [esp+3Ch] [ebp-4h]

  if ( !a2 )
    return 0;
  v4 = *(_DWORD *)(this + 36);
  if ( v4 == 1 || !(*(int (__thiscall **)(_DWORD *, _DWORD, int, int))(*a2 + 20))(a2, *(_DWORD *)(this + 32), v4, this) )
    return 1;
  v5 = a2[2];
  if ( (v5 & 1) != 0 )
  {
    v6 = *(float *)(this + 16) - *(float *)(this + 4);
    v7 = *(float *)(this + 20) - *(float *)(this + 8);
    v8 = (*(float *)(this + 12) - *(float *)this) * 0.5;
    v74 = v8;
    v71 = v74;
    *(float *)&v75 = v6 * 0.5;
    v72 = v75;
    v9 = 0.5 * v7;
    *(float *)&v76 = v9;
    v73 = v76;
    v10 = v6 * 0.5 > v8;
    v11 = v9 < *(&v71 + v10);
    v12 = v9 == *(&v71 + v10);
    goto LABEL_8;
  }
  if ( (v5 & 2) != 0 )
  {
    v16 = 0.0;
    v17 = *(int **)(this + 32);
    v18 = *(_DWORD *)(this + 36);
    v19 = 0.0;
    v71 = 0.0;
    v20 = &v17[v18];
    v21 = 0.0;
    *(float *)&v72 = 0.0;
    v22 = 0.0;
    *(float *)&v73 = 0.0;
    if ( v17 != v20 )
    {
      do
      {
        v69 = *v17++;
        (*(void (__thiscall **)(_DWORD *, int, float *))(*a2 + 16))(a2, v69, &v74);
        v23 = v74 + v71;
        v71 = v23;
        v24 = *(float *)&v75 + *(float *)&v72;
        *(float *)&v72 = v24;
        v25 = *(float *)&v76 + *(float *)&v73;
        *(float *)&v73 = v25;
      }
      while ( v17 != v20 );
      v26 = v23;
      v16 = 0.0;
      v27 = v26;
      v28 = v24;
      v19 = v27;
      v29 = v28;
      v22 = v25;
      v21 = v29;
    }
    v30 = *(int **)(this + 32);
    v31 = 1.0 / (double)*(unsigned int *)(this + 36);
    v71 = v19 * v31;
    *(float *)&v72 = v21 * v31;
    *(float *)&v73 = v31 * v22;
    v32 = v16;
    v74 = v16;
    *(float *)&v75 = v16;
    v33 = v16;
    *(float *)&v76 = v16;
    if ( v30 != v20 )
    {
      do
      {
        v70 = *v30++;
        (*(void (__thiscall **)(_DWORD *, int, float *))(*a2 + 16))(a2, v70, &v77);
        v34 = (v77 - v71) * (v77 - v71) + v74;
        v74 = v34;
        v35 = (v78 - *(float *)&v72) * (v78 - *(float *)&v72) + *(float *)&v75;
        *(float *)&v75 = v35;
        v36 = (v79 - *(float *)&v73) * (v79 - *(float *)&v73) + *(float *)&v76;
        *(float *)&v76 = v36;
      }
      while ( v30 != v20 );
      v37 = v36;
      v38 = v34;
      v16 = v35;
      v39 = v38;
      v33 = v37;
      v32 = v39;
    }
    v40 = 1.0 / (double)(unsigned int)(*(_DWORD *)(this + 36) - 1);
    v41 = v32 * v40;
    v74 = v41;
    v42 = v41;
    v43 = v16 * v40;
    *(float *)&v75 = v43;
    v44 = v33 * v40;
    *(float *)&v76 = v44;
    v46 = v43 < v42;
    v47 = 0;
    v48 = v43 == v42;
    v10 = (v45 & 0x41) == 0;
    v11 = v44 < *(&v74 + v10);
    v12 = v44 == *(&v74 + v10);
LABEL_8:
    if ( v11 || v12 )
    {
LABEL_10:
      v13 = sub_10016950((_DWORD *)this, v10, (int)a2);
      v14 = v13;
      if ( v13 && v13 != *(_DWORD *)(this + 36) )
        goto LABEL_15;
      goto LABEL_12;
    }
LABEL_9:
    v10 = 2;
    goto LABEL_10;
  }
  if ( (v5 & 8) != 0 )
  {
    v74 = (double)(unsigned int)sub_10016950((_DWORD *)this, 0, (int)a2) / (double)*(unsigned int *)(this + 36);
    *(float *)&v75 = (double)(unsigned int)sub_10016950((_DWORD *)this, 1, (int)a2)
                   / (double)*(unsigned int *)(this + 36);
    v49 = (double)(unsigned int)sub_10016950((_DWORD *)this, 2, (int)a2);
    v50 = (double)*(unsigned int *)(this + 36);
    v51 = (v74 - 0.5) * (v74 - 0.5);
    v74 = v51;
    v52 = (*(float *)&v75 - 0.5) * (*(float *)&v75 - 0.5);
    *(float *)&v75 = v52;
    v53 = v51;
    v54 = (v49 / v50 - 0.5) * (v49 / v50 - 0.5);
    *(float *)&v76 = v54;
    v10 = v52 < v53;
    if ( v54 >= *(&v74 + v10) )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( (v5 & 4) == 0 )
  {
    if ( (v5 & 0x10) == 0 )
      return 0;
    goto LABEL_14;
  }
  v55 = 0.0;
  v56 = 3;
  v57 = *(float *)(this + 16) - *(float *)(this + 4);
  v58 = *(float *)(this + 20) - *(float *)(this + 8);
  v71 = (*(float *)(this + 12) - *(float *)this) * 0.5;
  v74 = v71;
  v59 = 1;
  v71 = 0.0;
  *(float *)&v72 = v57 * 0.5;
  v75 = v72;
  v60 = 2;
  v72 = 1;
  *(float *)&v73 = 0.5 * v58;
  v76 = v73;
  v73 = 2;
  do
  {
    if ( *(&v74 + v59) > (double)*(&v74 + LODWORD(v55)) )
    {
      v61 = LODWORD(v55);
      v55 = *(float *)&v59;
      v59 = v61;
    }
    if ( *(&v74 + v60) > (double)*(&v74 + v59) )
    {
      v62 = v59;
      v59 = v60;
      v60 = v62;
    }
    --v56;
  }
  while ( v56 );
  v73 = v60;
  v72 = v59;
  v71 = v55;
  while ( v56 != 3 )
  {
    v63 = sub_10016950((_DWORD *)this, *((_DWORD *)&v71 + v56), (int)a2);
    v14 = v63;
    if ( v63 && v63 != *(_DWORD *)(this + 36) )
      goto LABEL_15;
    ++v56;
  }
LABEL_12:
  if ( *(_DWORD *)(this + 36) > a2[1] )
  {
    ++a2[17];
LABEL_14:
    v14 = *(_DWORD *)(this + 36) >> 1;
LABEL_15:
    v15 = a2[7];
    if ( v15 )
    {
      *(_DWORD *)(this + 24) = (v15 + 40 * a2[16]) | 1;
LABEL_45:
      a2[16] += 2;
      v67 = *(_DWORD *)(this + 24) & 0xFFFFFFFE;
      if ( v67 )
        v68 = v67 + 40;
      else
        v68 = 0;
      *(_DWORD *)(v67 + 32) = *(_DWORD *)(this + 32);
      *(_DWORD *)(v67 + 36) = v14;
      *(_DWORD *)(v68 + 32) = *(_DWORD *)(this + 32) + 4 * v14;
      *(_DWORD *)(v68 + 36) = *(_DWORD *)(this + 36) - v14;
      return 1;
    }
    v64 = sub_10014910();
    v65 = (_DWORD *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v64)(v64, 84, 26);
    if ( v65 )
    {
      v66 = v65 + 1;
      *v65 = 2;
      sub_10004500((int)(v65 + 1), 40, 2, (int (__thiscall *)(int))sub_10016880);
      if ( v66 )
      {
        *(_DWORD *)(this + 24) = v66;
        goto LABEL_45;
      }
    }
    return 0;
  }
  return 1;
}
