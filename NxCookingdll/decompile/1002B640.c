/*
 * func-name: sub_1002B640
 * func-address: 0x1002b640
 * callers: none
 * callees: none
 */

char __thiscall sub_1002B640(_DWORD *this, int a2, float *a3)
{
  double v3; // st7
  int v4; // eax
  double v5; // st6
  int v6; // ebp
  int v7; // esi
  char v8; // cl
  unsigned int v9; // edx
  char v10; // di
  float *v11; // esi
  double v12; // st5
  double v13; // st5
  double v14; // st5
  double v15; // st5
  double v16; // st5
  double v17; // st5
  double v18; // st5
  double v19; // st5
  float *v20; // esi
  double v21; // st5
  double v22; // st5
  char v24; // [esp+Ch] [ebp-Ch]

  v3 = 3.4028235e38;
  v4 = *(_DWORD *)(this[2] + 32);
  v5 = 3.4028235e38;
  v6 = *(_DWORD *)(v4 + 12);
  v7 = *(_DWORD *)(v4 + 16);
  v8 = 0;
  v9 = 0;
  v24 = 0;
  if ( v6 >= 4 )
  {
    v10 = 2;
    v11 = (float *)(v7 + 16);
    do
    {
      v12 = *(v11 - 2) * a3[2] + *(v11 - 4) * *a3 + *(v11 - 3) * a3[1];
      if ( v12 < v5 )
      {
        v24 = v9;
        v5 = v12;
      }
      v13 = -v12;
      if ( v13 < v3 )
      {
        v3 = v13;
        v8 = v9;
      }
      v14 = v11[1] * a3[2] + *(v11 - 1) * *a3 + *v11 * a3[1];
      if ( v14 < v5 )
      {
        v24 = v10 - 1;
        v5 = v14;
      }
      v15 = -v14;
      if ( v15 < v3 )
      {
        v3 = v15;
        v8 = v10 - 1;
      }
      v16 = v11[4] * a3[2] + v11[3] * a3[1] + v11[2] * *a3;
      if ( v16 < v5 )
      {
        v24 = v10;
        v5 = v16;
      }
      v17 = -v16;
      if ( v17 < v3 )
      {
        v3 = v17;
        v8 = v10;
      }
      v18 = v11[7] * a3[2] + v11[6] * a3[1] + v11[5] * *a3;
      if ( v18 < v5 )
      {
        v24 = v10 + 1;
        v5 = v18;
      }
      v19 = -v18;
      if ( v19 < v3 )
      {
        v3 = v19;
        v8 = v10 + 1;
      }
      v9 += 4;
      v11 += 12;
      v10 += 4;
    }
    while ( v9 < v6 - 3 );
    v7 = *(_DWORD *)(v4 + 16);
  }
  if ( v9 < v6 )
  {
    v20 = (float *)(v7 + 12 * v9 + 4);
    do
    {
      v21 = v20[1] * a3[2] + *(v20 - 1) * *a3 + *v20 * a3[1];
      if ( v21 < v5 )
      {
        v24 = v9;
        v5 = v21;
      }
      v22 = -v21;
      if ( v22 < v3 )
      {
        v3 = v22;
        v8 = v9;
      }
      ++v9;
      v20 += 3;
    }
    while ( v9 < v6 );
  }
  *(_BYTE *)(a2 + *(_DWORD *)(this[2] + 24)) = v24;
  *(_BYTE *)(a2 + *(_DWORD *)(this[2] + 28)) = v8;
  return 1;
}
