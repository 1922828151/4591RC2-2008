/*
 * func-name: sub_10007C50
 * func-address: 0x10007c50
 * callers: 0x100072a0, 0x1000ced0, 0x1000e010
 * callees: 0x10007ed0, 0x10008c20, 0x10010b60, 0x10014460, 0x10014630, 0x10018cf2, 0x10019586
 */

_DWORD *__fastcall sub_10007C50(unsigned int a1, int a2, int *a3, int a4, _DWORD *a5)
{
  _DWORD *result; // eax
  unsigned int v8; // ecx
  int v9; // edx
  int v10; // edx
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // ecx
  _DWORD *v20; // edi
  int v21; // ebx
  _DWORD v22[4]; // [esp+0h] [ebp-34h] BYREF
  int v23; // [esp+10h] [ebp-24h]
  int v24; // [esp+14h] [ebp-20h]
  int v25; // [esp+18h] [ebp-1Ch]
  void *v26; // [esp+1Ch] [ebp-18h]
  _DWORD *v27; // [esp+24h] [ebp-10h]
  int v28; // [esp+30h] [ebp-4h]
  unsigned int v29; // [esp+3Ch] [ebp+8h]
  int v30; // [esp+3Ch] [ebp+8h]

  v27 = v22;
  v23 = *a3;
  v24 = a3[1];
  result = *(_DWORD **)(a2 + 4);
  if ( result )
    v8 = (*(_DWORD *)(a2 + 12) - (int)result) >> 3;
  else
    v8 = 0;
  if ( a1 )
  {
    if ( result )
      v9 = (*(_DWORD *)(a2 + 8) - (int)result) >> 3;
    else
      v9 = 0;
    if ( 0x1FFFFFFF - v9 < a1 )
      result = (_DWORD *)sub_10007ED0(v22[0], v22[1]);
    if ( result )
      v10 = (*(_DWORD *)(a2 + 8) - (int)result) >> 3;
    else
      v10 = 0;
    if ( v8 >= a1 + v10 )
    {
      v18 = *(_DWORD *)(a2 + 8);
      v25 = v18;
      v19 = 8 * a1;
      v30 = 8 * a1;
      if ( (v18 - (int)a5) >> 3 >= a1 )
      {
        v21 = v18 - v19;
        *(_DWORD *)(a2 + 8) = sub_10010B60(v18 - v19, v18);
        sub_10014630(v21, v25);
        for ( result = a5; result != &a5[v30 / 4u]; result += 2 )
        {
          *result = v23;
          result[1] = v24;
        }
      }
      else
      {
        sub_10010B60(a5, v18);
        v28 = 2;
        sub_10008C20(*(_DWORD *)(a2 + 8), a1 - ((*(_DWORD *)(a2 + 8) - (int)a5) >> 3));
        v28 = -1;
        *(_DWORD *)(a2 + 8) += v30;
        v20 = (_DWORD *)(*(_DWORD *)(a2 + 8) - v30);
        for ( result = a5; result != v20; result += 2 )
        {
          *result = v23;
          result[1] = v24;
        }
      }
    }
    else
    {
      if ( 0x1FFFFFFF - (v8 >> 1) >= v8 )
      {
        v11 = (v8 >> 1) + v8;
        v29 = v11;
      }
      else
      {
        v29 = 0;
        v11 = 0;
      }
      if ( result )
        v12 = (*(_DWORD *)(a2 + 8) - (int)result) >> 3;
      else
        v12 = 0;
      if ( v11 < a1 + v12 )
      {
        if ( result )
          v13 = (*(_DWORD *)(a2 + 8) - (int)result) >> 3;
        else
          v13 = 0;
        v29 = a1 + v13;
      }
      v26 = (void *)sub_10014460();
      v28 = 0;
      v14 = sub_10010B60(*(_DWORD *)(a2 + 4), a5);
      LOBYTE(v25) = 0;
      sub_10008C20(v14, a1);
      sub_10010B60(a5, *(_DWORD *)(a2 + 8));
      v28 = -1;
      v15 = *(_DWORD *)(a2 + 4);
      if ( v15 )
        v16 = (*(_DWORD *)(a2 + 8) - v15) >> 3;
      else
        v16 = 0;
      v17 = v16 + a1;
      if ( v15 )
        operator delete(*(void **)(a2 + 4));
      result = v26;
      *(_DWORD *)(a2 + 12) = (char *)v26 + 8 * v29;
      *(_DWORD *)(a2 + 8) = &result[2 * v17];
      *(_DWORD *)(a2 + 4) = result;
    }
  }
  return result;
}
