/*
 * func-name: sub_102060D0
 * func-address: 0x102060d0
 * callers: 0x1000647e
 * callees: 0x1000ac77, 0x1000b0dc, 0x1000d8aa, 0x1000f312, 0x1000fb50, 0x100115f9, 0x10013f84, 0x100165ef, 0x10016cf2, 0x10018205, 0x102c9d50, 0x102c9d62, 0x102c9d86
 */

int __thiscall sub_102060D0(int *this, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // ebx
  int v9; // ecx
  unsigned int v10; // ebx
  int v11; // ecx
  int v12; // ebx
  void *v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // edi
  void *v20; // eax
  char *v21; // edi
  int v22; // eax
  int v23; // eax
  int v24; // edi
  int v26; // [esp-Ch] [ebp-3Ch]
  int v27; // [esp-8h] [ebp-38h]
  int v28; // [esp-8h] [ebp-38h]
  int v29; // [esp+0h] [ebp-30h] BYREF
  int v30; // [esp+4h] [ebp-2Ch]
  void *v31; // [esp+10h] [ebp-20h]
  int *v32; // [esp+14h] [ebp-1Ch]
  int v33; // [esp+18h] [ebp-18h]
  int v34; // [esp+1Ch] [ebp-14h]
  int *v35; // [esp+20h] [ebp-10h]
  int v36; // [esp+2Ch] [ebp-4h]
  _BYTE v37[128]; // [esp+30h] [ebp+0h] BYREF

  v35 = &v29;
  v32 = this;
  sub_100115F9(a5);
  v6 = this[1];
  v7 = 0;
  v36 = 0;
  if ( v6 )
    v8 = (this[3] - v6) >> 7;
  else
    v8 = 0;
  if ( a4 )
  {
    if ( v6 )
      v7 = (this[2] - v6) >> 7;
    if ( 0x1FFFFFF - v7 < a4 )
      v6 = sub_1000F312(v29, v30);
    if ( v6 )
      v9 = (this[2] - v6) >> 7;
    else
      v9 = 0;
    if ( v8 >= a4 + v9 )
    {
      v22 = this[2];
      v33 = v22;
      if ( (v22 - a3) >> 7 >= a4 )
      {
        v24 = v22 - (a4 << 7);
        v34 = a4 << 7;
        this[2] = sub_1000AC77(v24, v22, v22);
        sub_10013F84(a3, v24, v33);
        sub_10018205(a3, a3 + v34, (int)v37);
      }
      else
      {
        v34 = a4 << 7;
        sub_1000AC77(a3, v22, a3 + (a4 << 7));
        v27 = a4 - ((this[2] - a3) >> 7);
        v26 = this[2];
        LOBYTE(v36) = 3;
        sub_1000FB50(v26, v27, (int)v37);
        v23 = v34;
        this[2] += v34;
        v28 = this[2] - v23;
        v36 = 0;
        sub_10018205(a3, v28, (int)v37);
      }
    }
    else
    {
      if ( 0x1FFFFFF - (v8 >> 1) >= v8 )
        v10 = (v8 >> 1) + v8;
      else
        v10 = 0;
      if ( v6 )
        v11 = (this[2] - v6) >> 7;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
      {
        if ( v6 )
          v12 = (this[2] - v6) >> 7;
        else
          v12 = 0;
        v10 = a4 + v12;
      }
      v13 = (void *)sub_1000D8AA(v10);
      v14 = this[1];
      LOBYTE(v33) = 0;
      v31 = v13;
      v34 = (int)v13;
      LOBYTE(v36) = 1;
      v34 = sub_100165EF(v14, a3, (int)v13);
      v15 = sub_1000FB50(v34, a4, (int)v37);
      v16 = this[2];
      LOBYTE(v33) = 0;
      v34 = v15;
      sub_100165EF(a3, v16, v15);
      v17 = this[1];
      v36 = 0;
      if ( v17 )
        v18 = (this[2] - v17) >> 7;
      else
        v18 = 0;
      v19 = v18 + a4;
      if ( v17 )
      {
        sub_1000B0DC(v17, this[2]);
        operator delete((void *)this[1]);
      }
      v20 = v31;
      v21 = (char *)v31 + 128 * v19;
      this[3] = (int)v31 + 128 * v10;
      this[2] = (int)v21;
      this[1] = (int)v20;
    }
  }
  v36 = -1;
  return sub_10016CF2(v29, v30);
}
