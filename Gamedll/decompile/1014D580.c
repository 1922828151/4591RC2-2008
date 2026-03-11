/*
 * func-name: sub_1014D580
 * func-address: 0x1014d580
 * callers: 0x10018214
 * callees: 0x100036cf, 0x10006c35, 0x1000739c, 0x100073e2, 0x1000bc99, 0x1000cba8, 0x1000d080, 0x10014560, 0x10015dbb, 0x1001635b, 0x100198b7, 0x102c9d50, 0x102c9d62, 0x102c9d86
 */

int __thiscall sub_1014D580(int *this, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  void *v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  void *v19; // eax
  char *v20; // ebx
  void *v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  int v26; // [esp-Ch] [ebp-3Ch]
  int v27; // [esp-8h] [ebp-38h]
  int v28; // [esp-8h] [ebp-38h]
  int v29; // [esp+0h] [ebp-30h] BYREF
  int v30; // [esp+4h] [ebp-2Ch]
  int *v31; // [esp+10h] [ebp-20h]
  int v32; // [esp+14h] [ebp-1Ch]
  void *v33; // [esp+18h] [ebp-18h]
  int v34; // [esp+1Ch] [ebp-14h]
  int *v35; // [esp+20h] [ebp-10h]
  int v36; // [esp+2Ch] [ebp-4h]
  _BYTE v37[584]; // [esp+30h] [ebp+0h] BYREF

  v35 = &v29;
  v31 = this;
  sub_10015DBB(a5);
  v6 = this[1];
  v7 = 0;
  v36 = 0;
  if ( v6 )
    v7 = (this[3] - v6) / 584;
  if ( a4 )
  {
    if ( v6 )
      v8 = (this[2] - this[1]) / 584;
    else
      v8 = 0;
    if ( 7354396 - v8 < a4 )
      sub_1000CBA8(v29, v30);
    if ( this[1] )
      v9 = (this[2] - this[1]) / 584;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v21 = (void *)this[2];
      v34 = (int)v21 - a3;
      v33 = v21;
      if ( ((int)v21 - a3) / 584 >= a4 )
      {
        v34 = (int)v21 - 584 * a4;
        v23 = sub_1000739C(v34, (int)v21, (int)v21);
        v24 = v34;
        this[2] = v23;
        sub_100036CF(a3, v24, (int)v33);
        sub_1000BC99(a3, a3 + 584 * a4, (int)v37);
      }
      else
      {
        v34 = 584 * a4;
        sub_1000739C(a3, (int)v21, a3 + 584 * a4);
        v27 = a4 - (this[2] - a3) / 584;
        v26 = this[2];
        LOBYTE(v36) = 3;
        sub_10006C35(v26, v27, (int)v37);
        v22 = v34;
        this[2] += v34;
        v28 = this[2] - v22;
        v36 = 0;
        sub_1000BC99(a3, v28, (int)v37);
      }
    }
    else
    {
      if ( 7354396 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( this[1] )
        v11 = (this[2] - this[1]) / 584;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_100198B7();
      v12 = (void *)sub_100073E2(v10);
      v13 = this[1];
      LOBYTE(v34) = 0;
      v33 = v12;
      v32 = (int)v12;
      LOBYTE(v36) = 1;
      v32 = sub_1001635B(v13, a3, (int)v12);
      v14 = sub_10006C35(v32, a4, (int)v37);
      v15 = this[2];
      LOBYTE(v34) = 0;
      v32 = v14;
      sub_1001635B(a3, v15, v14);
      v16 = this[1];
      v36 = 0;
      if ( v16 )
        v16 = (this[2] - v16) / 584;
      v17 = v16 + a4;
      v18 = this[1];
      if ( v18 )
      {
        sub_10014560(v18, this[2]);
        operator delete((void *)this[1]);
      }
      v19 = v33;
      v20 = (char *)v33 + 584 * v17;
      this[3] = (int)v33 + 584 * v10;
      this[2] = (int)v20;
      this[1] = (int)v19;
    }
  }
  v36 = -1;
  return sub_1000D080(v29, v30);
}
