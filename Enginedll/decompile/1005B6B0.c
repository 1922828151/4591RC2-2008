/*
 * func-name: sub_1005B6B0
 * func-address: 0x1005b6b0
 * callers: 0x10055de0, 0x1005b6b0
 * callees: 0x1000d9a0, 0x10019470, 0x1004c2c0, 0x10055320, 0x10057080, 0x10059ad0, 0x1005a210, 0x1005b260, 0x1005b6b0, 0x10076ef0, 0x10116f70, 0x10179050, 0x101a2534
 */

_DWORD *__thiscall sub_1005B6B0(_DWORD *this, int a2)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  int v4; // edi
  float *v5; // ebp
  float *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int j; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  unsigned int k; // edi
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // edi
  unsigned int v20; // edi
  _DWORD *v21; // ebp
  unsigned int m; // ebp
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  _DWORD *v27; // eax
  _DWORD *result; // eax
  _DWORD *v29; // eax
  int *v30; // eax
  unsigned int i; // edi
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  int v35; // ecx
  int v36; // eax
  struct Profiler *v37; // eax
  _DWORD *v38; // eax
  int v39; // edi
  int v40; // eax
  int v41; // ecx
  unsigned int v42; // ebx
  unsigned int v43; // eax
  _DWORD *v44; // esi
  unsigned int v45; // edx
  int *v46; // eax
  char *v47; // edi
  int v48; // [esp-18h] [ebp-40h]
  int v49; // [esp+0h] [ebp-28h] BYREF
  int v50[2]; // [esp+4h] [ebp-24h] BYREF
  int v51; // [esp+Ch] [ebp-1Ch]
  float v52[5]; // [esp+10h] [ebp-18h] BYREF
  int v53; // [esp+24h] [ebp-4h]

  v53 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  LODWORD(v52[4]) = &loc_101A9A3C;
  LODWORD(v52[3]) = ExceptionList;
  if ( *(_BYTE *)(*(_DWORD *)(a2 + 276) + 81) && *(_BYTE *)this && this[1] == 256 )
  {
    v4 = 0;
    *(float *)&v49 = 1.0e10;
    v5 = (float *)(a2 + 164);
    do
    {
      v6 = sub_1004C2C0(v5, v52, v4);
      *(float *)v50 = 0.0;
      *(float *)&v50[1] = 0.0;
      *(float *)&v51 = 0.0;
      sub_10179050(v6, v50);
      if ( *(float *)&v49 > (double)*(float *)&v51 )
        v49 = v51;
      ++v4;
    }
    while ( v4 < 8 );
    *(float *)(a2 + 268) = *(float *)(a2 + 268) + *(float *)&v49;
  }
  v7 = this[1];
  this[14] = a2;
  if ( v7 > 32 )
  {
    if ( v7 == 64 )
    {
      for ( i = 0; ; ++i )
      {
        v35 = this[3];
        if ( !v35 || i >= (this[4] - v35) >> 2 )
          break;
        v36 = this[3];
        if ( !*(_DWORD *)(*(_DWORD *)(v36 + 4 * i) + 56) )
          goto LABEL_73;
        if ( !v36 || i >= (this[4] - v36) >> 2 )
          invalid_parameter_noinfo();
        if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this[3] + 4 * i) + 56) + 52) + 152) == *(_DWORD *)(*(_DWORD *)(a2 + 52) + 152) )
        {
LABEL_73:
          v34 = this[3];
          if ( !v34 || i >= (this[4] - v34) >> 2 )
            invalid_parameter_noinfo();
          return (_DWORD *)sub_1005B6B0(a2);
        }
      }
      goto LABEL_89;
    }
    if ( v7 != 256 )
    {
LABEL_89:
      v37 = Profiler::Get();
      ++*((_DWORD *)v37 + 8);
      v38 = operator new(0x50u);
      if ( v38 )
      {
        v38[3] = 0;
        v38[4] = 0;
        v38[5] = 0;
        v38[7] = 0;
        v38[8] = 0;
        v38[9] = 0;
        v38[11] = 0;
        v38[12] = 0;
        v38[13] = 0;
        v38[16] = 0;
        v38[17] = 0;
        v38[18] = 0;
        v38[1] = 128;
        v38[14] = 0;
        v38[19] = 0;
        *(_BYTE *)v38 = 0;
        v39 = (int)v38;
      }
      else
      {
        v39 = 0;
      }
      *(_BYTE *)v39 = *(_BYTE *)this;
      v40 = this[19] + 1;
      v53 = -1;
      v49 = v39;
      *(_DWORD *)(v39 + 76) = v40;
      sub_1000D9A0(v39 + 60, (int)(this + 15));
      v41 = this[16];
      v42 = this[19] + 1;
      if ( !v41 || v42 >= (this[17] - v41) >> 2 )
        invalid_parameter_noinfo();
      v48 = a2;
      *(_DWORD *)(v39 + 4) = *(_DWORD *)(this[16] + 4 * v42);
      sub_1005B6B0(v48);
      v43 = this[3];
      v44 = this + 2;
      if ( v43 )
        v45 = (int)(v44[2] - v43) >> 2;
      else
        v45 = 0;
      if ( v43 && v45 < (int)(v44[3] - v43) >> 2 )
      {
        v46 = (int *)v44[2];
        *v46 = v39;
        result = v46 + 1;
        v44[2] = result;
      }
      else
      {
        v47 = (char *)v44[2];
        if ( v43 > (unsigned int)v47 )
          invalid_parameter_noinfo();
        return sub_1005A210(v44, v50, v44, v47, &v49);
      }
      return result;
    }
