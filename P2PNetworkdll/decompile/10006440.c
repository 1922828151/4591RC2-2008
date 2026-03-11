/*
 * func-name: sub_10006440
 * func-address: 0x10006440
 * callers: 0x10004730
 * callees: 0x100080d0, 0x10008430, 0x10008e30, 0x10009cc0
 */

int __stdcall sub_10006440(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // edi
  unsigned int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // ecx
  unsigned int v10; // edi
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // edi
  _DWORD *v14; // ebx
  _DWORD *v15; // eax
  int v16; // eax
  ldiv_t v17; // rax
  _DWORD *v18; // edi
  unsigned int i; // ebp
  int v20; // ecx
  _DWORD *v21; // edi
  _DWORD *v22; // edx
  int v23; // ecx
  int v24; // eax
  _DWORD *v25; // ecx
  int v26; // edi
  int v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // edi
  int v30; // eax
  int v31; // ebp
  unsigned int v32; // edi
  int v33; // eax
  unsigned int j; // edi
  int v35; // ecx
  int v36; // ebp
  int v37; // ebx
  _DWORD *v38; // eax
  int v39; // ebp
  int v40; // ecx
  int v41; // eax
  _DWORD *v42; // edi
  _DWORD *v43; // esi
  _DWORD *v44; // eax
  int v45; // eax
  ldiv_t v46; // rax
  unsigned int v47; // eax
  int v48; // ecx
  unsigned int v49; // esi
  int v50; // eax
  int v51; // ebx
  _DWORD *v52; // ebp
  int v53; // ecx
  _DWORD *v54; // esi
  int v55; // esi
  int v56; // ecx
  _DWORD *v57; // esi
  int v58; // ecx
  int v59; // eax
  int result; // eax
  unsigned int v61; // [esp+14h] [ebp-34h]
  unsigned int v62; // [esp+14h] [ebp-34h]
  _DWORD *v63; // [esp+18h] [ebp-30h]
  _DWORD *v64; // [esp+1Ch] [ebp-2Ch]
  _DWORD *v65; // [esp+20h] [ebp-28h]
  _DWORD *v66; // [esp+24h] [ebp-24h]
  int v67; // [esp+24h] [ebp-24h]
  _DWORD *v68; // [esp+2Ch] [ebp-1Ch]
  int v69; // [esp+34h] [ebp-14h]
  _BYTE v70[8]; // [esp+38h] [ebp-10h] BYREF
  _BYTE v71[8]; // [esp+40h] [ebp-8h] BYREF
  unsigned int v72; // [esp+4Ch] [ebp+4h]

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
      v8 = a1[8];
      if ( v8 < v4 )
        a1[8] = 2 * v8 + 1;
    }
    else
    {
      if ( v5 )
        v7 = (a1[6] - v5) >> 3;
      else
        v7 = 0;
      a1[8] = 2 * v7 - 3;
      sub_100080D0((_BYTE)a1 + 4, a1[2]);
    }
    v9 = a1[5];
    v10 = a1[9] - (a1[8] >> 1) - 1;
    v61 = v10;
    if ( !v9 || v10 >= (a1[6] - v9) >> 3 )
      invalid_parameter_noinfo();
    v11 = a1[5];
    v63 = *(_DWORD **)(v11 + 8 * v10);
    v64 = *(_DWORD **)(v11 + 8 * v10 + 4);
    while ( 1 )
    {
      v12 = a1[5];
      if ( !v12 || v10 + 1 >= (a1[6] - v12) >> 3 )
        invalid_parameter_noinfo();
      v13 = (_DWORD *)(a1[5] + 8 * (v10 + 1));
      if ( !v63 || v63 != (_DWORD *)*v13 )
        invalid_parameter_noinfo();
      if ( v64 == (_DWORD *)v13[1] )
        break;
      if ( !v63 )
        invalid_parameter_noinfo();
      if ( v64 == (_DWORD *)v63[1] )
        invalid_parameter_noinfo();
      v14 = (_DWORD *)std::string::end(v64 + 2, v70);
      v15 = (_DWORD *)std::string::begin(v64 + 2, v71);
      v16 = sub_10009CC0(*v15, v15[1], *v14, v14[1]);
      v17 = ldiv(v16, 127773);
      if ( (a1[8] & (16807 * v17.rem - 2836 * v17.quot + (16807 * v17.rem - 2836 * v17.quot < 0 ? 0x7FFFFFFF : 0))) == v61 )
      {
        if ( v64 == (_DWORD *)v63[1] )
          invalid_parameter_noinfo();
        v10 = v61;
        v64 = (_DWORD *)*v64;
      }
      else
      {
        v65 = v63;
        v68 = (_DWORD *)a1[2];
        if ( v64 == (_DWORD *)v63[1] )
          invalid_parameter_noinfo();
        v18 = (_DWORD *)*v64;
        v66 = (_DWORD *)*v64;
        if ( v63 != a1 + 1 )
          invalid_parameter_noinfo();
        if ( v18 != v68 )
        {
          for ( i = v61; ; --i )
          {
            v20 = a1[5];
            if ( !v20 || i >= (a1[6] - v20) >> 3 )
              invalid_parameter_noinfo();
            v21 = (_DWORD *)(8 * i + a1[5]);
            if ( v63 != (_DWORD *)*v21 )
              invalid_parameter_noinfo();
            v22 = v64;
            if ( v64 != (_DWORD *)v21[1] )
              break;
            v23 = a1[5];
            if ( !v23 || i >= (a1[6] - v23) >> 3 )
            {
              invalid_parameter_noinfo();
              v22 = v64;
            }
            v24 = a1[5];
            *(_DWORD *)(v24 + 8 * i) = v63;
            v25 = v66;
            *(_DWORD *)(v24 + 8 * i + 4) = v66;
            if ( !i )
              goto LABEL_49;
          }
          v25 = v66;
LABEL_49:
          v26 = a1[2];
          *(_DWORD *)v22[1] = v25;
          *(_DWORD *)v25[1] = v26;
          **(_DWORD **)(v26 + 4) = v22;
          v27 = *(_DWORD *)(v26 + 4);
          *(_DWORD *)(v26 + 4) = v25[1];
          v25[1] = v22[1];
          v22[1] = v27;
          v28 = (_DWORD *)a1[2];
          v29 = (_DWORD *)v28[1];
          if ( v29 == v28 )
            invalid_parameter_noinfo();
          v30 = a1[5];
          v31 = a1[2];
          v64 = v29;
          v32 = a1[9] + 1;
          v63 = a1 + 1;
          if ( !v30 || v32 >= (a1[6] - v30) >> 3 )
            invalid_parameter_noinfo();
          v33 = a1[5];
          *(_DWORD *)(v33 + 8 * v32) = a1 + 1;
          *(_DWORD *)(v33 + 8 * v32 + 4) = v31;
        }
        for ( j = a1[9]; v61 < j; *(_DWORD *)(v37 + v41 + 4) = v64 )
        {
          v35 = a1[5];
          v69 = a1[2];
          if ( !v35 || j >= (a1[6] - v35) >> 3 )
            invalid_parameter_noinfo();
          v36 = a1[5];
          v37 = 8 * j;
          v38 = *(_DWORD **)(v36 + 8 * j);
          v39 = 8 * j + v36;
          if ( !v38 || v38 != a1 + 1 )
            invalid_parameter_noinfo();
          if ( *(_DWORD *)(v39 + 4) != v69 )
            break;
          v40 = a1[5];
          if ( !v40 || j >= (a1[6] - v40) >> 3 )
            invalid_parameter_noinfo();
          v41 = a1[5];
          --j;
          *(_DWORD *)(v37 + v41) = v63;
        }
        v42 = (_DWORD *)a1[2];
        if ( v65 != a1 + 1 )
          invalid_parameter_noinfo();
        if ( v66 == v42 )
          break;
        v10 = v61;
        v63 = v65;
        v64 = v66;
      }
    }
    ++a1[9];
    v3 = a1;
  }
  v43 = (_DWORD *)std::string::end(a3, v71);
  v44 = (_DWORD *)std::string::begin(a3, v70);
  v45 = sub_10009CC0(*v44, v44[1], *v43, v43[1]);
  v46 = ldiv(v45, 127773);
  v47 = (16807 * v46.rem - 2836 * v46.quot + (16807 * v46.rem - 2836 * v46.quot < 0 ? 0x7FFFFFFF : 0)) & v3[8];
  v62 = v47;
  if ( v3[9] <= v47 )
  {
    v47 += -1 - (v3[8] >> 1);
    v62 = v47;
  }
  v48 = v3[5];
  v72 = v47;
  v49 = v47 + 1;
  if ( !v48 || v49 >= (v3[6] - v48) >> 3 )
    invalid_parameter_noinfo();
  v50 = v3[5];
  v51 = *(_DWORD *)(v50 + 8 * v49);
  v52 = *(_DWORD **)(v50 + 8 * v49 + 4);
  while ( 1 )
  {
    v53 = v3[5];
    if ( !v53 || v62 >= (v3[6] - v53) >> 3 )
      invalid_parameter_noinfo();
    v54 = (_DWORD *)(8 * v62 + v3[5]);
    if ( !v51 || v51 != *v54 )
      invalid_parameter_noinfo();
    if ( v52 == (_DWORD *)v54[1] )
      break;
    if ( !v51 )
      invalid_parameter_noinfo();
    v52 = (_DWORD *)v52[1];
    if ( v52 == *(_DWORD **)(v51 + 4) )
    {
      invalid_parameter_noinfo();
      if ( v52 == *(_DWORD **)(v51 + 4) )
        invalid_parameter_noinfo();
    }
    if ( !(unsigned __int8)std::operator<<char>(a3, v52 + 2) )
    {
      if ( v52 == *(_DWORD **)(v51 + 4) )
        invalid_parameter_noinfo();
      if ( !(unsigned __int8)std::operator<<char>(v52 + 2, a3) )
      {
        result = a2;
        *(_DWORD *)a2 = v51;
        *(_DWORD *)(a2 + 4) = v52;
        *(_BYTE *)(a2 + 8) = 0;
        return result;
      }
      if ( v52 == *(_DWORD **)(v51 + 4) )
        invalid_parameter_noinfo();
      v52 = (_DWORD *)*v52;
      break;
    }
  }
  v55 = sub_10008E30(v52, v52[1], a3);
  sub_10008430();
  v52[1] = v55;
  **(_DWORD **)(v55 + 4) = v55;
  if ( !v51 )
    invalid_parameter_noinfo();
  v67 = v52[1];
  if ( v67 == *(_DWORD *)(v51 + 4) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v56 = v3[5];
    if ( !v56 || v72 >= (v3[6] - v56) >> 3 )
      invalid_parameter_noinfo();
    v57 = (_DWORD *)(8 * v72 + v3[5]);
    if ( !v51 || v51 != *v57 )
      invalid_parameter_noinfo();
    if ( v52 != (_DWORD *)v57[1] )
      break;
    v58 = v3[5];
    if ( !v58 || v72 >= (v3[6] - v58) >> 3 )
      invalid_parameter_noinfo();
    v59 = v3[5];
    *(_DWORD *)(v59 + 8 * v72) = v51;
    *(_DWORD *)(v59 + 8 * v72 + 4) = v67;
    if ( !v72 )
      break;
    --v72;
  }
  result = a2;
  *(_DWORD *)a2 = v51;
  *(_DWORD *)(a2 + 4) = v67;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
