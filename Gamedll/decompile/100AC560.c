/*
 * func-name: sub_100AC560
 * func-address: 0x100ac560
 * callers: 0x10004327
 * callees: none
 */

int __cdecl sub_100AC560(int a1, int a2, float *a3, int a4, float *a5)
{
  float *v5; // ecx
  double v6; // st5
  int v7; // edi
  int v8; // ebx
  int v9; // ebp
  int v10; // edx
  bool v11; // c0
  double v12; // st4
  double v13; // st3
  int v14; // esi
  double v15; // rt1
  double v16; // st3
  double v17; // st4
  float v19; // [esp+0h] [ebp-Ch]
  float v20; // [esp+0h] [ebp-Ch]
  float v21; // [esp+4h] [ebp-8h]
  float v22; // [esp+4h] [ebp-8h]
  float v23; // [esp+4h] [ebp-8h]
  int v24; // [esp+8h] [ebp-4h]

  v5 = a3;
  *a5 = -1.0e10;
  v6 = (float)1.0e10;
  v7 = 0;
  v8 = a1 - a2;
  v9 = a2 - (_DWORD)a3;
  v24 = -1;
  v10 = a4 - (_DWORD)a3;
  do
  {
    if ( *(float *)((char *)v5 + v10) <= -0.00009999999747378752
      || *(float *)((char *)v5 + v10) >= 0.00009999999747378752 )
    {
      v19 = (*(float *)((char *)v5 + v9 + v8) - *v5) / *(float *)((char *)v5 + v10);
      v21 = (*(float *)((char *)v5 + v9) - *v5) / *(float *)((char *)v5 + v10);
      v12 = v19;
      v13 = v21;
      if ( v21 >= (double)v19 )
      {
        v14 = v7;
      }
      else
      {
        v14 = v7 + 3;
        v22 = (*(float *)((char *)v5 + v9 + v8) - *v5) / *(float *)((char *)v5 + v10);
        v20 = v13;
        v12 = v20;
        v13 = v22;
      }
      if ( *a5 >= v12 )
      {
        v17 = v13;
      }
      else
      {
        v15 = v13;
        v16 = v12;
        v17 = v15;
        *a5 = v16;
        v24 = v14;
      }
      if ( v17 < v6 )
      {
        v23 = v17;
        v6 = v23;
      }
      if ( *a5 > v6 )
        return -1;
      v11 = v6 < 0.00009999999747378752;
    }
    else
    {
      if ( *(float *)((char *)v5 + v9 + v8) > (double)*v5 )
        return -1;
      v11 = *(float *)((char *)v5 + v9) < (double)*v5;
    }
    if ( v11 )
      return -1;
    ++v7;
    ++v5;
  }
  while ( v7 < 3 );
  if ( *a5 > v6 || v6 < 0.00009999999747378752 )
    return -1;
  else
    return v24;
}
