/*
 * func-name: sub_1004D220
 * func-address: 0x1004d220
 * callers: 0x1004ccb0
 * callees: 0x10015200, 0x1004a810, 0x1004a8c0, 0x1004e770
 */

int __stdcall sub_1004D220(int *a1, int a2, int a3)
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
  _DWORD *v15; // ebx
  _DWORD *v16; // eax
  int v17; // eax
  ldiv_t v18; // rax
  int *v19; // edi
  unsigned int i; // ebp
  int v21; // ecx
  int **v22; // edi
  int *v23; // edx
  int v24; // ecx
  int v25; // eax
  _DWORD *v26; // ecx
  int v27; // edi
  int v28; // eax
  int v29; // eax
  int *v30; // edi
  int v31; // eax
  int v32; // ebp
  unsigned int v33; // edi
  int v34; // eax
  unsigned int j; // edi
  int v36; // ecx
  int v37; // ebp
  int v38; // ebx
  int *v39; // eax
  unsigned int v40; // ebp
  int v41; // ecx
  int v42; // eax
  int v43; // edi
  _DWORD *v44; // esi
  _DWORD *v45; // eax
  int v46; // eax
  ldiv_t v47; // rax
  unsigned int v48; // eax
  int v49; // ecx
  unsigned int v50; // esi
  int v51; // eax
  int v52; // ebx
  _DWORD *v53; // ebp
  int v54; // ecx
  _DWORD *v55; // esi
  _DWORD *v56; // esi
  int v57; // ecx
  _DWORD *v58; // esi
  int v59; // ecx
  int v60; // eax
  int result; // eax
  unsigned int v62; // [esp+14h] [ebp-34h]
  unsigned int v63; // [esp+14h] [ebp-34h]
  int *v64; // [esp+18h] [ebp-30h]
  int *v65; // [esp+1Ch] [ebp-2Ch]
  int *v66; // [esp+20h] [ebp-28h]
  _DWORD *v67; // [esp+24h] [ebp-24h]
  int v68; // [esp+24h] [ebp-24h]
  int v69; // [esp+2Ch] [ebp-1Ch]
  int v70; // [esp+34h] [ebp-14h]
  _BYTE v71[8]; // [esp+38h] [ebp-10h] BYREF
  _BYTE v72[8]; // [esp+40h] [ebp-8h] BYREF
  unsigned int v73; // [esp+4Ch] [ebp+4h]

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
    v62 = v11;
    if ( !v10 || v11 >= (a1[6] - v10) >> 3 )
      invalid_parameter_noinfo();
    v12 = a1[5];
    v64 = *(int **)(v12 + 8 * v11);
    v65 = *(int **)(v12 + 8 * v11 + 4);
    while ( 1 )
    {
      v13 = a1[5];
      if ( !v13 || v11 + 1 >= (a1[6] - v13) >> 3 )
        invalid_parameter_noinfo();
      v14 = (int **)(a1[5] + 8 * (v11 + 1));
      if ( !v64 || v64 != *v14 )
        invalid_parameter_noinfo();
      if ( v65 == v14[1] )
        break;
      if ( !v64 )
        invalid_parameter_noinfo();
      if ( v65 == (int *)v64[1] )
        invalid_parameter_noinfo();
      v15 = (_DWORD *)std::string::end(v65 + 2, v71);
      v16 = (_DWORD *)std::string::begin(v65 + 2, v72);
      v17 = sub_1004E770(*v16, v16[1], *v15, v15[1]);
      v18 = ldiv(v17, 127773);
      if ( (a1[8] & (16807 * v18.rem - 2836 * v18.quot + (16807 * v18.rem - 2836 * v18.quot < 0 ? 0x7FFFFFFF : 0))) == v62 )
      {
        if ( v65 == (int *)v64[1] )
          invalid_parameter_noinfo();
        v11 = v62;
        v65 = (int *)*v65;
      }
      else
      {
        v66 = v64;
        v69 = a1[2];
        if ( v65 == (int *)v64[1] )
          invalid_parameter_noinfo();
        v19 = (int *)*v65;
        v67 = (_DWORD *)*v65;
        if ( v64 != a1 + 1 )
          invalid_parameter_noinfo();
        if ( v19 != (int *)v69 )
        {
          for ( i = v62; ; --i )
          {
            v21 = a1[5];
            if ( !v21 || i >= (a1[6] - v21) >> 3 )
              invalid_parameter_noinfo();
            v22 = (int **)(8 * i + a1[5]);
            if ( v64 != *v22 )
              invalid_parameter_noinfo();
            v23 = v65;
            if ( v65 != v22[1] )
              break;
            v24 = a1[5];
            if ( !v24 || i >= (a1[6] - v24) >> 3 )
            {
              invalid_parameter_noinfo();
              v23 = v65;
            }
            v25 = a1[5];
            *(_DWORD *)(v25 + 8 * i) = v64;
            v26 = v67;
            *(_DWORD *)(v25 + 8 * i + 4) = v67;
            if ( !i )
              goto LABEL_49;
          }
          v26 = v67;
LABEL_49:
          v27 = a1[2];
          *(_DWORD *)v23[1] = v26;
          *(_DWORD *)v26[1] = v27;
          **(_DWORD **)(v27 + 4) = v23;
          v28 = *(_DWORD *)(v27 + 4);
          *(_DWORD *)(v27 + 4) = v26[1];
          v26[1] = v23[1];
          v23[1] = v28;
          v29 = a1[2];
          v30 = *(int **)(v29 + 4);
          if ( v30 == (int *)v29 )
            invalid_parameter_noinfo();
          v31 = a1[5];
          v32 = a1[2];
          v65 = v30;
          v33 = a1[9] + 1;
          v64 = a1 + 1;
          if ( !v31 || v33 >= (a1[6] - v31) >> 3 )
            invalid_parameter_noinfo();
          v34 = a1[5];
          *(_DWORD *)(v34 + 8 * v33) = a1 + 1;
          *(_DWORD *)(v34 + 8 * v33 + 4) = v32;
        }
        for ( j = a1[9]; v62 < j; *(_DWORD *)(v38 + v42 + 4) = v65 )
        {
          v36 = a1[5];
          v70 = a1[2];
          if ( !v36 || j >= (a1[6] - v36) >> 3 )
            invalid_parameter_noinfo();
          v37 = a1[5];
          v38 = 8 * j;
          v39 = *(int **)(v37 + 8 * j);
          v40 = 8 * j + v37;
          if ( !v39 || v39 != a1 + 1 )
            invalid_parameter_noinfo();
          if ( *(_DWORD *)(v40 + 4) != v70 )
            break;
          v41 = a1[5];
          if ( !v41 || j >= (a1[6] - v41) >> 3 )
            invalid_parameter_noinfo();
          v42 = a1[5];
          --j;
          *(_DWORD *)(v38 + v42) = v64;
        }
        v43 = a1[2];
        if ( v66 != a1 + 1 )
          invalid_parameter_noinfo();
        if ( v67 == (_DWORD *)v43 )
          break;
        v11 = v62;
        v64 = v66;
        v65 = v67;
      }
    }
    ++a1[9];
    v3 = a1;
  }
  v44 = (_DWORD *)std::string::end(a3, v72);
  v45 = (_DWORD *)std::string::begin(a3, v71);
  v46 = sub_1004E770(*v45, v45[1], *v44, v44[1]);
  v47 = ldiv(v46, 127773);
  v48 = (16807 * v47.rem - 2836 * v47.quot + (16807 * v47.rem - 2836 * v47.quot < 0 ? 0x7FFFFFFF : 0)) & v3[8];
  v63 = v48;
  if ( v3[9] <= v48 )
  {
    v48 += -1 - ((unsigned int)v3[8] >> 1);
    v63 = v48;
  }
  v49 = v3[5];
  v73 = v48;
  v50 = v48 + 1;
  if ( !v49 || v50 >= (v3[6] - v49) >> 3 )
    invalid_parameter_noinfo();
  v51 = v3[5];
  v52 = *(_DWORD *)(v51 + 8 * v50);
  v53 = *(_DWORD **)(v51 + 8 * v50 + 4);
  while ( 1 )
  {
    v54 = v3[5];
    if ( !v54 || v63 >= (v3[6] - v54) >> 3 )
      invalid_parameter_noinfo();
    v55 = (_DWORD *)(8 * v63 + v3[5]);
    if ( !v52 || v52 != *v55 )
      invalid_parameter_noinfo();
    if ( v53 == (_DWORD *)v55[1] )
      break;
    if ( !v52 )
      invalid_parameter_noinfo();
    v53 = (_DWORD *)v53[1];
    if ( v53 == *(_DWORD **)(v52 + 4) )
    {
      invalid_parameter_noinfo();
      if ( v53 == *(_DWORD **)(v52 + 4) )
        invalid_parameter_noinfo();
    }
    if ( !(unsigned __int8)std::operator<<char>(a3, v53 + 2) )
    {
      if ( v53 == *(_DWORD **)(v52 + 4) )
        invalid_parameter_noinfo();
      if ( !(unsigned __int8)std::operator<<char>(v53 + 2, a3) )
      {
        result = a2;
        *(_DWORD *)a2 = v52;
        *(_DWORD *)(a2 + 4) = v53;
        *(_BYTE *)(a2 + 8) = 0;
        return result;
      }
      if ( v53 == *(_DWORD **)(v52 + 4) )
        invalid_parameter_noinfo();
      v53 = (_DWORD *)*v53;
      break;
    }
  }
  v56 = sub_1004A810((int)v53, v53[1], a3);
  sub_1004A8C0(1u, (int)(v3 + 1));
  v53[1] = v56;
  *(_DWORD *)v56[1] = v56;
  if ( !v52 )
    invalid_parameter_noinfo();
  v68 = v53[1];
  if ( v68 == *(_DWORD *)(v52 + 4) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v57 = v3[5];
    if ( !v57 || v73 >= (v3[6] - v57) >> 3 )
      invalid_parameter_noinfo();
    v58 = (_DWORD *)(8 * v73 + v3[5]);
    if ( !v52 || v52 != *v58 )
      invalid_parameter_noinfo();
    if ( v53 != (_DWORD *)v58[1] )
      break;
    v59 = v3[5];
    if ( !v59 || v73 >= (v3[6] - v59) >> 3 )
      invalid_parameter_noinfo();
    v60 = v3[5];
    *(_DWORD *)(v60 + 8 * v73) = v52;
    *(_DWORD *)(v60 + 8 * v73 + 4) = v68;
    if ( !v73 )
      break;
    --v73;
  }
  result = a2;
  *(_DWORD *)a2 = v52;
  *(_DWORD *)(a2 + 4) = v68;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
