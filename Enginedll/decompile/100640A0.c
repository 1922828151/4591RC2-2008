/*
 * func-name: sub_100640A0
 * func-address: 0x100640a0
 * callers: 0x100643c0
 * callees: 0x1000a430, 0x1000a5e0, 0x1000a910, 0x1000b610, 0x1000cde0, 0x1000db90, 0x10063f40, 0x10064000, 0x10064030, 0x10064070, 0x1017a0b0, 0x101a2500, 0x101a2522
 */

int __thiscall sub_100640A0(_DWORD *this, int a2, char *a3, unsigned int a4, _DWORD *a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  char *v12; // eax
  _DWORD *v13; // ecx
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // ecx
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  _DWORD *v20; // ecx
  int v21; // ebx
  _DWORD *v23; // [esp-Ch] [ebp-BCh]
  int v24; // [esp-8h] [ebp-B8h]
  int v25; // [esp+0h] [ebp-B0h] BYREF
  _DWORD v26[25]; // [esp+Ch] [ebp-A4h] BYREF
  char v27[40]; // [esp+70h] [ebp-40h] BYREF
  _DWORD *v28; // [esp+98h] [ebp-18h]
  _DWORD *v29; // [esp+9Ch] [ebp-14h]
  int *v30; // [esp+A0h] [ebp-10h]
  int v31; // [esp+ACh] [ebp-4h]
  int v32; // [esp+C0h] [ebp+10h]
  char *v33; // [esp+C4h] [ebp+14h]

  v30 = &v25;
  v28 = this;
  sub_1000B610(v26, a5);
  v6 = this[1];
  v7 = 0;
  v31 = 0;
  if ( v6 )
    v7 = (this[3] - v6) / 140;
  if ( a4 )
  {
    if ( v6 )
      v8 = (this[2] - this[1]) / 140;
    else
      v8 = 0;
    if ( 30678337 - v8 < a4 )
      sub_1000A5E0();
    if ( this[1] )
      v9 = (this[2] - this[1]) / 140;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v20 = (_DWORD *)this[2];
      v29 = v20;
      if ( ((char *)v20 - a3) / 140 >= a4 )
      {
        v21 = 140 * a4;
        v32 = (int)&v20[-35 * a4];
        this[2] = sub_10064070(&v20[v21 / 0xFFFFFFFC], v20, v20);
        sub_10064000((int)a3, v32, v29);
        sub_10063F40(a3, &a3[v21], (int)v26);
      }
      else
      {
        sub_10064070(a3, v20, &a3[140 * a4]);
        v24 = a4 - (this[2] - (int)a3) / 140;
        v23 = (_DWORD *)this[2];
        LOBYTE(v31) = 3;
        sub_10064030(v23, v24, v26);
        this[2] += 140 * a4;
        sub_10063F40(a3, (_DWORD *)(this[2] - 140 * a4), (int)v26);
      }
    }
    else
    {
      if ( 30678337 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( this[1] )
        v11 = (this[2] - this[1]) / 140;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_1000A430(this);
      v12 = (char *)sub_1000A910(v10);
      v13 = (_DWORD *)this[1];
      LOBYTE(v29) = 0;
      v33 = v12;
      LOBYTE(v31) = 1;
      v14 = sub_1000CDE0(v13, a3, v12);
      v15 = sub_10064030(v14, a4, v26);
      v16 = (_DWORD *)this[2];
      LOBYTE(v29) = 0;
      sub_1000CDE0(a3, v16, v15);
      v17 = this[1];
      v31 = 0;
      if ( v17 )
        v17 = (this[2] - v17) / 140;
      v18 = v17 + a4;
      v19 = this[1];
      if ( v19 )
      {
        sub_1000DB90(v19, this[2]);
        operator delete((void *)this[1]);
      }
      this[3] = &v33[140 * v10];
      this[2] = &v33[140 * v18];
      this[1] = v33;
    }
  }
  v31 = -1;
  return sub_1017A0B0(v27);
}
