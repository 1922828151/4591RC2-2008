/*
 * func-name: sub_10027650
 * func-address: 0x10027650
 * callers: 0x1002cb80, 0x10176030
 * callees: 0x1001af60, 0x1001cb40, 0x100906b0, 0x10095080, 0x1010f430, 0x10135a50, 0x10135a90, 0x101a2500, 0x101a2522
 */

_DWORD *__thiscall sub_10027650(_DWORD *this, int a2, _DWORD *a3, unsigned int a4, int *a5)
{
  int v5; // edx
  int v7; // ecx
  _DWORD *result; // eax
  unsigned int v9; // edi
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // edi
  int v13; // ecx
  int v14; // ecx
  _DWORD *v15; // ebx
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  void *v18; // ecx
  int v19; // eax
  int v20; // ebx
  _DWORD *v21; // [esp-20h] [ebp-48h]
  int v22; // [esp-Ch] [ebp-34h]
  unsigned int v23; // [esp-8h] [ebp-30h]
  int v24; // [esp+0h] [ebp-28h] BYREF
  _DWORD v25[4]; // [esp+Ch] [ebp-1Ch] BYREF
  int v26; // [esp+24h] [ebp-4h]
  unsigned int v27; // [esp+38h] [ebp+10h]
  int v28; // [esp+3Ch] [ebp+14h]

  v5 = a5[1];
  v7 = *a5;
  result = (_DWORD *)this[1];
  v25[3] = &v24;
  v25[0] = v7;
  v25[1] = v5;
  if ( result )
    v9 = (this[3] - (int)result) >> 3;
  else
    v9 = 0;
  if ( a4 )
  {
    if ( result )
      v10 = (this[2] - (int)result) >> 3;
    else
      v10 = 0;
    if ( 0x1FFFFFFF - v10 < a4 )
      sub_1001AF60();
    if ( result )
      v11 = (this[2] - (int)result) >> 3;
    else
      v11 = 0;
    if ( v9 >= a4 + v11 )
    {
      v20 = this[2];
      v28 = 8 * a4;
      if ( (v20 - (int)a3) >> 3 >= a4 )
      {
        this[2] = sub_100906B0(v20 - 8 * a4, v20, this[2]);
        sub_10135A50(a3, v20 - 8 * a4, v20);
        return (_DWORD *)sub_1010F430(a3, &a3[v28 / 4u], v25);
      }
      else
      {
        sub_100906B0(a3, v20, &a3[2 * a4]);
        v23 = a4 - ((this[2] - (int)a3) >> 3);
        v22 = this[2];
        v26 = 2;
        sub_10135A90(v22, v23, v25);
        this[2] += v28;
        return (_DWORD *)sub_1010F430(a3, this[2] - v28, v25);
      }
    }
    else
    {
      if ( 0x1FFFFFFF - (v9 >> 1) >= v9 )
        v12 = (v9 >> 1) + v9;
      else
        v12 = 0;
      if ( result )
        v13 = (this[2] - (int)result) >> 3;
      else
        v13 = 0;
      if ( v12 < a4 + v13 )
      {
        if ( result )
          v14 = (this[2] - (int)result) >> 3;
        else
          v14 = 0;
        v12 = v14 + a4;
      }
      v15 = (_DWORD *)sub_10095080(v12);
      v21 = (_DWORD *)this[1];
      v25[2] = v15;
      v26 = 0;
      v16 = sub_1001CB40(v21, a3, v15);
      v17 = (_DWORD *)sub_10135A90(v16, a4, v25);
      sub_1001CB40(a3, (_DWORD *)this[2], v17);
      v18 = (void *)this[1];
      if ( v18 )
        v19 = (this[2] - (int)v18) >> 3;
      else
        v19 = 0;
      v27 = v19 + a4;
      if ( v18 )
        operator delete(v18);
      result = &v15[2 * v27];
      this[3] = &v15[2 * v12];
      this[2] = result;
      this[1] = v15;
    }
  }
  return result;
}
