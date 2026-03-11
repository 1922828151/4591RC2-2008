/*
 * func-name: sub_100C9030
 * func-address: 0x100c9030
 * callers: 0x100170f8
 * callees: 0x10002ee6, 0x10005501, 0x1000b785, 0x1000fa42, 0x10010046, 0x100107e4, 0x100172b5, 0x10019bff, 0x102c9d50, 0x102c9d86
 */

void __thiscall sub_100C9030(int *this, int a2, int a3, unsigned int a4, void *a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // esi
  int v17; // ecx
  int v18; // eax
  int v19; // esi
  int v20; // [esp-20h] [ebp-78h]
  int v21; // [esp-Ch] [ebp-64h]
  int v22; // [esp-8h] [ebp-60h]
  int v23[4]; // [esp+0h] [ebp-58h] BYREF
  _BYTE v24[56]; // [esp+10h] [ebp-48h] BYREF
  int *v25; // [esp+48h] [ebp-10h]
  int v26; // [esp+54h] [ebp-4h]
  int v27; // [esp+68h] [ebp+10h]
  char *v28; // [esp+6Ch] [ebp+14h]
  void *v29; // [esp+6Ch] [ebp+14h]

  v25 = v23;
  qmemcpy(v24, a5, sizeof(v24));
  v6 = this[1];
  if ( v6 )
    v7 = (this[3] - v6) / 56;
  else
    v7 = 0;
  if ( a4 )
  {
    if ( v6 )
      v9 = (this[2] - this[1]) / 56;
    else
      v9 = 0;
    if ( 76695844 - v9 < a4 )
      sub_1000B785(v23[0], v23[1]);
    if ( this[1] )
      v10 = (this[2] - this[1]) / 56;
    else
      v10 = 0;
    if ( v7 >= a4 + v10 )
    {
      v17 = this[2];
      v27 = v17;
      if ( (v17 - a3) / 56 >= a4 )
      {
        v18 = 56 * a4;
        v19 = v17 - 56 * a4;
        v29 = (void *)v18;
        this[2] = sub_100107E4(v17 - v18, v17, v17);
        sub_100172B5(a3, v19, v27);
        sub_10002EE6(a3, (int)v29 + a3, (int)v24);
      }
      else
      {
        sub_100107E4(a3, v17, a3 + 56 * a4);
        v22 = a4 - (this[2] - a3) / 56;
        v21 = this[2];
        v26 = 2;
        sub_10010046(v21, v22, (int)v24);
        this[2] += 56 * a4;
        sub_10002EE6(a3, this[2] - 56 * a4, (int)v24);
      }
    }
    else
    {
      if ( 76695844 - (v7 >> 1) >= v7 )
        v11 = (v7 >> 1) + v7;
      else
        v11 = 0;
      if ( this[1] )
        v12 = (this[2] - this[1]) / 56;
      else
        v12 = 0;
      if ( v11 < a4 + v12 )
        v11 = a4 + sub_10019BFF();
      v28 = (char *)sub_10005501(v11);
      v20 = this[1];
      v26 = 0;
      v13 = sub_1000FA42(v20, a3, (int)v28);
      v14 = sub_10010046(v13, a4, (int)v24);
      sub_1000FA42(a3, this[2], v14);
      v15 = this[1];
      if ( v15 )
        v15 = (this[2] - v15) / 56;
      v16 = v15 + a4;
      if ( this[1] )
        operator delete((void *)this[1]);
      this[3] = (int)&v28[56 * v11];
      this[2] = (int)&v28[56 * v16];
      this[1] = (int)v28;
    }
  }
}
