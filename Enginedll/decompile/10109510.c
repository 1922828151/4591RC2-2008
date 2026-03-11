/*
 * func-name: sub_10109510
 * func-address: 0x10109510
 * callers: 0x10109810
 * callees: 0x1000a8b0, 0x10108880, 0x101088d0, 0x101089d0, 0x10108ad0, 0x10108c00, 0x10108ce0, 0x10108d30, 0x10109040, 0x101090c0, 0x10109450, 0x101a2500, 0x101a2522
 */

int __thiscall sub_10109510(int *this, int a2, int a3, unsigned int a4, void *a5)
{
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  char *v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // edi
  int v21; // eax
  int v22; // edi
  int v24; // [esp-Ch] [ebp-70h]
  int v25; // [esp-8h] [ebp-6Ch]
  int v26; // [esp-8h] [ebp-6Ch]
  int v27; // [esp+0h] [ebp-64h] BYREF
  char v28[64]; // [esp+Ch] [ebp-58h] BYREF
  int v29; // [esp+4Ch] [ebp-18h]
  int *v30; // [esp+50h] [ebp-14h]
  int *v31; // [esp+54h] [ebp-10h]
  int v32; // [esp+60h] [ebp-4h]
  char *v33; // [esp+78h] [ebp+14h]

  v31 = &v27;
  v30 = this;
  sub_101089D0((int)v28, (int)a5);
  v6 = this[1];
  v7 = 0;
  v32 = 0;
  if ( v6 )
    v8 = (this[3] - v6) >> 6;
  else
    v8 = 0;
  if ( a4 )
  {
    if ( v6 )
      v7 = (this[2] - v6) >> 6;
    if ( 0x3FFFFFF - v7 < a4 )
      sub_101088D0();
    if ( v6 )
      v9 = (this[2] - v6) >> 6;
    else
      v9 = 0;
    if ( v8 >= a4 + v9 )
    {
      v21 = this[2];
      v29 = v21;
      if ( (v21 - a3) >> 6 >= a4 )
      {
        v22 = v21 - (a4 << 6);
        this[2] = sub_10109450(v22, v21, v21);
        sub_10108CE0(a3, v22, v29);
        sub_10108AD0(a3, (a4 << 6) + a3, (int)v28);
      }
      else
      {
        sub_10109450(a3, v21, a3 + (a4 << 6));
        v25 = a4 - ((this[2] - a3) >> 6);
        v24 = this[2];
        LOBYTE(v32) = 3;
        sub_101090C0(v24, v25, (int)v28);
        this[2] += a4 << 6;
        v26 = this[2] - (a4 << 6);
        v32 = 0;
        sub_10108AD0(a3, v26, (int)v28);
      }
    }
    else
    {
      if ( 0x3FFFFFF - (v8 >> 1) >= v8 )
        v10 = (v8 >> 1) + v8;
      else
        v10 = 0;
      if ( v6 )
        v11 = (this[2] - v6) >> 6;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
      {
        if ( v6 )
          v12 = (this[2] - v6) >> 6;
        else
          v12 = 0;
        v10 = v12 + a4;
      }
      v13 = (char *)sub_1000A8B0(v10);
      v14 = this[1];
      LOBYTE(v29) = 0;
      v33 = v13;
      LOBYTE(v32) = 1;
      v15 = sub_10108C00(v14, a3, (int)v13);
      v16 = sub_101090C0(v15, a4, (int)v28);
      v17 = this[2];
      LOBYTE(v29) = 0;
      sub_10108C00(a3, v17, v16);
      v18 = this[1];
      v32 = 0;
      if ( v18 )
        v19 = (this[2] - v18) >> 6;
      else
        v19 = 0;
      v20 = v19 + a4;
      if ( v18 )
      {
        sub_10108D30(v18, this[2]);
        operator delete((void *)this[1]);
      }
      this[3] = (int)&v33[64 * v10];
      this[2] = (int)&v33[64 * v20];
      this[1] = (int)v33;
    }
  }
  v32 = -1;
  return sub_10108880(v28);
}
