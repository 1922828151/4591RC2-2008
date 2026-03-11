/*
 * func-name: sub_1002E3F0
 * func-address: 0x1002e3f0
 * callers: 0x1002e3f0, 0x1002f150
 * callees: 0x1002e3f0
 */

int __cdecl sub_1002E3F0(int a1, int a2, int a3)
{
  int v3; // ebp
  int v4; // edi
  int v5; // esi
  int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // ebx
  unsigned int *i; // eax
  unsigned int *j; // eax
  int v11; // ebx
  int *v12; // eax
  int v13; // edx
  int *v14; // ecx
  int result; // eax
  unsigned int v16; // [esp+10h] [ebp-20h]
  unsigned int v17; // [esp+14h] [ebp-1Ch]
  int v18; // [esp+28h] [ebp-8h]
  int v19; // [esp+2Ch] [ebp-4h]

  v3 = a1;
  while ( 1 )
  {
    v4 = a2;
    v5 = a3;
    v6 = 16 * ((a2 + a3) / 2);
    v7 = *(_DWORD *)(v6 + v3);
    v8 = *(_DWORD *)(v6 + v3 + 4);
    v16 = v7;
    v17 = v8;
    if ( a2 <= a3 )
    {
      while ( 1 )
      {
        for ( i = (unsigned int *)(v3 + 16 * v4); *i < v7 || *i <= v7 && i[1] < v8; i += 4 )
          ++v4;
        for ( j = (unsigned int *)(v3 + 16 * v5); v7 < *j || v7 <= *j && v8 < j[1]; j -= 4 )
          --v5;
        if ( v4 > v5 )
          break;
        v11 = *(_DWORD *)(16 * v4 + v3 + 4);
        v12 = (int *)(16 * v4 + v3);
        v13 = *v12;
        v18 = v12[2];
        v19 = v12[3];
        v14 = (int *)(v3 + 16 * v5);
        *v12 = *v14;
        v12[1] = v14[1];
        v12[2] = v14[2];
        v12[3] = v14[3];
        v3 = a1;
        *v14 = v13;
        v14[1] = v11;
        ++v4;
        --v5;
        v14[2] = v18;
        v14[3] = v19;
        if ( v4 > v5 )
          break;
        v7 = v16;
        v8 = v17;
      }
    }
    result = a2;
    if ( a2 < v5 )
      result = sub_1002E3F0(v3, a2, v5);
    if ( v4 >= a3 )
      break;
    a2 = v4;
  }
  return result;
}
