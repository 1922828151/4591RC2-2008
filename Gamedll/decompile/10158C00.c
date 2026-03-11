/*
 * func-name: sub_10158C00
 * func-address: 0x10158c00
 * callers: 0x10003891
 * callees: 0x100063f7, 0x10009c5f, 0x1000a786, 0x1000abf5, 0x1000b929, 0x1001136a, 0x10015253, 0x1001a1d6, 0x102c9d50, 0x102c9d86
 */

int __thiscall sub_10158C00(int *this, int a2, int a3, unsigned int a4, _DWORD *a5)
{
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int result; // eax
  int v10; // ecx
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // edi
  int v21; // ecx
  int v22; // edi
  int v23; // [esp-20h] [ebp-54h]
  int v24; // [esp-Ch] [ebp-40h]
  int v25; // [esp-8h] [ebp-3Ch]
  int v26[4]; // [esp+0h] [ebp-34h] BYREF
  _DWORD v27[6]; // [esp+10h] [ebp-24h] BYREF
  int v28; // [esp+30h] [ebp-4h]
  int v29; // [esp+44h] [ebp+10h]
  char *v30; // [esp+48h] [ebp+14h]
  void *v31; // [esp+48h] [ebp+14h]

  v27[5] = v26;
  v6 = a5[1];
  v27[0] = *a5;
  v7 = a5[2];
  v27[1] = v6;
  v8 = a5[3];
  result = a5[4];
  v27[2] = v7;
  v10 = this[1];
  v27[3] = v8;
  v27[4] = result;
  if ( v10 )
  {
    result = 1717986919 * (this[3] - v10);
    v11 = (this[3] - v10) / 20;
  }
  else
  {
    v11 = 0;
  }
  if ( a4 )
  {
    if ( v10 )
      v12 = (this[2] - v10) / 20;
    else
      v12 = 0;
    if ( 214748364 - v12 < a4 )
      sub_1000A786(v26[0], v26[1]);
    if ( v10 )
      v13 = (this[2] - v10) / 20;
    else
      v13 = 0;
    if ( v11 >= a4 + v13 )
    {
      v21 = this[2];
      v31 = (void *)v21;
      if ( (v21 - a3) / 20 >= a4 )
      {
        v22 = 20 * a4;
        v29 = v21 - 20 * a4;
        this[2] = sub_1000B929(v21 - v22, v21, v21);
        sub_10009C5F(a3, v29, (int)v31);
        return sub_100063F7(a3, a3 + v22, (int)v27);
      }
      else
      {
        sub_1000B929(a3, v21, a3 + 20 * a4);
        v25 = a4 - (this[2] - a3) / 20;
        v24 = this[2];
        v28 = 2;
        sub_1001A1D6(v24, v25, (int)v27);
        this[2] += 20 * a4;
        return sub_100063F7(a3, this[2] - 20 * a4, (int)v27);
      }
    }
    else
    {
      if ( 214748364 - (v11 >> 1) >= v11 )
        v14 = (v11 >> 1) + v11;
      else
        v14 = 0;
      if ( v10 )
        v15 = (this[2] - v10) / 20;
      else
        v15 = 0;
      if ( v14 < a4 + v15 )
        v14 = a4 + sub_1000ABF5();
      v30 = (char *)sub_10015253(v14);
      v23 = this[1];
      v28 = 0;
      v16 = sub_1001136A(v23, a3, (int)v30);
      v17 = sub_1001A1D6(v16, a4, (int)v27);
      sub_1001136A(a3, this[2], v17);
      v18 = this[1];
      if ( v18 )
        v19 = (this[2] - v18) / 20;
      else
        v19 = 0;
      v20 = v19 + a4;
      if ( v18 )
        operator delete((void *)this[1]);
      result = (int)v30;
      this[3] = (int)&v30[20 * v14];
      this[2] = (int)&v30[20 * v20];
      this[1] = (int)v30;
    }
  }
  return result;
}
