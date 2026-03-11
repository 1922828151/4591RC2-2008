/*
 * func-name: sub_100079F0
 * func-address: 0x100079f0
 * callers: 0x100079f0, 0x1000af30
 * callees: 0x100079f0
 */

unsigned int *__cdecl sub_100079F0(int *a1, int a2, int a3)
{
  int v3; // esi
  unsigned int *v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  unsigned int *result; // eax
  int v8; // edi
  int v9; // edx
  unsigned int *i; // eax
  unsigned int v11; // ebx
  _DWORD *v12; // eax
  unsigned int v13; // [esp+10h] [ebp-20h]
  unsigned int v14; // [esp+14h] [ebp-1Ch]
  unsigned int v15; // [esp+24h] [ebp-Ch]
  unsigned int v16; // [esp+28h] [ebp-8h]
  unsigned int v17; // [esp+2Ch] [ebp-4h]

  while ( 1 )
  {
    v3 = a3;
    v4 = (unsigned int *)(*a1 + 16 * ((a2 + a3) / 2));
    v5 = *v4;
    v6 = v4[1];
    result = (unsigned int *)v4[3];
    v8 = a2;
    v13 = v5;
    v14 = v6;
    if ( a2 <= a3 )
    {
      while ( 1 )
      {
        v9 = *a1;
        for ( i = (unsigned int *)(*a1 + 16 * v8); *i < v5 || *i <= v5 && i[1] < v6; i += 4 )
          ++v8;
        for ( result = (unsigned int *)(v9 + 16 * v3); v5 < *result || v5 <= *result && v6 < result[1]; result -= 4 )
          --v3;
        if ( v8 > v3 )
          break;
        v11 = *(_DWORD *)(16 * v8 + v9);
        v12 = (_DWORD *)(v9 + 16 * v8);
        v15 = v12[1];
        v16 = v12[2];
        v17 = v12[3];
        *v12 = *(_DWORD *)(16 * v3 + v9);
        v12[1] = *(_DWORD *)(16 * v3 + v9 + 4);
        v12[2] = *(_DWORD *)(16 * v3 + v9 + 8);
        v12[3] = *(_DWORD *)(16 * v3 + v9 + 12);
        result = (unsigned int *)(16 * v3 + *a1);
        *result = v11;
        result[1] = v15;
        ++v8;
        --v3;
        result[2] = v16;
        result[3] = v17;
        if ( v8 > v3 )
          break;
        v5 = v13;
        v6 = v14;
      }
      if ( a2 < v3 )
        result = (unsigned int *)sub_100079F0(a1, a2, v3);
    }
    if ( v8 >= a3 )
      break;
    a2 = v8;
  }
  return result;
}
