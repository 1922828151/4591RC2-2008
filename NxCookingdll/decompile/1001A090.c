/*
 * func-name: sub_1001A090
 * func-address: 0x1001a090
 * callers: none
 * callees: 0x10014910, 0x10019e80, 0x10035a20
 */

char __thiscall sub_1001A090(int this, int a2)
{
  int v4; // eax
  int v5; // esi
  int (__stdcall ***v6)(size_t, int); // eax
  unsigned int v7; // ebp
  int (__stdcall ***v8)(size_t, int); // eax
  int v9; // ecx
  unsigned int *v10; // eax
  bool v11; // zf
  int v12; // eax
  unsigned int v13; // ebp
  int (__stdcall ***v14)(size_t, int); // eax
  int v15; // ecx
  unsigned int *v16; // eax
  int v17; // ebx
  _DWORD *v18; // eax
  int v19; // esi
  double v20; // st6
  double v21; // st5
  double v22; // st4
  double v23; // st3
  double v24; // st2
  double v25; // st7
  float *v26; // ecx
  int v27; // edx
  long double v28; // st1
  long double v29; // st1
  long double v30; // st1
  long double v31; // st1
  long double v32; // st1
  long double v33; // st1
  char v34; // cl
  double v35; // st2
  double v36; // st1
  double v37; // st6
  double v38; // st1
  double v39; // rt0
  double v40; // st1
  double v41; // st5
  double v42; // rtt
  double v43; // st3
  double v44; // st4
  double v45; // st4
  double v46; // st7
  double v47; // st5
  double v48; // st3
  double v49; // st1
  double v50; // st1
  double v51; // st1
  double v52; // st0
  double v53; // st0
  double v54; // st0
  double v55; // st6
  double v56; // st2
  int v57; // esi
  double v58; // st2
  int v59; // edx
  unsigned int v60; // ebx
  double v61; // st2
  float *v62; // ebp
  int v63; // ecx
  double v64; // st2
  double v65; // st1
  bool v66; // cf
  int (__stdcall ***v67)(size_t, int); // eax
  int v68; // [esp+0h] [ebp-5Ch]
  float *v69; // [esp+14h] [ebp-48h]
  int v70; // [esp+18h] [ebp-44h]
  int v71; // [esp+1Ch] [ebp-40h]
  int v72; // [esp+20h] [ebp-3Ch]
  int v73; // [esp+24h] [ebp-38h]
  int v74; // [esp+28h] [ebp-34h]
  int v75; // [esp+2Ch] [ebp-30h] BYREF
  int v76; // [esp+30h] [ebp-2Ch]
  float v77; // [esp+34h] [ebp-28h]
  float v78; // [esp+38h] [ebp-24h]
  float v79; // [esp+3Ch] [ebp-20h]
  float v80; // [esp+40h] [ebp-1Ch]
  float v81[3]; // [esp+44h] [ebp-18h] BYREF
  float v82[2]; // [esp+50h] [ebp-Ch]
  float v83; // [esp+58h] [ebp-4h]
  char v84; // [esp+60h] [ebp+4h]

  if ( !a2 )
    return 0;
  v4 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 36);
  if ( *(_DWORD *)(a2 + 16) != 2 * v4 - 1 )
    return 0;
  v5 = *(_DWORD *)(this + 8);
  *(_DWORD *)(this + 4) = v4 - 1;
  if ( v5 )
  {
    v6 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v6)[3])(v6, v5 - 4);
    *(_DWORD *)(this + 8) = 0;
  }
  v7 = *(_DWORD *)(this + 4);
  v8 = sub_10014910();
  v9 = (unsigned __int64)v7 >> 27 != 0 ? -1 : 32 * v7;
  v10 = (unsigned int *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v8)(
                          v8,
                          __CFADD__(v9, 4) ? -1 : v9 + 4,
                          31);
  if ( !v10 )
    return 0;
  *v10 = v7;
  v11 = v10 + 1 == 0;
  v12 = (int)(v10 + 1);
  v72 = v12;
  if ( v11 )
    return 0;
  v68 = *(_DWORD *)(a2 + 4);
  v75 = 1;
  sub_10019E80(v12, 0, &v75, v68);
  v13 = *(_DWORD *)(this + 4);
  v14 = sub_10014910();
  v15 = (20 * (unsigned __int64)v13) >> 32 != 0 ? -1 : 20 * v13;
  v16 = (unsigned int *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v14)(
                          v14,
                          __CFADD__(v15, 4) ? -1 : v15 + 4,
                          38);
  v17 = 0;
  if ( v16 )
  {
    *v16 = v13;
    v18 = v16 + 1;
  }
  else
  {
    v18 = 0;
  }
  *(_DWORD *)(this + 8) = v18;
  if ( !v18 )
    return 0;
  v19 = *(_DWORD *)(this + 4);
  v20 = -3.4028235e38;
  v21 = -3.4028235e38;
  v22 = -3.4028235e38;
  v23 = -3.4028235e38;
  v24 = -3.4028235e38;
  v25 = -3.4028235e38;
  v83 = -3.4028235e38;
  if ( v19 )
  {
    v26 = (float *)(v72 + 8);
    v27 = v19;
    do
    {
      v28 = fabs(*(v26 - 2));
      if ( v28 > v20 )
        v20 = v28;
      v29 = fabs(*(v26 - 1));
      if ( v29 > v21 )
        v21 = v29;
      v30 = fabs(*v26);
      if ( v30 > v22 )
        v22 = v30;
      v31 = fabs(v26[1]);
      if ( v31 > v23 )
        v23 = v31;
      v32 = fabs(v26[2]);
      if ( v32 > v25 )
        v25 = v32;
      v33 = fabs(v26[3]);
      if ( v33 > v24 )
        v24 = v33;
      v26 += 8;
      --v27;
    }
    while ( v27 );
    v83 = v24;
  }
  v34 = 15;
  if ( !byte_100565B4 )
    v34 = 16;
  if ( 0.0 == v20 )
  {
    v78 = 0.0;
    v37 = 0.0;
    v38 = v24;
    v35 = 32767.0;
  }
  else
  {
    v35 = 32767.0;
    v36 = 32767.0 / v20;
    v37 = 0.0;
    v78 = v36;
    v38 = v83;
  }
  if ( v37 == v21 )
  {
    v41 = v38;
    v79 = v37;
  }
  else
  {
    v39 = v38;
    v40 = v35 / v21;
    v41 = v39;
    v79 = v40;
  }
  if ( v37 == v22 )
  {
    v80 = v37;
    v44 = v23;
  }
  else
  {
    v42 = v23;
    v43 = v35 / v22;
    v44 = v42;
    v80 = v43;
  }
  if ( v37 == v44 )
    v45 = v37;
  else
    v45 = (double)((1 << v34) - 1) / v44;
  if ( v37 == v25 )
    v46 = v37;
  else
    v46 = (double)((1 << v34) - 1) / v25;
  if ( v37 == v41 )
    v47 = v37;
  else
    v47 = (double)((1 << v34) - 1) / v41;
  v48 = v78;
  if ( v78 == v37 )
    v49 = v37;
  else
    v49 = 1.0 / v48;
  *(float *)(this + 12) = v49;
  if ( v79 == v37 )
    v50 = v37;
  else
    v50 = 1.0 / v79;
  *(float *)(this + 16) = v50;
  v51 = v80;
  if ( v80 == v37 )
    v52 = v37;
  else
    v52 = 1.0 / v51;
  *(float *)(this + 20) = v52;
  if ( v37 == v45 )
    v53 = v37;
  else
    v53 = 1.0 / v45;
  *(float *)(this + 24) = v53;
  if ( v37 == v46 )
    v54 = v37;
  else
    v54 = 1.0 / v46;
  *(float *)(this + 28) = v54;
  if ( v37 == v47 )
  {
    v56 = v37;
    v55 = v51;
  }
  else
  {
    v55 = v51;
    v56 = 1.0 / v47;
  }
  *(float *)(this + 32) = v56;
  v73 = 0;
  if ( v19 )
  {
    v74 = 0;
    v70 = 0;
    v71 = 0;
    v57 = v72 + 20;
    do
    {
      v58 = v79;
      *(_WORD *)(v17 + *(_DWORD *)(this + 8)) = (int)(*(float *)(v57 - 20) * v48);
      *(_WORD *)(v17 + *(_DWORD *)(this + 8) + 2) = (int)(v58 * *(float *)(v57 - 16));
      *(_WORD *)(v17 + *(_DWORD *)(this + 8) + 4) = (int)(*(float *)(v57 - 12) * v55);
      *(_WORD *)(v17 + *(_DWORD *)(this + 8) + 6) = (int)(*(float *)(v57 - 8) * v45);
      *(_WORD *)(v17 + *(_DWORD *)(this + 8) + 8) = (int)(*(float *)(v57 - 4) * v46);
      v11 = byte_100565B4 == 0;
      *(_WORD *)(v17 + *(_DWORD *)(this + 8) + 10) = (int)(*(float *)v57 * v47);
      if ( !v11 )
      {
        v59 = v71;
        v69 = v81;
        v81[0] = *(float *)(v57 - 20) + *(float *)(v57 - 8);
        v60 = 0;
        v61 = *(float *)(v57 - 4) + *(float *)(v57 - 16);
        v62 = (float *)(this + 24);
        LODWORD(v77) = -24 - this;
        v81[1] = v61;
        v81[2] = *(float *)(v57 - 12) + *(float *)v57;
        v82[0] = *(float *)(v57 - 20) - *(float *)(v57 - 8);
        v82[1] = *(float *)(v57 - 16) - *(float *)(v57 - 4);
        v83 = *(float *)(v57 - 12) - *(float *)v57;
        do
        {
          v63 = *(_DWORD *)(this + 8);
          v84 = 1;
          v64 = (double)*(__int16 *)(v63 + v59) * *(v62 - 3);
          while ( 1 )
          {
            v76 = *(unsigned __int16 *)(v63 + v59 + 6);
            v65 = (double)v76 * *v62;
            if ( v65 + v64 < *v69 || v64 - v65 > *(float *)((char *)v82 + (_DWORD)v62 + LODWORD(v77)) )
              ++*(_WORD *)(v63 + v59 + 6);
            else
              v84 = 0;
            v63 = *(_DWORD *)(this + 8);
            if ( !*(_WORD *)(v63 + v59 + 6) )
              break;
            if ( !v84 )
              goto LABEL_80;
          }
          *(_WORD *)(*(_DWORD *)(this + 8) + 2 * (v60 + v70) + 6) = -1;
LABEL_80:
          ++v69;
          ++v60;
          v59 += 2;
          ++v62;
        }
        while ( v60 < 3 );
        v17 = v74;
      }
      v70 += 10;
      v71 += 20;
      *(_DWORD *)(v17 + *(_DWORD *)(this + 8) + 12) = *(_DWORD *)(v57 + 4);
      *(_DWORD *)(v17 + *(_DWORD *)(this + 8) + 16) = *(_DWORD *)(v57 + 8);
      v17 += 20;
      v57 += 32;
      v66 = (unsigned int)++v73 < *(_DWORD *)(this + 4);
      v74 = v17;
    }
    while ( v66 );
  }
  v67 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v67)[3])(v67, v72 - 4);
  return 1;
}
