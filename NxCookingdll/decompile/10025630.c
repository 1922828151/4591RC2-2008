/*
 * func-name: sub_10025630
 * func-address: 0x10025630
 * callers: 0x100205f0
 * callees: 0x10014910, 0x10025560, 0x10034f10
 */

char __thiscall sub_10025630(int *this, int a2)
{
  int v5; // esi
  int (__stdcall ***v6)(size_t, int); // eax
  float *v7; // ebx
  int (__stdcall ***v8)(size_t, int); // eax
  int v9; // edi
  float *v10; // ecx
  int v11; // ebx
  int v12; // esi
  int v13; // eax
  int v14; // edx
  int v15; // edx
  int v16; // esi
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // edx
  double v21; // st5
  float *v22; // edx
  int v23; // eax
  double v24; // st5
  float *v25; // eax
  int v26; // esi
  double v27; // st4
  float *v28; // esi
  long double v29; // st5
  long double v30; // st5
  bool v31; // cf
  int v32; // ebx
  float *v33; // edi
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  int v37; // edx
  int v38; // ebx
  int v39; // ecx
  bool v40; // zf
  double v41; // st7
  double v42; // st6
  float *v43; // eax
  double v44; // st5
  double v45; // st7
  double v46; // rt1
  double v47; // st7
  double v48; // st6
  int v49; // edx
  int v50; // ebx
  float *v51; // eax
  double v52; // st5
  double v53; // st7
  double v54; // rt0
  double v55; // st7
  double v56; // st6
  float *v57; // eax
  double v58; // st5
  double v59; // st7
  double v60; // rtt
  double v61; // st7
  int v62; // eax
  double v63; // st7
  float *v64; // eax
  float *v65; // eax
  unsigned int v66; // edx
  float *v67; // ecx
  long double v68; // st5
  long double v69; // st5
  int v70; // [esp+10h] [ebp-1Ch]
  int v71; // [esp+10h] [ebp-1Ch]
  int v72; // [esp+18h] [ebp-14h]
  int v73; // [esp+1Ch] [ebp-10h]
  int v74; // [esp+1Ch] [ebp-10h]
  _DWORD v75[2]; // [esp+20h] [ebp-Ch] BYREF
  int v76; // [esp+28h] [ebp-4h]
  int v77; // [esp+30h] [ebp+4h]

  if ( !*(_DWORD *)(a2 + 4) )
    return 0;
  if ( *(_DWORD *)(a2 + 24) )
  {
    v5 = *(_DWORD *)(a2 + 24);
    v70 = v5;
  }
  else
  {
    v6 = sub_10014910();
    v70 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v6)(v6, 12 * *(_DWORD *)(a2 + 8), 45);
    v5 = v70;
  }
  if ( !v5 )
    return 0;
  if ( *(_DWORD *)(a2 + 28) )
  {
    v7 = *(float **)(a2 + 28);
    v77 = (int)v7;
  }
  else
  {
    v8 = sub_10014910();
    v77 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v8)(v8, 12 * *(_DWORD *)a2, 46);
    v7 = (float *)v77;
  }
  if ( !v7 )
    return 0;
  if ( !*(_DWORD *)(a2 + 24) )
    *this = v5;
  if ( !*(_DWORD *)(a2 + 28) )
    this[1] = (int)v7;
  v9 = *(_DWORD *)(a2 + 4);
  v72 = 0;
  if ( *(_DWORD *)(a2 + 8) )
  {
    v10 = (float *)(v5 + 8);
    v11 = 0;
    v12 = -8 - v70;
    v73 = 0;
    while ( 1 )
    {
      v13 = *(_DWORD *)(a2 + 12);
      if ( v13 )
      {
        v14 = *(_DWORD *)((char *)v10 + v13 + v12);
      }
      else
      {
        v15 = *(_DWORD *)(a2 + 16);
        if ( v15 )
          v14 = *(unsigned __int16 *)(v15 + v11);
        else
          v14 = 0;
      }
      if ( v13 )
      {
        v16 = *(_DWORD *)((char *)v10 + v13 + v12 + 4);
      }
      else
      {
        v17 = *(_DWORD *)(a2 + 16);
        if ( v17 )
          v16 = *(unsigned __int16 *)(v17 + v11 + 2);
        else
          v16 = 1;
      }
      if ( v13 )
      {
        v18 = *(_DWORD *)((char *)v10 + -8 - v70 + v13 + 8);
        v11 = v73;
      }
      else
      {
        v19 = *(_DWORD *)(a2 + 16);
        if ( v19 )
          v18 = *(unsigned __int16 *)(v19 + v11 + 4);
        else
          v18 = 2;
      }
      v20 = 3 * v14;
      v21 = *(float *)(v9 + 4 * v20 + 8);
      v22 = (float *)(v9 + 4 * v20);
      v23 = 3 * v18;
      v24 = v21 - *(float *)(v9 + 4 * v23 + 8);
      v25 = (float *)(v9 + 4 * v23);
      v26 = 3 * v16;
      v27 = *(float *)(v9 + 4 * v26 + 4);
      v28 = (float *)(v9 + 4 * v26);
      *(v10 - 2) = v24 * (v27 - v25[1]) - (v28[2] - v25[2]) * (v22[1] - v25[1]);
      *(v10 - 1) = (v28[2] - v25[2]) * (*v22 - *v25) - (*v28 - *v25) * (v22[2] - v25[2]);
      *v10 = (*v28 - *v25) * (v22[1] - v25[1]) - (*v22 - *v25) * (v28[1] - v25[1]);
      v29 = *v10 * *v10 + *(v10 - 1) * *(v10 - 1) + *(v10 - 2) * *(v10 - 2);
      if ( 0.0 != v29 )
      {
        v30 = 1.0 / sqrt(v29);
        *(v10 - 2) = v30 * *(v10 - 2);
        *(v10 - 1) = *(v10 - 1) * v30;
        *v10 = v30 * *v10;
      }
      v11 += 6;
      v10 += 3;
      v31 = (unsigned int)++v72 < *(_DWORD *)(a2 + 8);
      v73 = v11;
      if ( !v31 )
        break;
      v12 = -8 - v70;
    }
    v7 = (float *)v77;
    v5 = v70;
  }
  memset(v7, 0, 12 * *(_DWORD *)a2);
  v74 = 0;
  if ( *(_DWORD *)(a2 + 8) )
  {
    v32 = -8 - v5;
    v71 = 0;
    v33 = (float *)(v5 + 8);
    while ( 1 )
    {
      v34 = *(_DWORD *)(a2 + 12);
      if ( v34 )
      {
        v35 = *(_DWORD *)((char *)v33 + v34 + v32);
        v75[0] = v35;
      }
      else
      {
        v36 = *(_DWORD *)(a2 + 16);
        v75[0] = v36 ? *(unsigned __int16 *)(v36 + v71) : 0;
        v35 = v75[0];
      }
      if ( v34 )
      {
        v76 = *(_DWORD *)((char *)v33 + v34 + v32 + 4);
      }
      else
      {
        v37 = *(_DWORD *)(a2 + 16);
        v76 = v37 ? *(unsigned __int16 *)(v37 + v71 + 2) : 1;
      }
      if ( v34 )
      {
        v38 = *(_DWORD *)((char *)v33 + v34 + v32 + 8);
      }
      else
      {
        v39 = *(_DWORD *)(a2 + 16);
        v38 = v39 ? *(unsigned __int16 *)(v39 + v71 + 4) : 2;
      }
      v40 = *(_BYTE *)(a2 + 20) == 0;
      v75[1] = v38;
      if ( v40 )
      {
        v62 = 3 * v35;
        v63 = *(float *)(v77 + 4 * v62);
        v64 = (float *)(v77 + 4 * v62);
        *v64 = v63 + *(v33 - 2);
        v64[1] = *(v33 - 1) + v64[1];
        v64[2] = *v33 + v64[2];
        v65 = (float *)(v77 + 12 * v38);
        *v65 = *v65 + *(v33 - 2);
        v65[1] = *(v33 - 1) + v65[1];
        v65[2] = v65[2] + *v33;
        v57 = (float *)(v77 + 12 * v76);
        *v57 = *v57 + *(v33 - 2);
        v57[1] = v57[1] + *(v33 - 1);
        v61 = v57[2] + *v33;
      }
      else
      {
        v41 = sub_10025560(v35, v75, *(_DWORD *)(a2 + 4));
        v42 = *(v33 - 2) * v41;
        v43 = (float *)(v77 + 12 * v75[0]);
        v44 = v41;
        v45 = *(v33 - 1) * v41;
        v46 = v44 * *v33;
        *v43 = v42 + *v43;
        v43[1] = v45 + v43[1];
        v43[2] = v46 + v43[2];
        v47 = sub_10025560(v38, v75, *(_DWORD *)(a2 + 4));
        v48 = *(v33 - 2) * v47;
        v49 = 3 * v38;
        v50 = v76;
        v51 = (float *)(v77 + 4 * v49);
        v52 = v47;
        v53 = *(v33 - 1) * v47;
        v54 = v52 * *v33;
        *v51 = v48 + *v51;
        v51[1] = v53 + v51[1];
        v51[2] = v54 + v51[2];
        v55 = sub_10025560(v50, v75, *(_DWORD *)(a2 + 4));
        v56 = *(v33 - 2) * v55;
        v57 = (float *)(v77 + 12 * v50);
        v58 = v55;
        v59 = *(v33 - 1) * v55;
        v60 = v58 * *v33;
        *v57 = v56 + *v57;
        v57[1] = v59 + v57[1];
        v61 = v60 + v57[2];
      }
      v71 += 6;
      v57[2] = v61;
      v33 += 3;
      if ( (unsigned int)++v74 >= *(_DWORD *)(a2 + 8) )
        break;
      v32 = -8 - v5;
    }
    v7 = (float *)v77;
  }
  v66 = 0;
  if ( *(_DWORD *)a2 )
  {
    v67 = v7 + 2;
    do
    {
      v68 = *v67 * *v67 + *(v67 - 1) * *(v67 - 1) + *(v67 - 2) * *(v67 - 2);
      if ( 0.0 != v68 )
      {
        v69 = 1.0 / sqrt(v68);
        *(v67 - 2) = v69 * *(v67 - 2);
        *(v67 - 1) = v69 * *(v67 - 1);
        *v67 = v69 * *v67;
      }
      ++v66;
      v67 += 3;
    }
    while ( v66 < *(_DWORD *)a2 );
  }
  return 1;
}
