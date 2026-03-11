/*
 * func-name: sub_1018A2C0
 * func-address: 0x1018a2c0
 * callers: 0x10012ef4
 * callees: 0x10003bed, 0x10006a37, 0x1000cea5, 0x1000d4fe, 0x1000e458, 0x10010271, 0x10013066, 0x10015807, 0x10018368, 0x100186f1, 0x10018dea, 0x102c9d50, 0x102c9d62, 0x102c9d86
 */

int __thiscall sub_1018A2C0(int *this, int a2, void *a3, unsigned int a4, void *a5)
{
  int v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  void *v13; // eax
  void *v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // ebx
  int v18; // eax
  int v19; // ecx
  void *v20; // eax
  char *v21; // ecx
  int v22; // ebx
  int v23; // eax
  int v25; // [esp-Ch] [ebp-94h]
  int v26; // [esp-8h] [ebp-90h]
  int v27; // [esp-8h] [ebp-90h]
  int v28; // [esp-4h] [ebp-8Ch]
  int v29; // [esp+0h] [ebp-88h] BYREF
  int v30; // [esp+4h] [ebp-84h]
  void *v31; // [esp+10h] [ebp-78h]
  int *v32; // [esp+14h] [ebp-74h]
  void *v33; // [esp+18h] [ebp-70h]
  unsigned int v34; // [esp+1Ch] [ebp-6Ch]
  _BYTE v35[84]; // [esp+20h] [ebp-68h] BYREF
  int *v36; // [esp+78h] [ebp-10h]
  int v37; // [esp+84h] [ebp-4h]
  int v38; // [esp+98h] [ebp+10h]

  v36 = &v29;
  v32 = this;
  sub_100186F1(a5);
  v6 = this[1];
  v7 = 0;
  v37 = 0;
  if ( v6 )
    v7 = (this[3] - v6) / 84;
  v8 = a4;
  if ( a4 )
  {
    if ( v6 )
      v9 = (this[2] - v6) / 84;
    else
      v9 = 0;
    if ( 51130563 - v9 < a4 )
      sub_10018368(v29, v30);
    if ( v6 )
      v10 = (this[2] - v6) / 84;
    else
      v10 = 0;
    if ( v7 >= v8 + v10 )
    {
      v22 = this[2];
      if ( (v22 - (int)a3) / 84 >= v8 )
      {
        v28 = this[2];
        v33 = (void *)(v22 - 84 * v8);
        v34 = 84 * v8;
        this[2] = sub_1000E458(v33, v22, v28);
        sub_10010271((int)a3, (int)v33, v22);
        sub_10018DEA((int)a3, (int)a3 + v34, (int)v35);
      }
      else
      {
        v34 = 84 * v8;
        sub_1000E458(a3, v22, (int)a3 + 84 * v8);
        v26 = a4 - (this[2] - (int)a3) / 84;
        v25 = this[2];
        LOBYTE(v37) = 3;
        sub_10015807(v25, v26, v35);
        v23 = v34;
        this[2] += v34;
        v27 = this[2] - v23;
        v37 = 0;
        sub_10018DEA((int)a3, v27, (int)v35);
      }
    }
    else
    {
      if ( 51130563 - (v7 >> 1) >= v7 )
        v11 = (v7 >> 1) + v7;
      else
        v11 = 0;
      if ( v6 )
        v12 = (this[2] - v6) / 84;
      else
        v12 = 0;
      if ( v11 < v8 + v12 )
        v11 = a4 + sub_10006A37();
      v13 = (void *)sub_1000D4FE(v11);
      v14 = (void *)this[1];
      LOBYTE(v33) = 0;
      v31 = v13;
      v34 = (unsigned int)v13;
      LOBYTE(v37) = 1;
      v34 = sub_10013066(v14, (int)a3, (int)v13);
      v15 = sub_10015807(v34, a4, v35);
      v16 = this[2];
      LOBYTE(v33) = 0;
      v34 = v15;
      sub_10013066(a3, v16, v15);
      v17 = this[1];
      v18 = 0;
      v37 = 0;
      if ( v17 )
        v18 = (this[2] - v17) / 84;
      v19 = v18 + a4;
      v38 = v18 + a4;
      if ( v17 )
      {
        sub_1000CEA5(v17, this[2]);
        operator delete((void *)this[1]);
        v19 = v38;
      }
      v20 = v31;
      v21 = (char *)v31 + 84 * v19;
      this[3] = (int)v31 + 84 * v11;
      this[2] = (int)v21;
      this[1] = (int)v20;
    }
  }
  v37 = -1;
  return sub_10003BED(v29, v30);
}
