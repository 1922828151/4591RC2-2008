/*
 * func-name: sub_1002A6F0
 * func-address: 0x1002a6f0
 * callers: 0x1002acb0
 * callees: 0x10027180, 0x100273c0, 0x100281b0, 0x10028490
 */

int __usercall sub_1002A6F0@<eax>(
        int a1@<eax>,
        float *a2@<ecx>,
        int a3@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int *a8,
        _DWORD *a9,
        int *a10,
        float a11)
{
  float v11; // ebx
  int v13; // edi
  float *v14; // ecx
  int v15; // edx
  double v16; // st7
  double v17; // st6
  double v18; // st5
  double v19; // st7
  bool v20; // c0
  bool v21; // c3
  double v22; // st7
  double v23; // st6
  bool v24; // c0
  bool v25; // c3
  double v26; // st6
  double v27; // st5
  bool v28; // c0
  bool v29; // c3
  double v30; // st5
  double v31; // st3
  double v32; // st1
  double v33; // st6
  double v34; // st2
  double v35; // rt1
  double v36; // st2
  double v37; // st5
  double v38; // st1
  double v39; // rt1
  double v40; // st2
  double v41; // st4
  double v42; // rt2
  double v43; // st2
  double v44; // st3
  double v45; // st2
  float *v46; // eax
  int v47; // ecx
  double v48; // st0
  int v49; // esi
  double v50; // st7
  double v51; // st6
  double v52; // st4
  double v53; // rt0
  double v54; // rt1
  double v55; // st4
  double v56; // st6
  double v57; // st3
  int v58; // ecx
  double v59; // st4
  float *v60; // edx
  double v61; // st3
  double v62; // st2
  float *v63; // eax
  int *v64; // esi
  int v65; // eax
  int *v66; // edi
  int *v67; // eax
  int v68; // eax
  float **v69; // edx
  int i; // edi
  int v71; // ecx
  bool v72; // cc
  int v73; // ebp
  int v74; // eax
  int v75; // edx
  char v76; // bl
  _BYTE *v77; // edx
  int v78; // edi
  int v79; // edx
  int v80; // ebp
  int v81; // eax
  _DWORD *v82; // ecx
  float v84; // [esp+14h] [ebp-34h]
  float v85; // [esp+18h] [ebp-30h] BYREF
  float v86; // [esp+1Ch] [ebp-2Ch]
  float v87; // [esp+20h] [ebp-28h]
  float v88; // [esp+24h] [ebp-24h] BYREF
  float v89; // [esp+28h] [ebp-20h]
  float v90; // [esp+2Ch] [ebp-1Ch]
  float v91; // [esp+30h] [ebp-18h] BYREF
  float v92; // [esp+34h] [ebp-14h]
  float v93; // [esp+38h] [ebp-10h]
  float v94; // [esp+3Ch] [ebp-Ch] BYREF
  float v95; // [esp+40h] [ebp-8h]
  float v96; // [esp+44h] [ebp-4h]

  v11 = *(float *)&a10;
  if ( a1 < 4 )
    return 0;
  v13 = a5;
  if ( a6 >= a5 )
    a6 = a5;
  v88 = *a2;
  v89 = a2[1];
  v90 = a2[2];
  v85 = *a2;
  v86 = a2[1];
  v87 = a2[2];
  v14 = a2 + 1;
  v15 = a1;
  do
  {
    v16 = v90;
    if ( v90 >= (double)v14[1] )
      v16 = v14[1];
    v17 = v89;
    if ( v89 >= (double)*v14 )
      v17 = *v14;
    v18 = v88;
    if ( v88 >= (double)*(v14 - 1) )
      v18 = *(v14 - 1);
    v91 = v18;
    v88 = v91;
    v92 = v17;
    v89 = v92;
    v93 = v16;
    v19 = v14[1];
    v90 = v93;
    v20 = v87 < v19;
    v21 = v87 == v19;
    v22 = v87;
    if ( v20 || v21 )
      v22 = v14[1];
    v23 = *v14;
    v24 = v86 < v23;
    v25 = v86 == v23;
    v26 = v86;
    if ( v24 || v25 )
      v26 = *v14;
    v27 = *(v14 - 1);
    v28 = v85 < v27;
    v29 = v85 == v27;
    v30 = v85;
    if ( v28 || v29 )
      v30 = *(v14 - 1);
    v94 = v30;
    v85 = v94;
    v95 = v26;
    v86 = v95;
    v96 = v22;
    v14 += 3;
    --v15;
    v87 = v96;
  }
  while ( v15 );
  v84 = sqrt((v85 - v88) * (v85 - v88) + (v86 - v89) * (v86 - v89) + (v87 - v90) * (v87 - v90));
  v31 = a11 * 2.5;
  v32 = v88 - v31;
  v88 = v32;
  v33 = v32;
  v34 = v89 - v31;
  v89 = v34;
  v35 = v34;
  v36 = v90 - v31;
  v37 = v35;
  v90 = v36;
  v38 = v85 + v31;
  v85 = v38;
  v39 = v36;
  v40 = v86 + v31;
  v41 = v39;
  v86 = v40;
  v42 = v40;
  v43 = v31;
  v44 = v42;
  v45 = v43 + v87;
  v87 = v45;
  if ( a5 > 0 )
  {
    v46 = (float *)(a4 + 12);
    v47 = a5;
    do
    {
      v48 = *v46;
      v46 += 4;
      --v47;
      *(v46 - 4) = v48 - a11;
    }
    while ( v47 );
  }
  v49 = 0;
  flt_10056870 = sqrt((v45 - v41) * (v45 - v41) + (v44 - v37) * (v44 - v37) + (v38 - v33) * (v38 - v33)) * 0.001;
  v50 = cos(flt_10056874 * 0.017453292);
  v51 = 0.0;
  v52 = v84;
  while ( 1 )
  {
    v54 = v52;
    v55 = v51;
    v56 = v54;
    v91 = v55;
    v92 = v55;
    v93 = v55;
    if ( v49 % 2 )
      v57 = 1.0;
    else
      v57 = -1.0;
    v58 = 0;
    *(&v91 + v49 / 2) = v57;
    if ( a5 > 0 )
    {
      v59 = v93;
      v60 = (float *)(a4 + 4);
      v61 = v92;
      v62 = v91;
      while ( v60[1] * v59 + *(v60 - 1) * v62 + v61 * *v60 <= v50 )
      {
        ++v58;
        v60 += 4;
        if ( v58 >= a5 )
          goto LABEL_35;
      }
      v63 = &v85;
      if ( !(v49 % 2) )
        v63 = &v88;
      *v63 = v62 * (v56 * 0.5) + *v63;
      v63[1] = v61 * (v56 * 0.5) + v63[1];
      v63[2] = v59 * (v56 * 0.5) + v63[2];
LABEL_35:
      v55 = 0.0;
    }
    if ( ++v49 >= 6 )
      break;
    v53 = v55;
    v52 = v56;
    v51 = v53;
  }
  v94 = v85;
  v95 = v86;
  v91 = v88;
  v92 = v89;
  v96 = v87;
  v93 = v90;
  v64 = sub_100281B0(&v91, &v94);
  if ( a6 )
  {
    while ( 1 )
    {
      --a6;
      v65 = sub_100273C0(v13, v64, 0.0099999998);
      if ( v65 < 0 )
        break;
      v66 = v64;
      v67 = (int *)sub_10028490((float **)v64, a4 + 16 * v65);
      v64 = v67;
      if ( !v67 || !sub_10027180(v67) )
      {
        v64 = v66;
        break;
      }
      if ( v66 )
      {
        if ( v66[6] )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v66[6]);
          v66[6] = 0;
        }
        v66[7] = 0;
        v66[8] = 0;
        v66[6] = 0;
        if ( v66[3] )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v66[3]);
          v66[3] = 0;
        }
        v66[4] = 0;
        v66[5] = 0;
        v66[3] = 0;
        if ( *v66 )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *v66);
          *v66 = 0;
        }
        v66[1] = 0;
        v66[2] = 0;
        *v66 = 0;
        (*(void (__thiscall **)(int, int *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v66);
      }
      if ( !a6 )
        break;
      v13 = a5;
    }
  }
  v68 = (*(int (__stdcall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(4 * (v64[4] + v64[7]) + 4, 261, a3);
  v69 = (float **)a10;
  *a10 = v68;
  *a10 = 0;
  *(_DWORD *)(*a10)++ = -1;
  i = *a10;
  v71 = 0;
  v72 = v64[4] <= 0;
  v85 = 0.0;
  if ( !v72 )
  {
    do
    {
      v73 = v71 + 1;
      v74 = 1;
      if ( v71 + 1 < v64[4] )
      {
        v75 = v64[3];
        v76 = *(_BYTE *)(v75 + 4 * v71 + 3);
        v77 = (_BYTE *)(v75 + 4 * v71 + 7);
        do
        {
          if ( v76 != *v77 )
            break;
          ++v73;
          ++v74;
          v77 += 4;
        }
        while ( v73 < v64[4] );
        v11 = a11;
      }
      *(_DWORD *)(*a10 + 4 * i) = v74;
      for ( i = ++*(_DWORD *)LODWORD(v11); v74; ++v71 )
      {
        *(_DWORD *)(*a10 + 4 * i) = *(unsigned __int8 *)(v64[3] + 4 * v71 + 2);
        i = ++*(_DWORD *)LODWORD(v11);
        --v74;
      }
      ++LODWORD(v85);
    }
    while ( v71 < v64[4] );
    v69 = (float **)a10;
  }
  **v69 = v85;
  *a8 = *v64;
  *a9 = v64[1];
  v78 = 0;
  if ( v64[1] > 0 )
  {
    v79 = 0;
    do
    {
      v80 = *(_DWORD *)(*v64 + v79 + 4);
      v81 = *(_DWORD *)(v79 + *v64 + 8);
      v82 = (_DWORD *)(v79 + *a8);
      *v82 = *(_DWORD *)(*v64 + v79);
      v82[1] = v80;
      ++v78;
      v82[2] = v81;
      v79 += 12;
    }
    while ( v78 < v64[1] );
  }
  v64[2] = 0;
  v64[1] = 0;
  *v64 = 0;
  if ( v64[6] )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v64[6]);
    v64[6] = 0;
  }
  v64[7] = 0;
  v64[8] = 0;
  v64[6] = 0;
  if ( v64[3] )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v64[3]);
    v64[3] = 0;
  }
  v64[4] = 0;
  v64[5] = 0;
  v64[3] = 0;
  if ( *v64 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *v64);
    *v64 = 0;
  }
  v64[1] = 0;
  v64[2] = 0;
  *v64 = 0;
  (*(void (__thiscall **)(int, int *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v64);
  return 1;
}
