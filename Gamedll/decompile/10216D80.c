/*
 * func-name: sub_10216D80
 * func-address: 0x10216d80
 * callers: 0x100109ec
 * callees: 0x1000186b, 0x10009fac, 0x1000ba69, 0x1000f682, 0x1000f6af, 0x1000fb14, 0x10011964, 0x10011e37, 0x1001503c, 0x100169a0, 0x100173eb, 0x1001a0a5, 0x102c9d50, 0x102c9d62, 0x102c9d86
 */

int __thiscall sub_10216D80(int *this, int a2, int a3, unsigned int a4, int a5)
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
  int v17; // ebx
  int v18; // eax
  unsigned int v19; // ecx
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
  int v33; // [esp+18h] [ebp-70h]
  int v34; // [esp+1Ch] [ebp-6Ch]
  _BYTE v35[84]; // [esp+20h] [ebp-68h] BYREF
  int *v36; // [esp+78h] [ebp-10h]
  int v37; // [esp+84h] [ebp-4h]
  unsigned int v38; // [esp+98h] [ebp+10h]

  v36 = &v29;
  v32 = this;
  sub_10011E37(a5);
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
      sub_10011964(v29, v30);
    if ( v6 )
      v10 = (this[2] - v6) / 84;
    else
      v10 = 0;
    if ( v7 >= v8 + v10 )
    {
      v22 = this[2];
      if ( (v22 - a3) / 84 >= v8 )
      {
        v28 = this[2];
        v34 = v22 - 84 * v8;
        v33 = 84 * v8;
        this[2] = sub_1001A0A5(v34, v22, v28);
        sub_100173EB(a3, v34, v22);
        sub_1000F6AF(a3, v33 + a3, (int)v35);
      }
      else
      {
        v33 = 84 * v8;
        sub_1001A0A5(a3, v22, a3 + 84 * v8);
        v26 = a4 - (this[2] - a3) / 84;
        v25 = this[2];
        LOBYTE(v37) = 3;
        sub_1000FB14(v25, v26, (int)v35);
        v23 = v33;
        this[2] += v33;
        v27 = this[2] - v23;
        v37 = 0;
        sub_1000F6AF(a3, v27, (int)v35);
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
        v11 = a4 + sub_1000F682();
      v13 = (void *)sub_10009FAC(v11);
      v14 = this[1];
      LOBYTE(v34) = 0;
      v31 = v13;
      v33 = (int)v13;
      LOBYTE(v37) = 1;
      v33 = sub_100169A0(v14, a3, (int)v13);
      v15 = sub_1000FB14(v33, a4, (int)v35);
      v16 = this[2];
      LOBYTE(v34) = 0;
      v33 = v15;
      sub_100169A0(a3, v16, v15);
      v17 = this[1];
      v18 = 0;
      v37 = 0;
      if ( v17 )
        v18 = (this[2] - v17) / 84;
      v19 = v18 + a4;
      v38 = v18 + a4;
      if ( v17 )
      {
        sub_1001503C(v17, this[2]);
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
  return sub_1000186B(v29, v30);
}
