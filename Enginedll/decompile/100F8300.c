/*
 * func-name: sub_100F8300
 * func-address: 0x100f8300
 * callers: 0x100f5510
 * callees: 0x1003b570, 0x1003b730, 0x100f5c50, 0x100f7400, 0x100f80d0
 */

int __thiscall sub_100F8300(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // edi
  unsigned int v4; // edx
  int v5; // ecx
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // edi
  int v13; // eax
  int v14; // ecx
  _DWORD *v15; // edi
  bool v16; // zf
  _DWORD *v17; // edi
  unsigned int i; // ebp
  int v19; // ecx
  int v20; // ebx
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
  int v43; // esi
  int v44; // eax
  int v45; // eax
  ldiv_t v46; // rax
  unsigned int v47; // eax
  int v48; // ecx
  unsigned int v49; // esi
  int v50; // eax
  int v51; // ebx
  int v52; // ebp
  int v53; // ecx
  _DWORD *v54; // esi
  _DWORD *v55; // esi
  int v56; // ecx
  _DWORD *v57; // esi
  int v58; // ecx
  int v59; // eax
  int result; // eax
  unsigned int v62; // [esp+10h] [ebp-28h]
  unsigned int v63; // [esp+14h] [ebp-24h]
  unsigned int v64; // [esp+14h] [ebp-24h]
  _DWORD *v65; // [esp+18h] [ebp-20h]
  _DWORD *v66; // [esp+1Ch] [ebp-1Ch]
  _DWORD *v67; // [esp+20h] [ebp-18h]
  _DWORD *v68; // [esp+24h] [ebp-14h]
  int v69; // [esp+24h] [ebp-14h]
  char v70[4]; // [esp+28h] [ebp-10h] BYREF
  _DWORD *v71; // [esp+2Ch] [ebp-Ch]
  char v72[4]; // [esp+30h] [ebp-8h] BYREF
  int v73; // [esp+34h] [ebp-4h]

  v3 = this;
  v4 = this[9];
  if ( v4 <= this[3] >> 2 )
  {
    v5 = this[5];
    v6 = v3 + 4;
    if ( v5 )
      v7 = (v3[6] - v5) >> 3;
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
      sub_100F7400(v3 + 4, v9 + 2, (int)(v3 + 1), v3[2]);
    }
    v11 = v3[5];
    v12 = v3[9] - (v3[8] >> 1) - 1;
    v63 = v12;
    if ( !v11 || v12 >= (v6[2] - v11) >> 3 )
      invalid_parameter_noinfo();
    v13 = v6[1];
    v65 = *(_DWORD **)(v13 + 8 * v12);
    v66 = *(_DWORD **)(v13 + 8 * v12 + 4);
    while ( 1 )
    {
      v14 = v6[1];
      if ( !v14 || v12 + 1 >= (v6[2] - v14) >> 3 )
        invalid_parameter_noinfo();
      v15 = (_DWORD *)(v6[1] + 8 * (v12 + 1));
      if ( !v65 || v65 != (_DWORD *)*v15 )
        invalid_parameter_noinfo();
      if ( v66 == (_DWORD *)v15[1] )
        break;
      if ( !v65 )
        invalid_parameter_noinfo();
      if ( v66 == (_DWORD *)v65[1] )
        invalid_parameter_noinfo();
      if ( (this[8] & sub_1003B730((int)(v66 + 2))) == v63 )
      {
        if ( v66 == (_DWORD *)v65[1] )
          invalid_parameter_noinfo();
        v12 = v63;
        v66 = (_DWORD *)*v66;
      }
      else
      {
        v16 = v66 == (_DWORD *)v65[1];
        v67 = v65;
        v71 = (_DWORD *)this[2];
        if ( v16 )
          invalid_parameter_noinfo();
        v17 = (_DWORD *)*v66;
        v68 = (_DWORD *)*v66;
        if ( v65 != this + 1 )
          invalid_parameter_noinfo();
        if ( v17 != v71 )
        {
          for ( i = v63; ; --i )
          {
            v19 = v6[1];
            if ( !v19 || i >= (v6[2] - v19) >> 3 )
              invalid_parameter_noinfo();
            v20 = 8 * i;
            v21 = (_DWORD *)(8 * i + v6[1]);
            if ( v65 != (_DWORD *)*v21 )
              invalid_parameter_noinfo();
            v22 = v66;
            if ( v66 != (_DWORD *)v21[1] )
              break;
            v23 = v6[1];
            if ( !v23 || i >= (v6[2] - v23) >> 3 )
            {
              invalid_parameter_noinfo();
              v22 = v66;
            }
            v24 = v6[1];
            *(_DWORD *)(v20 + v24) = v65;
            v25 = v68;
            *(_DWORD *)(v20 + v24 + 4) = v68;
            if ( !i )
              goto LABEL_49;
          }
          v25 = v68;
LABEL_49:
          v26 = this[2];
          *(_DWORD *)v22[1] = v25;
          *(_DWORD *)v25[1] = v26;
          **(_DWORD **)(v26 + 4) = v22;
          v27 = *(_DWORD *)(v26 + 4);
          *(_DWORD *)(v26 + 4) = v25[1];
          v25[1] = v22[1];
          v22[1] = v27;
          v28 = (_DWORD *)this[2];
          v29 = (_DWORD *)v28[1];
          if ( v29 == v28 )
            invalid_parameter_noinfo();
          v30 = v6[1];
          v31 = this[2];
          v66 = v29;
          v32 = this[9] + 1;
          v65 = this + 1;
          if ( !v30 || v32 >= (v6[2] - v30) >> 3 )
            invalid_parameter_noinfo();
          v33 = v6[1];
          *(_DWORD *)(v33 + 8 * v32) = this + 1;
          *(_DWORD *)(v33 + 8 * v32 + 4) = v31;
        }
        for ( j = this[9]; v63 < j; *(_DWORD *)(v41 + v37 + 4) = v66 )
        {
          v35 = v6[1];
          v73 = this[2];
          if ( !v35 || j >= (v6[2] - v35) >> 3 )
            invalid_parameter_noinfo();
          v36 = v6[1];
          v37 = 8 * j;
          v38 = *(_DWORD **)(v36 + 8 * j);
          v39 = 8 * j + v36;
          if ( !v38 || v38 != this + 1 )
            invalid_parameter_noinfo();
          if ( *(_DWORD *)(v39 + 4) != v73 )
            break;
          v40 = v6[1];
          if ( !v40 || j >= (v6[2] - v40) >> 3 )
            invalid_parameter_noinfo();
          v41 = v6[1];
          --j;
          *(_DWORD *)(v41 + v37) = v65;
        }
        v42 = (_DWORD *)this[2];
        if ( v67 != this + 1 )
          invalid_parameter_noinfo();
        if ( v68 == v42 )
          break;
        v12 = v63;
        v65 = v67;
        v66 = v68;
      }
    }
    ++this[9];
    v3 = this;
  }
  v43 = std::string::end(a3, v72);
  v44 = std::string::begin(a3, v70);
  v45 = sub_1003B570(*(_DWORD **)v44, *(_DWORD *)(v44 + 4), *(_DWORD **)v43, *(_DWORD *)(v43 + 4));
  v46 = ldiv(v45, 127773);
  v47 = (16807 * v46.rem - 2836 * v46.quot + (16807 * v46.rem - 2836 * v46.quot < 0 ? 0x7FFFFFFF : 0)) & v3[8];
  v62 = v47;
  if ( v3[9] <= v47 )
  {
    v47 += -1 - (v3[8] >> 1);
    v62 = v47;
  }
  v48 = v3[5];
  v64 = v47;
  v49 = v47 + 1;
  if ( !v48 || v49 >= (v3[6] - v48) >> 3 )
    invalid_parameter_noinfo();
  v50 = v3[5];
  v51 = *(_DWORD *)(v50 + 8 * v49);
  v52 = *(_DWORD *)(v50 + 8 * v49 + 4);
  while ( 1 )
  {
    v53 = v3[5];
    if ( !v53 || v62 >= (v3[6] - v53) >> 3 )
      invalid_parameter_noinfo();
    v54 = (_DWORD *)(8 * v62 + v3[5]);
    if ( !v51 || v51 != *v54 )
      invalid_parameter_noinfo();
    if ( v52 == v54[1] )
      break;
    if ( !v51 )
      invalid_parameter_noinfo();
    v52 = *(_DWORD *)(v52 + 4);
    if ( v52 == *(_DWORD *)(v51 + 4) )
    {
      invalid_parameter_noinfo();
      if ( v52 == *(_DWORD *)(v51 + 4) )
        invalid_parameter_noinfo();
    }
    if ( !(unsigned __int8)std::operator<<char>(a3, v52 + 8) )
    {
      if ( v52 == *(_DWORD *)(v51 + 4) )
        invalid_parameter_noinfo();
      if ( !(unsigned __int8)std::operator<<char>(v52 + 8, a3) )
      {
        result = a2;
        *(_DWORD *)(a2 + 4) = v52;
        *(_DWORD *)a2 = v51;
        *(_BYTE *)(a2 + 8) = 0;
        return result;
      }
      if ( v52 == *(_DWORD *)(v51 + 4) )
        invalid_parameter_noinfo();
      v52 = *(_DWORD *)v52;
      break;
    }
  }
  v55 = sub_100F80D0(v52, *(CREControl **)(v52 + 4), a3);
  sub_100F5C50(v3 + 1, 1u);
  *(_DWORD *)(v52 + 4) = v55;
  *(_DWORD *)v55[1] = v55;
  if ( !v51 )
    invalid_parameter_noinfo();
  v69 = *(_DWORD *)(v52 + 4);
  if ( v69 == *(_DWORD *)(v51 + 4) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v56 = v3[5];
    if ( !v56 || v64 >= (v3[6] - v56) >> 3 )
      invalid_parameter_noinfo();
    v57 = (_DWORD *)(8 * v64 + v3[5]);
    if ( !v51 || v51 != *v57 )
      invalid_parameter_noinfo();
    if ( v52 != v57[1] )
      break;
    v58 = v3[5];
    if ( !v58 || v64 >= (v3[6] - v58) >> 3 )
      invalid_parameter_noinfo();
    v59 = v3[5];
    *(_DWORD *)(v59 + 8 * v64) = v51;
    *(_DWORD *)(v59 + 8 * v64 + 4) = v69;
    if ( !v64 )
      break;
    --v64;
  }
  result = a2;
  *(_DWORD *)a2 = v51;
  *(_DWORD *)(a2 + 4) = v69;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
