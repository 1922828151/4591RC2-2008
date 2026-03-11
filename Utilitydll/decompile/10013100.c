/*
 * func-name: sub_10013100
 * func-address: 0x10013100
 * callers: 0x10011e80
 * callees: 0x100072a0, 0x10014170, 0x100143b0, 0x10014a10
 */

int __stdcall sub_10013100(int *a1, int a2, int a3)
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
  int *v13; // edx
  int v14; // ecx
  int **v15; // edi
  _DWORD *v16; // eax
  int v17; // eax
  ldiv_t v18; // rax
  _DWORD *v19; // edi
  int v20; // ecx
  int **v21; // edi
  int *v22; // edx
  int v23; // ecx
  int v24; // eax
  int *v25; // ecx
  int v26; // ebx
  int v27; // eax
  int *v28; // ebx
  int v29; // eax
  unsigned int v30; // ebx
  int v31; // eax
  unsigned int k; // edi
  int v33; // ecx
  int **v34; // ebx
  int v35; // ecx
  int v36; // eax
  int v37; // edi
  _DWORD *v38; // esi
  _DWORD *v39; // eax
  int v40; // eax
  ldiv_t v41; // rax
  unsigned int v42; // eax
  int v43; // ecx
  unsigned int v44; // esi
  int v45; // eax
  int v46; // ecx
  _DWORD *v47; // esi
  int v48; // ecx
  _DWORD *v49; // ebx
  int v50; // ebx
  int v51; // ecx
  _DWORD *v52; // esi
  int v53; // ecx
  int v54; // eax
  int result; // eax
  _DWORD *v56; // [esp+10h] [ebp-40h]
  unsigned int j; // [esp+10h] [ebp-40h]
  int v58; // [esp+10h] [ebp-40h]
  unsigned int v59; // [esp+10h] [ebp-40h]
  unsigned int v60; // [esp+14h] [ebp-3Ch]
  unsigned int v61; // [esp+14h] [ebp-3Ch]
  int *v62; // [esp+18h] [ebp-38h]
  int v63; // [esp+18h] [ebp-38h]
  int *i; // [esp+1Ch] [ebp-34h]
  _DWORD *v65; // [esp+1Ch] [ebp-34h]
  int *v66; // [esp+20h] [ebp-30h]
  int *v67; // [esp+24h] [ebp-2Ch]
  int v68; // [esp+24h] [ebp-2Ch]
  int v69; // [esp+2Ch] [ebp-24h]
  int v70; // [esp+34h] [ebp-1Ch]
  int v71; // [esp+3Ch] [ebp-14h]
  _BYTE v72[8]; // [esp+40h] [ebp-10h] BYREF
  _BYTE v73[8]; // [esp+48h] [ebp-8h] BYREF

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
      sub_100072A0((int)(a1 + 4), v8 + 2, (_BYTE)a1 + 4, a1[2]);
    }
    v10 = a1[5];
    v11 = a1[9] - ((unsigned int)a1[8] >> 1) - 1;
    v60 = v11;
    if ( !v10 || v11 >= (a1[6] - v10) >> 3 )
      invalid_parameter_noinfo();
    v12 = a1[5];
    v13 = *(int **)(v12 + 8 * v11 + 4);
    v62 = *(int **)(v12 + 8 * v11);
