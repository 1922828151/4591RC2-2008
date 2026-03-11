/*
 * func-name: sub_10027180
 * func-address: 0x10027180
 * callers: 0x1002a6f0
 * callees: 0x10025eb0
 */

int __cdecl sub_10027180(int *a1)
{
  int v2; // ebx
  int v3; // ecx
  int v4; // eax
  int v5; // edi
  int v6; // ebp
  int v7; // ecx
  int v8; // edx
  int v9; // edi
  double v10; // st7
  int v11; // ebp
  unsigned __int8 *v12; // eax
  int v13; // ecx
  float *v14; // eax
  double v15; // st6
  int v16; // edx
  int v17; // eax
  bool v18; // cc
  int v19; // edi
  int v20; // ecx
  int v21; // eax
  int v22; // edx
  float *v23; // eax
  int v25; // [esp+10h] [ebp-28h]
  int v26; // [esp+18h] [ebp-20h]
  int v27; // [esp+18h] [ebp-20h]
  int v28; // [esp+1Ch] [ebp-1Ch]
  unsigned __int8 *i; // [esp+20h] [ebp-18h]
  int v30; // [esp+28h] [ebp-10h]
  float v31[3]; // [esp+2Ch] [ebp-Ch] BYREF
  int v32; // [esp+3Ch] [ebp+4h]
  int v33; // [esp+3Ch] [ebp+4h]

  v2 = a1[4];
  v3 = 0;
  v25 = 0;
  if ( v2 <= 0 )
  {
LABEL_12:
    v9 = 0;
    v28 = 0;
    if ( v2 <= 0 )
      return 1;
    v10 = flt_10056870;
    v11 = *a1;
    v27 = a1[6];
    v12 = (unsigned __int8 *)(a1[3] + 3);
    v33 = 4 * v25;
    for ( i = v12; ; i += 4 )
    {
      v13 = *(v12 - 1);
      v14 = (float *)(v27 + 16 * *v12);
      v15 = v14[2] * *(float *)(v11 + 12 * v13 + 8)
          + v14[1] * *(float *)(v11 + 12 * v13 + 4)
          + *v14 * *(float *)(v11 + 12 * v13)
          + v14[3];
      if ( v15 > v10 || -v10 > v15 )
        break;
      v16 = 4 * v9;
      if ( *(_BYTE *)(v33 + a1[3] + 3) != *(_BYTE *)(a1[3] + 4 * v9 + 3) )
      {
        v25 = v9;
        v33 = 4 * v9;
      }
      v17 = v9 + 1;
      v18 = v9 + 1 < v2;
      v30 = v9 + 1;
      v19 = v16 + 4;
      if ( !v18 || (v2 = a1[4], *(_BYTE *)(v19 + a1[3] + 3) != *(_BYTE *)(a1[3] + v16 + 3)) )
      {
        v17 = v25;
        v19 = v33;
      }
      v20 = v19 + 4;
      if ( v17 + 1 < v2 && *(_BYTE *)(v20 + a1[3] + 3) == *(_BYTE *)(a1[3] + v16 + 3) )
      {
        v21 = v17 + 1;
      }
      else
      {
        v21 = v25;
        v20 = v33;
      }
      if ( v28 != v21 )
      {
        sub_10025EB0(
          v31,
          (float *)(v11 + 12 * *(unsigned __int8 *)(a1[3] + v16 + 2)),
          (float *)(v11 + 12 * *(unsigned __int8 *)(v19 + a1[3] + 2)),
          (float *)(v11 + 12 * *(unsigned __int8 *)(v20 + a1[3] + 2)));
        v23 = (float *)(v27 + 16 * *(unsigned __int8 *)(v22 + a1[3] + 3));
        if ( v23[1] * v31[1] + v23[2] * v31[2] + *v23 * v31[0] <= 0.0 )
          return 0;
        v10 = flt_10056870;
      }
      v9 = v30;
      v2 = a1[4];
      v12 = i + 4;
      v28 = v30;
      if ( v30 >= v2 )
        return 1;
    }
  }
  else
  {
    v32 = 0;
    v4 = 4;
    while ( 1 )
    {
      v5 = a1[3];
      if ( *(_BYTE *)(v32 + v5 + 3) != *(_BYTE *)(v5 + v4 - 1) )
      {
        v25 = v3;
        v32 = v4 - 4;
      }
      v6 = v3 + 1;
      v26 = v4;
      if ( v3 + 1 >= v2 || *(_BYTE *)(v4 + v5 + 3) != *(_BYTE *)(v4 + v5 - 1) )
        v26 = v32;
      v7 = a1[3];
      v8 = *(__int16 *)(v7 + v4 - 4);
      if ( v8 == 255 || v8 == -1 || *(_BYTE *)(v7 + 4 * v8 + 2) != *(_BYTE *)(v26 + a1[3] + 2) )
        break;
      v3 = v6;
      v4 += 4;
      if ( v6 >= v2 )
        goto LABEL_12;
    }
  }
  return 0;
}
