/*
 * func-name: sub_100269A0
 * func-address: 0x100269a0
 * callers: 0x1002af60
 * callees: 0x10034f10
 */

int *__stdcall sub_100269A0(int a1, int a2, int a3, int *a4, int a5, int a6)
{
  void *v6; // esi
  unsigned int v7; // edi
  int *result; // eax
  unsigned int v9; // ebp
  int *v10; // edx
  int v11; // ebx
  int v12; // edi
  float *v13; // edi
  int v14; // ebx
  int v15; // edi
  float *v16; // edi
  int v17; // ebx
  int v18; // edi
  float *v19; // edi
  int v20; // ebx
  int v21; // edi
  float *v22; // edi
  int v23; // edi
  int v24; // ebx
  float *v25; // edx
  unsigned int v26; // [esp+20h] [ebp+10h]

  v6 = (void *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 4 * a2, 261);
  memset(v6, 0, 4 * a2);
  v7 = a6;
  result = a4;
  v9 = 0;
  *a4 = 0;
  if ( a6 >= 4 )
  {
    v10 = (int *)(a5 + 8);
    v9 = 4 * (((unsigned int)(a6 - 4) >> 2) + 1);
    v26 = ((unsigned int)(a6 - 4) >> 2) + 1;
    do
    {
      v11 = *(v10 - 2);
      v12 = *((_DWORD *)v6 + v11);
      if ( v12 )
      {
        *(v10 - 2) = v12 - 1;
      }
      else
      {
        *(v10 - 2) = *result;
        v13 = (float *)(a1 + 12 * v11);
        *(float *)(a3 + 12 * *result) = *v13;
        *(float *)(a3 + 12 * *result + 4) = v13[1];
        *(float *)(a3 + 12 * (*result)++ + 8) = v13[2];
        v9 = 4 * (((unsigned int)(a6 - 4) >> 2) + 1);
        *((_DWORD *)v6 + v11) = *result;
      }
      v14 = *(v10 - 1);
      v15 = *((_DWORD *)v6 + v14);
      if ( v15 )
      {
        *(v10 - 1) = v15 - 1;
      }
      else
      {
        *(v10 - 1) = *result;
        v16 = (float *)(a1 + 12 * v14);
        *(float *)(a3 + 12 * *result) = *v16;
        *(float *)(a3 + 12 * *result + 4) = v16[1];
        *(float *)(a3 + 12 * (*result)++ + 8) = v16[2];
        v9 = 4 * (((unsigned int)(a6 - 4) >> 2) + 1);
        *((_DWORD *)v6 + v14) = *result;
      }
      v17 = *v10;
      v18 = *((_DWORD *)v6 + *v10);
      if ( v18 )
      {
        *v10 = v18 - 1;
      }
      else
      {
        *v10 = *result;
        v19 = (float *)(a1 + 12 * v17);
        *(float *)(a3 + 12 * *result) = *v19;
        *(float *)(a3 + 12 * *result + 4) = v19[1];
        *(float *)(a3 + 12 * (*result)++ + 8) = v19[2];
        v9 = 4 * (((unsigned int)(a6 - 4) >> 2) + 1);
        *((_DWORD *)v6 + v17) = *result;
      }
      v20 = v10[1];
      v21 = *((_DWORD *)v6 + v20);
      if ( v21 )
      {
        v10[1] = v21 - 1;
      }
      else
      {
        v10[1] = *result;
        v22 = (float *)(a1 + 12 * v20);
        *(float *)(a3 + 12 * *result) = *v22;
        *(float *)(a3 + 12 * *result + 4) = v22[1];
        *(float *)(a3 + 12 * (*result)++ + 8) = v22[2];
        v9 = 4 * (((unsigned int)(a6 - 4) >> 2) + 1);
        *((_DWORD *)v6 + v20) = *result;
      }
      v10 += 4;
      --v26;
    }
    while ( v26 );
    v7 = a6;
  }
  if ( v9 < v7 )
  {
    do
    {
      v23 = *(_DWORD *)(a5 + 4 * v9);
      v24 = *((_DWORD *)v6 + v23);
      if ( v24 )
      {
        *(_DWORD *)(a5 + 4 * v9) = v24 - 1;
      }
      else
      {
        *(_DWORD *)(a5 + 4 * v9) = *result;
        v25 = (float *)(a1 + 12 * v23);
        *(float *)(a3 + 12 * *result) = *v25;
        *(float *)(a3 + 12 * *result + 4) = v25[1];
        *(float *)(a3 + 12 * (*result)++ + 8) = v25[2];
        *((_DWORD *)v6 + v23) = *result;
      }
      ++v9;
    }
    while ( v9 < a6 );
  }
  if ( v6 )
    return (int *)(*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v6);
  return result;
}
