/*
 * func-name: sub_100C93C0
 * func-address: 0x100c93c0
 * callers: 0x10016716
 * callees: 0x10009ead, 0x1000a6f0, 0x1001178e, 0x10012c1f, 0x100159f1, 0x100170da, 0x100171ac, 0x10018c96, 0x102c9d50, 0x102c9d86
 */

void __thiscall sub_100C93C0(int *this, int a2, int a3, unsigned int a4, void *a5)
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
  int v20; // [esp-20h] [ebp-5Ch]
  int v21; // [esp-Ch] [ebp-48h]
  int v22; // [esp-8h] [ebp-44h]
  int v23[4]; // [esp+0h] [ebp-3Ch] BYREF
  _BYTE v24[28]; // [esp+10h] [ebp-2Ch] BYREF
  int *v25; // [esp+2Ch] [ebp-10h]
  int v26; // [esp+38h] [ebp-4h]
  int v27; // [esp+4Ch] [ebp+10h]
  char *v28; // [esp+50h] [ebp+14h]
  void *v29; // [esp+50h] [ebp+14h]

  v25 = v23;
  qmemcpy(v24, a5, sizeof(v24));
  v6 = this[1];
  if ( v6 )
    v7 = (this[3] - v6) / 28;
  else
    v7 = 0;
  if ( a4 )
  {
    if ( v6 )
      v9 = (this[2] - this[1]) / 28;
    else
      v9 = 0;
    if ( 153391689 - v9 < a4 )
      sub_1000A6F0(v23[0], v23[1]);
    if ( this[1] )
      v10 = (this[2] - this[1]) / 28;
    else
      v10 = 0;
    if ( v7 >= a4 + v10 )
    {
      v17 = this[2];
      v27 = v17;
      if ( (v17 - a3) / 28 >= a4 )
      {
        v18 = 28 * a4;
        v19 = v17 - 28 * a4;
        v29 = (void *)v18;
        this[2] = sub_10018C96(v17 - v18, v17, v17);
        sub_1001178E(a3, v19, v27);
        sub_10009EAD(a3, (int)v29 + a3, (int)v24);
      }
      else
      {
        sub_10018C96(a3, v17, a3 + 28 * a4);
        v22 = a4 - (this[2] - a3) / 28;
        v21 = this[2];
        v26 = 2;
        sub_100171AC(v21, v22, (int)v24);
        this[2] += 28 * a4;
        sub_10009EAD(a3, this[2] - 28 * a4, (int)v24);
      }
    }
    else
    {
      if ( 153391689 - (v7 >> 1) >= v7 )
        v11 = (v7 >> 1) + v7;
      else
        v11 = 0;
      if ( this[1] )
        v12 = (this[2] - this[1]) / 28;
      else
        v12 = 0;
      if ( v11 < a4 + v12 )
        v11 = a4 + sub_100170DA();
      v28 = (char *)sub_100159F1(v11);
      v20 = this[1];
      v26 = 0;
      v13 = sub_10012C1F(v20, a3, (int)v28);
      v14 = sub_100171AC(v13, a4, (int)v24);
      sub_10012C1F(a3, this[2], v14);
      v15 = this[1];
      if ( v15 )
        v15 = (this[2] - v15) / 28;
      v16 = v15 + a4;
      if ( this[1] )
        operator delete((void *)this[1]);
      this[3] = (int)&v28[28 * v11];
      this[2] = (int)&v28[28 * v16];
      this[1] = (int)v28;
    }
  }
}
