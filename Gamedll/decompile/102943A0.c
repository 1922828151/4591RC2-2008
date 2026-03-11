/*
 * func-name: sub_102943A0
 * func-address: 0x102943a0
 * callers: 0x1001a0cd
 * callees: 0x10002eff, 0x10008503
 */

unsigned int __thiscall sub_102943A0(_DWORD *this, int a2, int a3)
{
  unsigned int v3; // ebx
  int v5; // edi
  unsigned int result; // eax
  unsigned int v7; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // ecx
  unsigned int v15; // ebp
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // edi
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // edi
  int v25; // ecx
  int v26; // edx
  int v27; // edi
  int v28; // eax
  int v29; // eax
  int v30; // edi
  int v31; // ebp
  int v32; // ecx
  int v33; // edx
  unsigned int v34; // ebx
  int v35; // ebp
  unsigned int v36; // ebx
  void (__cdecl *v37)(); // ebp
  int v38; // eax
  int v39; // eax
  int v40; // ecx
  int v41; // esi
  int v42; // esi
  unsigned int v43; // [esp+10h] [ebp-18h]
  int i; // [esp+14h] [ebp-14h]
  int v45; // [esp+18h] [ebp-10h]
  int j; // [esp+1Ch] [ebp-Ch]
  unsigned int v47; // [esp+20h] [ebp-8h]
  unsigned int v48; // [esp+24h] [ebp-4h]

  v3 = 0;
  v5 = 0;
LABEL_2:
  result = this[134];
  v45 = v5;
  v48 = v3;
  if ( result )
  {
    result = (int)(this[135] - result) / 60;
    if ( v3 < result )
    {
      v7 = 0;
      for ( i = 0; ; i += 128 )
      {
        v8 = this[134];
        v43 = v7;
        if ( !v8 || v3 >= (this[135] - v8) / 60 )
          _invalid_parameter_noinfo();
        v9 = this[134];
        v10 = *(_DWORD *)(v5 + v9 + 48);
        v11 = v5 + v9 + 44;
        if ( !v10 || v7 >= (*(_DWORD *)(v11 + 8) - v10) >> 7 )
        {
          ++v3;
          v5 += 60;
          goto LABEL_2;
        }
        v12 = this[134];
        if ( !v12 || v3 >= (this[135] - v12) / 60 )
          _invalid_parameter_noinfo();
        v13 = v5 + this[134] + 44;
        v14 = *(_DWORD *)(v13 + 4);
        if ( !v14 || v7 >= (*(_DWORD *)(v13 + 8) - v14) >> 7 )
          _invalid_parameter_noinfo();
        if ( *(_DWORD *)(i + *(_DWORD *)(v13 + 4) + 68) == a2 )
          break;
LABEL_38:
        v5 = v45;
        ++v7;
      }
      v15 = 0;
      for ( j = 0; ; j += 76 )
      {
        v16 = this[134];
        v47 = v15;
        if ( !v16 || v3 >= (this[135] - v16) / 60 )
          _invalid_parameter_noinfo();
        v17 = this[134];
        v18 = *(_DWORD *)(v45 + v17 + 48);
        v19 = v45 + v17 + 44;
        if ( !v18 || v43 >= (*(_DWORD *)(v45 + v17 + 52) - v18) >> 7 )
          _invalid_parameter_noinfo();
        v20 = *(_DWORD *)(v19 + 4);
        v21 = *(_DWORD *)(i + v20 + 76);
        if ( !v21 || v15 >= (*(_DWORD *)(i + v20 + 80) - v21) / 76 )
        {
          v7 = v43;
          goto LABEL_38;
        }
        v22 = this[134];
        if ( !v22 || v3 >= (this[135] - v22) / 60 )
          _invalid_parameter_noinfo();
        v23 = this[134];
        v24 = v45 + v23 + 44;
        v25 = *(_DWORD *)(v45 + v23 + 48);
        if ( !v25 || v43 >= (*(_DWORD *)(v45 + v23 + 52) - v25) >> 7 )
          _invalid_parameter_noinfo();
        v26 = *(_DWORD *)(v24 + 4);
        v27 = i + v26 + 72;
        v28 = *(_DWORD *)(i + v26 + 76);
        if ( !v28 || v15 >= (*(_DWORD *)(i + v26 + 80) - v28) / 76 )
          _invalid_parameter_noinfo();
        if ( *(_DWORD *)(j + *(_DWORD *)(v27 + 4) + 56) == a3 )
          break;
        ++v15;
      }
      v29 = this[134];
      if ( !v29 || v3 >= (this[135] - v29) / 60 )
        _invalid_parameter_noinfo();
      v30 = 60 * v3;
      v31 = this[134] + 60 * v3 + 44;
      v32 = *(_DWORD *)(this[134] + 60 * v3 + 48);
      if ( !v32 || v43 >= (*(_DWORD *)(this[134] + 60 * v3 + 52) - v32) >> 7 )
        _invalid_parameter_noinfo();
      v33 = *(_DWORD *)(v31 + 4);
      v34 = *(_DWORD *)(v33 + (v43 << 7) + 76);
      v35 = v33 + (v43 << 7) + 72;
      if ( v34 > *(_DWORD *)(v33 + (v43 << 7) + 80) )
        _invalid_parameter_noinfo();
      v36 = 76 * v47 + v34;
      if ( v36 <= *(_DWORD *)(v35 + 8) && v36 >= *(_DWORD *)(v35 + 4) )
      {
        v37 = _invalid_parameter_noinfo;
      }
      else
      {
        v37 = _invalid_parameter_noinfo;
        _invalid_parameter_noinfo();
      }
      v38 = this[134];
      if ( !v38 || v48 >= (this[135] - v38) / 60 )
        v37();
      v39 = this[134];
      v40 = *(_DWORD *)(v30 + v39 + 48);
      v41 = v30 + v39 + 44;
      if ( !v40 || v43 >= (*(_DWORD *)(v30 + v39 + 52) - v40) >> 7 )
        v37();
      v42 = (v43 << 7) + *(_DWORD *)(v41 + 4) + 72;
      sub_10008503(v36 + 76, *(_DWORD *)(v42 + 8), v36);
      result = sub_10002EFF((void *)(*(_DWORD *)(v42 + 8) - 76), *(_DWORD *)(v42 + 8));
      *(_DWORD *)(v42 + 8) -= 76;
    }
  }
  return result;
}
