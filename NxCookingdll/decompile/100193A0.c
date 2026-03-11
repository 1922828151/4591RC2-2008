/*
 * func-name: sub_100193A0
 * func-address: 0x100193a0
 * callers: none
 * callees: 0x10014910, 0x10018f00, 0x10035a20
 */

char __thiscall sub_100193A0(int this, int a2)
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
  int v58; // edx
  double v59; // st2
  float *v60; // ebp
  int v61; // ecx
  double v62; // st2
  double v63; // st1
  int (__stdcall ***v64)(size_t, int); // eax
  int v65; // [esp+0h] [ebp-5Ch]
  unsigned int v66; // [esp+14h] [ebp-48h]
  float *v67; // [esp+18h] [ebp-44h]
  int v68; // [esp+1Ch] [ebp-40h]
  int v69; // [esp+20h] [ebp-3Ch]
  int v70; // [esp+24h] [ebp-38h]
  unsigned int v71; // [esp+28h] [ebp-34h]
  int v72; // [esp+2Ch] [ebp-30h] BYREF
  int v73; // [esp+30h] [ebp-2Ch]
  float v74; // [esp+34h] [ebp-28h]
  float v75; // [esp+38h] [ebp-24h]
  float v76; // [esp+3Ch] [ebp-20h]
  float v77; // [esp+40h] [ebp-1Ch]
  float v78[3]; // [esp+44h] [ebp-18h] BYREF
  float v79[2]; // [esp+50h] [ebp-Ch]
  float v80; // [esp+58h] [ebp-4h]
  char v81; // [esp+60h] [ebp+4h]

  if ( !a2 )
    return 0;
  v4 = *(_DWORD *)(a2 + 16);
  if ( v4 != 2 * *(_DWORD *)(*(_DWORD *)(a2 + 4) + 36) - 1 )
    return 0;
  v5 = *(_DWORD *)(this + 8);
  *(_DWORD *)(this + 4) = v4;
  if ( v5 )
  {
    v6 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v6)[3])(v6, v5 - 4);
    *(_DWORD *)(this + 8) = 0;
  }
  v7 = *(_DWORD *)(this + 4);
  v8 = sub_10014910();
  v9 = (36 * (unsigned __int64)v7) >> 32 != 0 ? -1 : 36 * v7;
  v10 = (unsigned int *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v8)(
                          v8,
                          __CFADD__(v9, 4) ? -1 : v9 + 4,
                          30);
  if ( !v10 )
    return 0;
  *v10 = v7;
  v11 = v10 + 1 == 0;
  v12 = (int)(v10 + 1);
  v70 = v12;
  if ( v11 )
    return 0;
  v65 = *(_DWORD *)(a2 + 4);
  v72 = 1;
  sub_10018F00(v12, 0, &v72, v65);
  v13 = *(_DWORD *)(this + 4);
  v14 = sub_10014910();
  v15 = (24 * (unsigned __int64)v13) >> 32 != 0 ? -1 : 24 * v13;
  v16 = (unsigned int *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v14)(
                          v14,
                          __CFADD__(v15, 4) ? -1 : v15 + 4,
                          32);
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
  v80 = -3.4028235e38;
  if ( v19 )
  {
    v26 = (float *)(v70 + 8);
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
      v26 += 9;
      --v27;
    }
    while ( v27 );
    v80 = v24;
  }
  v34 = 15;
  if ( !byte_100565B4 )
    v34 = 16;
  if ( 0.0 == v20 )
  {
    v75 = 0.0;
    v37 = 0.0;
    v38 = v24;
    v35 = 32767.0;
  }
  else
  {
    v35 = 32767.0;
    v36 = 32767.0 / v20;
    v37 = 0.0;
    v75 = v36;
    v38 = v80;
  }
  if ( v37 == v21 )
  {
    v41 = v38;
    v76 = v37;
  }
  else
  {
    v39 = v38;
    v40 = v35 / v21;
    v41 = v39;
    v76 = v40;
  }
  if ( v37 == v22 )
  {
    v77 = v37;
    v44 = v23;
  }
  else
  {
    v42 = v23;
    v43 = v35 / v22;
    v44 = v42;
    v77 = v43;
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
  v48 = v75;
  if ( v75 == v37 )
    v49 = v37;
  else
    v49 = 1.0 / v48;
  *(float *)(this + 12) = v49;
  if ( v76 == v37 )
    v50 = v37;
  else
    v50 = 1.0 / v76;
  *(float *)(this + 16) = v50;
  v51 = v77;
  if ( v77 == v37 )
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
  v71 = 0;
  if ( v19 )
  {
    v68 = 0;
    v69 = 0;
    v57 = v70 + 20;
    do
    {
      *(_WORD *)(v17 + *(_DWORD *)(this + 8)) = (int)(v48 * *(float *)(v57 - 20));
      *(_WORD *)(*(_DWORD *)(this + 8) + v17 + 2) = (int)(*(float *)(v57 - 16) * v76);
      *(_WORD *)(*(_DWORD *)(this + 8) + v17 + 4) = (int)(*(float *)(v57 - 12) * v55);
      *(_WORD *)(*(_DWORD *)(this + 8) + v17 + 6) = (int)(*(float *)(v57 - 8) * v45);
      *(_WORD *)(*(_DWORD *)(this + 8) + v17 + 8) = (int)(*(float *)(v57 - 4) * v46);
      v11 = byte_100565B4 == 0;
      *(_WORD *)(*(_DWORD *)(this + 8) + v17 + 10) = (int)(*(float *)v57 * v47);
      if ( !v11 )
      {
        v58 = v69;
        v67 = v78;
        v78[0] = *(float *)(v57 - 8) + *(float *)(v57 - 20);
        v66 = 0;
        v59 = *(float *)(v57 - 16) + *(float *)(v57 - 4);
        v60 = (float *)(this + 24);
        LODWORD(v74) = -24 - this;
        v78[1] = v59;
        v78[2] = *(float *)v57 + *(float *)(v57 - 12);
        v79[0] = *(float *)(v57 - 20) - *(float *)(v57 - 8);
        v79[1] = *(float *)(v57 - 16) - *(float *)(v57 - 4);
        v80 = *(float *)(v57 - 12) - *(float *)v57;
        do
        {
          v61 = *(_DWORD *)(this + 8);
          v81 = 1;
          v62 = (double)*(__int16 *)(v58 + v61) * *(v60 - 3);
          while ( 1 )
          {
            v73 = *(unsigned __int16 *)(v61 + v58 + 6);
            v63 = (double)v73 * *v60;
            if ( v63 + v62 < *v67 || v62 - v63 > *(float *)((char *)v79 + (_DWORD)v60 + LODWORD(v74)) )
              ++*(_WORD *)(v61 + v58 + 6);
            else
              v81 = 0;
            v61 = *(_DWORD *)(this + 8);
            if ( !*(_WORD *)(v61 + v58 + 6) )
              break;
            if ( !v81 )
              goto LABEL_80;
          }
          *(_WORD *)(*(_DWORD *)(this + 8) + 2 * (v68 + v66) + 6) = -1;
LABEL_80:
          ++v67;
          v58 += 2;
          ++v60;
          ++v66;
        }
        while ( v66 < 3 );
      }
      v68 += 12;
      v69 += 24;
      *(_DWORD *)(*(_DWORD *)(this + 8) + v17 + 12) = *(_DWORD *)(v57 + 4);
      *(_DWORD *)(*(_DWORD *)(this + 8) + v17 + 16) = *(_DWORD *)(v57 + 8);
      *(_DWORD *)(*(_DWORD *)(this + 8) + v17 + 20) = *(_DWORD *)(v57 + 12);
      v57 += 36;
      v17 += 24;
      ++v71;
    }
    while ( v71 < *(_DWORD *)(this + 4) );
  }
  v64 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v64)[3])(v64, v70 - 4);
  return 1;
}
