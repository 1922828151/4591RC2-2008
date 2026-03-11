/*
 * func-name: sub_100F2460
 * func-address: 0x100f2460
 * callers: 0x100172f6
 * callees: 0x10002630, 0x10002923, 0x100057f9, 0x100083a5, 0x10008837, 0x1000947b, 0x10009854, 0x1000b767, 0x1000bfe6, 0x10013877, 0x1001666c, 0x102c9d50, 0x102c9d62, 0x102c9d86
 */

int __thiscall sub_100F2460(int *this, int a2, void *a3, unsigned int a4, void *a5)
{
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // ebx
  int v9; // ecx
  unsigned int v10; // ebx
  int v11; // ecx
  int v12; // ebx
  void *v13; // eax
  void *v14; // ecx
  int v15; // eax
  int v16; // ecx
  void *v17; // ecx
  int v18; // eax
  unsigned int v19; // edi
  void *v20; // eax
  char *v21; // edi
  int v22; // eax
  int v23; // eax
  void *v24; // edi
  int v26; // [esp-Ch] [ebp-80h]
  int v27; // [esp-8h] [ebp-7Ch]
  int v28; // [esp-8h] [ebp-7Ch]
  int v29; // [esp+0h] [ebp-74h] BYREF
  int v30; // [esp+4h] [ebp-70h]
  void *v31; // [esp+10h] [ebp-64h]
  int *v32; // [esp+14h] [ebp-60h]
  int v33; // [esp+18h] [ebp-5Ch]
  int v34; // [esp+1Ch] [ebp-58h]
  _BYTE v35[64]; // [esp+20h] [ebp-54h] BYREF
  int *v36; // [esp+64h] [ebp-10h]
  int v37; // [esp+70h] [ebp-4h]

  v36 = &v29;
  v32 = this;
  sub_1000BFE6(a5);
  v6 = this[1];
  v7 = 0;
  v37 = 0;
  if ( v6 )
    v8 = (this[3] - v6) >> 6;
  else
    v8 = 0;
  if ( a4 )
  {
    if ( v6 )
      v7 = (this[2] - v6) >> 6;
    if ( 0x3FFFFFF - v7 < a4 )
      v6 = sub_10008837(v29, v30);
    if ( v6 )
      v9 = (this[2] - v6) >> 6;
    else
      v9 = 0;
    if ( v8 >= a4 + v9 )
    {
      v22 = this[2];
      v34 = v22;
      if ( (v22 - (int)a3) >> 6 >= a4 )
      {
        v24 = (void *)(v22 - (a4 << 6));
        v33 = a4 << 6;
        this[2] = sub_10002923(v24, v22, v22);
        sub_10002630((int)a3, (int)v24, v34);
        sub_10013877((int)a3, (int)a3 + v33, (int)v35);
      }
      else
      {
        v33 = a4 << 6;
        sub_10002923(a3, v22, (int)a3 + 64 * a4);
        v27 = a4 - ((this[2] - (int)a3) >> 6);
        v26 = this[2];
        LOBYTE(v37) = 3;
        sub_100083A5(v26, v27, v35);
        v23 = v33;
        this[2] += v33;
        v28 = this[2] - v23;
        v37 = 0;
        sub_10013877((int)a3, v28, (int)v35);
      }
    }
    else
    {
      if ( 0x3FFFFFF - (v8 >> 1) >= v8 )
        v10 = (v8 >> 1) + v8;
      else
        v10 = 0;
      if ( v6 )
        v11 = (this[2] - v6) >> 6;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
      {
        if ( v6 )
          v12 = (this[2] - v6) >> 6;
        else
          v12 = 0;
        v10 = a4 + v12;
      }
      v13 = (void *)sub_100057F9(v10);
      v14 = (void *)this[1];
      LOBYTE(v34) = 0;
      v31 = v13;
      v33 = (int)v13;
      LOBYTE(v37) = 1;
      v33 = sub_1000947B(v14, (int)a3, (int)v13);
      v15 = sub_100083A5(v33, a4, v35);
      v16 = this[2];
      LOBYTE(v34) = 0;
      v33 = v15;
      sub_1000947B(a3, v16, v15);
      v17 = (void *)this[1];
      v37 = 0;
      if ( v17 )
        v18 = (this[2] - (int)v17) >> 6;
      else
        v18 = 0;
      v19 = v18 + a4;
      if ( v17 )
      {
        sub_1001666C(v17, this[2]);
        operator delete((void *)this[1]);
      }
      v20 = v31;
      v21 = (char *)v31 + 64 * v19;
      this[3] = (int)v31 + 64 * v10;
      this[2] = (int)v21;
      this[1] = (int)v20;
    }
  }
  v37 = -1;
  return sub_1000B767(v29, v30);
}
