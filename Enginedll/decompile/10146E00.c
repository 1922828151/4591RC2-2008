/*
 * func-name: sub_10146E00
 * func-address: 0x10146e00
 * callers: 0x10147420
 * callees: 0x10024540, 0x100245a0, 0x10051d40, 0x10051df0, 0x10051f70, 0x10053000, 0x10053240, 0x10053490, 0x100535f0, 0x10146b40, 0x10146d20, 0x10146d50, 0x101a2500, 0x101a2522
 */

void __thiscall sub_10146E00(_DWORD *this, int a2, char *a3, unsigned int a4, int *a5)
{
  int v5; // edx
  int v7; // ecx
  int v8; // ecx
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  char *v14; // eax
  _DWORD *v15; // ecx
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // ecx
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // eax
  char *v22; // ecx
  int v23; // ebx
  _DWORD *v24; // [esp-Ch] [ebp-A0h]
  int v25; // [esp-8h] [ebp-9Ch]
  int v26; // [esp-8h] [ebp-9Ch]
  int v27; // [esp+0h] [ebp-94h] BYREF
  _DWORD v28[2]; // [esp+Ch] [ebp-88h] BYREF
  void *v29[26]; // [esp+14h] [ebp-80h] BYREF
  char *v30; // [esp+7Ch] [ebp-18h]
  _DWORD *v31; // [esp+80h] [ebp-14h]
  int *v32; // [esp+84h] [ebp-10h]
  int v33; // [esp+90h] [ebp-4h]
  int v34; // [esp+A4h] [ebp+10h]
  char *v35; // [esp+A8h] [ebp+14h]

  v5 = a5[1];
  v7 = *a5;
  v32 = &v27;
  v28[0] = v7;
  v31 = this;
  v28[1] = v5;
  CollisionInfo::CollisionInfo((CollisionInfo *)v29, (const struct CollisionInfo *)(a5 + 2));
  v8 = this[1];
  v9 = 0;
  v33 = 0;
  if ( v8 )
    v9 = (this[3] - v8) / 112;
  if ( a4 )
  {
    if ( v8 )
      v10 = (this[2] - this[1]) / 112;
    else
      v10 = 0;
    if ( 38347922 - v10 < a4 )
      sub_10051DF0();
    if ( this[1] )
      v11 = (this[2] - this[1]) / 112;
    else
      v11 = 0;
    if ( v9 >= a4 + v11 )
    {
      v22 = (char *)this[2];
      v30 = v22;
      if ( (v22 - a3) / 112 >= a4 )
      {
        v23 = 112 * a4;
        v34 = (int)&v22[-112 * a4];
        this[2] = sub_10053490(&v22[-v23], v22, v22);
        sub_10146D20((int)a3, v34, (int)v30);
        sub_10146B40((int)a3, (int)&a3[v23], v28);
      }
      else
      {
        sub_10053490(a3, v22, &a3[112 * a4]);
        v25 = a4 - (this[2] - (int)a3) / 112;
        v24 = (_DWORD *)this[2];
        LOBYTE(v33) = 3;
        sub_10146D50(v24, v25, v28);
        this[2] += 112 * a4;
        v26 = this[2] - 112 * a4;
        v33 = 0;
        sub_10146B40((int)a3, v26, v28);
      }
    }
    else
    {
      if ( 38347922 - (v9 >> 1) >= v9 )
        v12 = (v9 >> 1) + v9;
      else
        v12 = 0;
      if ( this[1] )
        v13 = (this[2] - this[1]) / 112;
      else
        v13 = 0;
      if ( v12 < a4 + v13 )
        v12 = a4 + sub_10051D40(this);
      v14 = (char *)sub_10051F70(v12);
      v15 = (_DWORD *)this[1];
      LOBYTE(v30) = 0;
      v35 = v14;
      LOBYTE(v33) = 1;
      v16 = sub_10053000(v15, a3, v14);
      v17 = sub_10146D50(v16, a4, v28);
      v18 = (_DWORD *)this[2];
      LOBYTE(v30) = 0;
      sub_10053000(a3, v18, v17);
      v19 = this[1];
      if ( v19 )
        v19 = (this[2] - v19) / 112;
      v20 = v19 + a4;
      v21 = this[1];
      if ( v21 )
      {
        sub_10053240(v21, this[2]);
        operator delete((void *)this[1]);
      }
      this[3] = &v35[112 * v12];
      this[2] = &v35[112 * v20];
      this[1] = v35;
    }
  }
  CollisionInfo::~CollisionInfo(v29);
}
