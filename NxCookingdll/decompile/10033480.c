/*
 * func-name: sub_10033480
 * func-address: 0x10033480
 * callers: 0x10033480, 0x100337a0
 * callees: 0x100314d0, 0x100316f0, 0x10032ca0, 0x10033480
 */

int __stdcall sub_10033480(__int16 *a1, __int16 *a2, unsigned int a3, int a4, unsigned int a5)
{
  unsigned int v5; // eax
  unsigned int v8; // esi
  unsigned int v9; // edx
  unsigned int v10; // ecx
  int v11; // edi
  float v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  float v15; // edx
  float v16; // ecx
  bool v17; // zf
  unsigned int v18; // esi
  int v19; // edi
  double v20; // st7
  double v21; // st6
  double v22; // st5
  double v23; // st7
  double v24; // st6
  double v25; // st5
  __int16 *v26; // ebx
  __int16 *v27; // edi
  unsigned int v28; // ebp
  unsigned int v30; // [esp+10h] [ebp-94h]
  unsigned int v31; // [esp+10h] [ebp-94h]
  __int16 *v32; // [esp+10h] [ebp-94h]
  unsigned int v33; // [esp+14h] [ebp-90h]
  _WORD *v34; // [esp+14h] [ebp-90h]
  float v35; // [esp+1Ch] [ebp-88h]
  float v36; // [esp+20h] [ebp-84h]
  float v37; // [esp+24h] [ebp-80h]
  float v38; // [esp+28h] [ebp-7Ch]
  float v39; // [esp+2Ch] [ebp-78h]
  float v40; // [esp+30h] [ebp-74h]
  float v41; // [esp+34h] [ebp-70h] BYREF
  float v42; // [esp+38h] [ebp-6Ch]
  float v43; // [esp+3Ch] [ebp-68h]
  float v44; // [esp+40h] [ebp-64h]
  float v45; // [esp+44h] [ebp-60h]
  float v46; // [esp+48h] [ebp-5Ch]
  float v47[22]; // [esp+4Ch] [ebp-58h] BYREF

  v5 = a3;
  if ( a3 != 1 )
  {
    do
    {
      v8 = v5 >> 1;
      v9 = 16 * (v5 >> 1);
      if ( v9 >= a5 )
        v9 = a5;
      v30 = v5 - v8;
      if ( a5 >= 16 * (v5 - v8) )
        v10 = a5 + 16 * (v8 - v5);
      else
        v10 = 0;
      v11 = sub_10032CA0(a4, a5, v10, v9);
      sub_10033480(a1, a2, v8, a4, v11);
      v5 = v30;
      a1 += 112 * v8;
      a5 -= v11;
      a4 += 4 * v11;
      a2 += 6 * v8;
    }
    while ( v30 != 1 );
  }
  sub_100314D0(&v41);
  v12 = 0.0;
  if ( a5 )
  {
    do
      v47[LODWORD(v12)++ + 6] = v12;
    while ( LODWORD(v12) < a5 );
  }
  if ( a5 )
  {
    v13 = a5 - 1;
    v31 = a5 - 1;
    v33 = a5;
    do
    {
      v14 = 0;
      if ( v13 )
      {
        do
        {
          v15 = v47[v14 + 6];
          v16 = v47[v14 + 7];
          if ( *(_WORD *)(*(_DWORD *)(a4 + 4 * LODWORD(v15)) + 32) > *(_WORD *)(*(_DWORD *)(a4 + 4 * LODWORD(v16)) + 32) )
          {
            v47[v14 + 6] = v16;
            v47[v14 + 7] = v15;
          }
          v13 = v31;
          ++v14;
        }
        while ( v14 < v31 );
      }
      --v13;
      v17 = v33-- == 1;
      v31 = v13;
    }
    while ( !v17 );
  }
  v18 = 0;
  if ( !a5 )
    goto LABEL_33;
  v32 = a1;
  v34 = a1 + 96;
  do
  {
    v19 = *(_DWORD *)(a4 + 4 * LODWORD(v47[v18 + 6]));
    sub_100316F0(v32, (float *)v19);
    *v34 = *(_WORD *)(v19 + 32) | 0x8000;
    v20 = *(float *)(v19 + 20);
    if ( v46 > v20 )
      v20 = v46;
    v21 = *(float *)(v19 + 16);
    if ( v45 > v21 )
      v21 = v45;
    v22 = *(float *)(v19 + 12);
    if ( v44 > v22 )
      v22 = v44;
    v38 = v22;
    v39 = v21;
    v40 = v20;
    v23 = *(float *)(v19 + 8);
    if ( v43 < v23 )
      v23 = v43;
    v24 = *(float *)(v19 + 4);
    if ( v42 < v24 )
      v24 = v42;
    v25 = *(float *)v19;
    if ( v41 < v25 )
      v25 = v41;
    v35 = v25;
    ++v34;
    v36 = v24;
    v32 += 6;
    v37 = v23;
    v41 = v35;
    v44 = v38;
    ++v18;
    v42 = v36;
    v43 = v37;
    v45 = v39;
    v46 = v40;
  }
  while ( v18 < a5 );
  if ( v18 < 0x10 )
  {
LABEL_33:
    v26 = &a1[6 * v18];
    v27 = &a1[v18 + 96];
    v28 = 16 - v18;
    do
    {
      v47[1] = 3.4028235e38;
      v47[3] = -3.4028235e38;
      v47[0] = 3.4028235e38;
      v47[5] = -3.4028235e38;
      *v27 = 0;
      v47[2] = 3.4028235e38;
      v47[4] = -3.4028235e38;
      sub_100316F0(v26, v47);
      ++v27;
      v26 += 6;
      --v28;
    }
    while ( v28 );
  }
  return sub_100316F0(a2, &v41);
}
