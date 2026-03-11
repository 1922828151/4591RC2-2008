/*
 * func-name: sub_100B5340
 * func-address: 0x100b5340
 * callers: 0x10009c6e
 * callees: 0x10001492, 0x100019ce, 0x10002667, 0x10006659, 0x1000a66e, 0x1000c6ee, 0x10018f75, 0x1001ace9, 0x102c9d50, 0x102c9d86
 */

void __thiscall sub_100B5340(int *this, int a2, int a3, unsigned int a4, void *a5)
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
  int v19; // [esp-20h] [ebp-A0h]
  int v20; // [esp-Ch] [ebp-8Ch]
  int v21; // [esp-8h] [ebp-88h]
  int v22[4]; // [esp+0h] [ebp-80h] BYREF
  _BYTE v23[96]; // [esp+10h] [ebp-70h] BYREF
  int *v24; // [esp+70h] [ebp-10h]
  int v25; // [esp+7Ch] [ebp-4h]
  int v26; // [esp+90h] [ebp+10h]
  char *v27; // [esp+94h] [ebp+14h]
  void *v28; // [esp+94h] [ebp+14h]

  v24 = v22;
  qmemcpy(v23, a5, sizeof(v23));
  v6 = this[1];
  if ( v6 )
    v7 = (this[3] - v6) / 96;
  else
    v7 = 0;
  if ( a4 )
  {
    if ( v6 )
      v8 = (this[2] - v6) / 96;
    else
      v8 = 0;
    if ( 44739242 - v8 < a4 )
      sub_10018F75(v22[0], v22[1]);
    if ( v6 )
      v9 = (this[2] - v6) / 96;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v17 = this[2];
      v28 = (void *)v17;
      if ( (v17 - a3) / 96 >= a4 )
      {
        v18 = 96 * a4;
        v26 = v17 - 96 * a4;
        this[2] = sub_10006659(v17 - v18, v17, v17);
        sub_1000C6EE(a3, v26, (int)v28);
        sub_1001ACE9(a3, a3 + v18, (int)v23);
      }
      else
      {
        sub_10006659(a3, v17, a3 + 96 * a4);
        v21 = a4 - (this[2] - a3) / 96;
        v20 = this[2];
        v25 = 2;
        sub_10001492(v20, v21, (int)v23);
        this[2] += 96 * a4;
        sub_1001ACE9(a3, this[2] - 96 * a4, (int)v23);
      }
    }
    else
    {
      if ( 44739242 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
        v11 = (this[2] - v6) / 96;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_100019CE();
      v27 = (char *)sub_1000A66E(v10);
      v19 = this[1];
      v25 = 0;
      v12 = sub_10002667(v19, a3, (int)v27);
      v13 = sub_10001492(v12, a4, (int)v23);
      sub_10002667(a3, this[2], v13);
      v14 = this[1];
      if ( v14 )
        v15 = (this[2] - v14) / 96;
      else
        v15 = 0;
      v16 = v15 + a4;
      if ( v14 )
        operator delete((void *)this[1]);
      this[3] = (int)&v27[96 * v10];
      this[2] = (int)&v27[96 * v16];
      this[1] = (int)v27;
    }
  }
}
