/*
 * func-name: sub_1021FD50
 * func-address: 0x1021fd50
 * callers: 0x100138e0
 * callees: 0x10005498, 0x1000827e, 0x1000a76d, 0x1000cf72, 0x1000ddb9, 0x10015893, 0x1001988f, 0x102c9d50, 0x102c9d86
 */

int __thiscall sub_1021FD50(_DWORD *this, int a2, int a3, unsigned int a4, _DWORD *a5)
{
  int result; // eax
  int v7; // ecx
  unsigned int v8; // edi
  unsigned int v9; // edx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  void *v20; // ecx
  int v21; // eax
  int v22; // ebx
  int v24; // [esp-20h] [ebp-48h]
  int v25; // [esp-Ch] [ebp-34h]
  int v26; // [esp-8h] [ebp-30h]
  int v27[5]; // [esp+0h] [ebp-28h] BYREF
  int v28; // [esp+14h] [ebp-14h]
  int *v29; // [esp+18h] [ebp-10h]
  int v30; // [esp+24h] [ebp-4h]
  int v31; // [esp+34h] [ebp+Ch]
  int v32; // [esp+34h] [ebp+Ch]
  unsigned int v33; // [esp+38h] [ebp+10h]
  int v34; // [esp+38h] [ebp+10h]

  v29 = v27;
  result = (int)a5;
  a5 = (_DWORD *)*a5;
  v7 = this[1];
  if ( v7 )
    v8 = (this[3] - v7) >> 2;
  else
    v8 = 0;
  v9 = a4;
  if ( a4 )
  {
    if ( v7 )
      v10 = (this[2] - v7) >> 2;
    else
      v10 = 0;
    if ( 0x3FFFFFFF - v10 < a4 )
      sub_10005498(v27[0], v27[1]);
    if ( v7 )
      v11 = (this[2] - v7) >> 2;
    else
      v11 = 0;
    if ( v8 >= v9 + v11 )
    {
      v22 = this[2];
      if ( (v22 - a3) >> 2 >= v9 )
      {
        v32 = 4 * v9;
        v34 = v22 - 4 * v9;
        this[2] = sub_1000CF72(v34, v22, this[2]);
        sub_1000DDB9(a3, v34, v22);
        return sub_1001988F(a3, a3 + v32, (int)&a5);
      }
      else
      {
        v31 = 4 * v9;
        sub_1000CF72(a3, v22, a3 + 4 * v9);
        v26 = a4 - ((this[2] - a3) >> 2);
        v25 = this[2];
        v30 = 2;
        sub_1000827E(v25, v26, (int)&a5);
        this[2] += v31;
        return sub_1001988F(a3, this[2] - v31, (int)&a5);
      }
    }
    else
    {
      if ( 0x3FFFFFFF - (v8 >> 1) >= v8 )
        v12 = (v8 >> 1) + v8;
      else
        v12 = 0;
      if ( v7 )
        v13 = (this[2] - v7) >> 2;
      else
        v13 = 0;
      if ( v12 < v9 + v13 )
      {
        if ( v7 )
          v14 = (this[2] - v7) >> 2;
        else
          v14 = 0;
        v12 = v14 + v9;
      }
      v15 = sub_10015893(v12);
      LOBYTE(v28) = 0;
      v16 = v15;
      v24 = this[1];
      v27[4] = v15;
      v30 = 0;
      v17 = sub_1000A76D(v24, a3, v15);
      v18 = sub_1000827E(v17, a4, (int)&a5);
      v19 = this[2];
      LOBYTE(a5) = 0;
      sub_1000A76D(a3, v19, v18);
      v20 = (void *)this[1];
      if ( v20 )
        v21 = (this[2] - (int)v20) >> 2;
      else
        v21 = 0;
      v33 = v21 + a4;
      if ( v20 )
        operator delete(v20);
      result = v16 + 4 * v33;
      this[3] = v16 + 4 * v12;
      this[2] = result;
      this[1] = v16;
    }
  }
  return result;
}
