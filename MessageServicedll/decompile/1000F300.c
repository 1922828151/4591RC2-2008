/*
 * func-name: sub_1000F300
 * func-address: 0x1000f300
 * callers: 0x1000e810
 * callees: 0x10009da0, 0x1000b630, 0x1001dec0
 */

int __stdcall sub_1000F300(int *a1, int a2, _WORD *a3)
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
  int **v19; // edi
  int *v20; // edx
  int v21; // ecx
  int v22; // eax
  int *v23; // ecx
  int v24; // edi
  int v25; // eax
  int v26; // eax
  int *v27; // edi
  int v28; // eax
  int v29; // ebp
  unsigned int v30; // edi
  int v31; // eax
  unsigned int j; // edi
  int v33; // ecx
  int v34; // ebp
  int v35; // ebx
  int *v36; // eax
  unsigned int v37; // ebp
  int v38; // ecx
  int v39; // eax
  int v40; // edi
  ldiv_t v41; // rax
  unsigned int v42; // eax
  int v43; // ecx
  unsigned int v44; // esi
  int v45; // eax
  int v46; // ebx
  int v47; // ebp
  int v48; // ecx
  _DWORD *v49; // esi
  _DWORD *v50; // esi
  int v51; // ecx
  _DWORD *v52; // esi
  int v53; // ecx
  int v54; // eax
  int result; // eax
  unsigned int v56; // [esp+14h] [ebp-24h]
  unsigned int v57; // [esp+14h] [ebp-24h]
  int *v58; // [esp+18h] [ebp-20h]
  int *v59; // [esp+1Ch] [ebp-1Ch]
  int *v60; // [esp+20h] [ebp-18h]
  int *v61; // [esp+24h] [ebp-14h]
  int v62; // [esp+24h] [ebp-14h]
  int v63; // [esp+2Ch] [ebp-Ch]
  int v64; // [esp+34h] [ebp-4h]
  unsigned int v65; // [esp+3Ch] [ebp+4h]

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
    v56 = v11;
    if ( !v10 || v11 >= (a1[6] - v10) >> 3 )
      invalid_parameter_noinfo();
    v12 = a1[5];
    v58 = *(int **)(v12 + 8 * v11);
    v59 = *(int **)(v12 + 8 * v11 + 4);
    while ( 1 )
    {
      v13 = a1[5];
      if ( !v13 || v11 + 1 >= (a1[6] - v13) >> 3 )
        invalid_parameter_noinfo();
      v14 = (int **)(a1[5] + 8 * (v11 + 1));
      if ( !v58 || v58 != *v14 )
        invalid_parameter_noinfo();
      if ( v59 == v14[1] )
        break;
      if ( !v58 )
        invalid_parameter_noinfo();
      if ( v59 == (int *)v58[1] )
        invalid_parameter_noinfo();
      v15 = ldiv(*((unsigned __int16 *)v59 + 4) ^ 0xDEADBEEF, 127773);
      if ( (a1[8] & (16807 * v15.rem - 2836 * v15.quot + (16807 * v15.rem - 2836 * v15.quot < 0 ? 0x7FFFFFFF : 0))) == v56 )
      {
        if ( v59 == (int *)v58[1] )
          invalid_parameter_noinfo();
        v11 = v56;
        v59 = (int *)*v59;
      }
      else
      {
        v60 = v58;
        v63 = a1[2];
        if ( v59 == (int *)v58[1] )
          invalid_parameter_noinfo();
        v16 = (int *)*v59;
        v61 = (int *)*v59;
        if ( v58 != a1 + 1 )
          invalid_parameter_noinfo();
        if ( v16 != (int *)v63 )
        {
          for ( i = v56; ; --i )
          {
            v18 = a1[5];
            if ( !v18 || i >= (a1[6] - v18) >> 3 )
              invalid_parameter_noinfo();
            v19 = (int **)(8 * i + a1[5]);
            if ( v58 != *v19 )
              invalid_parameter_noinfo();
            v20 = v59;
            if ( v59 != v19[1] )
              break;
            v21 = a1[5];
            if ( !v21 || i >= (a1[6] - v21) >> 3 )
            {
              invalid_parameter_noinfo();
              v20 = v59;
            }
            v22 = a1[5];
            *(_DWORD *)(v22 + 8 * i) = v58;
            v23 = v61;
            *(_DWORD *)(v22 + 8 * i + 4) = v61;
            if ( !i )
              goto LABEL_49;
          }
          v23 = v61;
LABEL_49:
          v24 = a1[2];
          *(_DWORD *)v20[1] = v23;
          *(_DWORD *)v23[1] = v24;
          **(_DWORD **)(v24 + 4) = v20;
          v25 = *(_DWORD *)(v24 + 4);
          *(_DWORD *)(v24 + 4) = v23[1];
          v23[1] = v20[1];
          v20[1] = v25;
          v26 = a1[2];
          v27 = *(int **)(v26 + 4);
          if ( v27 == (int *)v26 )
            invalid_parameter_noinfo();
          v28 = a1[5];
          v29 = a1[2];
          v59 = v27;
          v30 = a1[9] + 1;
          v58 = a1 + 1;
          if ( !v28 || v30 >= (a1[6] - v28) >> 3 )
            invalid_parameter_noinfo();
          v31 = a1[5];
          *(_DWORD *)(v31 + 8 * v30) = a1 + 1;
          *(_DWORD *)(v31 + 8 * v30 + 4) = v29;
        }
        for ( j = a1[9]; v56 < j; *(_DWORD *)(v39 + v35 + 4) = v59 )
        {
          v33 = a1[5];
          v64 = a1[2];
          if ( !v33 || j >= (a1[6] - v33) >> 3 )
            invalid_parameter_noinfo();
          v34 = a1[5];
          v35 = 8 * j;
          v36 = *(int **)(v34 + 8 * j);
          v37 = 8 * j + v34;
          if ( !v36 || v36 != a1 + 1 )
            invalid_parameter_noinfo();
          if ( *(_DWORD *)(v37 + 4) != v64 )
            break;
          v38 = a1[5];
          if ( !v38 || j >= (a1[6] - v38) >> 3 )
            invalid_parameter_noinfo();
          v39 = a1[5];
          --j;
          *(_DWORD *)(v39 + v35) = v58;
        }
        v40 = a1[2];
        if ( v60 != a1 + 1 )
          invalid_parameter_noinfo();
        if ( v61 == (int *)v40 )
          break;
        v11 = v56;
        v58 = v60;
        v59 = v61;
      }
    }
    ++a1[9];
    v3 = a1;
  }
  v41 = ldiv((unsigned __int16)*a3 ^ 0xDEADBEEF, 127773);
  v42 = (16807 * v41.rem - 2836 * v41.quot + (16807 * v41.rem - 2836 * v41.quot < 0 ? 0x7FFFFFFF : 0)) & v3[8];
  v57 = v42;
  if ( v3[9] <= v42 )
  {
    v42 += -1 - ((unsigned int)v3[8] >> 1);
    v57 = v42;
  }
  v43 = v3[5];
  v65 = v42;
  v44 = v42 + 1;
  if ( !v43 || v44 >= (v3[6] - v43) >> 3 )
    invalid_parameter_noinfo();
  v45 = v3[5];
  v46 = *(_DWORD *)(v45 + 8 * v44);
  v47 = *(_DWORD *)(v45 + 8 * v44 + 4);
  while ( 1 )
  {
    v48 = v3[5];
    if ( !v48 || v57 >= (v3[6] - v48) >> 3 )
      invalid_parameter_noinfo();
    v49 = (_DWORD *)(8 * v57 + v3[5]);
    if ( !v46 || v46 != *v49 )
      invalid_parameter_noinfo();
    if ( v47 == v49[1] )
      break;
    if ( !v46 )
      invalid_parameter_noinfo();
    v47 = *(_DWORD *)(v47 + 4);
    if ( v47 == *(_DWORD *)(v46 + 4) )
    {
      invalid_parameter_noinfo();
      if ( v47 == *(_DWORD *)(v46 + 4) )
        invalid_parameter_noinfo();
    }
    if ( *a3 >= *(_WORD *)(v47 + 8) )
    {
      if ( v47 == *(_DWORD *)(v46 + 4) )
        invalid_parameter_noinfo();
      if ( *(_WORD *)(v47 + 8) >= *a3 )
      {
        result = a2;
        *(_DWORD *)a2 = v46;
        *(_DWORD *)(a2 + 4) = v47;
        *(_BYTE *)(a2 + 8) = 0;
        return result;
      }
      if ( v47 == *(_DWORD *)(v46 + 4) )
        invalid_parameter_noinfo();
      v47 = *(_DWORD *)v47;
      break;
    }
  }
  v50 = sub_1000B630(v47, *(_DWORD *)(v47 + 4), (int)a3);
  sub_1001DEC0(1, v3 + 1);
  *(_DWORD *)(v47 + 4) = v50;
  *(_DWORD *)v50[1] = v50;
  if ( !v46 )
    invalid_parameter_noinfo();
  v62 = *(_DWORD *)(v47 + 4);
  if ( v62 == *(_DWORD *)(v46 + 4) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v51 = v3[5];
    if ( !v51 || v65 >= (v3[6] - v51) >> 3 )
      invalid_parameter_noinfo();
    v52 = (_DWORD *)(8 * v65 + v3[5]);
    if ( !v46 || v46 != *v52 )
      invalid_parameter_noinfo();
    if ( v47 != v52[1] )
      break;
    v53 = v3[5];
    if ( !v53 || v65 >= (v3[6] - v53) >> 3 )
      invalid_parameter_noinfo();
    v54 = v3[5];
    *(_DWORD *)(v54 + 8 * v65) = v46;
    *(_DWORD *)(v54 + 8 * v65 + 4) = v62;
    if ( !v65 )
      break;
    --v65;
  }
  result = a2;
  *(_DWORD *)a2 = v46;
  *(_DWORD *)(a2 + 4) = v62;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
