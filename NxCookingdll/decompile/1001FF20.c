/*
 * func-name: sub_1001FF20
 * func-address: 0x1001ff20
 * callers: 0x10021280
 * callees: 0x10015510
 */

char __usercall sub_1001FF20@<al>(unsigned int *a1@<ebx>, int *a2, int a3, char a4)
{
  unsigned int v4; // eax
  int v5; // edi
  _DWORD *i; // esi
  float *v7; // ecx
  double v8; // st7
  float *v9; // eax
  double v10; // st6
  float *v11; // edx
  double v12; // st5
  double v13; // st4
  double v14; // st3
  double v15; // st2
  int *v17; // esi
  float *v18; // eax
  float *v19; // ecx
  double v20; // st6
  float *v21; // edx
  double v22; // st5
  double v23; // st4
  double v24; // st2
  double v25; // st1
  double v26; // st0
  int v27; // ecx
  double v28; // st0
  long double v29; // rtt
  double v30; // st3
  double v31; // st4
  long double v32; // st6
  long double v33; // st7
  long double v34; // st5
  int v35; // edx
  int v36; // esi
  unsigned int v37; // ecx
  int *v38; // eax
  int *v39; // esi
  int *v40; // eax
  unsigned int v41; // [esp+4h] [ebp-10h]
  float v42; // [esp+Ch] [ebp-8h]
  float v43; // [esp+10h] [ebp-4h]

  v4 = *a1;
  if ( !*a1 || !a2 || !a3 )
    return 0;
  do
  {
    v5 = 0;
    if ( !v4 )
      return 1;
    for ( i = a2 + 2; ; i += 3 )
    {
      v7 = (float *)(a3 + 12 * *(i - 2));
      v8 = *v7 - *(float *)(a3 + 12 * *(i - 1));
      v9 = (float *)(a3 + 12 * *(i - 1));
      v10 = v7[1] - v9[1];
      v11 = (float *)(a3 + 12 * *i);
      v12 = v7[2] - v9[2];
      v13 = *v11 - *v9;
      v14 = v11[1] - v9[1];
      v15 = v11[2] - v9[2];
      if ( sqrt(
             (v10 * v13 - v8 * v14) * (v10 * v13 - v8 * v14)
           + (v15 * v8 - v12 * v13) * (v15 * v8 - v12 * v13)
           + (v14 * v12 - v15 * v10) * (v14 * v12 - v15 * v10)) < 0.000099999997 )
        break;
      if ( ++v5 >= *a1 )
        return 1;
    }
    if ( !a4 )
      break;
    v17 = &a2[3 * v5];
    v18 = (float *)(a3 + 12 * *v17);
    v19 = (float *)(a3 + 12 * v17[1]);
    v20 = v18[1] - v19[1];
    v21 = (float *)(a3 + 12 * v17[2]);
    v22 = v18[2] - v19[2];
    v23 = *v18 - *v21;
    v24 = v18[2] - v21[2];
    v25 = *v19 - *v21;
    v42 = v19[1] - v21[1];
    v26 = v19[2];
    v27 = 0;
    v43 = v26 - v21[2];
    v28 = v18[1] - v21[1];
    v29 = sqrt(v23 * v23 + v28 * v28 + v24 * v24);
    v30 = *v18 - *(float *)(a3 + 12 * v17[1]);
    v31 = v20 * v20 + v22 * v22;
    v32 = v29;
    v33 = sqrt(v25 * v25 + v43 * v43 + v42 * v42);
    v34 = sqrt(v30 * v30 + v31);
    if ( v34 <= v29 )
      v32 = v34;
    else
      v27 = 1;
    if ( v32 > v33 )
    {
      v35 = v17[2];
      v36 = v17[1];
    }
    else
    {
      v35 = v27 ? v17[2] : v17[1];
      v36 = *v17;
    }
    v37 = 0;
    v38 = a2 + 2;
    do
    {
      if ( *(v38 - 2) == v35 )
        *(v38 - 2) = v36;
      if ( *(v38 - 1) == v35 )
        *(v38 - 1) = v36;
      if ( *v38 == v35 )
        *v38 = v36;
      ++v37;
      v38 += 3;
    }
    while ( v37 < *a1 );
    if ( *a1 )
    {
      v39 = a2;
      v41 = *a1;
      do
      {
        if ( sub_10015510(v39) )
        {
          --*a1;
          v40 = &a2[3 * *a1];
          *v39 = *v40;
          v39[1] = v40[1];
          v39[2] = v40[2];
        }
        else
        {
          v39 += 3;
        }
        --v41;
      }
      while ( v41 );
    }
    v4 = *a1;
  }
  while ( *a1 > 4 );
  return 0;
}
