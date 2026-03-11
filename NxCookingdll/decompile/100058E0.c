/*
 * func-name: sub_100058E0
 * func-address: 0x100058e0
 * callers: 0x100058e0, 0x100075d0
 * callees: 0x100058e0
 */

_DWORD *__cdecl sub_100058E0(int *a1, int a2, int a3)
{
  int v3; // edi
  int v4; // ebx
  int v5; // ebp
  _DWORD *result; // eax
  int v7; // esi
  int v8; // edx
  _DWORD *i; // eax
  int v10; // ebx
  _DWORD *v11; // eax
  int v12; // [esp+10h] [ebp-18h]
  int v13; // [esp+14h] [ebp-14h]
  int v14; // [esp+20h] [ebp-8h]
  int v15; // [esp+24h] [ebp-4h]

  while ( 1 )
  {
    v3 = a3;
    v4 = *(_DWORD *)(*a1 + 12 * ((a2 + a3) / 2));
    v5 = *(_DWORD *)(*a1 + 12 * ((a2 + a3) / 2) + 4);
    result = *(_DWORD **)(*a1 + 12 * ((a2 + a3) / 2) + 8);
    v7 = a2;
    v12 = v4;
    v13 = v5;
    if ( a2 <= a3 )
    {
      while ( 1 )
      {
        v8 = *a1;
        for ( i = (_DWORD *)(*a1 + 12 * v7); *i < v4 || *i <= v4 && i[1] < v5; i += 3 )
          ++v7;
        for ( result = (_DWORD *)(v8 + 12 * v3); v4 < *result || v4 <= *result && v5 < result[1]; result -= 3 )
          --v3;
        if ( v7 > v3 )
          break;
        v10 = *(_DWORD *)(v8 + 12 * v7);
        v11 = (_DWORD *)(v8 + 12 * v7);
        v14 = v11[1];
        v15 = v11[2];
        *v11 = *(_DWORD *)(12 * v3 + v8);
        v11[1] = *(_DWORD *)(12 * v3 + v8 + 4);
        v11[2] = *(_DWORD *)(12 * v3 + v8 + 8);
        result = (_DWORD *)(12 * v3 + *a1);
        *result = v10;
        ++v7;
        --v3;
        result[1] = v14;
        result[2] = v15;
        if ( v7 > v3 )
          break;
        v4 = v12;
        v5 = v13;
      }
      if ( a2 < v3 )
        result = (_DWORD *)sub_100058E0(a1, a2, v3);
    }
    if ( v7 >= a3 )
      break;
    a2 = v7;
  }
  return result;
}
