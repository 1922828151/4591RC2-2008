/*
 * func-name: sub_10014BF0
 * func-address: 0x10014bf0
 * callers: 0x10014f80
 * callees: 0x1000a660, 0x100112c0, 0x100127c0, 0x10012900, 0x10013520, 0x10013780, 0x10013930, 0x10013eb0, 0x10013ed0, 0x10013f10, 0x10159280, 0x10159390, 0x101a2500, 0x101a2522
 */

int __thiscall sub_10014BF0(int *this, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // ebx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  void *v12; // eax
  int v13; // ecx
  CREControl *v14; // eax
  char *v15; // eax
  int v16; // ebx
  int v17; // eax
  unsigned int v18; // ecx
  void *v19; // eax
  char *v20; // ecx
  int v21; // ebx
  CREControl *v23; // [esp-Ch] [ebp-88h]
  int v24; // [esp-8h] [ebp-84h]
  int v25; // [esp-8h] [ebp-84h]
  int v26; // [esp+0h] [ebp-7Ch] BYREF
  int v27[21]; // [esp+Ch] [ebp-70h] BYREF
  int v28; // [esp+60h] [ebp-1Ch]
  int *v29; // [esp+64h] [ebp-18h]
  void *v30; // [esp+68h] [ebp-14h]
  int *v31; // [esp+6Ch] [ebp-10h]
  int v32; // [esp+78h] [ebp-4h]
  unsigned int v33; // [esp+8Ch] [ebp+10h]

  v31 = &v26;
  v29 = this;
  sub_100127C0((int)v27, a5);
  v6 = this[1];
  v7 = 0;
  v32 = 0;
  if ( v6 )
    v7 = (this[3] - v6) / 84;
  if ( a4 )
  {
    if ( v6 )
      v8 = (this[2] - v6) / 84;
    else
      v8 = 0;
    if ( 51130563 - v8 < a4 )
      sub_1000A660();
    if ( v6 )
      v9 = (this[2] - v6) / 84;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v21 = this[2];
      if ( (v21 - a3) / 84 >= a4 )
      {
        this[2] = (int)sub_10013F10(v21 - 84 * a4, v21, (CREControl *)this[2]);
        sub_10013930(a3, v21 - 84 * a4, v21);
        sub_10012900(a3, 84 * a4 + a3, (int)v27);
      }
      else
      {
        sub_10013F10(a3, v21, (CREControl *)(a3 + 84 * a4));
        v24 = a4 - (this[2] - a3) / 84;
        v23 = (CREControl *)this[2];
        LOBYTE(v32) = 3;
        sub_10013ED0(v23, v24, (int)v27);
        this[2] += 84 * a4;
        v25 = this[2] - 84 * a4;
        v32 = 0;
        sub_10012900(a3, v25, (int)v27);
      }
    }
    else
    {
      if ( 51130563 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
        v11 = (this[2] - v6) / 84;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_10159280(this);
      v12 = (void *)sub_10159390(v10);
      v13 = this[1];
      LOBYTE(v28) = 0;
      v30 = v12;
      LOBYTE(v32) = 1;
      v14 = sub_10013520(v13, a3, (CREControl *)v12);
      v15 = sub_10013ED0(v14, a4, (int)v27);
      sub_10013520(a3, this[2], (CREControl *)v15);
      v16 = this[1];
      v17 = 0;
      v32 = 0;
      if ( v16 )
        v17 = (this[2] - v16) / 84;
      v18 = v17 + a4;
      v33 = v17 + a4;
      if ( v16 )
      {
        sub_10013780(v16, this[2]);
        operator delete((void *)this[1]);
        v18 = v33;
      }
      v19 = v30;
      v20 = (char *)v30 + 84 * v18;
      this[3] = (int)v30 + 84 * v10;
      this[2] = (int)v20;
      this[1] = (int)v19;
    }
  }
  v32 = -1;
  return sub_100112C0(v27);
}
