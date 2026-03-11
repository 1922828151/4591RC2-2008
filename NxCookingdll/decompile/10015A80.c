/*
 * func-name: sub_10015A80
 * func-address: 0x10015a80
 * callers: 0x1000e060, 0x1000f160, 0x1000fe90, 0x10011260, 0x1001efc0, 0x10022410, 0x10025310, 0x1002d920, 0x10030940
 * callees: 0x100159f0, 0x10034f10, 0x100363f0
 */

unsigned int *__thiscall sub_10015A80(unsigned int *this, unsigned __int8 *a2, unsigned int a3, int a4)
{
  unsigned __int8 *v4; // ebx
  unsigned int *v5; // edi
  unsigned int v6; // ebp
  int v7; // eax
  unsigned int v8; // eax
  unsigned __int8 *v9; // eax
  unsigned __int8 *v10; // ecx
  unsigned int v11; // esi
  unsigned int v12; // edx
  unsigned __int8 *v13; // eax
  unsigned int j; // eax
  _DWORD *v16; // ebx
  unsigned int v17; // esi
  unsigned int v18; // edx
  unsigned __int8 *v19; // eax
  unsigned __int8 *v20; // eax
  unsigned __int8 *v21; // eax
  unsigned __int8 *v22; // ecx
  int v23; // esi
  int v24; // edx
  unsigned __int8 *v25; // eax
  unsigned int i; // eax
  _DWORD *v27; // ebx
  int v28; // esi
  int v29; // edx
  unsigned __int8 *v30; // eax
  unsigned __int8 *v31; // eax
  int v32; // ecx
  _DWORD *v33; // eax
  int v34; // edx
  int v35; // esi
  unsigned int v36; // eax
  _DWORD *v37; // esi
  char *v38; // ebx
  unsigned int v39; // edx
  _DWORD *v40; // eax
  unsigned int v41; // eax
  _DWORD *v42; // ecx
  _DWORD *v43; // eax
  int *v44; // ecx
  int v45; // esi
  int v46; // edi
  int v47; // edx
  int v48; // ebp
  int v49; // edx
  int v50; // ebp
  int v51; // edx
  int v52; // ebp
  int v53; // edx
  int v54; // ebp
  unsigned int m; // eax
  int *v56; // ecx
  int *k; // edx
  int v58; // eax
  unsigned int v59; // eax
  int v60; // [esp+Ch] [ebp-1410h]
  unsigned int v61; // [esp+10h] [ebp-140Ch]
  int v63; // [esp+18h] [ebp-1404h]
  _DWORD v64[256]; // [esp+1Ch] [ebp-1400h] BYREF
  _DWORD v65[1024]; // [esp+41Ch] [ebp-1000h] BYREF

  v4 = a2;
  v5 = this;
  if ( !a2 )
    return v5;
  v6 = a3;
  if ( (int)a3 <= 0 )
    return v5;
  v7 = *this;
  ++this[3];
  v8 = v7 & 0x7FFFFFFF;
  if ( a3 != v8 )
  {
    if ( a3 > v8 )
      sub_100159F0((int)this, a3);
    *v5 = a3 | 0x80000000;
  }
  if ( a4 != 1 )
  {
    memset(v65, 0, sizeof(v65));
    v21 = a2;
    v22 = &a2[4 * a3];
    if ( (*v5 & 0x80000000) == 0 )
    {
      v27 = (_DWORD *)v5[1];
      v28 = *(_DWORD *)&a2[4 * *v27];
      if ( a2 == v22 )
      {
LABEL_18:
        ++v5[4];
        return v5;
      }
      while ( 1 )
      {
        v29 = *(_DWORD *)&a2[4 * *v27++];
        if ( v29 < v28 )
          break;
        v28 = v29;
        ++v65[*v21];
        ++v65[v21[1] + 256];
        v30 = v21 + 1;
        ++v65[*++v30 + 512];
        ++v65[v30[1] + 768];
        v21 = v30 + 2;
        if ( v21 == v22 )
        {
          ++v5[4];
          return v5;
        }
      }
      v6 = a3;
    }
    else
    {
      v23 = *(_DWORD *)a2;
      if ( a2 == v22 )
      {
LABEL_28:
        ++v5[4];
        for ( i = 0; i < a3; ++i )
          *(_DWORD *)(v5[1] + 4 * i) = i;
        return v5;
      }
      while ( 1 )
      {
        v24 = *(_DWORD *)v4;
        v4 += 4;
        if ( v24 < v23 )
          break;
        v23 = v24;
        ++v65[*v21];
        ++v65[v21[1] + 256];
        v25 = v21 + 1;
        ++v65[*++v25 + 512];
        ++v65[v25[1] + 768];
        v21 = v25 + 2;
        if ( v21 == v22 )
          goto LABEL_28;
      }
    }
    for ( ; v21 != v22; v21 = v31 + 2 )
    {
      ++v65[*v21];
      ++v65[v21[1] + 256];
      v31 = v21 + 1;
      ++v65[*++v31 + 512];
      ++v65[v31[1] + 768];
    }
    goto LABEL_38;
  }
  memset(v65, 0, sizeof(v65));
  v9 = a2;
  v10 = &a2[4 * a3];
  if ( (*v5 & 0x80000000) != 0 )
  {
    v11 = *(_DWORD *)a2;
    if ( a2 == v10 )
    {
LABEL_12:
      ++v5[4];
      for ( j = 0; j < a3; ++j )
        *(_DWORD *)(v5[1] + 4 * j) = j;
      return v5;
    }
    while ( 1 )
    {
      v12 = *(_DWORD *)v4;
      v4 += 4;
      if ( v12 < v11 )
        goto LABEL_21;
      v11 = v12;
      ++v65[*v9];
      ++v65[v9[1] + 256];
      v13 = v9 + 1;
      ++v65[*++v13 + 512];
      ++v65[v13[1] + 768];
      v9 = v13 + 2;
      if ( v9 == v10 )
        goto LABEL_12;
    }
  }
  v16 = (_DWORD *)v5[1];
  v17 = *(_DWORD *)&a2[4 * *v16];
  if ( a2 == v10 )
    goto LABEL_18;
  while ( 1 )
  {
    v18 = *(_DWORD *)&a2[4 * *v16++];
    if ( v18 < v17 )
      break;
    v17 = v18;
    ++v65[*v9];
    ++v65[v9[1] + 256];
    v19 = v9 + 1;
    ++v65[*++v19 + 512];
    ++v65[v19[1] + 768];
    v9 = v19 + 2;
    if ( v9 == v10 )
      goto LABEL_18;
  }
  v6 = a3;
LABEL_21:
  while ( v9 != v10 )
  {
    ++v65[*v9];
    ++v65[v9[1] + 256];
    v20 = v9 + 1;
    ++v65[*++v20 + 512];
    ++v65[v20[1] + 768];
    v9 = v20 + 2;
  }
LABEL_38:
  v32 = 0;
  v60 = 0;
  if ( !a4 )
  {
    v33 = &v65[898];
    v34 = 32;
    do
    {
      v35 = *(v33 - 1) + *(v33 - 2);
      v33 += 4;
      v32 += *(v33 - 4) + *(v33 - 3) + v35;
      --v34;
    }
    while ( v34 );
    v60 = v32;
  }
  v36 = 0;
  v61 = 0;
  do
  {
    v37 = &v65[256 * v36];
    v38 = (char *)&a2[v36];
    if ( v37[a2[v36]] != v6 )
    {
      if ( v36 != 3 || a4 == 1 )
      {
        v64[0] = v5[2];
        v43 = v64;
        v44 = v37 + 3;
        v45 = (char *)v37 - (char *)v64;
        v46 = 51;
        do
        {
          v47 = *v43 + 4 * *(_DWORD *)((char *)v43 + v45);
          v48 = *(v44 - 2);
          v43[1] = v47;
          v49 = v47 + 4 * v48;
          v50 = *(v44 - 1);
          v43[2] = v49;
          v51 = v49 + 4 * v50;
          v52 = *v44;
          v43[3] = v51;
          v53 = v51 + 4 * v52;
          v54 = v44[1];
          v43[4] = v53;
          v43[5] = v53 + 4 * v54;
          v43 += 5;
          v44 += 5;
          --v46;
        }
        while ( v46 );
      }
      else
      {
        v39 = v5[2];
        v64[0] = v39 + 4 * v32;
        v40 = v64;
        v63 = 127;
        do
        {
          v40[1] = *v40 + 4 * *(_DWORD *)((char *)v40 + (char *)v37 - (char *)v64);
          ++v40;
          --v63;
        }
        while ( v63 );
        v64[128] = v39;
        v41 = 129;
        v42 = v37 + 128;
        do
        {
          v64[v41] = v64[v41 - 1] + 4 * *v42;
          ++v41;
          ++v42;
        }
        while ( v41 < 0x100 );
      }
      v5 = this;
      v6 = a3;
      if ( (*this & 0x80000000) == 0 )
      {
        v56 = (int *)this[1];
        for ( k = &v56[a3]; v56 != k; ++v56 )
        {
          v58 = *v56;
          *(_DWORD *)v64[(unsigned __int8)v38[4 * *v56]] = *v56;
          v64[(unsigned __int8)v38[4 * v58]] += 4;
        }
      }
      else
      {
        for ( m = 0; m < a3; ++m )
        {
          *(_DWORD *)v64[(unsigned __int8)v38[4 * m]] = m;
          v64[(unsigned __int8)v38[4 * m]] += 4;
        }
        *this &= ~0x80000000;
      }
      v59 = this[1];
      this[1] = this[2];
      v32 = v60;
      this[2] = v59;
      v36 = v61;
    }
    v61 = ++v36;
  }
  while ( v36 < 4 );
  return v5;
}
