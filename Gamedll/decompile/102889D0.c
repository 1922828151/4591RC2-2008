/*
 * func-name: sub_102889D0
 * func-address: 0x102889d0
 * callers: 0x100024ff
 * callees: 0x1000588f
 */

unsigned int **__cdecl sub_102889D0(unsigned int **a1, unsigned int a2, unsigned int a3)
{
  unsigned int *v3; // ebp
  unsigned int *v4; // ecx
  unsigned int *i; // ebx
  unsigned int v6; // eax
  unsigned int v7; // edx
  unsigned int *v8; // eax
  int *v9; // edx
  unsigned int v10; // ebp
  bool v11; // zf
  unsigned int v12; // esi
  int v13; // esi
  unsigned int v14; // esi
  unsigned int *v15; // esi
  unsigned int v16; // esi
  unsigned int v17; // edi
  unsigned int v18; // esi
  unsigned int v19; // esi
  unsigned int **result; // eax
  unsigned int v21; // [esp+10h] [ebp-4h]

  v3 = (unsigned int *)a3;
  sub_1000588F(a2, a2 + 4 * (((int)(a3 - a2) >> 2) / 2), a3 - 4);
  v4 = (unsigned int *)(a2 + 4 * (((int)(a3 - a2) >> 2) / 2));
  for ( i = v4 + 1; a2 < (unsigned int)v4; --v4 )
  {
    v6 = *(v4 - 1);
    if ( *v4 > v6 )
      break;
    if ( *v4 < v6 )
      break;
  }
  if ( (unsigned int)i < a3 )
  {
    v7 = *v4;
    do
    {
      if ( v7 > *i )
        break;
      if ( v7 < *i )
        break;
      ++i;
    }
    while ( (unsigned int)i < a3 );
  }
  v8 = i;
  v9 = (int *)v4;
  while ( 1 )
  {
    while ( 1 )
    {
      for ( ; v8 < v3; ++v8 )
      {
        if ( *v8 <= *v4 )
        {
          if ( *v8 < *v4 )
            break;
          v10 = *i;
          *i = *v8;
          *v8 = v10;
          v3 = (unsigned int *)a3;
          ++i;
        }
      }
      v11 = v9 == (int *)a2;
      if ( (unsigned int)v9 > a2 )
      {
        do
        {
          v12 = *(v9 - 1);
          if ( *v4 <= v12 )
          {
            if ( *v4 < v12 )
              break;
            v13 = *--v4;
            *v4 = *(v9 - 1);
            *(v9 - 1) = v13;
          }
          --v9;
        }
        while ( a2 < (unsigned int)v9 );
        v11 = v9 == (int *)a2;
      }
      if ( v11 )
        break;
      --v9;
      if ( v8 == v3 )
      {
        if ( v9 != (int *)--v4 )
        {
          v16 = *v9;
          *v9 = *v4;
          *v4 = v16;
        }
        v17 = *(i - 1);
        v18 = *v4;
        --i;
        *v4 = v17;
        *i = v18;
      }
      else
      {
        v19 = *v8;
        *v8 = *v9;
        *v9 = v19;
        ++v8;
      }
    }
    if ( v8 == v3 )
      break;
    if ( i != v8 )
    {
      v14 = *v4;
      *v4 = *i;
      *i = v14;
    }
    v15 = v8;
    v21 = *v4;
    *v4 = *v8;
    v3 = (unsigned int *)a3;
    ++i;
    ++v4;
    ++v8;
    *v15 = v21;
  }
  result = a1;
  a1[1] = i;
  *a1 = v4;
  return result;
}
