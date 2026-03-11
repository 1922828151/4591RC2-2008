/*
 * func-name: sub_10206EC0
 * func-address: 0x10206ec0
 * callers: 0x1000329c
 * callees: 0x1000153c, 0x10001bbd, 0x10002f90, 0x10005259, 0x1000a1f0, 0x1000ad53, 0x1000af4c, 0x10012887, 0x100154d8, 0x10017a8a, 0x1001ac44, 0x102c9d50, 0x102c9d86
 */

int __thiscall sub_10206EC0(int *this, int a2, int a3, unsigned int a4, void *a5)
{
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // edi
  int v21; // eax
  int v22; // edi
  int v24; // [esp-Ch] [ebp-44h]
  int v25; // [esp-8h] [ebp-40h]
  int v26; // [esp-8h] [ebp-40h]
  int v27[4]; // [esp+0h] [ebp-38h] BYREF
  _BYTE v28[16]; // [esp+10h] [ebp-28h] BYREF
  int v29; // [esp+20h] [ebp-18h]
  int *v30; // [esp+24h] [ebp-14h]
  int *v31; // [esp+28h] [ebp-10h]
  int v32; // [esp+34h] [ebp-4h]
  char *v33; // [esp+4Ch] [ebp+14h]

  v31 = v27;
  v30 = this;
  sub_10012887((int)a5);
  v6 = this[1];
  v7 = 0;
  v32 = 0;
  if ( v6 )
    v8 = (this[3] - v6) >> 4;
  else
    v8 = 0;
  if ( a4 )
  {
    if ( v6 )
      v7 = (this[2] - v6) >> 4;
    if ( 0xFFFFFFF - v7 < a4 )
      sub_1000AD53(v27[0], v27[1]);
    if ( v6 )
      v9 = (this[2] - v6) >> 4;
    else
      v9 = 0;
    if ( v8 >= a4 + v9 )
    {
      v21 = this[2];
      v29 = v21;
      if ( (v21 - a3) >> 4 >= a4 )
      {
        v22 = v21 - 16 * a4;
        this[2] = sub_1000AF4C(v22, v21, v21);
        sub_10002F90(a3, v22, v29);
        sub_10005259(a3, a3 + 16 * a4, (int)v28);
      }
      else
      {
        sub_1000AF4C(a3, v21, a3 + 16 * a4);
        v25 = a4 - ((this[2] - a3) >> 4);
        v24 = this[2];
        LOBYTE(v32) = 3;
        sub_1001AC44(v24, v25, (int)v28);
        this[2] += 16 * a4;
        v26 = this[2] - 16 * a4;
        v32 = 0;
        sub_10005259(a3, v26, (int)v28);
      }
    }
    else
    {
      if ( 0xFFFFFFF - (v8 >> 1) >= v8 )
        v10 = (v8 >> 1) + v8;
      else
        v10 = 0;
      if ( v6 )
        v11 = (this[2] - v6) >> 4;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
      {
        if ( v6 )
          v12 = (this[2] - v6) >> 4;
        else
          v12 = 0;
        v10 = v12 + a4;
      }
      v13 = sub_1000A1F0(v10);
      v14 = this[1];
      LOBYTE(v29) = 0;
      v33 = (char *)v13;
      LOBYTE(v32) = 1;
      v15 = sub_100154D8(v14, a3, v13);
      v16 = sub_1001AC44(v15, a4, (int)v28);
      v17 = this[2];
      LOBYTE(v29) = 0;
      sub_100154D8(a3, v17, v16);
      v18 = this[1];
      v32 = 0;
      if ( v18 )
        v19 = (this[2] - v18) >> 4;
      else
        v19 = 0;
      v20 = v19 + a4;
      if ( v18 )
      {
        sub_1000153C(v18, this[2]);
        operator delete((void *)this[1]);
      }
      this[3] = (int)&v33[16 * v10];
      this[2] = (int)&v33[16 * v20];
      this[1] = (int)v33;
    }
  }
  v32 = -1;
  return sub_10017A8A();
}
