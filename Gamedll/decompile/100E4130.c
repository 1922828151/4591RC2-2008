/*
 * func-name: sub_100E4130
 * func-address: 0x100e4130
 * callers: 0x10007ee6
 * callees: 0x10002ee1, 0x10007351, 0x1000ae48, 0x1000bd61, 0x1000cca2, 0x1000d684, 0x1000e075, 0x1000f12d, 0x10011b26, 0x100154a6, 0x10019e39, 0x102c9d50, 0x102c9d62, 0x102c9d86
 */

int __thiscall sub_100E4130(int *this, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // ebx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  void *v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // ebx
  int v17; // eax
  unsigned int v18; // ecx
  void *v19; // eax
  char *v20; // ecx
  int v21; // ebx
  int v22; // eax
  int v24; // [esp-Ch] [ebp-9Ch]
  int v25; // [esp-8h] [ebp-98h]
  int v26; // [esp-8h] [ebp-98h]
  int v27; // [esp-4h] [ebp-94h]
  int v28; // [esp+0h] [ebp-90h] BYREF
  int v29; // [esp+4h] [ebp-8Ch]
  void *v30; // [esp+10h] [ebp-80h]
  int *v31; // [esp+14h] [ebp-7Ch]
  int v32; // [esp+18h] [ebp-78h]
  int v33; // [esp+1Ch] [ebp-74h]
  _BYTE v34[92]; // [esp+20h] [ebp-70h] BYREF
  int *v35; // [esp+80h] [ebp-10h]
  int v36; // [esp+8Ch] [ebp-4h]
  unsigned int v37; // [esp+A0h] [ebp+10h]

  v35 = &v28;
  v31 = this;
  sub_1000E075(a5);
  v6 = this[1];
  v7 = 0;
  v36 = 0;
  if ( v6 )
    v7 = (this[3] - v6) / 92;
  if ( a4 )
  {
    if ( v6 )
      v8 = (this[2] - v6) / 92;
    else
      v8 = 0;
    if ( 46684427 - v8 < a4 )
      sub_1000F12D(v28, v29);
    if ( v6 )
      v9 = (this[2] - v6) / 92;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v21 = this[2];
      if ( (v21 - a3) / 92 >= a4 )
      {
        v27 = this[2];
        v32 = v21 - 92 * a4;
        v33 = 92 * a4;
        this[2] = sub_10007351(v32, v21, v27);
        sub_10011B26(a3, v32, v21);
        sub_10019E39(a3, v33 + a3, (int)v34);
      }
      else
      {
        v33 = 92 * a4;
        sub_10007351(a3, v21, a3 + 92 * a4);
        v25 = a4 - (this[2] - a3) / 92;
        v24 = this[2];
        LOBYTE(v36) = 3;
        sub_1000AE48(v24, v25, (int)v34);
        v22 = v33;
        this[2] += v33;
        v26 = this[2] - v22;
        v36 = 0;
        sub_10019E39(a3, v26, (int)v34);
      }
    }
    else
    {
      if ( 46684427 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
        v11 = (this[2] - v6) / 92;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_1000CCA2();
      v12 = (void *)sub_1000D684(v10);
      v13 = this[1];
      LOBYTE(v32) = 0;
      v30 = v12;
      v33 = (int)v12;
      LOBYTE(v36) = 1;
      v33 = sub_100154A6(v13, a3, (int)v12);
      v14 = sub_1000AE48(v33, a4, (int)v34);
      v15 = this[2];
      LOBYTE(v32) = 0;
      v33 = v14;
      sub_100154A6(a3, v15, v14);
      v16 = this[1];
      v17 = 0;
      v36 = 0;
      if ( v16 )
        v17 = (this[2] - v16) / 92;
      v18 = v17 + a4;
      v37 = v17 + a4;
      if ( v16 )
      {
        sub_1000BD61(v16, this[2]);
        operator delete((void *)this[1]);
        v18 = v37;
      }
      v19 = v30;
      v20 = (char *)v30 + 92 * v18;
      this[3] = (int)v30 + 92 * v10;
      this[2] = (int)v20;
      this[1] = (int)v19;
    }
  }
  v36 = -1;
  return sub_10002EE1(v28, v29);
}
