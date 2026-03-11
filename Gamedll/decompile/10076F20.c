/*
 * func-name: sub_10076F20
 * func-address: 0x10076f20
 * callers: 0x10007c8e
 * callees: 0x10006677, 0x1000844a, 0x10011c11, 0x10012eb3, 0x10015e92, 0x10016eb9, 0x10019c77, 0x102c9d50, 0x102c9d86
 */

int __thiscall sub_10076F20(_DWORD *this, int a2, int a3, unsigned int a4, _DWORD *a5)
{
  int v6; // edx
  int result; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // edi
  int v13; // ecx
  int v14; // ecx
  int v15; // ebx
  int v16; // eax
  int v17; // eax
  void *v18; // ecx
  int v19; // eax
  int v20; // ebx
  int v21; // [esp-20h] [ebp-4Ch]
  int v22; // [esp-Ch] [ebp-38h]
  int v23; // [esp-8h] [ebp-34h]
  int v24[4]; // [esp+0h] [ebp-2Ch] BYREF
  _DWORD v25[4]; // [esp+10h] [ebp-1Ch] BYREF
  int v26; // [esp+28h] [ebp-4h]
  unsigned int v27; // [esp+3Ch] [ebp+10h]
  int v28; // [esp+3Ch] [ebp+10h]
  int v29; // [esp+40h] [ebp+14h]

  v25[3] = v24;
  v6 = a5[1];
  result = this[1];
  v25[0] = *a5;
  v25[1] = v6;
  if ( result )
    v8 = (this[3] - result) >> 3;
  else
    v8 = 0;
  v9 = a4;
  if ( a4 )
  {
    if ( result )
      v10 = (this[2] - result) >> 3;
    else
      v10 = 0;
    if ( 0x1FFFFFFF - v10 < a4 )
      result = sub_10019C77(v24[0], v24[1]);
    if ( result )
      v11 = (this[2] - result) >> 3;
    else
      v11 = 0;
    if ( v8 >= v9 + v11 )
    {
      v20 = this[2];
      v29 = 8 * v9;
      if ( (v20 - a3) >> 3 >= v9 )
      {
        v28 = v20 - 8 * v9;
        this[2] = sub_1000844A(v28, v20, this[2]);
        sub_10011C11(a3, v28, v20);
        return sub_10016EB9(a3, a3 + v29, (int)v25);
      }
      else
      {
        sub_1000844A(a3, v20, a3 + 8 * v9);
        v23 = a4 - ((this[2] - a3) >> 3);
        v22 = this[2];
        v26 = 2;
        sub_10006677(v22, v23, (int)v25);
        this[2] += v29;
        return sub_10016EB9(a3, this[2] - v29, (int)v25);
      }
    }
    else
    {
      if ( 0x1FFFFFFF - (v8 >> 1) >= v8 )
        v12 = (v8 >> 1) + v8;
      else
        v12 = 0;
      if ( result )
        v13 = (this[2] - result) >> 3;
      else
        v13 = 0;
      if ( v12 < v9 + v13 )
      {
        if ( result )
          v14 = (this[2] - result) >> 3;
        else
          v14 = 0;
        v12 = v14 + v9;
      }
      v15 = sub_10015E92(v12);
      v21 = this[1];
      v25[2] = v15;
      v26 = 0;
      v16 = sub_10012EB3(v21, a3, v15);
      v17 = sub_10006677(v16, a4, (int)v25);
      sub_10012EB3(a3, this[2], v17);
      v18 = (void *)this[1];
      if ( v18 )
        v19 = (this[2] - (int)v18) >> 3;
      else
        v19 = 0;
      v27 = v19 + a4;
      if ( v18 )
        operator delete(v18);
      result = v15 + 8 * v27;
      this[3] = v15 + 8 * v12;
      this[2] = result;
      this[1] = v15;
    }
  }
  return result;
}
