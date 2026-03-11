/*
 * func-name: sub_1007D6B0
 * func-address: 0x1007d6b0
 * callers: 0x10016b3f
 * callees: 0x1000660e, 0x10009e3a, 0x1000abe6, 0x1000c86f, 0x100142e5, 0x10015889, 0x1001676b, 0x1001a050, 0x102c9d50, 0x102c9d86
 */

void __thiscall sub_1007D6B0(int *this, int a2, int a3, unsigned int a4, void *a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // esi
  int v17; // ecx
  int v18; // esi
  int v19; // [esp-20h] [ebp-70h]
  int v20; // [esp-Ch] [ebp-5Ch]
  int v21; // [esp-8h] [ebp-58h]
  int v22[4]; // [esp+0h] [ebp-50h] BYREF
  _BYTE v23[48]; // [esp+10h] [ebp-40h] BYREF
  int *v24; // [esp+40h] [ebp-10h]
  int v25; // [esp+4Ch] [ebp-4h]
  int v26; // [esp+60h] [ebp+10h]
  char *v27; // [esp+64h] [ebp+14h]
  void *v28; // [esp+64h] [ebp+14h]

  v24 = v22;
  qmemcpy(v23, a5, sizeof(v23));
  v6 = this[1];
  if ( v6 )
    v7 = (this[3] - v6) / 48;
  else
    v7 = 0;
  if ( a4 )
  {
    if ( v6 )
      v8 = (this[2] - v6) / 48;
    else
      v8 = 0;
    if ( 89478485 - v8 < a4 )
      sub_1001676B(v22[0], v22[1]);
    if ( v6 )
      v9 = (this[2] - v6) / 48;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v17 = this[2];
      v28 = (void *)v17;
      if ( (v17 - a3) / 48 >= a4 )
      {
        v18 = 48 * a4;
        v26 = v17 - 48 * a4;
        this[2] = sub_10015889(v17 - v18, v17, v17);
        sub_100142E5(a3, v26, (int)v28);
        sub_1001A050(a3, a3 + v18, (int)v23);
      }
      else
      {
        sub_10015889(a3, v17, a3 + 48 * a4);
        v21 = a4 - (this[2] - a3) / 48;
        v20 = this[2];
        v25 = 2;
        sub_1000ABE6(v20, v21, (int)v23);
        this[2] += 48 * a4;
        sub_1001A050(a3, this[2] - 48 * a4, (int)v23);
      }
    }
    else
    {
      if ( 89478485 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
        v11 = (this[2] - v6) / 48;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_10009E3A();
      v27 = (char *)sub_1000660E(v10);
      v19 = this[1];
      v25 = 0;
      v12 = sub_1000C86F(v19, a3, (int)v27);
      v13 = sub_1000ABE6(v12, a4, (int)v23);
      sub_1000C86F(a3, this[2], v13);
      v14 = this[1];
      if ( v14 )
        v15 = (this[2] - v14) / 48;
      else
        v15 = 0;
      v16 = v15 + a4;
      if ( v14 )
        operator delete((void *)this[1]);
      this[3] = (int)&v27[48 * v10];
      this[2] = (int)&v27[48 * v16];
      this[1] = (int)v27;
    }
  }
}
