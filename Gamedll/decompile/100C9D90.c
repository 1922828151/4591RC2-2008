/*
 * func-name: sub_100C9D90
 * func-address: 0x100c9d90
 * callers: 0x100091a1
 * callees: 0x10006ef1, 0x1000a0f1, 0x1000a641, 0x1000cac2, 0x1000f227, 0x1000ffc4, 0x1001284b, 0x10018bd3, 0x102c9d50, 0x102c9d86
 */

void __thiscall sub_100C9D90(int *this, int a2, int a3, unsigned int a4, void *a5)
{
  int v6; // ecx
  unsigned int v7; // esi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // edi
  int v17; // ecx
  int v18; // edi
  int v19; // [esp-20h] [ebp-F0h]
  int v20; // [esp-Ch] [ebp-DCh]
  int v21; // [esp-8h] [ebp-D8h]
  int v22[4]; // [esp+0h] [ebp-D0h] BYREF
  _BYTE v23[176]; // [esp+10h] [ebp-C0h] BYREF
  int *v24; // [esp+C0h] [ebp-10h]
  int v25; // [esp+CCh] [ebp-4h]
  int v26; // [esp+E0h] [ebp+10h]
  char *v27; // [esp+E4h] [ebp+14h]
  void *v28; // [esp+E4h] [ebp+14h]

  v24 = v22;
  qmemcpy(v23, a5, sizeof(v23));
  v6 = this[1];
  if ( v6 )
    v7 = (this[3] - v6) / 176;
  else
    v7 = 0;
  if ( a4 )
  {
    if ( v6 )
      v8 = (this[2] - v6) / 176;
    else
      v8 = 0;
    if ( 24403223 - v8 < a4 )
      sub_1000A641(v22[0], v22[1]);
    if ( v6 )
      v9 = (this[2] - v6) / 176;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v17 = this[2];
      v28 = (void *)v17;
      if ( (v17 - a3) / 176 >= a4 )
      {
        v18 = 176 * a4;
        v26 = v17 - 176 * a4;
        this[2] = sub_1000F227(v17 - v18, v17, v17);
        sub_1000A0F1(a3, v26, (int)v28);
        sub_1000CAC2(a3, a3 + v18, (int)v23);
      }
      else
      {
        sub_1000F227(a3, v17, a3 + 176 * a4);
        v21 = a4 - (this[2] - a3) / 176;
        v20 = this[2];
        v25 = 2;
        sub_10018BD3(v20, v21, (int)v23);
        this[2] += 176 * a4;
        sub_1000CAC2(a3, this[2] - 176 * a4, (int)v23);
      }
    }
    else
    {
      if ( 24403223 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
        v11 = (this[2] - v6) / 176;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_1001284B();
      v27 = (char *)sub_10006EF1(v10);
      v19 = this[1];
      v25 = 0;
      v12 = sub_1000FFC4(v19, a3, (int)v27);
      v13 = sub_10018BD3(v12, a4, (int)v23);
      sub_1000FFC4(a3, this[2], v13);
      v14 = this[1];
      if ( v14 )
        v15 = (this[2] - v14) / 176;
      else
        v15 = 0;
      v16 = v15 + a4;
      if ( v14 )
        operator delete((void *)this[1]);
      this[3] = (int)&v27[176 * v10];
      this[2] = (int)&v27[176 * v16];
      this[1] = (int)v27;
    }
  }
}
