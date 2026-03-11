/*
 * func-name: sub_1002A530
 * func-address: 0x1002a530
 * callers: 0x10026cd0, 0x10027c50, 0x10029880, 0x100372d0
 * callees: 0x10015200, 0x1002c040, 0x10035f10
 */

int __stdcall sub_1002A530(int *a1, int a2, _DWORD *a3)
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
  int v17; // ecx
  int v18; // ebx
  int **v19; // edi
  int *v20; // edx
  int v21; // ecx
  int v22; // eax
  _DWORD *v23; // ecx
  int v24; // ebx
  int v25; // eax
  int *v26; // ebx
  int v27; // eax
  unsigned int v28; // ebx
  int v29; // eax
  unsigned int j; // edi
  int v31; // ecx
  int **v32; // ebx
  int v33; // ecx
  int v34; // eax
  int v35; // edi
  ldiv_t v36; // rax
  unsigned int v37; // eax
  int v38; // ecx
  unsigned int v39; // esi
  int v40; // eax
  int v41; // ecx
  int *v42; // esi
  int v43; // ecx
  _DWORD *v44; // ebx
  int v45; // eax
  int v46; // ecx
  int v47; // ebx
  int v48; // ecx
  _DWORD *v49; // esi
  int v50; // ecx
  int v51; // eax
  int result; // eax
  unsigned int i; // [esp+10h] [ebp-30h]
  int v54; // [esp+10h] [ebp-30h]
  unsigned int v55; // [esp+10h] [ebp-30h]
  unsigned int v56; // [esp+14h] [ebp-2Ch]
  unsigned int v57; // [esp+14h] [ebp-2Ch]
  int *v58; // [esp+18h] [ebp-28h]
  int v59; // [esp+18h] [ebp-28h]
  int *v60; // [esp+1Ch] [ebp-24h]
  int *v61; // [esp+1Ch] [ebp-24h]
  int *v62; // [esp+20h] [ebp-20h]
  _DWORD *v63; // [esp+24h] [ebp-1Ch]
  int v64; // [esp+24h] [ebp-1Ch]
  int v65; // [esp+2Ch] [ebp-14h]
  int v66; // [esp+34h] [ebp-Ch]
  int v67; // [esp+3Ch] [ebp-4h]

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
      sub_10015200((int)(a1 + 4), v8 + 2, (_BYTE)a1 + 4, a1[2]);
    }
    v10 = a1[5];
    v11 = a1[9] - ((unsigned int)a1[8] >> 1) - 1;
    v56 = v11;
    if ( !v10 || v11 >= (a1[6] - v10) >> 3 )
      invalid_parameter_noinfo();
    v12 = a1[5];
    v58 = *(int **)(v12 + 8 * v11);
    v60 = *(int **)(v12 + 8 * v11 + 4);
    while ( 1 )
    {
      v13 = a1[5];
      if ( !v13 || v11 + 1 >= (a1[6] - v13) >> 3 )
        invalid_parameter_noinfo();
      v14 = (int **)(a1[5] + 8 * (v11 + 1));
      if ( !v58 || v58 != *v14 )
        invalid_parameter_noinfo();
      if ( v60 == v14[1] )
        break;
      if ( !v58 )
        invalid_parameter_noinfo();
      if ( v60 == (int *)v58[1] )
        invalid_parameter_noinfo();
      v15 = ldiv(v60[2] ^ 0xDEADBEEF, 127773);
      if ( (a1[8] & (16807 * v15.rem - 2836 * v15.quot + (16807 * v15.rem - 2836 * v15.quot < 0 ? 0x7FFFFFFF : 0))) == v56 )
      {
        if ( v60 == (int *)v58[1] )
          invalid_parameter_noinfo();
        v11 = v56;
        v60 = (int *)*v60;
      }
      else
      {
        v62 = v58;
        v65 = a1[2];
        if ( v60 == (int *)v58[1] )
          invalid_parameter_noinfo();
        v16 = (int *)*v60;
        v63 = (_DWORD *)*v60;
        if ( v58 != a1 + 1 )
          invalid_parameter_noinfo();
        if ( v16 != (int *)v65 )
        {
          for ( i = v56; ; --i )
          {
            v17 = a1[5];
            if ( !v17 || i >= (a1[6] - v17) >> 3 )
              invalid_parameter_noinfo();
            v18 = 8 * i;
            v19 = (int **)(8 * i + a1[5]);
            if ( v58 != *v19 )
              invalid_parameter_noinfo();
            v20 = v60;
            if ( v60 != v19[1] )
              break;
            v21 = a1[5];
            if ( !v21 || i >= (a1[6] - v21) >> 3 )
            {
              invalid_parameter_noinfo();
              v20 = v60;
            }
            v22 = a1[5];
            *(_DWORD *)(v18 + v22) = v58;
            v23 = v63;
            *(_DWORD *)(v18 + v22 + 4) = v63;
            if ( !i )
              goto LABEL_49;
          }
          v23 = v63;
LABEL_49:
          v24 = a1[2];
          *(_DWORD *)v20[1] = v23;
          *(_DWORD *)v23[1] = v24;
          **(_DWORD **)(v24 + 4) = v20;
          v54 = *(_DWORD *)(v24 + 4);
          *(_DWORD *)(v24 + 4) = v23[1];
          v23[1] = v20[1];
          v20[1] = v54;
          v25 = a1[2];
          v26 = *(int **)(v25 + 4);
          if ( v26 == (int *)v25 )
            invalid_parameter_noinfo();
          v60 = v26;
          v27 = a1[5];
          v28 = a1[9] + 1;
          v58 = a1 + 1;
          v66 = a1[2];
          if ( !v27 || v28 >= (a1[6] - v27) >> 3 )
            invalid_parameter_noinfo();
          v29 = a1[5];
          *(_DWORD *)(v29 + 8 * v28) = a1 + 1;
          *(_DWORD *)(v29 + 8 * v28 + 4) = v66;
        }
        for ( j = a1[9]; v56 < j; *(_DWORD *)(v34 + 8 * j-- + 4) = v60 )
        {
          v31 = a1[5];
          v67 = a1[2];
          if ( !v31 || j >= (a1[6] - v31) >> 3 )
            invalid_parameter_noinfo();
          v32 = (int **)(8 * j + a1[5]);
          if ( !*v32 || *v32 != a1 + 1 )
            invalid_parameter_noinfo();
          if ( v32[1] != (int *)v67 )
            break;
          v33 = a1[5];
          if ( !v33 || j >= (a1[6] - v33) >> 3 )
            invalid_parameter_noinfo();
          v34 = a1[5];
          *(_DWORD *)(v34 + 8 * j) = v58;
        }
        v35 = a1[2];
        if ( v62 != a1 + 1 )
          invalid_parameter_noinfo();
        if ( v63 == (_DWORD *)v35 )
          break;
        v11 = v56;
        v58 = v62;
        v60 = v63;
      }
    }
    ++a1[9];
    v3 = a1;
  }
  v36 = ldiv(*a3 ^ 0xDEADBEEF, 127773);
  v37 = (16807 * v36.rem - 2836 * v36.quot + (16807 * v36.rem - 2836 * v36.quot < 0 ? 0x7FFFFFFF : 0)) & v3[8];
  v55 = v37;
  if ( v3[9] <= v37 )
  {
    v37 += -1 - ((unsigned int)v3[8] >> 1);
    v55 = v37;
  }
  v38 = v3[5];
  v57 = v37;
  v39 = v37 + 1;
  if ( !v38 || v39 >= (v3[6] - v38) >> 3 )
    invalid_parameter_noinfo();
  v40 = v3[5];
  v41 = *(_DWORD *)(v40 + 8 * v39);
  v42 = *(int **)(v40 + 8 * v39 + 4);
  v59 = v41;
  while ( 1 )
  {
    v43 = v3[5];
    if ( !v43 || v55 >= (v3[6] - v43) >> 3 )
      invalid_parameter_noinfo();
    v44 = (_DWORD *)(8 * v55 + v3[5]);
    v45 = v59;
    if ( !v59 || v59 != *v44 )
    {
      invalid_parameter_noinfo();
      v45 = v59;
    }
    if ( v42 == (int *)v44[1] )
      break;
    if ( !v45 )
    {
      invalid_parameter_noinfo();
      v45 = v59;
    }
    v42 = (int *)v42[1];
    if ( v42 == *(int **)(v45 + 4) )
    {
      invalid_parameter_noinfo();
      if ( v42 == *(int **)(v59 + 4) )
        invalid_parameter_noinfo();
    }
    if ( *(_QWORD *)a3 >= *((_QWORD *)v42 + 1) )
    {
      v46 = v59;
      if ( v42 == *(int **)(v59 + 4) )
      {
        invalid_parameter_noinfo();
        v46 = v59;
      }
      if ( *((_QWORD *)v42 + 1) >= *(_QWORD *)a3 )
      {
        result = a2;
        *(_DWORD *)(a2 + 4) = v42;
        *(_BYTE *)(a2 + 8) = 0;
        *(_DWORD *)a2 = v46;
        return result;
      }
      if ( v42 == *(int **)(v46 + 4) )
        invalid_parameter_noinfo();
      v42 = (int *)*v42;
      break;
    }
  }
  v61 = v42;
  v47 = sub_10035F10(v42, v42[1], a3);
  sub_1002C040(1, v3 + 1);
  v42[1] = v47;
  **(_DWORD **)(v47 + 4) = v47;
  if ( !v59 )
    invalid_parameter_noinfo();
  v64 = v42[1];
  if ( v64 == *(_DWORD *)(v59 + 4) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v48 = v3[5];
    if ( !v48 || v57 >= (v3[6] - v48) >> 3 )
      invalid_parameter_noinfo();
    v49 = (_DWORD *)(8 * v57 + v3[5]);
    if ( !v59 || v59 != *v49 )
      invalid_parameter_noinfo();
    if ( v61 != (int *)v49[1] )
      break;
    v50 = v3[5];
    if ( !v50 || v57 >= (v3[6] - v50) >> 3 )
      invalid_parameter_noinfo();
    v51 = v3[5];
    *(_DWORD *)(v51 + 8 * v57) = v59;
    *(_DWORD *)(v51 + 8 * v57 + 4) = v64;
    if ( !v57 )
      break;
    --v57;
  }
  result = a2;
  *(_DWORD *)(a2 + 4) = v64;
  *(_BYTE *)(a2 + 8) = 1;
  *(_DWORD *)a2 = v59;
  return result;
}
