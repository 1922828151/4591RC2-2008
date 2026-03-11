/*
 * func-name: sub_101A93B0
 * func-address: 0x101a93b0
 * callers: 0x10015b13
 * callees: 0x10009bdd, 0x1000fa1f, 0x100122e2, 0x10015320, 0x1001748b, 0x100179f4, 0x102c9d50
 */

int *__userpurge sub_101A93B0@<eax>(int a1@<ecx>, int a2@<edi>, int a3, char *Source, unsigned int a5, int *a6)
{
  int *result; // eax
  int v8; // ecx
  unsigned int v9; // edi
  int v11; // eax
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  int v15; // edi
  char *v16; // ebp
  int v17; // eax
  void *v18; // eax
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // ebx
  char *v22; // ebp
  int v23; // eax
  int v24; // ebx
  int v26; // [esp+0h] [ebp-8h]
  int v27; // [esp+14h] [ebp+Ch]

  result = a6;
  a6 = *(int **)a6;
  v8 = *(_DWORD *)(a1 + 4);
  if ( v8 )
    v9 = (*(_DWORD *)(a1 + 12) - v8) >> 2;
  else
    v9 = 0;
  if ( a5 )
  {
    if ( v8 )
      v11 = (*(_DWORD *)(a1 + 8) - v8) >> 2;
    else
      v11 = 0;
    if ( 0x3FFFFFFF - v11 < a5 )
      sub_100179F4(a2, v26);
    if ( v8 )
      v12 = (*(_DWORD *)(a1 + 8) - v8) >> 2;
    else
      v12 = 0;
    if ( v9 >= a5 + v12 )
    {
      v22 = *(char **)(a1 + 8);
      v23 = 4 * a5;
      v27 = 4 * a5;
      if ( (v22 - Source) >> 2 >= a5 )
      {
        v24 = (int)&v22[-v23];
        *(_DWORD *)(a1 + 8) = sub_10009BDD(&v22[-v23], (int)v22, v22);
        sub_10015320(Source, v24, (int)v22);
        return (int *)sub_1001748B((int)Source, (int)&Source[v27], (int)&a6);
      }
      else
      {
        sub_10009BDD(Source, (int)v22, &Source[v23]);
        sub_1000FA1F(*(_DWORD *)(a1 + 8), a5 - ((*(_DWORD *)(a1 + 8) - (int)Source) >> 2), (int)&a6);
        *(_DWORD *)(a1 + 8) += v27;
        return (int *)sub_1001748B((int)Source, *(_DWORD *)(a1 + 8) - v27, (int)&a6);
      }
    }
    else
    {
      if ( 0x3FFFFFFF - (v9 >> 1) >= v9 )
        v13 = (v9 >> 1) + v9;
      else
        v13 = 0;
      if ( v8 )
        v14 = (*(_DWORD *)(a1 + 8) - v8) >> 2;
      else
        v14 = 0;
      if ( v13 < a5 + v14 )
      {
        if ( v8 )
          v15 = (*(_DWORD *)(a1 + 8) - v8) >> 2;
        else
          v15 = 0;
        v13 = a5 + v15;
      }
      v16 = (char *)sub_100122E2(v13);
      v17 = sub_10009BDD(*(void **)(a1 + 4), (int)Source, v16);
      v18 = (void *)sub_1000FA1F(v17, a5, (int)&a6);
      sub_10009BDD(Source, *(_DWORD *)(a1 + 8), v18);
      v19 = *(_DWORD *)(a1 + 4);
      if ( v19 )
        v20 = (*(_DWORD *)(a1 + 8) - v19) >> 2;
      else
        v20 = 0;
      v21 = v20 + a5;
      if ( v19 )
        operator delete(*(void **)(a1 + 4));
      result = (int *)&v16[4 * v21];
      *(_DWORD *)(a1 + 4) = v16;
      *(_DWORD *)(a1 + 12) = &v16[4 * v13];
      *(_DWORD *)(a1 + 8) = result;
    }
  }
  return result;
}
