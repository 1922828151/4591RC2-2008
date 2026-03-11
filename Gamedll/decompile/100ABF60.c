/*
 * func-name: sub_100ABF60
 * func-address: 0x100abf60
 * callers: 0x10013e67
 * callees: 0x10008981, 0x10009cfa, 0x1000ad6c, 0x1000b843, 0x1000bdc5, 0x1000cd56, 0x1000e2d7, 0x10018291, 0x102c9d50, 0x102c9d86
 */

int __thiscall sub_100ABF60(int *this, int a2, int a3, unsigned int a4, _DWORD *a5)
{
  int result; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
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
  int v23; // [esp-20h] [ebp-58h]
  int v24; // [esp-Ch] [ebp-44h]
  int v25; // [esp-8h] [ebp-40h]
  int v26[4]; // [esp+0h] [ebp-38h] BYREF
  _DWORD v27[7]; // [esp+10h] [ebp-28h] BYREF
  int v28; // [esp+34h] [ebp-4h]
  int v29; // [esp+48h] [ebp+10h]
  char *v30; // [esp+4Ch] [ebp+14h]
  void *v31; // [esp+4Ch] [ebp+14h]

  v27[6] = v26;
  result = (int)a5;
  v7 = a5[1];
  v27[0] = *a5;
  v27[2] = a5[2];
  v8 = a5[4];
  v27[1] = v7;
  v9 = a5[3];
  v27[4] = v8;
  v10 = this[1];
  v27[3] = v9;
  v27[5] = a5[5];
  if ( v10 )
  {
    result = 715827883 * (this[3] - v10);
    v11 = (this[3] - v10) / 24;
  }
  else
  {
    v11 = 0;
  }
  if ( a4 )
  {
    if ( v10 )
      v12 = (this[2] - v10) / 24;
    else
      v12 = 0;
    if ( 178956970 - v12 < a4 )
      sub_1000E2D7(v26[0], v26[1]);
    if ( v10 )
      v13 = (this[2] - v10) / 24;
    else
      v13 = 0;
    if ( v11 >= a4 + v13 )
    {
      v21 = this[2];
      v31 = (void *)v21;
      if ( (v21 - a3) / 24 >= a4 )
      {
        v22 = 24 * a4;
        v29 = v21 - 24 * a4;
        this[2] = sub_1000B843(v21 - v22, v21, v21);
        sub_1000CD56(a3, v29, (int)v31);
        return sub_1000AD6C(a3, a3 + v22, (int)v27);
      }
      else
      {
        sub_1000B843(a3, v21, a3 + 24 * a4);
        v25 = a4 - (this[2] - a3) / 24;
        v24 = this[2];
        v28 = 2;
        sub_10009CFA(v24, v25, (int)v27);
        this[2] += 24 * a4;
        return sub_1000AD6C(a3, this[2] - 24 * a4, (int)v27);
      }
    }
    else
    {
      if ( 178956970 - (v11 >> 1) >= v11 )
        v14 = (v11 >> 1) + v11;
      else
        v14 = 0;
      if ( v10 )
        v15 = (this[2] - v10) / 24;
      else
        v15 = 0;
      if ( v14 < a4 + v15 )
        v14 = a4 + sub_10018291();
      v30 = (char *)sub_10008981(v14);
      v23 = this[1];
      v28 = 0;
      v16 = sub_1000BDC5(v23, a3, (int)v30);
      v17 = sub_10009CFA(v16, a4, (int)v27);
      sub_1000BDC5(a3, this[2], v17);
      v18 = this[1];
      if ( v18 )
        v19 = (this[2] - v18) / 24;
      else
        v19 = 0;
      v20 = v19 + a4;
      if ( v18 )
        operator delete((void *)this[1]);
      result = (int)v30;
      this[3] = (int)&v30[24 * v14];
      this[2] = (int)&v30[24 * v20];
      this[1] = (int)v30;
    }
  }
  return result;
}
