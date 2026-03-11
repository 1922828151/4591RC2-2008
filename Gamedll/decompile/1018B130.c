/*
 * func-name: sub_1018B130
 * func-address: 0x1018b130
 * callers: 0x1001031b
 * callees: 0x10002afe, 0x10004971, 0x10005a79, 0x100062ee, 0x100066ea, 0x10008553, 0x1000b933, 0x1000fdfd, 0x100129d6, 0x10015096, 0x102c9d50, 0x102c9d62, 0x102c9d86, 0x102c9f65
 */

int __thiscall sub_1018B130(int *this, int a2, _BYTE *a3, unsigned int a4, char *a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  void *v12; // eax
  void *v13; // ecx
  void *v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  void *v19; // eax
  char *v20; // ebx
  _BYTE *v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  void *v26; // [esp-Ch] [ebp-3Ch]
  int v27; // [esp-8h] [ebp-38h]
  int v28; // [esp-8h] [ebp-38h]
  int v29; // [esp+0h] [ebp-30h] BYREF
  int v30; // [esp+4h] [ebp-2Ch]
  int *v31; // [esp+10h] [ebp-20h]
  void *v32; // [esp+14h] [ebp-1Ch]
  void *v33; // [esp+18h] [ebp-18h]
  int v34; // [esp+1Ch] [ebp-14h]
  int *v35; // [esp+20h] [ebp-10h]
  int v36; // [esp+2Ch] [ebp-4h]
  _BYTE v37[468]; // [esp+30h] [ebp+0h] BYREF
  char v38[468]; // [esp+204h] [ebp+1D4h] BYREF

  v35 = &v29;
  v31 = this;
  `eh vector copy constructor iterator'(v37, a5, 0x34u, 9, sub_100173C8, (void (__thiscall *)(void *))sub_1000B451);
  `eh vector copy constructor iterator'(
    v38,
    a5 + 468,
    0x34u,
    9,
    sub_100173C8,
    (void (__thiscall *)(void *))sub_1000B451);
  v6 = this[1];
  v7 = 0;
  v36 = 0;
  if ( v6 )
    v7 = (this[3] - v6) / 936;
  if ( a4 )
  {
    if ( v6 )
    {
      v33 = (void *)(this[2] - v6);
      v8 = (int)v33 / 936;
    }
    else
    {
      v8 = 0;
    }
    if ( 4588640 - v8 < a4 )
      sub_100066EA(v29, v30);
    if ( v6 )
    {
      v33 = (void *)(this[2] - v6);
      v9 = (int)v33 / 936;
    }
    else
    {
      v9 = 0;
    }
    if ( v7 >= a4 + v9 )
    {
      v21 = (_BYTE *)this[2];
      v34 = v21 - a3;
      v33 = v21;
      if ( (v21 - a3) / 936 >= a4 )
      {
        v34 = (int)&v21[-936 * a4];
        v23 = sub_10008553((void *)v34, (int)v21, v21);
        v24 = v34;
        this[2] = v23;
        sub_10015096((int)a3, v24, (int)v33);
        sub_100062EE((int)a3, (int)&a3[936 * a4], (int)v37);
      }
      else
      {
        v34 = 936 * a4;
        sub_10008553(a3, (int)v21, &a3[936 * a4]);
        v27 = a4 - (this[2] - (int)a3) / 936;
        v26 = (void *)this[2];
        LOBYTE(v36) = 3;
        sub_10004971(v26, v27, v37);
        v22 = v34;
        this[2] += v34;
        v28 = this[2] - v22;
        v36 = 0;
        sub_100062EE((int)a3, v28, (int)v37);
      }
    }
    else
    {
      if ( 4588640 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
      {
        v33 = (void *)(this[2] - v6);
        v11 = (int)v33 / 936;
      }
      else
      {
        v11 = 0;
      }
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_1000FDFD();
      v12 = (void *)sub_10002AFE(v10);
      v13 = (void *)this[1];
      LOBYTE(v34) = 0;
      v33 = v12;
      v32 = v12;
      LOBYTE(v36) = 1;
      v32 = (void *)sub_10005A79(v13, (int)a3, v12);
      v14 = (void *)sub_10004971(v32, a4, v37);
      v15 = this[2];
      LOBYTE(v34) = 0;
      v32 = v14;
      sub_10005A79(a3, v15, v14);
      v16 = this[1];
      v36 = 0;
      if ( v16 )
        v16 = (this[2] - v16) / 936;
      v17 = v16 + a4;
      v18 = this[1];
      if ( v18 )
      {
        sub_1000B933(v18, this[2]);
        operator delete((void *)this[1]);
      }
      v19 = v33;
      v20 = (char *)v33 + 936 * v17;
      this[3] = (int)v33 + 936 * v10;
      this[2] = (int)v20;
      this[1] = (int)v19;
    }
  }
  v36 = -1;
  return sub_100129D6(v29, v30);
}
