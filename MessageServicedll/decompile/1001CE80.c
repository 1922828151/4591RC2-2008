/*
 * func-name: sub_1001CE80
 * func-address: 0x1001ce80
 * callers: 0x1001b880
 * callees: 0x1000b810, 0x1001dc30, 0x1001dec0
 */

int __stdcall sub_1001CE80(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // edi
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
  _DWORD *v14; // edi
  ldiv_t v15; // rax
  _DWORD *v16; // edi
  int v17; // ecx
  int v18; // ebx
  _DWORD *v19; // edi
  _DWORD *v20; // edx
  int v21; // ecx
  int v22; // eax
  _DWORD *v23; // ecx
  int v24; // ebx
  _DWORD *v25; // eax
  _DWORD *v26; // ebx
  int v27; // eax
  unsigned int v28; // ebx
  int v29; // eax
  unsigned int j; // edi
  int v31; // ecx
  _DWORD *v32; // ebx
  int v33; // ecx
  int v34; // eax
  _DWORD *v35; // edi
  ldiv_t v36; // rax
  unsigned int v37; // eax
  int v38; // ecx
  unsigned int v39; // esi
  int v40; // eax
  int v41; // ebx
  _DWORD *v42; // esi
  int v43; // ecx
  _DWORD *v44; // eax
  int v45; // ecx
  _DWORD *v46; // esi
  int v47; // ecx
  int v48; // eax
  int result; // eax
  unsigned int i; // [esp+Ch] [ebp-34h]
  int v51; // [esp+Ch] [ebp-34h]
  unsigned int v52; // [esp+Ch] [ebp-34h]
  int v53; // [esp+10h] [ebp-30h]
  unsigned int v54; // [esp+14h] [ebp-2Ch]
  unsigned int v55; // [esp+14h] [ebp-2Ch]
  _DWORD *v56; // [esp+18h] [ebp-28h]
  _DWORD *v57; // [esp+18h] [ebp-28h]
  _DWORD *v58; // [esp+18h] [ebp-28h]
  _DWORD *v59; // [esp+1Ch] [ebp-24h]
  _DWORD *v60; // [esp+20h] [ebp-20h]
  _DWORD *v61; // [esp+24h] [ebp-1Ch]
  _DWORD *v62; // [esp+24h] [ebp-1Ch]
  _DWORD *v63; // [esp+2Ch] [ebp-14h]
  int v64; // [esp+34h] [ebp-Ch]
  int v65; // [esp+3Ch] [ebp-4h]

  v3 = a1;
  v4 = a1[9];
  if ( v4 <= a1[3] >> 2 )
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
      sub_1001DC30(v8 + 2, (_BYTE)a1 + 4, a1[2]);
    }
    v10 = a1[5];
    v11 = a1[9] - (a1[8] >> 1) - 1;
    v54 = v11;
    if ( !v10 || v11 >= (a1[6] - v10) >> 3 )
      invalid_parameter_noinfo();
    v12 = a1[5];
    v60 = *(_DWORD **)(v12 + 8 * v11);
    v61 = *(_DWORD **)(v12 + 8 * v11 + 4);
    while ( 1 )
    {
      v13 = a1[5];
      if ( !v13 || v11 + 1 >= (a1[6] - v13) >> 3 )
        invalid_parameter_noinfo();
      v14 = (_DWORD *)(a1[5] + 8 * (v11 + 1));
      if ( !v60 || v60 != (_DWORD *)*v14 )
        invalid_parameter_noinfo();
      if ( v61 == (_DWORD *)v14[1] )
        break;
      if ( !v60 )
        invalid_parameter_noinfo();
      if ( v61 == (_DWORD *)v60[1] )
        invalid_parameter_noinfo();
      v15 = ldiv(v61[2] ^ 0xDEADBEEF, 127773);
      if ( (a1[8] & (16807 * v15.rem - 2836 * v15.quot + (16807 * v15.rem - 2836 * v15.quot < 0 ? 0x7FFFFFFF : 0))) == v54 )
      {
        if ( v61 == (_DWORD *)v60[1] )
          invalid_parameter_noinfo();
        v11 = v54;
        v61 = (_DWORD *)*v61;
      }
      else
      {
        v56 = v60;
        v63 = (_DWORD *)a1[2];
        if ( v61 == (_DWORD *)v60[1] )
          invalid_parameter_noinfo();
        v16 = (_DWORD *)*v61;
        v59 = (_DWORD *)*v61;
        if ( v60 != a1 + 1 )
          invalid_parameter_noinfo();
        if ( v16 != v63 )
        {
          for ( i = v54; ; --i )
          {
            v17 = a1[5];
            if ( !v17 || i >= (a1[6] - v17) >> 3 )
              invalid_parameter_noinfo();
            v18 = 8 * i;
            v19 = (_DWORD *)(8 * i + a1[5]);
            if ( v60 != (_DWORD *)*v19 )
              invalid_parameter_noinfo();
            v20 = v61;
            if ( v61 != (_DWORD *)v19[1] )
              break;
            v21 = a1[5];
            if ( !v21 || i >= (a1[6] - v21) >> 3 )
            {
              invalid_parameter_noinfo();
              v20 = v61;
            }
            v22 = a1[5];
            *(_DWORD *)(v18 + v22) = v60;
            v23 = v59;
            *(_DWORD *)(v18 + v22 + 4) = v59;
            if ( !i )
              goto LABEL_49;
          }
          v23 = v59;
LABEL_49:
          v24 = a1[2];
          *(_DWORD *)v20[1] = v23;
          *(_DWORD *)v23[1] = v24;
          **(_DWORD **)(v24 + 4) = v20;
          v51 = *(_DWORD *)(v24 + 4);
          *(_DWORD *)(v24 + 4) = v23[1];
          v23[1] = v20[1];
          v20[1] = v51;
          v25 = (_DWORD *)a1[2];
          v26 = (_DWORD *)v25[1];
          if ( v26 == v25 )
            invalid_parameter_noinfo();
          v61 = v26;
          v27 = a1[5];
          v28 = a1[9] + 1;
          v60 = a1 + 1;
          v64 = a1[2];
          if ( !v27 || v28 >= (a1[6] - v27) >> 3 )
            invalid_parameter_noinfo();
          v29 = a1[5];
          *(_DWORD *)(v29 + 8 * v28) = a1 + 1;
          *(_DWORD *)(v29 + 8 * v28 + 4) = v64;
        }
        for ( j = a1[9]; v54 < j; *(_DWORD *)(v34 + 8 * j-- + 4) = v61 )
        {
          v31 = a1[5];
          v65 = a1[2];
          if ( !v31 || j >= (a1[6] - v31) >> 3 )
            invalid_parameter_noinfo();
          v32 = (_DWORD *)(8 * j + a1[5]);
          if ( !*v32 || (_DWORD *)*v32 != a1 + 1 )
            invalid_parameter_noinfo();
          if ( v32[1] != v65 )
            break;
          v33 = a1[5];
          if ( !v33 || j >= (a1[6] - v33) >> 3 )
            invalid_parameter_noinfo();
          v34 = a1[5];
          *(_DWORD *)(v34 + 8 * j) = v60;
        }
        v35 = (_DWORD *)a1[2];
        if ( v56 != a1 + 1 )
          invalid_parameter_noinfo();
        if ( v59 == v35 )
          break;
        v11 = v54;
        v60 = v56;
        v61 = v59;
      }
    }
    ++a1[9];
    v3 = a1;
  }
  v36 = ldiv(*a3 ^ 0xDEADBEEF, 127773);
  v37 = (16807 * v36.rem - 2836 * v36.quot + (16807 * v36.rem - 2836 * v36.quot < 0 ? 0x7FFFFFFF : 0)) & v3[8];
  v52 = v37;
  if ( v3[9] <= v37 )
  {
    v37 += -1 - (v3[8] >> 1);
    v52 = v37;
  }
  v38 = v3[5];
  v55 = v37;
  v39 = v37 + 1;
  if ( !v38 || v39 >= (v3[6] - v38) >> 3 )
    invalid_parameter_noinfo();
  v40 = v3[5];
  v41 = *(_DWORD *)(v40 + 8 * v39);
  v42 = *(_DWORD **)(v40 + 8 * v39 + 4);
  while ( 1 )
  {
    v43 = v3[5];
    if ( !v43 || v52 >= (v3[6] - v43) >> 3 )
      invalid_parameter_noinfo();
    v44 = (_DWORD *)(8 * v52 + v3[5]);
    v57 = v44;
    if ( !v41 || v41 != *v44 )
    {
      invalid_parameter_noinfo();
      v44 = v57;
    }
    if ( v42 == (_DWORD *)v44[1] )
      break;
    if ( !v41 )
      invalid_parameter_noinfo();
    v42 = (_DWORD *)v42[1];
    if ( v42 == *(_DWORD **)(v41 + 4) )
    {
      invalid_parameter_noinfo();
      if ( v42 == *(_DWORD **)(v41 + 4) )
        invalid_parameter_noinfo();
    }
    if ( *a3 >= v42[2] )
    {
      if ( v42 == *(_DWORD **)(v41 + 4) )
        invalid_parameter_noinfo();
      if ( v42[2] >= *a3 )
      {
        result = a2;
        *(_DWORD *)a2 = v41;
        *(_DWORD *)(a2 + 4) = v42;
        *(_BYTE *)(a2 + 8) = 0;
        return result;
      }
      if ( v42 == *(_DWORD **)(v41 + 4) )
        invalid_parameter_noinfo();
      v42 = (_DWORD *)*v42;
      break;
    }
  }
  v62 = v42;
  v58 = sub_1000B810((int)v42, v42[1], (int)a3);
  sub_1001DEC0(1, v3 + 1);
  v42[1] = v58;
  *(_DWORD *)v58[1] = v58;
  if ( !v41 )
    invalid_parameter_noinfo();
  v53 = v42[1];
  if ( v53 == *(_DWORD *)(v41 + 4) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v45 = v3[5];
    if ( !v45 || v55 >= (v3[6] - v45) >> 3 )
      invalid_parameter_noinfo();
    v46 = (_DWORD *)(8 * v55 + v3[5]);
    if ( !v41 || v41 != *v46 )
      invalid_parameter_noinfo();
    if ( v62 != (_DWORD *)v46[1] )
      break;
    v47 = v3[5];
    if ( !v47 || v55 >= (v3[6] - v47) >> 3 )
      invalid_parameter_noinfo();
    v48 = v3[5];
    *(_DWORD *)(v48 + 8 * v55) = v41;
    *(_DWORD *)(v48 + 8 * v55 + 4) = v53;
    if ( !v55 )
      break;
    --v55;
  }
  result = a2;
  *(_DWORD *)a2 = v41;
  *(_DWORD *)(a2 + 4) = v53;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
