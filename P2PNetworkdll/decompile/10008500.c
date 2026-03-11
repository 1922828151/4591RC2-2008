/*
 * func-name: sub_10008500
 * func-address: 0x10008500
 * callers: 0x100080d0, 0x10009290, 0x1000dbc0
 * callees: 0x10008ed0, 0x10008f40, 0x100099a0, 0x100099e0, 0x10009fb0, 0x1000ec00, 0x10023306, 0x10023bc6
 */

_DWORD *__thiscall sub_10008500(int this, unsigned int a2, int *a3, int a4, _DWORD *a5)
{
  int v6; // edx
  _DWORD *result; // eax
  unsigned int v8; // esi
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // esi
  int v13; // ecx
  int v14; // ecx
  void *v15; // eax
  unsigned int v16; // ebx
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // ebx
  char *v20; // edx
  int v21; // ebx
  unsigned int v22; // ecx
  _DWORD *v23; // edi
  int v24; // edx
  _DWORD v25[4]; // [esp+0h] [ebp-30h] BYREF
  int v26; // [esp+10h] [ebp-20h] BYREF
  int v27; // [esp+14h] [ebp-1Ch]
  int v28; // [esp+18h] [ebp-18h]
  void *v29; // [esp+1Ch] [ebp-14h]
  _DWORD *v30; // [esp+20h] [ebp-10h]
  int v31; // [esp+2Ch] [ebp-4h]
  int v32; // [esp+38h] [ebp+8h]
  unsigned int v33; // [esp+3Ch] [ebp+Ch]
  int v34; // [esp+3Ch] [ebp+Ch]
  int v35; // [esp+3Ch] [ebp+Ch]

  v30 = v25;
  v6 = a3[1];
  result = *(_DWORD **)(this + 4);
  v26 = *a3;
  v27 = v6;
  if ( result )
    v8 = (*(_DWORD *)(this + 12) - (int)result) >> 3;
  else
    v8 = 0;
  v9 = a2;
  if ( a2 )
  {
    if ( result )
      v10 = (*(_DWORD *)(this + 8) - (int)result) >> 3;
    else
      v10 = 0;
    if ( 0x1FFFFFFF - v10 < a2 )
      result = (_DWORD *)sub_10008ED0(v25[0], v25[1]);
    if ( result )
      v11 = (*(_DWORD *)(this + 8) - (int)result) >> 3;
    else
      v11 = 0;
    if ( v8 >= v9 + v11 )
    {
      v21 = *(_DWORD *)(this + 8);
      if ( (v21 - (int)a5) >> 3 >= v9 )
      {
        v35 = 2 * v9;
        v32 = v21 - 8 * v9;
        *(_DWORD *)(this + 8) = sub_100099E0(v32, *(_DWORD *)(this + 8));
        sub_100099A0(v32, v21);
        for ( result = a5; result != &a5[v35]; result += 2 )
        {
          *result = v26;
          result[1] = v27;
        }
      }
      else
      {
        v34 = 8 * v9;
        sub_100099E0(a5, &a5[2 * v9]);
        v31 = 2;
        v22 = a2 - ((*(_DWORD *)(this + 8) - (int)a5) >> 3);
        LOBYTE(a2) = 0;
        sub_10009FB0(v22, &v26, a2, a2);
        *(_DWORD *)(this + 8) += v34;
        v23 = (_DWORD *)(*(_DWORD *)(this + 8) - v34);
        for ( result = a5; result != v23; result += 2 )
        {
          v24 = v27;
          *result = v26;
          result[1] = v24;
        }
      }
    }
    else
    {
      if ( 0x1FFFFFFF - (v8 >> 1) >= v8 )
      {
        v12 = (v8 >> 1) + v8;
        v33 = v12;
      }
      else
      {
        v33 = 0;
        v12 = 0;
      }
      if ( result )
        v13 = (*(_DWORD *)(this + 8) - (int)result) >> 3;
      else
        v13 = 0;
      if ( v12 < v9 + v13 )
      {
        if ( result )
          v14 = (*(_DWORD *)(this + 8) - (int)result) >> 3;
        else
          v14 = 0;
        v33 = v9 + v14;
        v12 = v9 + v14;
      }
      v15 = (void *)sub_10008F40(v12);
      v31 = 0;
      LOBYTE(v28) = 0;
      v29 = v15;
      v16 = a2;
      sub_1000EC00(a2, v28);
      LOBYTE(v28) = 0;
      sub_10009FB0(a2, &v26, a2, v28);
      LOBYTE(a2) = 0;
      sub_1000EC00(a2, a2);
      v17 = *(_DWORD *)(this + 4);
      if ( v17 )
        v18 = (*(_DWORD *)(this + 8) - v17) >> 3;
      else
        v18 = 0;
      v19 = v18 + v16;
      if ( v17 )
        operator delete(*(void **)(this + 4));
      result = v29;
      v20 = (char *)v29 + 8 * v19;
      *(_DWORD *)(this + 12) = (char *)v29 + 8 * v33;
      *(_DWORD *)(this + 8) = v20;
      *(_DWORD *)(this + 4) = result;
    }
  }
  return result;
}