LABEL_16:
    for ( i = v13; ; i = v67 )
    {
      v14 = a1[5];
      if ( !v14 || v11 + 1 >= (a1[6] - v14) >> 3 )
        invalid_parameter_noinfo();
      v15 = (int **)(a1[5] + 8 * (v11 + 1));
      if ( !v62 || v62 != *v15 )
        invalid_parameter_noinfo();
      if ( i == v15[1] )
        break;
      if ( !v62 )
        invalid_parameter_noinfo();
      if ( i == (int *)v62[1] )
        invalid_parameter_noinfo();
      v56 = (_DWORD *)std::wstring::end(i + 2, v72);
      v16 = (_DWORD *)std::wstring::begin(i + 2, v73);
      v17 = sub_10014A10(*v16, v16[1], *v56, v56[1]);
      v18 = ldiv(v17, 127773);
      if ( (a1[8] & (16807 * v18.rem - 2836 * v18.quot + (16807 * v18.rem - 2836 * v18.quot < 0 ? 0x7FFFFFFF : 0))) == v60 )
      {
        if ( i == (int *)v62[1] )
          invalid_parameter_noinfo();
        v13 = (int *)*i;
        v11 = v60;
        goto LABEL_16;
      }
      v66 = v62;
      v69 = a1[2];
      if ( i == (int *)v62[1] )
        invalid_parameter_noinfo();
      v19 = (_DWORD *)*i;
      v67 = (int *)*i;
      if ( v62 != a1 + 1 )
        invalid_parameter_noinfo();
      if ( v19 != (_DWORD *)v69 )
      {
        for ( j = v60; ; --j )
        {
          v20 = a1[5];
          if ( !v20 || j >= (a1[6] - v20) >> 3 )
            invalid_parameter_noinfo();
          v21 = (int **)(8 * j + a1[5]);
          if ( v62 != *v21 )
            invalid_parameter_noinfo();
          v22 = i;
          if ( i != v21[1] )
            break;
          v23 = a1[5];
          if ( !v23 || j >= (a1[6] - v23) >> 3 )
          {
            invalid_parameter_noinfo();
            v22 = i;
          }
          v24 = a1[5];
          *(_DWORD *)(v24 + 8 * j) = v62;
          v25 = v67;
          *(_DWORD *)(v24 + 8 * j + 4) = v67;
          if ( !j )
            goto LABEL_50;
        }
        v25 = v67;
LABEL_50:
        v26 = a1[2];
        *(_DWORD *)v22[1] = v25;
        *(_DWORD *)v25[1] = v26;
        **(_DWORD **)(v26 + 4) = v22;
        v58 = *(_DWORD *)(v26 + 4);
        *(_DWORD *)(v26 + 4) = v25[1];
        v25[1] = v22[1];
        v22[1] = v58;
        v27 = a1[2];
        v28 = *(int **)(v27 + 4);
        if ( v28 == (int *)v27 )
          invalid_parameter_noinfo();
        i = v28;
        v29 = a1[5];
        v30 = a1[9] + 1;
        v62 = a1 + 1;
        v70 = a1[2];
        if ( !v29 || v30 >= (a1[6] - v29) >> 3 )
          invalid_parameter_noinfo();
        v31 = a1[5];
        *(_DWORD *)(v31 + 8 * v30) = a1 + 1;
        *(_DWORD *)(v31 + 8 * v30 + 4) = v70;
      }
      for ( k = a1[9]; v60 < k; *(_DWORD *)(v36 + 8 * k-- + 4) = i )
      {
        v33 = a1[5];
        v71 = a1[2];
        if ( !v33 || k >= (a1[6] - v33) >> 3 )
          invalid_parameter_noinfo();
        v34 = (int **)(8 * k + a1[5]);
        if ( !*v34 || *v34 != a1 + 1 )
          invalid_parameter_noinfo();
        if ( v34[1] != (int *)v71 )
          break;
        v35 = a1[5];
        if ( !v35 || k >= (a1[6] - v35) >> 3 )
          invalid_parameter_noinfo();
        v36 = a1[5];
        *(_DWORD *)(v36 + 8 * k) = v62;
      }
      v37 = a1[2];
      if ( v66 != a1 + 1 )
        invalid_parameter_noinfo();
      if ( v67 == (int *)v37 )
        break;
      v11 = v60;
      v62 = v66;
    }
    ++a1[9];
    v3 = a1;
  }
  v38 = (_DWORD *)std::wstring::end(a3, v73);
  v39 = (_DWORD *)std::wstring::begin(a3, v72);
  v40 = sub_10014A10(*v39, v39[1], *v38, v38[1]);
  v41 = ldiv(v40, 127773);
  v42 = (16807 * v41.rem - 2836 * v41.quot + (16807 * v41.rem - 2836 * v41.quot < 0 ? 0x7FFFFFFF : 0)) & v3[8];
  v59 = v42;
  if ( v3[9] <= v42 )
  {
    v42 += -1 - ((unsigned int)v3[8] >> 1);
    v59 = v42;
  }
  v43 = v3[5];
  v61 = v42;
  v44 = v42 + 1;
  if ( !v43 || v44 >= (v3[6] - v43) >> 3 )
    invalid_parameter_noinfo();
  v45 = v3[5];
  v46 = *(_DWORD *)(v45 + 8 * v44);
  v47 = *(_DWORD **)(v45 + 8 * v44 + 4);
  v63 = v46;
  while ( 1 )
  {
    v48 = v3[5];
    if ( !v48 || v59 >= (v3[6] - v48) >> 3 )
      invalid_parameter_noinfo();
    v49 = (_DWORD *)(8 * v59 + v3[5]);
    if ( !v63 || v63 != *v49 )
      invalid_parameter_noinfo();
    if ( v47 == (_DWORD *)v49[1] )
      break;
    if ( !v63 )
      invalid_parameter_noinfo();
    v47 = (_DWORD *)v47[1];
    if ( v47 == *(_DWORD **)(v63 + 4) )
      invalid_parameter_noinfo();
    if ( v47 == *(_DWORD **)(v63 + 4) )
      invalid_parameter_noinfo();
    if ( !(unsigned __int8)std::operator<<wchar_t>(a3, v47 + 2) )
    {
      if ( v47 == *(_DWORD **)(v63 + 4) )
        invalid_parameter_noinfo();
      if ( !(unsigned __int8)std::operator<<wchar_t>(v47 + 2, a3) )
      {
        result = a2;
        *(_DWORD *)a2 = v63;
        *(_DWORD *)(a2 + 4) = v47;
        *(_BYTE *)(a2 + 8) = 0;
        return result;
      }
      if ( v47 == *(_DWORD **)(v63 + 4) )
        invalid_parameter_noinfo();
      v47 = (_DWORD *)*v47;
      break;
    }
  }
  v65 = v47;
  v50 = sub_100143B0(v47, v47[1], a3);
  sub_10014170(1, v3 + 1);
  v47[1] = v50;
  **(_DWORD **)(v50 + 4) = v50;
  if ( !v63 )
    invalid_parameter_noinfo();
  v68 = v47[1];
  if ( v68 == *(_DWORD *)(v63 + 4) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v51 = v3[5];
    if ( !v51 || v61 >= (v3[6] - v51) >> 3 )
      invalid_parameter_noinfo();
    v52 = (_DWORD *)(8 * v61 + v3[5]);
    if ( !v63 || v63 != *v52 )
      invalid_parameter_noinfo();
    if ( v65 != (_DWORD *)v52[1] )
      break;
    v53 = v3[5];
    if ( !v53 || v61 >= (v3[6] - v53) >> 3 )
      invalid_parameter_noinfo();
    v54 = v3[5];
    *(_DWORD *)(v54 + 8 * v61) = v63;
    *(_DWORD *)(v54 + 8 * v61 + 4) = v68;
    if ( !v61 )
      break;
    --v61;
  }
  result = a2;
  *(_DWORD *)a2 = v63;
  *(_DWORD *)(a2 + 4) = v68;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
