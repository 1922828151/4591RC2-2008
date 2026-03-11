/*
 * func-name: sub_102885F0
 * func-address: 0x102885f0
 * callers: 0x1000588f
 * callees: none
 */

int __cdecl sub_102885F0(unsigned int *a1, unsigned int *a2, int *a3)
{
  unsigned int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // ebp
  int result; // eax
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // esi
  unsigned int v12; // edx
  unsigned int v13; // ebx
  unsigned int *v14; // esi
  unsigned int v15; // edi
  unsigned int v16; // edi
  unsigned int v17; // edi
  unsigned int *v18; // esi
  unsigned int v19; // ebx
  unsigned int *v20; // edi
  unsigned int v21; // ebp
  unsigned int v22; // ebx
  unsigned int v23; // edi
  unsigned int v24; // ebx
  unsigned int v25; // edi
  unsigned int v26; // esi
  unsigned int v27; // edi
  unsigned int v28; // edx
  unsigned int v29; // edx
  unsigned int v30; // edx
  unsigned int v31; // [esp+Ch] [ebp+4h]

  v4 = *a1;
  v5 = ((char *)a3 - (char *)a1) >> 2;
  if ( v5 <= 40 )
  {
    result = (int)a2;
    v28 = *a2;
    if ( *a2 < v4 )
    {
      *a2 = v4;
      *a1 = v28;
    }
    v29 = *a3;
    if ( *a3 < *a2 )
    {
      *a3 = *a2;
      *a2 = v29;
    }
    v30 = *a2;
    if ( *a2 < *a1 )
    {
      *a2 = *a1;
      *a1 = v30;
    }
  }
  else
  {
    v6 = (v5 + 1) / 8;
    v7 = 8 * v6;
    result = 4 * v6;
    v9 = *(unsigned int *)((char *)a1 + result);
    if ( v9 < v4 )
    {
      *(unsigned int *)((char *)a1 + result) = v4;
      *a1 = v9;
    }
    v10 = a1[v7 / 4u];
    v11 = *(unsigned int *)((char *)a1 + result);
    if ( v10 < v11 )
    {
      a1[v7 / 4u] = v11;
      *(unsigned int *)((char *)a1 + result) = v10;
    }
    v12 = *(unsigned int *)((char *)a1 + result);
    if ( v12 < *a1 )
    {
      *(unsigned int *)((char *)a1 + result) = *a1;
      *a1 = v12;
    }
    v13 = *a2;
    v14 = (unsigned int *)((char *)a2 - result);
    v15 = *(unsigned int *)((char *)a2 - result);
    if ( *a2 < v15 )
    {
      *a2 = v15;
      *v14 = v13;
    }
    v16 = *(unsigned int *)((char *)a2 + result);
    if ( v16 < *a2 )
    {
      *(unsigned int *)((char *)a2 + result) = *a2;
      *a2 = v16;
    }
    v17 = *a2;
    if ( *a2 < *v14 )
    {
      *a2 = *v14;
      *v14 = v17;
    }
    v18 = (unsigned int *)((char *)a3 - result);
    v19 = *(int *)((char *)a3 - result);
    v20 = (unsigned int *)&a3[v7 / 0xFFFFFFFC];
    v21 = a3[v7 / 0xFFFFFFFC];
    if ( v19 < v21 )
    {
      *v18 = v21;
      *v20 = v19;
    }
    v31 = *a3;
    if ( *a3 < *v18 )
    {
      *a3 = *v18;
      *v18 = v31;
    }
    v22 = *v18;
    if ( *v18 < *v20 )
    {
      *v18 = *v20;
      *v20 = v22;
    }
    v23 = *a2;
    v24 = *(unsigned int *)((char *)a1 + result);
    if ( *a2 < v24 )
    {
      *a2 = v24;
      *(unsigned int *)((char *)a1 + result) = v23;
    }
    v25 = *v18;
    if ( *v18 < *a2 )
    {
      *v18 = *a2;
      *a2 = v25;
    }
    v26 = *a2;
    v27 = *(unsigned int *)((char *)a1 + result);
    if ( *a2 < v27 )
    {
      *a2 = v27;
      *(unsigned int *)((char *)a1 + result) = v26;
    }
  }
  return result;
}
