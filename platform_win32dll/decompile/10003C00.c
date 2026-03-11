/*
 * func-name: sub_10003C00
 * func-address: 0x10003c00
 * callers: 0x10003f40, 0x100065f0
 * callees: 0x10003640, 0x10003670, 0x10003760, 0x10003850, 0x100038e0, 0x100039c0, 0x10003a90, 0x10003ac0, 0x10003b40, 0x10019750, 0x10019870, 0x10019876
 */

int __thiscall sub_10003C00(_DWORD *this, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  void *v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // ebx
  int v16; // eax
  int v17; // edi
  char *v18; // eax
  char *v19; // ecx
  unsigned int v20; // eax
  int v21; // edi
  int v23; // [esp-Ch] [ebp-60h]
  int v24; // [esp-8h] [ebp-5Ch]
  int v25; // [esp-8h] [ebp-5Ch]
  int v26[5]; // [esp+0h] [ebp-54h] BYREF
  void *v27; // [esp+14h] [ebp-40h]
  char *v28; // [esp+18h] [ebp-3Ch]
  unsigned int v29; // [esp+1Ch] [ebp-38h]
  unsigned int v30; // [esp+20h] [ebp-34h]
  _BYTE v31[28]; // [esp+24h] [ebp-30h] BYREF
  int *v32; // [esp+44h] [ebp-10h]
  int v33; // [esp+50h] [ebp-4h]

  v32 = v26;
  v26[4] = (int)this;
  std::string::string(v31, a5);
  v6 = this[1];
  v7 = 0;
  v33 = 0;
  if ( v6 )
    v7 = (this[3] - v6) / 28;
  v30 = v7;
  if ( a4 )
  {
    if ( v6 )
      v8 = (this[2] - v6) / 28;
    else
      v8 = 0;
    if ( 153391689 - v8 < a4 )
      sub_10003670(v26[0], v26[1]);
    if ( v6 )
      v9 = (this[2] - v6) / 28;
    else
      v9 = 0;
    if ( v30 >= a4 + v9 )
    {
      v19 = (char *)this[2];
      v28 = &v19[-a3];
      v27 = v19;
      if ( (int)&v19[-a3] / 28 >= a4 )
      {
        v21 = (int)&v19[-28 * a4];
        v29 = 28 * a4;
        this[2] = sub_10003A90(v21, (int)v19, (int)v19);
        sub_100039C0(a3, v21, (int)v27);
        sub_10003850(a3, a3 + v29, (int)v31);
      }
      else
      {
        v29 = 28 * a4;
        sub_10003A90(a3, (int)v19, a3 + 28 * a4);
        v24 = a4 - (this[2] - a3) / 28;
        v23 = this[2];
        LOBYTE(v33) = 3;
        sub_10003B40(v23, v24, (int)v31);
        v20 = v29;
        this[2] += v29;
        v25 = this[2] - v20;
        v33 = 0;
        sub_10003850(a3, v25, (int)v31);
      }
    }
    else
    {
      if ( 153391689 - (v30 >> 1) >= v30 )
        v30 += v30 >> 1;
      else
        v30 = 0;
      if ( v6 )
        v10 = (this[2] - v6) / 28;
      else
        v10 = 0;
      if ( v30 < a4 + v10 )
        v30 = a4 + sub_10003640(this);
      v11 = sub_10003760(v30);
      v12 = this[1];
      LOBYTE(v28) = 0;
      v27 = v11;
      v29 = (unsigned int)v11;
      LOBYTE(v33) = 1;
      v29 = sub_100038E0(v12, a3, (int)v11);
      v13 = sub_10003B40(v29, a4, (int)v31);
      v14 = this[2];
      LOBYTE(v28) = 0;
      v29 = v13;
      sub_100038E0(a3, v14, v13);
      v15 = this[1];
      v16 = 0;
      v33 = 0;
      if ( v15 )
        v16 = (this[2] - v15) / 28;
      v17 = v16 + a4;
      if ( v15 )
      {
        sub_10003AC0(v15, this[2]);
        operator delete((void *)this[1]);
      }
      v18 = (char *)v27;
      this[3] = (char *)v27 + 28 * v30;
      this[2] = &v18[28 * v17];
      this[1] = v18;
    }
  }
  v33 = -1;
  return std::string::~string(v31);
}
