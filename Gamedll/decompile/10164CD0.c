/*
 * func-name: sub_10164CD0
 * func-address: 0x10164cd0
 * callers: 0x10017431
 * callees: 0x10012143
 */

int **__cdecl sub_10164CD0(int **a1, unsigned int a2, int *a3, unsigned __int8 (__cdecl *a4)(int, int))
{
  int *v4; // esi
  int *i; // ebp
  int *v6; // edi
  int *v7; // ebx
  int v8; // ecx
  bool v9; // zf
  int v10; // eax
  int v11; // eax
  int *v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int **result; // eax
  int v18; // [esp+10h] [ebp-4h]

  v4 = (int *)(a2 + 4 * (((int)((int)a3 - a2) >> 2) / 2));
  sub_10012143(a2, (int)v4, (int)(a3 - 1), (int)a4);
  for ( i = v4 + 1; a2 < (unsigned int)v4; --v4 )
  {
    if ( a4(*(v4 - 1), *v4) )
      break;
    if ( a4(*v4, *(v4 - 1)) )
      break;
  }
  for ( ; i < a3; ++i )
  {
    if ( a4(*i, *v4) )
      break;
    if ( a4(*v4, *i) )
      break;
  }
  v6 = i;
  v7 = v4;
  while ( 1 )
  {
    while ( 1 )
    {
      for ( ; v6 < a3; ++v6 )
      {
        if ( !a4(*v4, *v6) )
        {
          if ( a4(*v6, *v4) )
            break;
          v8 = *i;
          *i++ = *v6;
          *v6 = v8;
        }
      }
      v9 = v7 == (int *)a2;
      if ( (unsigned int)v7 > a2 )
      {
        do
        {
          if ( !a4(*(v7 - 1), *v4) )
          {
            if ( a4(*v4, *(v7 - 1)) )
              break;
            v10 = *--v4;
            *v4 = *(v7 - 1);
            *(v7 - 1) = v10;
          }
          --v7;
        }
        while ( a2 < (unsigned int)v7 );
        v9 = v7 == (int *)a2;
      }
      if ( v9 )
        break;
      --v7;
      if ( v6 == a3 )
      {
        if ( v7 != --v4 )
        {
          v13 = *v7;
          *v7 = *v4;
          *v4 = v13;
        }
        v14 = *(i - 1);
        v15 = *v4;
        --i;
        *v4 = v14;
        *i = v15;
      }
      else
      {
        v16 = *v6;
        *v6 = *v7;
        *v7 = v16;
        ++v6;
      }
    }
    if ( v6 == a3 )
      break;
    if ( i != v6 )
    {
      v11 = *v4;
      *v4 = *i;
      *i = v11;
    }
    v12 = v6;
    v18 = *v4;
    *v4 = *v6;
    ++i;
    ++v4;
    ++v6;
    *v12 = v18;
  }
  result = a1;
  *a1 = v4;
  a1[1] = i;
  return result;
}
