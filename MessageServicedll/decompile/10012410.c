/*
 * func-name: sub_10012410
 * func-address: 0x10012410
 * callers: 0x10011070
 * callees: 0x10009da0, 0x1000b810, 0x1001dec0
 */

int __stdcall sub_10012410(int *a1, int a2, _DWORD *a3)
{
  int *v3; // edi
  unsigned int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // ecx
  unsigned int v11; // edi
  int v12; // eax
  int v13; // ecx
  int **v14; // edi
  ldiv_t v15; // rax
  int *v16; // edi
  unsigned int i; // ebp
  int v18; // ecx
  int v19; // ebx
  int **v20; // edi
  int *v21; // edx
  int v22; // ecx
  int v23; // eax
  _DWORD *v24; // ecx
  int v25; // edi
  int v26; // eax
  int v27; // eax
  int *v28; // edi
  int v29; // eax
  int v30; // ebp
  unsigned int v31; // edi
  int v32; // eax
  unsigned int j; // edi
  int v34; // ecx
  int v35; // ebp
  int v36; // ebx
  int *v37; // eax
  unsigned int v38; // ebp
  int v39; // ecx
  int v40; // eax
  int v41; // edi
  ldiv_t v42; // rax
  unsigned int v43; // eax
  int v44; // ecx
  unsigned int v45; // esi
  int v46; // eax
  int v47; // ebx
  _DWORD *v48; // ebp
  int v49; // ecx
  _DWORD *v50; // esi
  _DWORD *v51; // esi
  int v52; // ecx
  _DWORD *v53; // esi
  int v54; // ecx
  int v55; // eax
  int result; // eax
  unsigned int v57; // [esp+14h] [ebp-24h]
  unsigned int v58; // [esp+14h] [ebp-24h]
  int *v59; // [esp+18h] [ebp-20h]
  int *v60; // [esp+1Ch] [ebp-1Ch]
  int *v61; // [esp+20h] [ebp-18h]
  _DWORD *v62; // [esp+24h] [ebp-14h]
  int v63; // [esp+24h] [ebp-14h]
  int v64; // [esp+2Ch] [ebp-Ch]
  int v65; // [esp+34h] [ebp-4h]
  unsigned int v66; // [esp+3Ch] [ebp+4h]

  v3 = a1;
  v4 = a1[9];
  if ( v4 <= (unsigned int)a1[3] >> 2 )
  {
    v5 = a1[5];
    if ( v5 )
      v6 = (a1[6] - v5) >> 3;
    else
      v6 = 0;
    if ( v6 - 1 > v4 )
    {
      v9 = a1[8];
      if ( v9 < v4 )
        a1[8] = 2 * v9 + 1;
    }
    else
    {
      if ( v5 )
        v7 = (a1[6] - v5) >> 3;
      else
        v7 = 0;
      v8 = 2 * v7 - 3;
      a1[8] = v8;
      sub_10009DA0((int)(a1 + 4), v8 + 2, (_BYTE)a1 + 4, a1[2]);
    }
    v10 = a1[5];
    v11 = a1[9] - ((unsigned int)a1[8] >> 1) - 1;
    v57 = v11;
    if ( !v10 || v11 >= (a1[6] - v10) >> 3 )
      invalid_parameter_noinfo();
    v12 = a1[5];
    v59 = *(int **)(v12 + 8 * v11);
    v60 = *(int **)(v12 + 8 * v11 + 4);
    while ( 1 )
    {
      v13 = a1[5];
      if ( !v13 || v11 + 1 >= (a1[6] - v13) >> 3 )
        invalid_parameter_noinfo();
      v14 = (int **)(a1[5] + 8 * (v11 + 1));
      if ( !v59 || v59 != *v14 )
        invalid_parameter_noinfo();
      if ( v60 == v14[1] )
        break;
      if ( !v59 )
        invalid_parameter_noinfo();
      if ( v60 == (int *)v59[1] )
        invalid_parameter_noinfo();
      v15 = ldiv(v60[2] ^ 0xDEADBEEF, 127773);
      if ( (a1[8] & (16807 * v15.rem - 2836 * v15.quot + (16807 * v15.rem - 2836 * v15.quot < 0 ? 0x7FFFFFFF : 0))) == v57 )
      {
        if ( v60 == (int *)v59[1] )
          invalid_parameter_noinfo();
        v11 = v57;
        v60 = (int *)*v60;
      }
      else
      {
        v61 = v59;
        v64 = a1[2];
        if ( v60 == (int *)v59[1] )
          invalid_parameter_noinfo();
        v16 = (int *)*v60;
        v62 = (_DWORD *)*v60;
        if ( v59 != a1 + 1 )
          invalid_parameter_noinfo();
        if ( v16 != (int *)v64 )
        {
          for ( i = v57; ; --i )
          {
            v18 = a1[5];
            if ( !v18 || i >= (a1[6] - v18) >> 3 )
              invalid_parameter_noinfo();
            v19 = 8 * i;
            v20 = (int **)(8 * i + a1[5]);
            if ( v59 != *v20 )
              invalid_parameter_noinfo();
            v21 = v60;
            if ( v60 != v20[1] )
              break;
            v22 = a1[5];
            if ( !v22 || i >= (a1[6] - v22) >> 3 )
            {
              invalid_parameter_noinfo();
              v21 = v60;
            }
            v23 = a1[5];
            *(_DWORD *)(v19 + v23) = v59;
            v24 = v62;
            *(_DWORD *)(v19 + v23 + 4) = v62;
            if ( !i )
              goto LABEL_49;
          }
          v24 = v62;
LABEL_49:
          v25 = a1[2];
          *(_DWORD *)v21[1] = v24;
          *(_DWORD *)v24[1] = v25;
          **(_DWORD **)(v25 + 4) = v21;
          v26 = *(_DWORD *)(v25 + 4);
          *(_DWORD *)(v25 + 4) = v24[1];
          v24[1] = v21[1];
          v21[1] = v26;
          v27 = a1[2];
          v28 = *(int **)(v27 + 4);
          if ( v28 == (int *)v27 )
            invalid_parameter_noinfo();
          v29 = a1[5];
          v30 = a1[2];
          v60 = v28;
          v31 = a1[9] + 1;
          v59 = a1 + 1;
          if ( !v29 || v31 >= (a1[6] - v29) >> 3 )
            invalid_parameter_noinfo();
          v32 = a1[5];
          *(_DWORD *)(v32 + 8 * v31) = a1 + 1;
          *(_DWORD *)(v32 + 8 * v31 + 4) = v30;
        }
        for ( j = a1[9]; v57 < j; *(_DWORD *)(v40 + v36 + 4) = v60 )
        {
          v34 = a1[5];
          v65 = a1[2];
          if ( !v34 || j >= (a1[6] - v34) >> 3 )
            invalid_parameter_noinfo();
          v35 = a1[5];
          v36 = 8 * j;
          v37 = *(int **)(v35 + 8 * j);
          v38 = 8 * j + v35;
          if ( !v37 || v37 != a1 + 1 )
            invalid_parameter_noinfo();
          if ( *(_DWORD *)(v38 + 4) != v65 )
            break;
          v39 = a1[5];
          if ( !v39 || j >= (a1[6] - v39) >> 3 )
            invalid_parameter_noinfo();
          v40 = a1[5];
          --j;
          *(_DWORD *)(v40 + v36) = v59;
        }
        v41 = a1[2];
        if ( v61 != a1 + 1 )
          invalid_parameter_noinfo();
        if ( v62 == (_DWORD *)v41 )
          break;
        v11 = v57;
        v59 = v61;
        v60 = v62;
      }
    }
    ++a1[9];
    v3 = a1;
  }
  v42 = ldiv(*a3 ^ 0xDEADBEEF, 127773);
  v43 = (16807 * v42.rem - 2836 * v42.quot + (16807 * v42.rem - 2836 * v42.quot < 0 ? 0x7FFFFFFF : 0)) & v3[8];
  v58 = v43;
  if ( v3[9] <= v43 )
  {
    v43 += -1 - ((unsigned int)v3[8] >> 1);
    v58 = v43;
  }
  v44 = v3[5];
  v66 = v43;
  v45 = v43 + 1;
  if ( !v44 || v45 >= (v3[6] - v44) >> 3 )
    invalid_parameter_noinfo();
  v46 = v3[5];
  v47 = *(_DWORD *)(v46 + 8 * v45);
  v48 = *(_DWORD **)(v46 + 8 * v45 + 4);
  while ( 1 )
  {
    v49 = v3[5];
    if ( !v49 || v58 >= (v3[6] - v49) >> 3 )
      invalid_parameter_noinfo();
    v50 = (_DWORD *)(8 * v58 + v3[5]);
    if ( !v47 || v47 != *v50 )
      invalid_parameter_noinfo();
    if ( v48 == (_DWORD *)v50[1] )
      break;
    if ( !v47 )
      invalid_parameter_noinfo();
    v48 = (_DWORD *)v48[1];
    if ( v48 == *(_DWORD **)(v47 + 4) )
    {
      invalid_parameter_noinfo();
      if ( v48 == *(_DWORD **)(v47 + 4) )
        invalid_parameter_noinfo();
    }
    if ( *a3 >= v48[2] )
    {
      if ( v48 == *(_DWORD **)(v47 + 4) )
        invalid_parameter_noinfo();
      if ( v48[2] >= *a3 )
      {
        result = a2;
        *(_DWORD *)a2 = v47;
        *(_DWORD *)(a2 + 4) = v48;
        *(_BYTE *)(a2 + 8) = 0;
        return result;
      }
      if ( v48 == *(_DWORD **)(v47 + 4) )
        invalid_parameter_noinfo();
      v48 = (_DWORD *)*v48;
      break;
    }
  }
  v51 = sub_1000B810((int)v48, v48[1], (int)a3);
  sub_1001DEC0(1, v3 + 1);
  v48[1] = v51;
  *(_DWORD *)v51[1] = v51;
  if ( !v47 )
    invalid_parameter_noinfo();
  v63 = v48[1];
  if ( v63 == *(_DWORD *)(v47 + 4) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v52 = v3[5];
    if ( !v52 || v66 >= (v3[6] - v52) >> 3 )
      invalid_parameter_noinfo();
    v53 = (_DWORD *)(8 * v66 + v3[5]);
    if ( !v47 || v47 != *v53 )
      invalid_parameter_noinfo();
    if ( v48 != (_DWORD *)v53[1] )
      break;
    v54 = v3[5];
    if ( !v54 || v66 >= (v3[6] - v54) >> 3 )
      invalid_parameter_noinfo();
    v55 = v3[5];
    *(_DWORD *)(v55 + 8 * v66) = v47;
    *(_DWORD *)(v55 + 8 * v66 + 4) = v63;
    if ( !v66 )
      break;
    --v66;
  }
  result = a2;
  *(_DWORD *)a2 = v47;
  *(_DWORD *)(a2 + 4) = v63;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
