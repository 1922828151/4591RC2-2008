/*
 * func-name: sub_100046D0
 * func-address: 0x100046d0
 * callers: 0x1000fac0
 * callees: 0x10004540, 0x10034f10
 */

char __usercall sub_100046D0@<al>(
        int a1@<esi>,
        int a2,
        int a3,
        int a4,
        int *a5,
        _DWORD *a6,
        unsigned __int16 *a7,
        int a8)
{
  int v8; // eax
  BOOL v10; // edx
  _DWORD *v11; // esi
  int v12; // edi
  float *v13; // ecx
  int *v14; // ebp
  unsigned __int16 *v15; // ebx
  int v16; // eax
  int v17; // edx
  int v18; // edi
  int v19; // edx
  double v20; // st7
  int v21; // edx
  int v22; // eax
  double v23; // st7
  float *v24; // eax
  double v25; // st6
  double v26; // st5
  float *v27; // edx
  double v28; // st4
  double v29; // st3
  double v30; // st2
  long double v31; // st7
  long double v32; // st7
  int v33; // ebp
  _DWORD *v34; // eax
  unsigned __int16 *v35; // esi
  char *v36; // edx
  float *v37; // ecx
  int v38; // eax
  int v39; // ebx
  int v40; // edi
  float *v41; // edx
  float *v42; // edx
  float *v43; // edx
  _DWORD *v44; // edx
  unsigned __int16 *v45; // ecx
  char *v46; // eax
  float *v47; // edi
  int v48; // ebp
  int v49; // ebx
  double v50; // st7
  double v51; // st6
  double v52; // st5
  float *v53; // eax
  double v54; // st7
  double v55; // st7
  double v56; // st6
  double v57; // st5
  float *v58; // eax
  double v59; // st7
  double v60; // st7
  double v61; // st6
  double v62; // st5
  float *v63; // eax
  double v64; // st7
  bool v65; // zf
  int v66; // edi
  float *v67; // edx
  float *v68; // ecx
  char *v69; // esi
  long double v70; // st5
  long double v71; // st5
  int *v73; // [esp+10h] [ebp-24h]
  unsigned __int16 *v74; // [esp+14h] [ebp-20h]
  char *v75; // [esp+14h] [ebp-20h]
  unsigned __int16 *v76; // [esp+18h] [ebp-1Ch]
  int *v77; // [esp+18h] [ebp-1Ch]
  int *v78; // [esp+1Ch] [ebp-18h]
  char *v79; // [esp+1Ch] [ebp-18h]
  int v80; // [esp+20h] [ebp-14h]
  int *v81; // [esp+20h] [ebp-14h]
  char *v82; // [esp+20h] [ebp-14h]
  int v83; // [esp+24h] [ebp-10h]
  int v84; // [esp+28h] [ebp-Ch]
  int v85; // [esp+28h] [ebp-Ch]
  int v86[2]; // [esp+2Ch] [ebp-8h] BYREF
  int retaddr; // [esp+34h] [ebp+0h]

  if ( !a4 || !a7 || !a2 || !a3 )
    return 0;
  v8 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 12 * a2, 264);
  v80 = v8;
  if ( !v8 )
    return 0;
  v10 = (_BYTE)a8 != 0;
  v11 = a6;
  v12 = (int)a5;
  v13 = (float *)(v8 + 8);
  v76 = (unsigned __int16 *)a6 + 2 - v10;
  v73 = &a5[2 - v10];
  v14 = &a5[v10 + 1];
  v15 = (unsigned __int16 *)a6;
  v78 = a5;
  v74 = (unsigned __int16 *)a6 + v10 + 1;
  v83 = a2;
  while ( 1 )
  {
    if ( v12 )
    {
      v16 = *v78;
      v17 = *v14;
      v18 = *v73;
    }
    else if ( v11 )
    {
      v16 = *v15;
      v17 = *v74;
      v18 = *v76;
    }
    else
    {
      v16 = 0;
      v17 = 1;
      v18 = 2;
    }
    v19 = 3 * v17;
    v20 = *(float *)(a4 + 4 * v19);
    v21 = a4 + 4 * v19;
    v22 = 3 * v16;
    v23 = v20 - *(float *)(a4 + 4 * v22);
    v24 = (float *)(a4 + 4 * v22);
    v25 = *(float *)(v21 + 4) - v24[1];
    v26 = *(float *)(v21 + 8) - v24[2];
    v27 = (float *)(a4 + 12 * v18);
    v28 = *v27 - *v24;
    v29 = v27[1] - v24[1];
    v30 = v27[2] - v24[2];
    *(v13 - 2) = v29 * v26 - v30 * v25;
    *(v13 - 1) = v30 * v23 - v26 * v28;
    *v13 = v28 * v25 - v23 * v29;
    v31 = sqrt(*v13 * *v13 + *(v13 - 2) * *(v13 - 2) + *(v13 - 1) * *(v13 - 1));
    if ( 0.0 != v31 )
    {
      v32 = 1.0 / v31;
      *(v13 - 2) = *(v13 - 2) * v32;
      *(v13 - 1) = *(v13 - 1) * v32;
      *v13 = v32 * *v13;
    }
    v73 += 3;
    v78 += 3;
    v74 += 3;
    v76 += 3;
    v15 += 3;
    v14 += 3;
    v13 += 3;
    if ( !--v83 )
      break;
    v11 = a6;
    v12 = (int)a5;
  }
  v33 = v80;
  memset(a7, 0, 12 * a3);
  v75 = (char *)(*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_100580A0 + 8))(
                  dword_100580A0,
                  12 * a3,
                  264,
                  a1);
  memset(v75, 0, 12 * a3);
  v34 = a6;
  v35 = a7 + 2;
  v36 = (char *)a6 - v80;
  v81 = a6;
  v37 = (float *)(v33 + 8);
  v84 = a2;
  while ( 1 )
  {
    if ( v34 )
    {
      v38 = *v81;
      v39 = *(_DWORD *)((char *)v37 + (_DWORD)v36 - 4);
      v40 = *(_DWORD *)((char *)v37 + (_DWORD)v36);
    }
    else
    {
      v38 = *(v35 - 2);
      v39 = *(v35 - 1);
      v40 = *v35;
    }
    v41 = (float *)&v75[12 * v38];
    if ( 0.0 == *v41 && 0.0 == v41[1] && 0.0 == v41[2] )
    {
      *v41 = *(v37 - 2);
      v41[1] = *(v37 - 1);
      v41[2] = *v37;
    }
    v42 = (float *)&v75[12 * v39];
    if ( 0.0 == *v42 && 0.0 == v42[1] && 0.0 == v42[2] )
    {
      *v42 = *(v37 - 2);
      v42[1] = *(v37 - 1);
      v42[2] = *v37;
    }
    v43 = (float *)&v75[12 * v40];
    if ( 0.0 == *v43 && 0.0 == v43[1] && 0.0 == v43[2] )
    {
      *v43 = *(v37 - 2);
      v43[1] = *(v37 - 1);
      v43[2] = *v37;
    }
    v81 += 3;
    v35 += 3;
    v37 += 3;
    if ( !--v84 )
      break;
    v36 = (char *)a6 - v33;
    v34 = a6;
  }
  v44 = a6;
  v45 = a7 + 2;
  v46 = (char *)a6 - v33;
  v77 = a6;
  v47 = (float *)(v33 + 8);
  v82 = (char *)(a7 + 2);
  v79 = (char *)a6 - v33;
  v85 = a3;
  while ( 1 )
  {
    if ( v44 )
    {
      v48 = *(_DWORD *)((char *)v47 + (_DWORD)v46 - 4);
      v49 = *(_DWORD *)((char *)v47 + (_DWORD)v46);
      v86[0] = *v77;
    }
    else
    {
      v48 = *(v45 - 1);
      v49 = *v45;
      v86[0] = *(v45 - 2);
    }
    v86[1] = v48;
    retaddr = v49;
    v50 = sub_10004540(v86[0], v86, (int)a5);
    v51 = *(v47 - 2) * v50;
    v52 = *(v47 - 1) * v50;
    v53 = (float *)(a8 + 12 * v86[0]);
    v54 = v50 * *v47;
    *v53 = v51 + *v53;
    v53[1] = v52 + v53[1];
    v53[2] = v54 + v53[2];
    v55 = sub_10004540(v48, v86, (int)a5);
    v56 = *(v47 - 2) * v55;
    v57 = *(v47 - 1) * v55;
    v58 = (float *)(a8 + 12 * v48);
    v59 = v55 * *v47;
    *v58 = v56 + *v58;
    v58[1] = v57 + v58[1];
    v58[2] = v59 + v58[2];
    v60 = sub_10004540(v49, v86, (int)a5);
    v61 = *(v47 - 2) * v60;
    v82 += 6;
    v77 += 3;
    v62 = *(v47 - 1) * v60;
    v63 = (float *)(a8 + 12 * v49);
    v64 = v60 * *v47;
    v47 += 3;
    v65 = v85-- == 1;
    *v63 = v61 + *v63;
    v63[1] = v62 + v63[1];
    v63[2] = v64 + v63[2];
    if ( v65 )
      break;
    v45 = (unsigned __int16 *)v82;
    v46 = v79;
    v44 = a6;
  }
  v66 = a4;
  v67 = (float *)v75;
  v68 = (float *)(a8 + 8);
  v69 = &v75[-a8];
  do
  {
    if ( 0.0 == *(v68 - 2) && 0.0 == *(v68 - 1) && 0.0 == *v68 )
    {
      *(v68 - 2) = *v67;
      *(v68 - 1) = *(float *)((char *)v68 + (_DWORD)v69 - 4);
      *v68 = *(float *)((char *)v68 + (_DWORD)v69);
    }
    v70 = sqrt(*v68 * *v68 + *(v68 - 1) * *(v68 - 1) + *(v68 - 2) * *(v68 - 2));
    if ( 0.0 != v70 )
    {
      v71 = 1.0 / v70;
      *(v68 - 2) = *(v68 - 2) * v71;
      *(v68 - 1) = v71 * *(v68 - 1);
      *v68 = v71 * *v68;
    }
    v67 += 3;
    v68 += 3;
    --v66;
  }
  while ( v66 );
  if ( v75 )
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v75);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v83);
  return 1;
}
