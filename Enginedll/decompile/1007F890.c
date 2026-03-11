/*
 * func-name: sub_1007F890
 * func-address: 0x1007f890
 * callers: 0x1007fa00
 * callees: none
 */

int __cdecl sub_1007F890(int a1, int a2, float *a3, int a4, float *a5, float *a6)
{
  float *v6; // ecx
  int v7; // ebp
  int v8; // edi
  int v9; // ebx
  int v10; // edx
  bool v11; // c0
  double v12; // st5
  double v13; // st4
  int v14; // esi
  double v15; // rt1
  double v16; // st4
  double v17; // st5
  float v19; // [esp+10h] [ebp-Ch]
  float v20; // [esp+10h] [ebp-Ch]
  float v21; // [esp+14h] [ebp-8h]
  float v22; // [esp+14h] [ebp-8h]
  int v23; // [esp+18h] [ebp-4h]

  *a5 = -1.0e10;
  *a6 = 1.0e10;
  v6 = a3;
  v7 = 0;
  v8 = a1 - a2;
  v9 = a2 - (_DWORD)a3;
  v23 = -1;
  v10 = a4 - (_DWORD)a3;
  do
  {
    if ( *(float *)((char *)v6 + v10) <= -0.00009999999747378752
      || *(float *)((char *)v6 + v10) >= 0.00009999999747378752 )
    {
      v19 = (*(float *)((char *)v6 + v9 + v8) - *v6) / *(float *)((char *)v6 + v10);
      v21 = (*(float *)((char *)v6 + v9) - *v6) / *(float *)((char *)v6 + v10);
      v12 = v19;
      v13 = v21;
      if ( v21 >= (double)v19 )
      {
        v14 = v7;
      }
      else
      {
        v14 = v7 + 3;
        v22 = (*(float *)((char *)v6 + v9 + v8) - *v6) / *(float *)((char *)v6 + v10);
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
        v23 = v14;
      }
      if ( *a6 > v17 )
        *a6 = v17;
      if ( *a6 < (double)*a5 )
        return -1;
      v11 = *a6 < 0.00009999999747378752;
    }
    else
    {
      if ( *(float *)((char *)v6 + v9 + v8) > (double)*v6 )
        return -1;
      v11 = *(float *)((char *)v6 + v9) < (double)*v6;
    }
    if ( v11 )
      return -1;
    ++v7;
    ++v6;
  }
  while ( v7 < 3 );
  if ( *a6 >= (double)*a5 && *a6 >= 0.00009999999747378752 )
    return v23;
  return -1;
}
