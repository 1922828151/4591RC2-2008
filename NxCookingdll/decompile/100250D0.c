/*
 * func-name: sub_100250D0
 * func-address: 0x100250d0
 * callers: 0x10020740
 * callees: 0x100149b0, 0x10014b00, 0x10014b50
 */

char __cdecl sub_100250D0(_DWORD *a1, int a2)
{
  _DWORD *v2; // ecx
  unsigned int v3; // ebx
  unsigned int i; // edx
  int v5; // edi
  int v6; // ebp
  unsigned int v7; // eax
  int v8; // esi
  unsigned int v9; // edi
  int v10; // ebx
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int j; // edi
  unsigned int v14; // ebp
  unsigned int v15; // ebx
  unsigned int v16; // eax
  _DWORD *v17; // ecx
  unsigned int v19; // [esp+0h] [ebp-14h]
  float v20; // [esp+4h] [ebp-10h] BYREF
  unsigned int v21; // [esp+8h] [ebp-Ch]
  _DWORD *v22; // [esp+Ch] [ebp-8h]

  sub_10014B00((int)&v20, a2);
LABEL_2:
  v2 = v22;
  v3 = v21 >> 1;
  for ( i = 0; i < v3; i = v7 )
  {
    v5 = v22[2 * i];
    v6 = v22[2 * i + 1];
    v7 = i + 1;
    v19 = i + 1;
    if ( i + 1 < v3 )
    {
      while ( 1 )
      {
        v8 = v22[2 * v7];
        if ( v8 == v5 && v22[2 * v7 + 1] == v6 )
          break;
        if ( v22[2 * v7 + 1] == v5 && v8 == v6 )
          break;
        if ( ++v7 >= v3 )
        {
          v7 = i + 1;
          goto LABEL_11;
        }
      }
      --v21;
      v22[2 * v7 + 1] = v22[v21--];
      v22[2 * v7] = v22[v21--];
      v22[2 * i + 1] = v22[v21--];
      v22[2 * i] = v22[v21];
      goto LABEL_2;
    }
LABEL_11:
    ;
  }
  if ( v21 >= 2 && v22 )
  {
    v9 = v22[1];
    v10 = *v22;
    v19 = v9;
    if ( a1[1] == *a1 )
      sub_100149B0(a1, 1);
    *(_DWORD *)(a1[2] + 4 * a1[1]++) = v10;
    if ( a1[1] == *a1 )
      sub_100149B0(a1, 1);
    *(_DWORD *)(a1[2] + 4 * a1[1]) = v9;
    v11 = v21;
    ++a1[1];
    v21 = v11 - 1;
    v22[1] = v22[v11 - 1];
    *v22 = v22[--v21];
    v2 = v22;
  }
  v12 = v21 >> 1;
  if ( v21 >> 1 )
  {
    while ( 2 )
    {
      for ( j = 0; ; ++j )
      {
        if ( j >= v12 )
        {
          sub_10014B50(&v20);
          return 0;
        }
        v14 = v2[2 * j];
        v15 = v2[2 * j + 1];
        if ( v14 == v19 )
          break;
        if ( v15 == v19 )
        {
          if ( a1[1] == *a1 )
            sub_100149B0(a1, 1);
          *(_DWORD *)(a1[2] + 4 * a1[1]) = v14;
          v19 = v14;
          goto LABEL_34;
        }
      }
      if ( a1[1] == *a1 )
        sub_100149B0(a1, 1);
      *(_DWORD *)(a1[2] + 4 * a1[1]) = v15;
      v19 = v15;
LABEL_34:
      v16 = v21;
      v17 = v22;
      ++a1[1];
      v21 = v16 - 1;
      v17[2 * j + 1] = v17[v16 - 1];
      v22[2 * j] = v22[--v21];
      v12 = v21 >> 1;
      if ( v21 >> 1 )
      {
        v2 = v22;
        continue;
      }
      break;
    }
  }
  sub_10014B50(&v20);
  return 1;
}
