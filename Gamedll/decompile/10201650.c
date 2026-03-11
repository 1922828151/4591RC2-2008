/*
 * func-name: sub_10201650
 * func-address: 0x10201650
 * callers: 0x1000cc7a
 * callees: 0x100024d7, 0x1000df49, 0x10019506
 */

int __thiscall sub_10201650(int *this, int a2, _DWORD *a3)
{
  int *v3; // edi
  unsigned int v4; // eax
  int v5; // edx
  _DWORD *v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // ecx
  unsigned int v12; // edi
  int v13; // eax
  int v14; // ecx
  int **v15; // edi
  ldiv_t v16; // rax
  int *v17; // edi
  unsigned int i; // ebp
  int v19; // ecx
  int v20; // ebx
  int **v21; // edi
  int *v22; // edx
  int v23; // ecx
  int v24; // eax
  _DWORD *v25; // ecx
  int v26; // edi
  int v27; // eax
  int *v28; // eax
  int *v29; // edi
  int v30; // eax
  int v31; // ebp
  unsigned int v32; // edi
  int v33; // eax
  unsigned int j; // edi
  int v35; // ecx
  int v36; // ebp
  int v37; // ebx
  int *v38; // eax
  int v39; // ebp
  int v40; // ecx
  int v41; // eax
  _DWORD *v42; // edi
  ldiv_t v43; // rax
  unsigned int v44; // eax
  int v45; // ecx
  unsigned int v46; // esi
  int v47; // eax
  int v48; // ebx
  _DWORD *v49; // ebp
  int v50; // ecx
  _DWORD *v51; // esi
  int v52; // esi
  int v53; // ecx
  _DWORD *v54; // esi
  int v55; // ecx
  int v56; // eax
  int result; // eax
  unsigned int v59; // [esp+10h] [ebp-28h]
  unsigned int v60; // [esp+14h] [ebp-24h]
  unsigned int v61; // [esp+14h] [ebp-24h]
  int *v62; // [esp+18h] [ebp-20h]
  int *v63; // [esp+1Ch] [ebp-1Ch]
  int *v64; // [esp+20h] [ebp-18h]
  _DWORD *v65; // [esp+24h] [ebp-14h]
  int v66; // [esp+24h] [ebp-14h]
  int *v67; // [esp+2Ch] [ebp-Ch]
  int v68; // [esp+34h] [ebp-4h]

  v3 = this;
  v4 = this[9];
  if ( v4 <= (unsigned int)this[3] >> 2 )
  {
    v5 = this[5];
    v6 = this + 4;
    if ( v5 )
      v7 = (this[6] - v5) >> 3;
    else
      v7 = 0;
    if ( v7 - 1 > v4 )
    {
      v10 = v3[8];
      if ( v10 < v4 )
        v3[8] = 2 * v10 + 1;
    }
    else
    {
      if ( v5 )
        v8 = (v3[6] - v5) >> 3;
      else
        v8 = 0;
      v9 = 2 * v8 - 3;
      v3[8] = v9;
      sub_1000DF49(v9 + 2, (_BYTE)v3 + 4, v3[2]);
    }
    v11 = v3[5];
    v12 = v3[9] - ((unsigned int)v3[8] >> 1) - 1;
    v60 = v12;
    if ( !v11 || v12 >= (v6[2] - v11) >> 3 )
      _invalid_parameter_noinfo();
    v13 = v6[1];
    v62 = *(int **)(v13 + 8 * v12);
    v63 = *(int **)(v13 + 8 * v12 + 4);
    while ( 1 )
    {
      v14 = v6[1];
      if ( !v14 || v12 + 1 >= (v6[2] - v14) >> 3 )
        _invalid_parameter_noinfo();
      v15 = (int **)(v6[1] + 8 * (v12 + 1));
      if ( !v62 || v62 != *v15 )
        _invalid_parameter_noinfo();
      if ( v63 == v15[1] )
        break;
      if ( !v62 )
        _invalid_parameter_noinfo();
      if ( v63 == (int *)v62[1] )
        _invalid_parameter_noinfo();
      v16 = ldiv(v63[2] ^ 0xDEADBEEF, 127773);
      if ( (this[8] & (16807 * v16.rem - 2836 * v16.quot + (16807 * v16.rem - 2836 * v16.quot < 0 ? 0x7FFFFFFF : 0))) == v60 )
      {
        if ( v63 == (int *)v62[1] )
          _invalid_parameter_noinfo();
        v12 = v60;
        v63 = (int *)*v63;
      }
      else
      {
        v64 = v62;
        v67 = (int *)this[2];
        if ( v63 == (int *)v62[1] )
          _invalid_parameter_noinfo();
        v17 = (int *)*v63;
        v65 = (_DWORD *)*v63;
        if ( v62 != this + 1 )
          _invalid_parameter_noinfo();
        if ( v17 != v67 )
        {
          for ( i = v60; ; --i )
          {
            v19 = v6[1];
            if ( !v19 || i >= (v6[2] - v19) >> 3 )
              _invalid_parameter_noinfo();
            v20 = 8 * i;
            v21 = (int **)(8 * i + v6[1]);
            if ( v62 != *v21 )
              _invalid_parameter_noinfo();
            v22 = v63;
            if ( v63 != v21[1] )
              break;
            v23 = v6[1];
            if ( !v23 || i >= (v6[2] - v23) >> 3 )
            {
              _invalid_parameter_noinfo();
              v22 = v63;
            }
            v24 = v6[1];
            *(_DWORD *)(v20 + v24) = v62;
            v25 = v65;
            *(_DWORD *)(v20 + v24 + 4) = v65;
            if ( !i )
              goto LABEL_49;
          }
          v25 = v65;
LABEL_49:
          v26 = this[2];
          *(_DWORD *)v22[1] = v25;
          *(_DWORD *)v25[1] = v26;
          **(_DWORD **)(v26 + 4) = v22;
          v27 = *(_DWORD *)(v26 + 4);
          *(_DWORD *)(v26 + 4) = v25[1];
          v25[1] = v22[1];
          v22[1] = v27;
          v28 = (int *)this[2];
          v29 = (int *)v28[1];
          if ( v29 == v28 )
            _invalid_parameter_noinfo();
          v30 = v6[1];
          v31 = this[2];
          v63 = v29;
          v32 = this[9] + 1;
          v62 = this + 1;
          if ( !v30 || v32 >= (v6[2] - v30) >> 3 )
            _invalid_parameter_noinfo();
          v33 = v6[1];
          *(_DWORD *)(v33 + 8 * v32) = this + 1;
          *(_DWORD *)(v33 + 8 * v32 + 4) = v31;
        }
        for ( j = this[9]; v60 < j; *(_DWORD *)(v41 + v37 + 4) = v63 )
        {
          v35 = v6[1];
          v68 = this[2];
          if ( !v35 || j >= (v6[2] - v35) >> 3 )
            _invalid_parameter_noinfo();
          v36 = v6[1];
          v37 = 8 * j;
          v38 = *(int **)(v36 + 8 * j);
          v39 = 8 * j + v36;
          if ( !v38 || v38 != this + 1 )
            _invalid_parameter_noinfo();
          if ( *(_DWORD *)(v39 + 4) != v68 )
            break;
          v40 = v6[1];
          if ( !v40 || j >= (v6[2] - v40) >> 3 )
            _invalid_parameter_noinfo();
          v41 = v6[1];
          --j;
          *(_DWORD *)(v41 + v37) = v62;
        }
        v42 = (_DWORD *)this[2];
        if ( v64 != this + 1 )
          _invalid_parameter_noinfo();
        if ( v65 == v42 )
          break;
        v12 = v60;
        v62 = v64;
        v63 = v65;
      }
    }
    ++this[9];
    v3 = this;
  }
  v43 = ldiv(*a3 ^ 0xDEADBEEF, 127773);
  v44 = (16807 * v43.rem - 2836 * v43.quot + (16807 * v43.rem - 2836 * v43.quot < 0 ? 0x7FFFFFFF : 0)) & v3[8];
  v59 = v44;
  if ( v3[9] <= v44 )
  {
    v44 += -1 - ((unsigned int)v3[8] >> 1);
    v59 = v44;
  }
  v45 = v3[5];
  v61 = v44;
  v46 = v44 + 1;
  if ( !v45 || v46 >= (v3[6] - v45) >> 3 )
    _invalid_parameter_noinfo();
  v47 = v3[5];
  v48 = *(_DWORD *)(v47 + 8 * v46);
  v49 = *(_DWORD **)(v47 + 8 * v46 + 4);
  while ( 1 )
  {
    v50 = v3[5];
    if ( !v50 || v59 >= (v3[6] - v50) >> 3 )
      _invalid_parameter_noinfo();
    v51 = (_DWORD *)(8 * v59 + v3[5]);
    if ( !v48 || v48 != *v51 )
      _invalid_parameter_noinfo();
    if ( v49 == (_DWORD *)v51[1] )
      break;
    if ( !v48 )
      _invalid_parameter_noinfo();
    v49 = (_DWORD *)v49[1];
    if ( v49 == *(_DWORD **)(v48 + 4) )
    {
      _invalid_parameter_noinfo();
      if ( v49 == *(_DWORD **)(v48 + 4) )
        _invalid_parameter_noinfo();
    }
    if ( *a3 >= v49[2] )
    {
      if ( v49 == *(_DWORD **)(v48 + 4) )
        _invalid_parameter_noinfo();
      if ( v49[2] >= *a3 )
      {
        result = a2;
        *(_DWORD *)(a2 + 4) = v49;
        *(_DWORD *)a2 = v48;
        *(_BYTE *)(a2 + 8) = 0;
        return result;
      }
      if ( v49 == *(_DWORD **)(v48 + 4) )
        _invalid_parameter_noinfo();
      v49 = (_DWORD *)*v49;
      break;
    }
  }
  v52 = sub_10019506((int)v49, v49[1], (int)a3);
  sub_100024D7(1);
  v49[1] = v52;
  **(_DWORD **)(v52 + 4) = v52;
  if ( !v48 )
    _invalid_parameter_noinfo();
  v66 = v49[1];
  if ( v66 == *(_DWORD *)(v48 + 4) )
    _invalid_parameter_noinfo();
  while ( 1 )
  {
    v53 = v3[5];
    if ( !v53 || v61 >= (v3[6] - v53) >> 3 )
      _invalid_parameter_noinfo();
    v54 = (_DWORD *)(8 * v61 + v3[5]);
    if ( !v48 || v48 != *v54 )
      _invalid_parameter_noinfo();
    if ( v49 != (_DWORD *)v54[1] )
      break;
    v55 = v3[5];
    if ( !v55 || v61 >= (v3[6] - v55) >> 3 )
      _invalid_parameter_noinfo();
    v56 = v3[5];
    *(_DWORD *)(v56 + 8 * v61) = v48;
    *(_DWORD *)(v56 + 8 * v61 + 4) = v66;
    if ( !v61 )
      break;
    --v61;
  }
  result = a2;
  *(_DWORD *)a2 = v48;
  *(_DWORD *)(a2 + 4) = v66;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
