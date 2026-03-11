/*
 * func-name: sub_10007B30
 * func-address: 0x10007b30
 * callers: 0x10007b30, 0x1000b780
 * callees: 0x10007b30
 */

unsigned int *__cdecl sub_10007B30(int *a1, int a2, int a3)
{
  int v3; // edi
  unsigned int v4; // ebx
  unsigned int *v5; // eax
  unsigned int v6; // edx
  unsigned int *result; // eax
  int v8; // esi
  int v9; // ebp
  unsigned int *i; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  int *v14; // eax
  unsigned int v15; // edx
  int v16; // [esp+10h] [ebp-1Ch]
  unsigned int v17; // [esp+14h] [ebp-18h]
  unsigned int v18; // [esp+18h] [ebp-14h]
  unsigned int *v19; // [esp+1Ch] [ebp-10h]
  int v20; // [esp+28h] [ebp-4h]

  while ( 1 )
  {
    v3 = a3;
    v4 = *(_DWORD *)(*a1 + 12 * ((a2 + a3) / 2) + 4);
    v5 = (unsigned int *)(*a1 + 12 * ((a2 + a3) / 2));
    v6 = *v5;
    result = (unsigned int *)v5[2];
    v8 = a2;
    v17 = v6;
    v18 = v4;
    v19 = result;
    if ( a2 <= a3 )
    {
      while ( 1 )
      {
        v9 = *a1;
        v16 = *a1;
        for ( i = (unsigned int *)(*a1 + 12 * v8); ; i += 3 )
        {
          if ( *i >= v6 )
          {
            if ( *i > v6 )
              break;
            v11 = i[1];
            if ( v11 >= v4 && (v11 > v4 || i[2] >= (unsigned int)v19) )
              break;
          }
          ++v8;
        }
        for ( result = (unsigned int *)(v9 + 12 * v3); ; result -= 3 )
        {
          if ( v6 >= *result )
          {
            if ( v6 > *result )
              break;
            v12 = result[1];
            if ( v4 >= v12 && (v4 > v12 || (unsigned int)v19 >= result[2]) )
              break;
          }
          --v3;
        }
        if ( v8 > v3 )
          break;
        v13 = *(_DWORD *)(v9 + 12 * v8 + 4);
        v14 = (int *)(v9 + 12 * v8);
        v15 = *v14;
        v20 = v14[2];
        *v14 = *(_DWORD *)(12 * v3 + v9);
        v14[1] = *(_DWORD *)(12 * v3 + v16 + 4);
        v14[2] = *(_DWORD *)(12 * v3 + v16 + 8);
        result = (unsigned int *)(12 * v3 + *a1);
        *result = v15;
        ++v8;
        --v3;
        result[1] = v13;
        result[2] = v20;
        if ( v8 > v3 )
          break;
        v6 = v17;
        v4 = v18;
      }
      if ( a2 < v3 )
        result = (unsigned int *)sub_10007B30(a1, a2, v3);
    }
    if ( v8 >= a3 )
      break;
    a2 = v8;
  }
  return result;
}
