/*
 * func-name: sub_100DC490
 * func-address: 0x100dc490
 * callers: 0x10007711
 * callees: 0x10001a64, 0x1000769e, 0x1000afc9, 0x1000b53c, 0x1000e930, 0x10011ced, 0x10013da9, 0x100144a7, 0x10016b58, 0x10016d1a, 0x10019dda, 0x102c9d50, 0x102c9d62, 0x102c9d86
 */

int __thiscall sub_100DC490(int *this, int a2, _BYTE *a3, unsigned int a4, void *a5)
{
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  void *v11; // eax
  void *v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // edi
  int v16; // eax
  unsigned int v17; // ebx
  char *v18; // eax
  _BYTE *v19; // ecx
  int v20; // eax
  char *v21; // ebx
  int v23; // [esp-Ch] [ebp-40h]
  int v24; // [esp-8h] [ebp-3Ch]
  int v25; // [esp-8h] [ebp-3Ch]
  int v26; // [esp+0h] [ebp-34h] BYREF
  int v27; // [esp+4h] [ebp-30h]
  int *v28; // [esp+10h] [ebp-24h]
  void *v29; // [esp+14h] [ebp-20h]
  int v30; // [esp+18h] [ebp-1Ch]
  unsigned int v31; // [esp+1Ch] [ebp-18h]
  unsigned int v32; // [esp+20h] [ebp-14h]
  int *v33; // [esp+24h] [ebp-10h]
  int v34; // [esp+30h] [ebp-4h]
  _BYTE v35[120]; // [esp+34h] [ebp+0h] BYREF

  v33 = &v26;
  v28 = this;
  sub_1000B53C(a5);
  v6 = this[1];
  v7 = 0;
  v34 = 0;
  if ( v6 )
    v7 = (this[3] - v6) / 120;
  v32 = v7;
  if ( a4 )
  {
    if ( v6 )
      v8 = (this[2] - v6) / 120;
    else
      v8 = 0;
    if ( 35791394 - v8 < a4 )
      sub_100144A7(v26, v27);
    if ( v6 )
      v9 = (this[2] - v6) / 120;
    else
      v9 = 0;
    if ( v32 >= a4 + v9 )
    {
      v19 = (_BYTE *)this[2];
      v30 = v19 - a3;
      v29 = v19;
      if ( (v19 - a3) / 120 >= a4 )
      {
        v21 = &v19[-120 * a4];
        v31 = 120 * a4;
        this[2] = sub_10001A64(v21, (int)v19, (int)v19);
        sub_1000769E((int)a3, (int)v21, (int)v29);
        sub_10016D1A((int)a3, (int)&a3[v31], (int)v35);
      }
      else
      {
        v31 = 120 * a4;
        sub_10001A64(a3, (int)v19, (int)&a3[120 * a4]);
        v24 = a4 - (this[2] - (int)a3) / 120;
        v23 = this[2];
        LOBYTE(v34) = 3;
        sub_10011CED(v23, v24, v35);
        v20 = v31;
        this[2] += v31;
        v25 = this[2] - v20;
        v34 = 0;
        sub_10016D1A((int)a3, v25, (int)v35);
      }
    }
    else
    {
      if ( 35791394 - (v32 >> 1) >= v32 )
        v32 += v32 >> 1;
      else
        v32 = 0;
      if ( v6 )
        v10 = (this[2] - v6) / 120;
      else
        v10 = 0;
      if ( v32 < a4 + v10 )
        v32 = a4 + sub_1000AFC9();
      v11 = (void *)sub_1000E930(v32);
      v12 = (void *)this[1];
      LOBYTE(v30) = 0;
      v29 = v11;
      v31 = (unsigned int)v11;
      LOBYTE(v34) = 1;
      v31 = sub_10019DDA(v12, (int)a3, (int)v11);
      v13 = sub_10011CED(v31, a4, v35);
      v14 = this[2];
      LOBYTE(v30) = 0;
      v31 = v13;
      sub_10019DDA(a3, v14, v13);
      v15 = this[1];
      v16 = 0;
      v34 = 0;
      if ( v15 )
        v16 = (this[2] - v15) / 120;
      v17 = v16 + a4;
      if ( v15 )
      {
        sub_10013DA9(v15, this[2]);
        operator delete((void *)this[1]);
      }
      v18 = (char *)v29;
      this[3] = (int)v29 + 120 * v32;
      this[2] = (int)&v18[120 * v17];
      this[1] = (int)v18;
    }
  }
  v34 = -1;
  return sub_10016B58(v26, v27);
}
