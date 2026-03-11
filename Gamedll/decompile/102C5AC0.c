/*
 * func-name: sub_102C5AC0
 * func-address: 0x102c5ac0
 * callers: 0x102c5fe0
 * callees: 0x102c3070, 0x102c4a10, 0x102c5090, 0x102c50b0, 0x102c5780, 0x102c58d0, 0x102c9d50
 */

double *__thiscall sub_102C5AC0(int this, int a2, char *Source, unsigned int a4, double *a5)
{
  double *result; // eax
  int v7; // ecx
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  int v13; // edi
  char *v14; // ebp
  double *v15; // eax
  double *v16; // eax
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // ebx
  char *v20; // ebp
  int v21; // eax
  int v22; // ebx
  int v23; // [esp-4h] [ebp-14h]
  int v24; // [esp+0h] [ebp-10h]
  double v25; // [esp+8h] [ebp-8h] BYREF
  int v26; // [esp+20h] [ebp+10h]

  result = a5;
  v25 = *a5;
  v7 = *(_DWORD *)(this + 4);
  if ( v7 )
    v8 = (*(_DWORD *)(this + 12) - v7) >> 3;
  else
    v8 = 0;
  if ( a4 )
  {
    if ( v7 )
      v9 = (*(_DWORD *)(this + 8) - v7) >> 3;
    else
      v9 = 0;
    if ( 0x1FFFFFFF - v9 < a4 )
      sub_102C4A10(v23, v24);
    if ( v7 )
      v10 = (*(_DWORD *)(this + 8) - v7) >> 3;
    else
      v10 = 0;
    if ( v8 >= a4 + v10 )
    {
      v20 = *(char **)(this + 8);
      v21 = 8 * a4;
      v26 = 8 * a4;
      if ( (v20 - Source) >> 3 >= a4 )
      {
        v22 = (int)&v20[-v21];
        *(_DWORD *)(this + 8) = sub_102C5780(&v20[-v21], (int)v20, v20);
        sub_102C50B0(Source, v22, (int)v20);
        return (double *)sub_102C5090((int)Source, (int)&Source[v26], &v25);
      }
      else
      {
        sub_102C5780(Source, (int)v20, &Source[v21]);
        sub_102C58D0(*(double **)(this + 8), a4 - ((*(_DWORD *)(this + 8) - (int)Source) >> 3), &v25);
        *(_DWORD *)(this + 8) += v26;
        return (double *)sub_102C5090((int)Source, *(_DWORD *)(this + 8) - v26, &v25);
      }
    }
    else
    {
      if ( 0x1FFFFFFF - (v8 >> 1) >= v8 )
        v11 = (v8 >> 1) + v8;
      else
        v11 = 0;
      if ( v7 )
        v12 = (*(_DWORD *)(this + 8) - v7) >> 3;
      else
        v12 = 0;
      if ( v11 < a4 + v12 )
      {
        if ( v7 )
          v13 = (*(_DWORD *)(this + 8) - v7) >> 3;
        else
          v13 = 0;
        v11 = a4 + v13;
      }
      v14 = (char *)sub_102C3070(v11);
      v15 = (double *)sub_102C5780(*(void **)(this + 4), (int)Source, v14);
      v16 = sub_102C58D0(v15, a4, &v25);
      sub_102C5780(Source, *(_DWORD *)(this + 8), v16);
      v17 = *(_DWORD *)(this + 4);
      if ( v17 )
        v18 = (*(_DWORD *)(this + 8) - v17) >> 3;
      else
        v18 = 0;
      v19 = v18 + a4;
      if ( v17 )
        operator delete(*(void **)(this + 4));
      result = (double *)&v14[8 * v19];
      *(_DWORD *)(this + 4) = v14;
      *(_DWORD *)(this + 12) = &v14[8 * v11];
      *(_DWORD *)(this + 8) = result;
    }
  }
  return result;
}
