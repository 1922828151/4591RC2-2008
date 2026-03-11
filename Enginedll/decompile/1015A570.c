/*
 * func-name: sub_1015A570
 * func-address: 0x1015a570
 * callers: 0x1015aa40
 * callees: 0x10159220, 0x10159280, 0x101592a0, 0x10159320, 0x10159390, 0x10159f60, 0x1015a150, 0x1015a1e0, 0x1015a210, 0x1015a310, 0x1015a340, 0x1015a360, 0x101a2500, 0x101a2522
 */

int __thiscall sub_1015A570(_DWORD *this, int a2, int a3, unsigned int a4, int a5)
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
  char v27[88]; // [esp+Ch] [ebp-70h] BYREF
  _DWORD *v28; // [esp+64h] [ebp-18h]
  void *v29; // [esp+68h] [ebp-14h]
  int *v30; // [esp+6Ch] [ebp-10h]
  int v31; // [esp+78h] [ebp-4h]
  unsigned int v32; // [esp+8Ch] [ebp+10h]

  v30 = &v26;
  v28 = this;
  sub_10159320(v27, a5);
  v6 = this[1];
  v7 = 0;
  v31 = 0;
  if ( v6 )
    v7 = (this[3] - v6) / 84;
  if ( a4 )
  {
    if ( v6 )
      v8 = (this[2] - v6) / 84;
    else
      v8 = 0;
    if ( 51130563 - v8 < a4 )
      sub_101592A0();
    if ( v6 )
      v9 = (this[2] - v6) / 84;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v21 = this[2];
      if ( (v21 - a3) / 84 >= a4 )
      {
        this[2] = sub_1015A310(v21 - 84 * a4, v21, (CREControl *)this[2]);
        sub_1015A1E0(a3, v21 - 84 * a4, v21);
        sub_10159F60(a3, 84 * a4 + a3, (int)v27);
      }
      else
      {
        sub_1015A310(a3, v21, (CREControl *)(a3 + 84 * a4));
        v24 = a4 - (this[2] - a3) / 84;
        v23 = (CREControl *)this[2];
        LOBYTE(v31) = 3;
        sub_1015A360(v23, v24, (int)v27);
        this[2] += 84 * a4;
        v25 = this[2] - 84 * a4;
        v31 = 0;
        sub_10159F60(a3, v25, (int)v27);
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
      v12 = sub_10159390(v10);
      v13 = this[1];
      v27[84] = 0;
      v29 = v12;
      LOBYTE(v31) = 1;
      v14 = sub_1015A150(v13, a3, (CREControl *)v12);
      v15 = sub_1015A360(v14, a4, (int)v27);
      sub_1015A150(a3, this[2], (CREControl *)v15);
      v16 = this[1];
      v17 = 0;
      v31 = 0;
      if ( v16 )
        v17 = (this[2] - v16) / 84;
      v18 = v17 + a4;
      v32 = v17 + a4;
      if ( v16 )
      {
        sub_1015A210(v16, this[2]);
        operator delete((void *)this[1]);
        v18 = v32;
      }
      v19 = v29;
      v20 = (char *)v29 + 84 * v18;
      this[3] = (char *)v29 + 84 * v10;
      this[2] = v20;
      this[1] = v19;
    }
  }
  v31 = -1;
  return sub_10159220(v27);
}
