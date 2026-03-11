/*
 * func-name: sub_10289000
 * func-address: 0x10289000
 * callers: 0x10007ac2
 * callees: 0x10007f68, 0x1000a02e, 0x1000f00b, 0x100104a1, 0x100123d2, 0x10015730, 0x1001ac5d, 0x102c9d50, 0x102c9d86
 */

char *__thiscall sub_10289000(int *this, int a2, int a3, unsigned int a4, _DWORD *a5)
{
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  char *result; // eax
  unsigned int v10; // ebx
  int v12; // ecx
  int v13; // ecx
  unsigned int v14; // ebx
  int v15; // ecx
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // edi
  int v22; // eax
  int v23; // ecx
  int v24; // edi
  int v25; // [esp-20h] [ebp-50h]
  int v26; // [esp-Ch] [ebp-3Ch]
  int v27; // [esp-8h] [ebp-38h]
  int v28[4]; // [esp+0h] [ebp-30h] BYREF
  _DWORD v29[5]; // [esp+10h] [ebp-20h] BYREF
  int v30; // [esp+2Ch] [ebp-4h]
  int v31; // [esp+40h] [ebp+10h]
  char *v32; // [esp+44h] [ebp+14h]
  void *v33; // [esp+44h] [ebp+14h]

  v29[4] = v28;
  v6 = a5[1];
  v29[0] = *a5;
  v7 = a5[2];
  v29[1] = v6;
  v8 = a5[3];
  result = (char *)this[1];
  v29[2] = v7;
  v29[3] = v8;
  if ( result )
    v10 = (this[3] - (int)result) >> 4;
  else
    v10 = 0;
  if ( a4 )
  {
    if ( result )
      v12 = (this[2] - (int)result) >> 4;
    else
      v12 = 0;
    if ( 0xFFFFFFF - v12 < a4 )
      result = (char *)sub_10007F68(v28[0], v28[1]);
    if ( result )
      v13 = (this[2] - (int)result) >> 4;
    else
      v13 = 0;
    if ( v10 >= a4 + v13 )
    {
      v22 = this[2];
      v31 = v22;
      if ( (v22 - a3) >> 4 >= a4 )
      {
        v23 = 16 * a4;
        v24 = v22 - 16 * a4;
        v33 = (void *)v23;
        this[2] = sub_100104A1(v24, v22, v22);
        sub_1000F00B(a3, v24, v31);
        return (char *)sub_1001AC5D(a3, (int)v33 + a3, (int)v29);
      }
      else
      {
        sub_100104A1(a3, v22, a3 + 16 * a4);
        v27 = a4 - ((this[2] - a3) >> 4);
        v26 = this[2];
        v30 = 2;
        sub_100123D2(v26, v27, (int)v29);
        this[2] += 16 * a4;
        return (char *)sub_1001AC5D(a3, this[2] - 16 * a4, (int)v29);
      }
    }
    else
    {
      if ( 0xFFFFFFF - (v10 >> 1) >= v10 )
        v14 = (v10 >> 1) + v10;
      else
        v14 = 0;
      if ( result )
        v15 = (this[2] - (int)result) >> 4;
      else
        v15 = 0;
      if ( v14 < a4 + v15 )
      {
        if ( result )
          v16 = (this[2] - (int)result) >> 4;
        else
          v16 = 0;
        v14 = a4 + v16;
      }
      v32 = (char *)sub_10015730(v14);
      v25 = this[1];
      v30 = 0;
      v17 = sub_1000A02E(v25, a3, (int)v32);
      v18 = sub_100123D2(v17, a4, (int)v29);
      sub_1000A02E(a3, this[2], v18);
      v19 = this[1];
      if ( v19 )
        v20 = (this[2] - v19) >> 4;
      else
        v20 = 0;
      v21 = v20 + a4;
      if ( v19 )
        operator delete((void *)this[1]);
      result = v32;
      this[3] = (int)&v32[16 * v14];
      this[2] = (int)&v32[16 * v21];
      this[1] = (int)v32;
    }
  }
  return result;
}
