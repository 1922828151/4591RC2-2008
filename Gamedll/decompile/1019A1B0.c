/*
 * func-name: sub_1019A1B0
 * func-address: 0x1019a1b0
 * callers: 0x1000f100
 * callees: 0x10001956, 0x100042dc, 0x10006f9b, 0x1000b456, 0x1000c56d, 0x10017599, 0x1001875a, 0x10019952, 0x102c9d50, 0x102c9d86
 */

int __thiscall sub_1019A1B0(int *this, int a2, int a3, unsigned int a4, _DWORD *a5)
{
  int v6; // edx
  int result; // eax
  int v8; // ecx
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // edi
  int v19; // ecx
  int v20; // edi
  int v21; // [esp-20h] [ebp-4Ch]
  int v22; // [esp-Ch] [ebp-38h]
  int v23; // [esp-8h] [ebp-34h]
  int v24[4]; // [esp+0h] [ebp-2Ch] BYREF
  _DWORD v25[4]; // [esp+10h] [ebp-1Ch] BYREF
  int v26; // [esp+28h] [ebp-4h]
  int v27; // [esp+3Ch] [ebp+10h]
  char *v28; // [esp+40h] [ebp+14h]
  void *v29; // [esp+40h] [ebp+14h]

  v25[3] = v24;
  v6 = a5[1];
  result = a5[2];
  v25[0] = *a5;
  v8 = this[1];
  v25[1] = v6;
  v25[2] = result;
  if ( v8 )
  {
    result = 715827883 * (this[3] - v8);
    v9 = (this[3] - v8) / 12;
  }
  else
  {
    v9 = 0;
  }
  if ( a4 )
  {
    if ( v8 )
      v10 = (this[2] - v8) / 12;
    else
      v10 = 0;
    if ( 357913941 - v10 < a4 )
      sub_10019952(v24[0], v24[1]);
    if ( v8 )
      v11 = (this[2] - v8) / 12;
    else
      v11 = 0;
    if ( v9 >= a4 + v11 )
    {
      v19 = this[2];
      v29 = (void *)v19;
      if ( (v19 - a3) / 12 >= a4 )
      {
        v20 = 12 * a4;
        v27 = v19 - 12 * a4;
        this[2] = sub_1001875A(v19 - v20, v19, v19);
        sub_10006F9B(a3, v27, (int)v29);
        return sub_10001956(a3, a3 + v20, (int)v25);
      }
      else
      {
        sub_1001875A(a3, v19, a3 + 12 * a4);
        v23 = a4 - (this[2] - a3) / 12;
        v22 = this[2];
        v26 = 2;
        sub_1000B456(v22, v23, (int)v25);
        this[2] += 12 * a4;
        return sub_10001956(a3, this[2] - 12 * a4, (int)v25);
      }
    }
    else
    {
      if ( 357913941 - (v9 >> 1) >= v9 )
        v12 = (v9 >> 1) + v9;
      else
        v12 = 0;
      if ( v8 )
        v13 = (this[2] - v8) / 12;
      else
        v13 = 0;
      if ( v12 < a4 + v13 )
        v12 = a4 + sub_10017599();
      v28 = (char *)sub_1000C56D(v12);
      v21 = this[1];
      v26 = 0;
      v14 = sub_100042DC(v21, a3, (int)v28);
      v15 = sub_1000B456(v14, a4, (int)v25);
      sub_100042DC(a3, this[2], v15);
      v16 = this[1];
      if ( v16 )
        v17 = (this[2] - v16) / 12;
      else
        v17 = 0;
      v18 = v17 + a4;
      if ( v16 )
        operator delete((void *)this[1]);
      result = (int)v28;
      this[3] = (int)&v28[12 * v12];
      this[2] = (int)&v28[12 * v18];
      this[1] = (int)v28;
    }
  }
  return result;
}
