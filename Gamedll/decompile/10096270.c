/*
 * func-name: sub_10096270
 * func-address: 0x10096270
 * callers: 0x1000d0e9
 * callees: 0x10002c93, 0x10005722, 0x10007cd9, 0x1000a1a5, 0x1000f9d4, 0x100105f5, 0x10014ce5, 0x100156ae, 0x100168bf, 0x102c9d50, 0x102c9d86
 */

int __thiscall sub_10096270(int *this, int a2, int a3, unsigned int a4, _DWORD *a5)
{
  int v6; // edx
  int result; // eax
  int v8; // ecx
  unsigned int v9; // edi
  unsigned int v10; // edx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // ebx
  int v21; // [esp-20h] [ebp-58h]
  int v22; // [esp-14h] [ebp-4Ch]
  int v23; // [esp-Ch] [ebp-44h]
  int v24; // [esp-8h] [ebp-40h]
  int v25[4]; // [esp+0h] [ebp-38h] BYREF
  _DWORD v26[3]; // [esp+10h] [ebp-28h] BYREF
  int v27; // [esp+1Ch] [ebp-1Ch]
  int *v28; // [esp+20h] [ebp-18h]
  int v29; // [esp+24h] [ebp-14h]
  int *v30; // [esp+28h] [ebp-10h]
  int v31; // [esp+34h] [ebp-4h]
  int v32; // [esp+48h] [ebp+10h]
  unsigned int v33; // [esp+4Ch] [ebp+14h]
  int v34; // [esp+4Ch] [ebp+14h]

  v30 = v25;
  v28 = this;
  v6 = a5[1];
  v26[0] = *a5;
  v26[1] = v6;
  result = this[1];
  v8 = 0;
  v31 = 0;
  if ( result )
    v9 = (this[3] - result) >> 3;
  else
    v9 = 0;
  v10 = a4;
  if ( a4 )
  {
    if ( result )
      v8 = (this[2] - result) >> 3;
    if ( 0x1FFFFFFF - v8 < a4 )
      result = sub_100168BF(v25[0], v25[1]);
    if ( result )
      v11 = (this[2] - result) >> 3;
    else
      v11 = 0;
    if ( v9 >= v10 + v11 )
    {
      v20 = this[2];
      v34 = 8 * v10;
      if ( (v20 - a3) >> 3 >= v10 )
      {
        v32 = v20 - 8 * v10;
        this[2] = sub_100156AE(v32, v20, this[2]);
        sub_10007CD9(a3, v32, v20);
        result = sub_1000A1A5(a3, a3 + v34, (int)v26);
      }
      else
      {
        sub_100156AE(a3, v20, a3 + 8 * v10);
        v24 = a4 - ((this[2] - a3) >> 3);
        v23 = this[2];
        LOBYTE(v31) = 3;
        sub_10014CE5(v23, v24, (int)v26);
        this[2] += v34;
        result = sub_1000A1A5(a3, this[2] - v34, (int)v26);
      }
    }
    else
    {
      if ( 0x1FFFFFFF - (v9 >> 1) >= v9 )
        v33 = (v9 >> 1) + v9;
      else
        v33 = 0;
      if ( result )
        v12 = (this[2] - result) >> 3;
      else
        v12 = 0;
      if ( v33 < v10 + v12 )
      {
        if ( result )
          v13 = (this[2] - result) >> 3;
        else
          v13 = 0;
        v33 = v10 + v13;
      }
      v14 = sub_10005722(v33);
      LOBYTE(v27) = 0;
      v15 = v14;
      v21 = this[1];
      v26[2] = v14;
      v29 = v14;
      LOBYTE(v31) = 1;
      v29 = sub_100105F5(v21, a3, v14);
      v16 = sub_10014CE5(v29, a4, (int)v26);
      v22 = this[2];
      v29 = v16;
      sub_100105F5(a3, v22, v16);
      v17 = this[1];
      v31 = 0;
      if ( v17 )
        v18 = (this[2] - v17) >> 3;
      else
        v18 = 0;
      v19 = v18 + a4;
      if ( v17 )
      {
        sub_1000F9D4(v17, this[2]);
        operator delete((void *)this[1]);
      }
      result = v33;
      this[3] = v15 + 8 * v33;
      this[2] = v15 + 8 * v19;
      this[1] = v15;
    }
  }
  v31 = -1;
  if ( v26[0] )
    return (**(int (__thiscall ***)(_DWORD, int))v26[0])(v26[0], 1);
  return result;
}
