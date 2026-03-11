/*
 * func-name: sub_10118420
 * func-address: 0x10118420
 * callers: 0x100a0e10
 * callees: 0x10117e10, 0x101a251c, 0x101a2780
 */

int *__thiscall sub_10118420(int *this, float *a2, unsigned int a3)
{
  float *v3; // edi
  int *v4; // ebx
  unsigned int v5; // ebp
  int v6; // eax
  unsigned int v7; // eax
  float *v8; // ecx
  float *v9; // edx
  float *v10; // esi
  double v11; // st7
  unsigned __int8 *v12; // ecx
  unsigned int jj; // eax
  _DWORD *v15; // esi
  double v16; // st7
  unsigned __int8 *v17; // ecx
  unsigned __int8 *v18; // ecx
  int v19; // edx
  _DWORD *v20; // eax
  int v21; // ecx
  int v22; // esi
  unsigned int v23; // eax
  char *v24; // esi
  _DWORD *v25; // edi
  _DWORD *v26; // eax
  int *v27; // ecx
  int v28; // edi
  int v29; // ebx
  int v30; // edx
  int v31; // ebp
  int v32; // edx
  int v33; // ebp
  int v34; // edx
  int v35; // ebp
  int v36; // edx
  int v37; // ebp
  unsigned int ii; // eax
  int v39; // eax
  int v40; // ecx
  int *v41; // ecx
  int *n; // edx
  int v43; // eax
  int v44; // eax
  unsigned __int8 v45; // al
  int v46; // ecx
  unsigned int i; // eax
  char *v48; // eax
  _DWORD *v49; // ecx
  int v50; // edx
  unsigned int j; // eax
  int v52; // edx
  int v53; // ecx
  int v54; // edx
  unsigned int m; // eax
  unsigned int v56; // ecx
  bool v57; // cf
  unsigned int **v58; // ecx
  unsigned int *v59; // edx
  int v60; // eax
  int v61; // ecx
  unsigned int k; // esi
  int v63; // eax
  unsigned int v64; // ecx
  _DWORD **v65; // ecx
  _DWORD *v66; // edx
  int v67; // eax
  unsigned int v68; // eax
  int v69; // eax
  int v70; // ecx
  int v71; // ecx
  int v72; // eax
  float v73; // [esp+Ch] [ebp-140Ch]
  float v74; // [esp+Ch] [ebp-140Ch]
  unsigned int v75; // [esp+Ch] [ebp-140Ch]
  float v76; // [esp+10h] [ebp-1408h]
  float v77; // [esp+10h] [ebp-1408h]
  int v78; // [esp+10h] [ebp-1408h]
  int *v79; // [esp+14h] [ebp-1404h]
  _DWORD v80[254]; // [esp+18h] [ebp-1400h] BYREF
  char v81; // [esp+410h] [ebp-1008h] BYREF
  int v82; // [esp+414h] [ebp-1004h]
  _DWORD v83[1024]; // [esp+418h] [ebp-1000h] BYREF

  v3 = a2;
  v4 = this;
  v79 = this;
  if ( !a2 )
    return v4;
  v5 = a3;
  if ( (int)a3 <= 0 )
    return v4;
  v6 = *this;
  ++this[3];
  v7 = v6 & 0x7FFFFFFF;
  if ( a3 != v7 )
  {
    if ( a3 > v7 )
      sub_10117E10((int)this, a3);
    *v4 = a3 | 0x80000000;
  }
  memset(v83, 0, sizeof(v83));
  v8 = a2;
  v9 = &a2[a3];
  if ( *v4 >= 0 )
  {
    v15 = (_DWORD *)v4[1];
    v74 = a2[*v15];
    if ( a2 == v9 )
    {
LABEL_17:
      ++v4[4];
      return v4;
    }
    while ( 1 )
    {
      v16 = a2[*v15++];
      v77 = v16;
      if ( v74 > (double)v77 )
        goto LABEL_18;
      v74 = v16;
      ++v83[*(unsigned __int8 *)v8];
      ++v83[*((unsigned __int8 *)v8 + 1) + 256];
      v17 = (unsigned __int8 *)v8 + 1;
      ++v83[*++v17 + 512];
      ++v83[v17[1] + 768];
      v8 = (float *)(v17 + 2);
      if ( v8 == v9 )
        goto LABEL_17;
    }
  }
  v73 = *a2;
  v10 = a2;
  if ( a2 != v9 )
  {
    while ( 1 )
    {
      v11 = *v10++;
      v76 = v11;
      if ( v73 > (double)v76 )
        break;
      v73 = v11;
      ++v83[*(unsigned __int8 *)v8];
      ++v83[*((unsigned __int8 *)v8 + 1) + 256];
      v12 = (unsigned __int8 *)v8 + 1;
      ++v83[*++v12 + 512];
      ++v83[v12[1] + 768];
      v8 = (float *)(v12 + 2);
      if ( v8 == v9 )
        goto LABEL_11;
    }
LABEL_18:
    while ( v8 != v9 )
    {
      ++v83[*(unsigned __int8 *)v8];
      ++v83[*((unsigned __int8 *)v8 + 1) + 256];
      v18 = (unsigned __int8 *)v8 + 1;
      ++v83[*++v18 + 512];
      ++v83[v18[1] + 768];
      v8 = (float *)(v18 + 2);
    }
    v19 = 0;
    v20 = &v83[898];
    v21 = 32;
    do
    {
      v22 = *(v20 - 1) + *(v20 - 2);
      v20 += 4;
      v19 += *(v20 - 4) + *(v20 - 3) + v22;
      --v21;
    }
    while ( v21 );
    v23 = 0;
    v78 = v19;
    v75 = 0;
    while ( 1 )
    {
      if ( v23 == 3 )
      {
        v45 = *((_BYTE *)v3 + 3);
        if ( v83[v45 + 768] == v5 )
        {
          if ( v45 >= 0x80u )
          {
            v68 = 0;
            if ( *v4 >= 0 )
            {
              if ( v5 )
              {
                v71 = 4 * v5;
                do
                {
                  *(_DWORD *)(v4[2] + 4 * v68++) = *(_DWORD *)(v71 + v4[1] - 4);
                  v71 -= 4;
                }
                while ( v68 < v5 );
              }
              v72 = v4[1];
              v4[1] = v4[2];
              v4[2] = v72;
            }
            else
            {
              if ( v5 )
              {
                do
                {
                  *(_DWORD *)(v4[2] + 4 * v68) = v5 - v68 - 1;
                  ++v68;
                }
                while ( v68 < v5 );
              }
              v69 = v4[1];
              v70 = v4[2];
              *v4 &= ~0x80000000;
              v4[1] = v70;
              v4[2] = v69;
            }
          }
        }
        else
        {
          v46 = v4[2];
          v80[0] = v46 + 4 * v19;
          for ( i = 1; i < 128; ++i )
            v80[i] = v80[i - 1] + 4 * v83[i + 767];
          v82 = v46;
          v48 = &v81;
          v49 = &v83[1023];
          v50 = 127;
          do
          {
            *(_DWORD *)v48 = *((_DWORD *)v48 + 1) + 4 * *v49--;
            v48 -= 4;
            --v50;
          }
          while ( v50 );
          for ( j = 128; j < 256; j += 4 )
          {
            v52 = 2 * v83[j + 769];
            v80[j] += 4 * v83[j + 768];
            v53 = v83[j + 770];
            v80[j + 1] += 2 * v52;
            v54 = 2 * v83[j + 771];
            v80[j + 2] += 4 * v53;
            v80[j + 3] += 2 * v54;
          }
          v3 = a2;
          if ( *v4 >= 0 )
          {
            for ( k = 0; k < v5; ++k )
            {
              v63 = *(_DWORD *)(v4[1] + 4 * k);
              v64 = HIBYTE(a2[v63]);
              v57 = v64 < 0x80;
              v65 = (_DWORD **)&v80[v64];
              if ( v57 )
              {
                v66 = *v65;
                *v66 = v63;
                *v65 = v66 + 1;
              }
              else
              {
                *--*v65 = v63;
              }
            }
            v67 = v4[1];
            v4[1] = v4[2];
            v4[2] = v67;
          }
          else
          {
            for ( m = 0; m < v5; ++m )
            {
              v56 = HIBYTE(a2[m]);
              v57 = v56 < 0x80;
              v58 = (unsigned int **)&v80[v56];
              if ( v57 )
              {
                v59 = *v58;
                *v59 = m;
                *v58 = v59 + 1;
              }
              else
              {
                *--*v58 = m;
              }
            }
            v60 = v4[1];
            v61 = v4[2];
            *v4 &= ~0x80000000;
            v4[1] = v61;
            v4[2] = v60;
          }
        }
      }
      else
      {
        v24 = (char *)a2 + v75;
        v25 = &v83[256 * v75];
        if ( v25[*((unsigned __int8 *)a2 + v75)] == v5 )
        {
          v3 = a2;
        }
        else
        {
          v26 = v80;
          v80[0] = v4[2];
          v27 = v25 + 3;
          v28 = (char *)v25 - (char *)v80;
          v29 = 51;
          do
          {
            v30 = *v26 + 4 * *(_DWORD *)((char *)v26 + v28);
            v31 = *(v27 - 2);
            v26[1] = v30;
            v32 = v30 + 4 * v31;
            v33 = *(v27 - 1);
            v26[2] = v32;
            v34 = v32 + 4 * v33;
            v35 = *v27;
            v26[3] = v34;
            v36 = v34 + 4 * v35;
            v37 = v27[1];
            v26[4] = v36;
            v26[5] = v36 + 4 * v37;
            v26 += 5;
            v27 += 5;
            --v29;
          }
          while ( v29 );
          v4 = v79;
          v5 = a3;
          if ( *v79 >= 0 )
          {
            v41 = (int *)v79[1];
            for ( n = &v41[a3]; v41 != n; ++v41 )
            {
              v43 = *v41;
              *(_DWORD *)v80[(unsigned __int8)v24[4 * *v41]] = *v41;
              v80[(unsigned __int8)v24[4 * v43]] += 4;
            }
            v44 = v4[1];
            v3 = a2;
            v4[1] = v4[2];
            v4[2] = v44;
          }
          else
          {
            for ( ii = 0; ii < a3; ++ii )
            {
              *(_DWORD *)v80[(unsigned __int8)v24[4 * ii]] = ii;
              v80[(unsigned __int8)v24[4 * ii]] += 4;
            }
            v39 = v4[1];
            v40 = v4[2];
            *v4 &= ~0x80000000;
            v3 = a2;
            v4[1] = v40;
            v4[2] = v39;
          }
        }
      }
      v23 = ++v75;
      if ( v75 >= 4 )
        break;
      v19 = v78;
    }
    return v4;
  }
LABEL_11:
  ++v4[4];
  for ( jj = 0; jj < a3; ++jj )
    *(_DWORD *)(v4[1] + 4 * jj) = jj;
  return v4;
}
