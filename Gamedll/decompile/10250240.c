/*
 * func-name: sub_10250240
 * func-address: 0x10250240
 * callers: 0x1000d869
 * callees: 0x10002eaf, 0x10005dda, 0x100086d4, 0x1000b4c9, 0x10010979, 0x100132fa, 0x1001351b, 0x1001413c, 0x100153f2, 0x1001971d, 0x102c9d50, 0x102c9d86
 */

void __thiscall sub_10250240(int *this, int a2, int a3, unsigned int a4, _DWORD **a5)
{
  _DWORD *v6; // edi
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // ebx
  unsigned int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  void *v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // ebx
  int v22; // [esp-20h] [ebp-54h]
  int v23; // [esp-14h] [ebp-48h]
  int v24; // [esp-Ch] [ebp-40h]
  int v25; // [esp-8h] [ebp-3Ch]
  int v26; // [esp-8h] [ebp-3Ch]
  int v27; // [esp+0h] [ebp-34h] BYREF
  int v28; // [esp+4h] [ebp-30h]
  void *v29; // [esp+10h] [ebp-24h]
  int v30; // [esp+14h] [ebp-20h]
  int *v31; // [esp+18h] [ebp-1Ch]
  int v32; // [esp+1Ch] [ebp-18h]
  _DWORD v33[2]; // [esp+20h] [ebp-14h] BYREF
  int v34; // [esp+30h] [ebp-4h]
  int v35; // [esp+44h] [ebp+10h]
  unsigned int v36; // [esp+48h] [ebp+14h]
  int v37; // [esp+48h] [ebp+14h]

  v33[1] = &v27;
  v31 = this;
  v6 = *a5;
  v7 = 0;
  v33[0] = *a5;
  if ( v33[0] )
    ++v6[9];
  v8 = this[1];
  v34 = 0;
  if ( v8 )
    v9 = (this[3] - v8) >> 2;
  else
    v9 = 0;
  v10 = a4;
  if ( a4 )
  {
    if ( v8 )
      v7 = (this[2] - v8) >> 2;
    if ( 0x3FFFFFFF - v7 < a4 )
      sub_10005DDA(v27, v28);
    if ( v8 )
      v11 = (this[2] - v8) >> 2;
    else
      v11 = 0;
    if ( v9 >= v10 + v11 )
    {
      v20 = this[2];
      v37 = 4 * v10;
      if ( (v20 - a3) >> 2 >= v10 )
      {
        v35 = v20 - 4 * v10;
        this[2] = sub_100153F2(v35, v20, this[2]);
        sub_10002EAF(a3, v35, v20);
        sub_1001413C(a3, v37 + a3, (int)v33);
      }
      else
      {
        sub_100153F2(a3, v20, a3 + 4 * v10);
        v25 = a4 - ((this[2] - a3) >> 2);
        v24 = this[2];
        LOBYTE(v34) = 3;
        sub_1000B4C9(v24, v25, (int)v33);
        this[2] += v37;
        v26 = this[2] - v37;
        v34 = 0;
        sub_1001413C(a3, v26, (int)v33);
      }
    }
    else
    {
      if ( 0x3FFFFFFF - (v9 >> 1) >= v9 )
        v36 = (v9 >> 1) + v9;
      else
        v36 = 0;
      if ( v8 )
        v12 = (this[2] - v8) >> 2;
      else
        v12 = 0;
      if ( v36 < v10 + v12 )
      {
        if ( v8 )
          v13 = (this[2] - v8) >> 2;
        else
          v13 = 0;
        v36 = v10 + v13;
      }
      v14 = (void *)sub_1001351B(v36);
      LOBYTE(v30) = 0;
      v15 = (int)v14;
      v22 = this[1];
      v29 = v14;
      v32 = (int)v14;
      LOBYTE(v34) = 1;
      v32 = sub_100132FA(v22, a3, (int)v14);
      v16 = sub_1000B4C9(v32, a4, (int)v33);
      v23 = this[2];
      v32 = v16;
      sub_100132FA(a3, v23, v16);
      v17 = this[1];
      v34 = 0;
      if ( v17 )
        v18 = (this[2] - v17) >> 2;
      else
        v18 = 0;
      v19 = v18 + a4;
      if ( v17 )
      {
        sub_100086D4(v17, this[2]);
        operator delete((void *)this[1]);
      }
      this[3] = v15 + 4 * v36;
      this[2] = v15 + 4 * v19;
      this[1] = v15;
    }
    v6 = (_DWORD *)v33[0];
  }
  v34 = -1;
  if ( v6 )
  {
    if ( v6[9]-- == 1 )
    {
      sub_1001971D(v27, v28);
      operator delete(v6);
    }
  }
}