LABEL_79:
    ++*(_DWORD *)(a2 + 16);
    return sub_1005B260(this + 6, &a2);
  }
  if ( v7 == 32 )
  {
    for ( i = 0; ; ++i )
    {
      v32 = this[3];
      if ( !v32 || i >= (this[4] - v32) >> 2 )
        break;
      v33 = this[3];
      if ( !*(_DWORD *)(*(_DWORD *)(v33 + 4 * i) + 56) )
        goto LABEL_73;
      if ( !v33 || i >= (this[4] - v33) >> 2 )
        invalid_parameter_noinfo();
      if ( **(_DWORD **)(*(_DWORD *)(*(_DWORD *)(this[3] + 4 * i) + 56) + 276) == **(_DWORD **)(a2 + 276) )
        goto LABEL_73;
    }
    goto LABEL_89;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 7;
    if ( v9 )
    {
      if ( v9 == 8 )
      {
        for ( j = 0; ; ++j )
        {
          v11 = this[3];
          if ( !v11 || j >= (this[4] - v11) >> 2 )
            break;
          v12 = this[3];
          if ( !*(_DWORD *)(*(_DWORD *)(v12 + 4 * j) + 56) )
            goto LABEL_23;
          if ( !v12 || j >= (this[4] - v12) >> 2 )
            invalid_parameter_noinfo();
          if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this[3] + 4 * j) + 56) + 52) == *(_DWORD *)(a2 + 52) )
          {
LABEL_23:
            v13 = this[3];
            if ( !v13 || j >= (this[4] - v13) >> 2 )
              invalid_parameter_noinfo();
            return (_DWORD *)sub_1005B6B0(a2);
          }
        }
      }
    }
    else
    {
      for ( k = 0; ; ++k )
      {
        v15 = this[3];
        if ( !v15 || k >= (this[4] - v15) >> 2 )
          break;
        v16 = this[3];
        if ( !*(_DWORD *)(*(_DWORD *)(v16 + 4 * k) + 56) )
          goto LABEL_36;
        if ( !v16 || k >= (this[4] - v16) >> 2 )
          invalid_parameter_noinfo();
        if ( sub_10057080(*(_DWORD *)(*(_DWORD *)(4 * k + this[3]) + 56), a2) )
        {
LABEL_36:
          v17 = this[3];
          if ( !v17 || k >= (this[4] - v17) >> 2 )
            invalid_parameter_noinfo();
          return (_DWORD *)sub_1005B6B0(a2);
        }
      }
    }
    goto LABEL_89;
  }
  if ( !*((_BYTE *)BatchRenderer::Instance() + 1044) )
    goto LABEL_79;
  if ( !*(_BYTE *)(*(_DWORD *)(v18 + 276) + 80) )
    goto LABEL_79;
  if ( *(_BYTE *)(*(_DWORD *)(v18 + 92) + 120) )
    goto LABEL_79;
  v19 = a2;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 92) + 32))(*(_DWORD *)(a2 + 92))
    || (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v19 + 92) + 24))(*(_DWORD *)(v19 + 92))
    || *(_DWORD *)(v19 + 280) && *(_BYTE *)(*(_DWORD *)(v19 + 280) + 727) )
  {
    goto LABEL_79;
  }
  v20 = 0;
  if ( !std::vector<Model *>::size(this + 10) )
  {
LABEL_52:
    for ( m = 0; ; ++m )
    {
      v23 = this[7];
      if ( !v23 || m >= (this[8] - v23) >> 2 )
        break;
      v24 = std::vector<Model *>::operator[](this + 6, m);
      if ( *(_DWORD *)(*(_DWORD *)v24 + 92) == *(_DWORD *)(a2 + 92) )
      {
        v25 = std::vector<Model *>::operator[](this + 6, m);
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)v25 + 92) + 32))(*(_DWORD *)(*(_DWORD *)v25 + 92))
          && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)std::vector<Model *>::operator[](this + 6, m) + 92) + 120) )
        {
          v26 = std::vector<Model *>::operator[](this + 6, m);
          if ( *(_DWORD *)(*(_DWORD *)v26 + 228) == *(_DWORD *)(a2 + 228)
            && (!*(_DWORD *)(a2 + 280) || !*(_BYTE *)(*(_DWORD *)(a2 + 280) + 727)) )
          {
            ++*(_DWORD *)(a2 + 16);
            v29 = (_DWORD *)std::vector<Model *>::operator[](this + 6, m);
            sub_10059AD0(*v29 + 236, &a2);
            v30 = (int *)std::vector<Model *>::operator[](this + 6, m);
            return sub_1005B260(this + 10, v30);
          }
        }
      }
    }
    goto LABEL_79;
  }
  v21 = (_DWORD *)a2;
  while ( *(_DWORD *)(*(_DWORD *)std::vector<Model *>::operator[](this + 10, v20) + 92) != v21[23]
       || *(_DWORD *)(*(_DWORD *)std::vector<Model *>::operator[](this + 10, v20) + 228) != v21[57] )
  {
    if ( ++v20 >= std::vector<Model *>::size(this + 10) )
      goto LABEL_52;
  }
  ++v21[4];
  v27 = (_DWORD *)std::vector<Model *>::operator[](this + 10, v20);
  return sub_10059AD0(*v27 + 236, &a2);
}
