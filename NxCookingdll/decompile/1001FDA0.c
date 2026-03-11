/*
 * func-name: sub_1001FDA0
 * func-address: 0x1001fda0
 * callers: 0x10020d70, 0x10021280, 0x10021fa0
 * callees: 0x10015370, 0x10015420
 */

char __cdecl sub_1001FDA0(int a1, int a2, int a3, _DWORD *a4, char a5)
{
  int v5; // edi
  unsigned int v6; // esi
  double v7; // st7
  double v8; // st5
  double v9; // st4
  double v10; // st6
  unsigned int v11; // ecx
  int v12; // eax
  double v13; // st3
  int v14; // eax
  unsigned int v15; // edx
  double v16; // st3
  char v17; // bl
  _DWORD *v18; // esi
  float v20; // [esp+8h] [ebp-Ch] BYREF
  float v21; // [esp+Ch] [ebp-8h]
  float v22; // [esp+10h] [ebp-4h]

  if ( !a1 )
    return 0;
  if ( !a2 )
    return 0;
  v5 = a3;
  if ( !a3 || !a4 )
    return 0;
  v6 = 0;
  v7 = 1.0 / (double)(unsigned int)a1;
  v8 = 0.0;
  v20 = 0.0;
  v9 = 0.0;
  v21 = 0.0;
  v10 = 0.0;
  v22 = 0.0;
  if ( a1 >= 4 )
  {
    v11 = ((unsigned int)(a1 - 4) >> 2) + 1;
    v12 = a2 + 8;
    v6 = 4 * v11;
    do
    {
      v13 = *(float *)(v12 - 8);
      v12 += 48;
      --v11;
      v8 = v8 + v13 * v7 + *(float *)(v12 - 44) * v7 + *(float *)(v12 - 32) * v7 + *(float *)(v12 - 20) * v7;
      v10 = v10
          + *(float *)(v12 - 52) * v7
          + *(float *)(v12 - 40) * v7
          + *(float *)(v12 - 28) * v7
          + *(float *)(v12 - 16) * v7;
      v9 = v9
         + *(float *)(v12 - 48) * v7
         + *(float *)(v12 - 36) * v7
         + *(float *)(v12 - 24) * v7
         + *(float *)(v12 - 12) * v7;
    }
    while ( v11 );
    v22 = v9;
    v21 = v10;
    v20 = v8;
  }
  if ( v6 < a1 )
  {
    v14 = a2 + 12 * v6 + 8;
    v15 = a1 - v6;
    do
    {
      v16 = *(float *)(v14 - 8);
      v14 += 12;
      --v15;
      v8 = v8 + v16 * v7;
      v10 = v10 + *(float *)(v14 - 16) * v7;
      v9 = v9 + *(float *)(v14 - 12) * v7;
    }
    while ( v15 );
    v22 = v9;
    v21 = v10;
    v20 = v8;
  }
  v17 = 1;
  v18 = a4;
  do
  {
    if ( sub_10015420(v18, a2, &v20) )
    {
      if ( a5 )
        sub_10015370(v18);
      v17 = 0;
    }
    v18 += 3;
    --v5;
  }
  while ( v5 );
  return v17;
}
