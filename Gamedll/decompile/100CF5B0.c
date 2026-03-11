/*
 * func-name: sub_100CF5B0
 * func-address: 0x100cf5b0
 * callers: 0x10009f39
 * callees: 0x10001cf8, 0x10003490, 0x10005fec, 0x10006ae1, 0x1000962e, 0x1000a33a, 0x100125fd, 0x102c9d50, 0x102c9d86
 */

void __thiscall sub_100CF5B0(int *this, int a2, int a3, unsigned int a4, void *a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // esi
  int v19; // eax
  int v20; // ecx
  int v21; // esi
  int v22; // [esp-20h] [ebp-80h]
  int v23; // [esp-Ch] [ebp-6Ch]
  int v24; // [esp-8h] [ebp-68h]
  int v25[4]; // [esp+0h] [ebp-60h] BYREF
  _BYTE v26[64]; // [esp+10h] [ebp-50h] BYREF
  int *v27; // [esp+50h] [ebp-10h]
  int v28; // [esp+5Ch] [ebp-4h]
  int v29; // [esp+70h] [ebp+10h]
  char *v30; // [esp+74h] [ebp+14h]
  void *v31; // [esp+74h] [ebp+14h]

  v27 = v25;
  qmemcpy(v26, a5, sizeof(v26));
  v6 = this[1];
  if ( v6 )
    v7 = (this[3] - v6) >> 6;
  else
    v7 = 0;
  if ( a4 )
  {
    if ( v6 )
      v9 = (this[2] - v6) >> 6;
    else
      v9 = 0;
    if ( 0x3FFFFFF - v9 < a4 )
      sub_1000962E(v25[0], v25[1]);
    if ( v6 )
      v10 = (this[2] - v6) >> 6;
    else
      v10 = 0;
    if ( v7 >= a4 + v10 )
    {
      v19 = this[2];
      v29 = v19;
      if ( (v19 - a3) >> 6 >= a4 )
      {
        v20 = a4 << 6;
        v21 = v19 - (a4 << 6);
        v31 = (void *)v20;
        this[2] = sub_1000A33A(v21, v19, v19);
        sub_100125FD(a3, v21, v29);
        sub_10006AE1(a3, (int)v31 + a3, (int)v26);
      }
      else
      {
        sub_1000A33A(a3, v19, a3 + (a4 << 6));
        v24 = a4 - ((this[2] - a3) >> 6);
        v23 = this[2];
        v28 = 2;
        sub_10005FEC(v23, v24, (int)v26);
        this[2] += a4 << 6;
        sub_10006AE1(a3, this[2] - (a4 << 6), (int)v26);
      }
    }
    else
    {
      if ( 0x3FFFFFF - (v7 >> 1) >= v7 )
        v11 = (v7 >> 1) + v7;
      else
        v11 = 0;
      if ( v6 )
        v12 = (this[2] - v6) >> 6;
      else
        v12 = 0;
      if ( v11 < a4 + v12 )
      {
        if ( v6 )
          v13 = (this[2] - v6) >> 6;
        else
          v13 = 0;
        v11 = a4 + v13;
      }
      v30 = (char *)sub_10001CF8(v11);
      v22 = this[1];
      v28 = 0;
      v14 = sub_10003490(v22, a3, (int)v30);
      v15 = sub_10005FEC(v14, a4, (int)v26);
      sub_10003490(a3, this[2], v15);
      v16 = this[1];
      if ( v16 )
        v17 = (this[2] - v16) >> 6;
      else
        v17 = 0;
      v18 = v17 + a4;
      if ( v16 )
        operator delete((void *)this[1]);
      this[3] = (int)&v30[64 * v11];
      this[2] = (int)&v30[64 * v18];
      this[1] = (int)v30;
    }
  }
}
