/*
 * func-name: sub_101F5960
 * func-address: 0x101f5960
 * callers: 0x10016c61
 * callees: 0x10005ea7, 0x100066bd, 0x10008fc1, 0x1000c1d5, 0x1000d0a3, 0x1000d6a2, 0x1000d9f4, 0x10014038, 0x10015483, 0x10015b27, 0x1001721a, 0x1001aa55, 0x102c9d50, 0x102c9d62, 0x102c9d86
 */

int __thiscall sub_101F5960(int *this, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  void *v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // edi
  int v16; // eax
  unsigned int v17; // ebx
  char *v18; // eax
  char *v19; // ecx
  int v20; // eax
  int v21; // ebx
  int v23; // [esp-Ch] [ebp-80h]
  int v24; // [esp-8h] [ebp-7Ch]
  int v25; // [esp-8h] [ebp-7Ch]
  int v26; // [esp+0h] [ebp-74h] BYREF
  int v27; // [esp+4h] [ebp-70h]
  int *v28; // [esp+10h] [ebp-64h]
  void *v29; // [esp+14h] [ebp-60h]
  int v30; // [esp+18h] [ebp-5Ch]
  unsigned int v31; // [esp+1Ch] [ebp-58h]
  char *v32; // [esp+20h] [ebp-54h]
  _BYTE v33[60]; // [esp+24h] [ebp-50h] BYREF
  int *v34; // [esp+64h] [ebp-10h]
  int v35; // [esp+70h] [ebp-4h]

  v34 = &v26;
  v28 = this;
  sub_1001AA55(a5);
  v6 = this[1];
  v7 = 0;
  v35 = 0;
  if ( v6 )
    v7 = (this[3] - v6) / 60;
  v31 = v7;
  if ( a4 )
  {
    if ( v6 )
      v8 = (this[2] - v6) / 60;
    else
      v8 = 0;
    if ( 71582788 - v8 < a4 )
      sub_1000D9F4(v26, v27);
    if ( v6 )
      v9 = (this[2] - v6) / 60;
    else
      v9 = 0;
    if ( v31 >= a4 + v9 )
    {
      v19 = (char *)this[2];
      v32 = &v19[-a3];
      v29 = v19;
      if ( (int)&v19[-a3] / 60 >= a4 )
      {
        v21 = (int)&v19[-60 * a4];
        v30 = 60 * a4;
        this[2] = sub_10015B27(v21, (int)v19, (int)v19);
        sub_1000C1D5(a3, v21, (int)v29);
        sub_1000D6A2(a3, v30 + a3, (int)v33);
      }
      else
      {
        v30 = 60 * a4;
        sub_10015B27(a3, (int)v19, a3 + 60 * a4);
        v24 = a4 - (this[2] - a3) / 60;
        v23 = this[2];
        LOBYTE(v35) = 3;
        sub_100066BD(v23, v24, (int)v33);
        v20 = v30;
        this[2] += v30;
        v25 = this[2] - v20;
        v35 = 0;
        sub_1000D6A2(a3, v25, (int)v33);
      }
    }
    else
    {
      if ( 71582788 - (v31 >> 1) >= v31 )
        v31 += v31 >> 1;
      else
        v31 = 0;
      if ( v6 )
        v10 = (this[2] - v6) / 60;
      else
        v10 = 0;
      if ( v31 < a4 + v10 )
        v31 = a4 + sub_1001721A();
      v11 = (void *)sub_10015483(v31);
      v12 = this[1];
      LOBYTE(v32) = 0;
      v29 = v11;
      v30 = (int)v11;
      LOBYTE(v35) = 1;
      v30 = sub_10014038(v12, a3, (int)v11);
      v13 = sub_100066BD(v30, a4, (int)v33);
      v14 = this[2];
      LOBYTE(v32) = 0;
      v30 = v13;
      sub_10014038(a3, v14, v13);
      v15 = this[1];
      v16 = 0;
      v35 = 0;
      if ( v15 )
        v16 = (this[2] - v15) / 60;
      v17 = v16 + a4;
      if ( v15 )
      {
        sub_10008FC1(v15, this[2]);
        operator delete((void *)this[1]);
      }
      v18 = (char *)v29;
      this[3] = (int)v29 + 60 * v31;
      this[2] = (int)&v18[60 * v17];
      this[1] = (int)v18;
    }
  }
  v35 = -1;
  return sub_1000D0A3(v26, v27);
}
