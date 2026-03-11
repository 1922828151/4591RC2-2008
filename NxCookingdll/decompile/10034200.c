/*
 * func-name: sub_10034200
 * func-address: 0x10034200
 * callers: 0x10030940
 * callees: 0x10033e60, 0x10034070, 0x10034ca4, 0x10034f10
 */

int __cdecl sub_10034200(int a1, int a2, unsigned __int16 a3, unsigned __int16 a4)
{
  unsigned __int16 v4; // ax
  int v5; // ebp
  int v6; // esi
  int v7; // edx
  unsigned __int16 v8; // ax
  bool v9; // zf
  size_t v10; // edi
  int v11; // edx
  int v12; // eax
  float **v13; // ebx
  float *v14; // ecx
  float *v15; // eax
  double v16; // st7
  double v17; // st6
  double v18; // st5
  double v19; // st7
  double v20; // st6
  double v21; // st5
  int result; // eax
  int v23; // ebx
  _BYTE *v24; // ebp
  int v25; // edi
  char v26; // dl
  int v27; // ebp
  _BYTE *v28; // ebp
  int v29; // edi
  unsigned __int8 v30; // [esp+13h] [ebp-E9h]
  int v31; // [esp+14h] [ebp-E8h]
  _BYTE *v32; // [esp+14h] [ebp-E8h]
  _BYTE *v33; // [esp+18h] [ebp-E4h]
  unsigned __int16 v34; // [esp+18h] [ebp-E4h]
  int v35; // [esp+20h] [ebp-DCh]
  _BYTE *v36; // [esp+20h] [ebp-DCh]
  _BYTE *v37; // [esp+24h] [ebp-D8h]
  float *v38; // [esp+24h] [ebp-D8h]
  int v39; // [esp+28h] [ebp-D4h]
  int v40; // [esp+28h] [ebp-D4h]
  float v41; // [esp+30h] [ebp-CCh]
  float v42; // [esp+34h] [ebp-C8h]
  float v43; // [esp+38h] [ebp-C4h]
  float v44; // [esp+3Ch] [ebp-C0h]
  float v45; // [esp+40h] [ebp-BCh]
  float v46; // [esp+44h] [ebp-B8h]
  int v47; // [esp+48h] [ebp-B4h]
  size_t v48; // [esp+4Ch] [ebp-B0h]
  char v49; // [esp+50h] [ebp-ACh]
  int v50; // [esp+54h] [ebp-A8h]
  _DWORD v51[32]; // [esp+58h] [ebp-A4h] BYREF
  float v52; // [esp+D8h] [ebp-24h] BYREF
  float v53; // [esp+DCh] [ebp-20h]
  float v54; // [esp+E0h] [ebp-1Ch]
  float v55; // [esp+E4h] [ebp-18h]
  float v56; // [esp+E8h] [ebp-14h]
  float v57; // [esp+ECh] [ebp-10h]

  v4 = a3;
  v5 = a2;
  v6 = a1;
  v30 = 0;
  if ( a3 )
  {
    v31 = 0;
    v33 = (_BYTE *)(a2 + 28);
    v35 = a3;
    do
    {
      v7 = 0;
      v37 = v33;
      v39 = 3;
      do
      {
        v8 = 0;
        if ( v30 )
        {
          do
          {
            if ( v51[v8] == *(_DWORD *)(v5 + 4 * (v7 + v31)) )
              break;
            ++v8;
          }
          while ( v8 < v30 );
          v5 = a2;
        }
        if ( v8 == v30 )
          v51[v30++] = *(_DWORD *)(v5 + 4 * (v31 + v7));
        *v37 = v8;
        ++v7;
        v9 = v39-- == 1;
        ++v37;
      }
      while ( !v9 );
      v31 += 8;
      v33 += 32;
      --v35;
    }
    while ( v35 );
    v4 = a3;
  }
  v10 = v4;
  *(_WORD *)(a1 + 12) = v4;
  v11 = a4;
  v12 = 20 * v4;
  *(_WORD *)(a1 + 20) = (((v12 + 12 * a4 + 32) >> 2) + 7) & 0xFFF8;
  *(_WORD *)(a1 + 22) = (unsigned int)(v12 + 32) >> 2;
  v52 = 3.4028235e38;
  v53 = 3.4028235e38;
  v54 = 3.4028235e38;
  v55 = -3.4028235e38;
  v56 = -3.4028235e38;
  *(_WORD *)(a1 + 14) = a4;
  *(_DWORD *)(a1 + 16) = 0;
  *(_WORD *)(a1 + 24) = -1;
  *(_WORD *)(a1 + 26) = -16659;
  *(_WORD *)(a1 + 30) = -20465;
  v57 = -3.4028235e38;
  if ( a4 )
  {
    v13 = (float **)v51;
    v14 = (float *)(v12 + a1 + 36);
    do
    {
      v15 = *v13;
      *(v14 - 1) = **v13;
      *v14 = v15[1];
      v14[1] = v15[2];
      v16 = v14[1];
      if ( v54 < v16 )
        v16 = v54;
      v17 = *v14;
      if ( v53 < v17 )
        v17 = v53;
      v18 = *(v14 - 1);
      if ( v52 < v18 )
        v18 = v52;
      v41 = v18;
      v52 = v41;
      v42 = v17;
      v53 = v42;
      v43 = v16;
      v19 = v14[1];
      v54 = v43;
      if ( v57 > v19 )
        v19 = v57;
      v20 = *v14;
      if ( v56 > v20 )
        v20 = v56;
      v21 = *(v14 - 1);
      if ( v55 > v21 )
        v21 = v55;
      v44 = v21;
      v55 = v44;
      v45 = v20;
      v56 = v45;
      v46 = v19;
      ++v13;
      v14 += 3;
      --v11;
      v57 = v46;
    }
    while ( v11 );
    v5 = a2;
  }
  result = sub_10033E60(&v52, (unsigned __int16 *)a1, (_WORD *)(a1 + 6));
  if ( a3 )
    result = (int)memset(&v52, 0, v10);
  v23 = 0;
  if ( a3 )
  {
    result = 1;
    v24 = (_BYTE *)(v5 + 29);
    v34 = 1;
    v38 = &v52;
    v32 = v24;
    v48 = v10;
    do
    {
      if ( !*(_BYTE *)v38 )
      {
        v49 = v23;
        v25 = v6 + 20 * (unsigned __int16)v23 + 32;
        v50 = (unsigned __int16)v23;
        *(_BYTE *)(v25 + 3) = -1;
        *(_WORD *)(v25 + 4) = 0;
        v26 = *(v24 - 1);
        v27 = (int)(v24 - 29);
        *(_BYTE *)v25 = v26;
        sub_10034070(v27, 0, v25, (_DWORD *)(v6 + 16));
        *(_BYTE *)(v25 + 1) = *v32;
        sub_10034070(v27, 1u, v25, (_DWORD *)(a1 + 16));
        *(_BYTE *)(v25 + 2) = v32[1];
        sub_10034070(v27, 2u, v25, (_DWORD *)(a1 + 16));
        v40 = ++v23;
        if ( v34 < a3 )
        {
          v36 = (char *)&v52 + v34;
          v28 = (_BYTE *)(a2 + 32 * v34 + 28);
          v47 = (unsigned __int16)(a3 - v34);
          do
          {
            if ( !*v36
              && *(float *)(*((_DWORD *)v28 - 4) + 8) * *(float *)(*(_DWORD *)(v32 - 17) + 8)
               + *(float *)(*((_DWORD *)v28 - 4) + 4) * *(float *)(*(_DWORD *)(v32 - 17) + 4)
               + **(float **)(v32 - 17) * **((float **)v28 - 4) > 0.99989998 )
            {
              v29 = a1 + 20 * (unsigned __int16)v23 + 32;
              *(_BYTE *)(v29 + 3) = -1;
              *(_WORD *)(v29 + 4) = 0;
              *(_BYTE *)v29 = *v28;
              sub_10034070((int)(v28 - 28), 0, v29, (_DWORD *)(a1 + 16));
              *(_BYTE *)(v29 + 1) = v28[1];
              sub_10034070((int)(v28 - 28), 1u, v29, (_DWORD *)(a1 + 16));
              *(_BYTE *)(v29 + 2) = v28[2];
              sub_10034070((int)(v28 - 28), 2u, v29, (_DWORD *)(a1 + 16));
              v23 = ++v40;
              *v36 = 1;
            }
            ++v36;
            v28 += 32;
            --v47;
          }
          while ( v47 );
        }
        v24 = v32;
        v6 = a1;
        *(_BYTE *)(a1 + 20 * v50 + 35) = v23 - v49;
        result = 1;
      }
      ++v34;
      v38 = (float *)((char *)v38 + 1);
      v24 += 32;
      v9 = v48-- == 1;
      v32 = v24;
    }
    while ( !v9 );
  }
  return result;
}
