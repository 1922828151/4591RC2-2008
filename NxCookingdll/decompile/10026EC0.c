/*
 * func-name: sub_10026EC0
 * func-address: 0x10026ec0
 * callers: 0x100278e0
 * callees: none
 */

int __cdecl sub_10026EC0(int a1, int a2, float *a3, _DWORD *a4)
{
  int v4; // ebp
  int v5; // ebx
  int v6; // edi
  float *v7; // edx
  float *v8; // edx
  int v9; // edi
  _DWORD *v11; // [esp+10h] [ebp-14h]
  _DWORD *v12; // [esp+10h] [ebp-14h]

  v4 = -1;
  v5 = 0;
  if ( a2 >= 4 )
  {
    v11 = (_DWORD *)(*a4 + 8);
    v6 = -12;
    v7 = (float *)(a1 + 16);
    do
    {
      if ( *(v11 - 2)
        && (v4 == -1
         || *(float *)(v6 + a1 + 4) * a3[1] + *(float *)(v6 + a1 + 8) * a3[2] + *a3 * *(float *)(v6 + a1) < *(v7 - 2) * a3[2] + *(v7 - 4) * *a3 + *(v7 - 3) * a3[1]) )
      {
        v4 = v5;
        v6 = (int)v7 - 16 - a1;
      }
      if ( *(v11 - 1)
        && (v4 == -1
         || *(float *)(v6 + a1 + 4) * a3[1] + *(float *)(v6 + a1 + 8) * a3[2] + *a3 * *(float *)(v6 + a1) < v7[1] * a3[2] + *(v7 - 1) * *a3 + a3[1] * *v7) )
      {
        v4 = v5 + 1;
        v6 = (int)v7 - 4 - a1;
      }
      if ( *v11
        && (v4 == -1
         || *(float *)(v6 + a1 + 4) * a3[1] + *(float *)(v6 + a1 + 8) * a3[2] + *a3 * *(float *)(v6 + a1) < v7[4] * a3[2] + v7[3] * a3[1] + v7[2] * *a3) )
      {
        v4 = v5 + 2;
        v6 = (int)v7 + 8 - a1;
      }
      if ( v11[1]
        && (v4 == -1
         || *(float *)(v6 + a1 + 4) * a3[1] + *(float *)(v6 + a1 + 8) * a3[2] + *a3 * *(float *)(v6 + a1) < v7[7] * a3[2] + v7[6] * a3[1] + v7[5] * *a3) )
      {
        v4 = v5 + 3;
        v6 = (int)v7 + 20 - a1;
      }
      v11 += 4;
      v5 += 4;
      v7 += 12;
    }
    while ( v5 < a2 - 3 );
  }
  if ( v5 < a2 )
  {
    v12 = (_DWORD *)(*a4 + 4 * v5);
    v8 = (float *)(a1 + 12 * v5 + 4);
    v9 = 12 * v4;
    do
    {
      if ( *v12
        && (v4 == -1
         || *(float *)(v9 + a1 + 4) * a3[1] + *(float *)(v9 + a1 + 8) * a3[2] + *a3 * *(float *)(v9 + a1) < *(v8 - 1) * *a3 + v8[1] * a3[2] + a3[1] * *v8) )
      {
        v4 = v5;
        v9 = (int)v8 - 4 - a1;
      }
      ++v12;
      ++v5;
      v8 += 3;
    }
    while ( v5 < a2 );
  }
  return v4;
}
