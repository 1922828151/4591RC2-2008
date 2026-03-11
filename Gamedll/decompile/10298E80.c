/*
 * func-name: sub_10298E80
 * func-address: 0x10298e80
 * callers: 0x10015a28
 * callees: 0x10002bd5, 0x10002eff, 0x10003517, 0x1000464c, 0x1000785b, 0x100082b0, 0x1000e48a, 0x1000f8e9, 0x1000fd3f, 0x10012c83, 0x100146c8, 0x10015fc3, 0x102c9d50, 0x102c9d62, 0x102c9d86
 */

int __thiscall sub_10298E80(int *this, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  void *v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  void *v17; // ebx
  int v18; // eax
  unsigned int v19; // ecx
  void *v20; // eax
  char *v21; // ecx
  int v22; // ebx
  int v23; // eax
  int v25; // [esp-Ch] [ebp-8Ch]
  int v26; // [esp-8h] [ebp-88h]
  int v27; // [esp-8h] [ebp-88h]
  int v28; // [esp-4h] [ebp-84h]
  int v29; // [esp+0h] [ebp-80h] BYREF
  int v30; // [esp+4h] [ebp-7Ch]
  void *v31; // [esp+10h] [ebp-70h]
  int *v32; // [esp+14h] [ebp-6Ch]
  int v33; // [esp+18h] [ebp-68h]
  int v34; // [esp+1Ch] [ebp-64h]
  _BYTE v35[76]; // [esp+20h] [ebp-60h] BYREF
  int *v36; // [esp+70h] [ebp-10h]
  int v37; // [esp+7Ch] [ebp-4h]
  unsigned int v38; // [esp+90h] [ebp+10h]

  v36 = &v29;
  v32 = this;
  sub_1000FD3F(a5);
  v6 = this[1];
  v7 = 0;
  v37 = 0;
  if ( v6 )
    v7 = (this[3] - v6) / 76;
  v8 = a4;
  if ( a4 )
  {
    if ( v6 )
      v9 = (this[2] - v6) / 76;
    else
      v9 = 0;
    if ( 56512727 - v9 < a4 )
      sub_10003517(v29, v30);
    if ( v6 )
      v10 = (this[2] - v6) / 76;
    else
      v10 = 0;
    if ( v7 >= v8 + v10 )
    {
      v22 = this[2];
      if ( (v22 - a3) / 76 >= v8 )
      {
        v28 = this[2];
        v34 = v22 - 76 * v8;
        v33 = 76 * v8;
        this[2] = sub_100082B0(v34, v22, v28);
        sub_100146C8(a3, v34, v22);
        sub_1000E48A(a3, v33 + a3, (int)v35);
      }
      else
      {
        v33 = 76 * v8;
        sub_100082B0(a3, v22, a3 + 76 * v8);
        v26 = a4 - (this[2] - a3) / 76;
        v25 = this[2];
        LOBYTE(v37) = 3;
        sub_10002BD5(v25, v26, (int)v35);
        v23 = v33;
        this[2] += v33;
        v27 = this[2] - v23;
        v37 = 0;
        sub_1000E48A(a3, v27, (int)v35);
      }
    }
    else
    {
      if ( 56512727 - (v7 >> 1) >= v7 )
        v11 = (v7 >> 1) + v7;
      else
        v11 = 0;
      if ( v6 )
        v12 = (this[2] - v6) / 76;
      else
        v12 = 0;
      if ( v11 < v8 + v12 )
        v11 = a4 + sub_1000F8E9();
      v13 = (void *)sub_10012C83(v11);
      v14 = this[1];
      LOBYTE(v34) = 0;
      v31 = v13;
      v33 = (int)v13;
      LOBYTE(v37) = 1;
      v33 = sub_10015FC3(v14, a3, (int)v13);
      v15 = sub_10002BD5(v33, a4, (int)v35);
      v16 = this[2];
      LOBYTE(v34) = 0;
      v33 = v15;
      sub_10015FC3(a3, v16, v15);
      v17 = (void *)this[1];
      v18 = 0;
      v37 = 0;
      if ( v17 )
        v18 = (this[2] - (int)v17) / 76;
      v19 = v18 + a4;
      v38 = v18 + a4;
      if ( v17 )
      {
        sub_10002EFF(v17, this[2]);
        operator delete((void *)this[1]);
        v19 = v38;
      }
      v20 = v31;
      v21 = (char *)v31 + 76 * v19;
      this[3] = (int)v31 + 76 * v11;
      this[2] = (int)v21;
      this[1] = (int)v20;
    }
  }
  v37 = -1;
  return sub_1000464C(v29, v30);
}
