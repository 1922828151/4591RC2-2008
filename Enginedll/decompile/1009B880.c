/*
 * func-name: sub_1009B880
 * func-address: 0x1009b880
 * callers: 0x1009bb80
 * callees: 0x10051d20, 0x10099570, 0x100995f0, 0x100999b0, 0x1009abb0, 0x1009afc0, 0x1009b080, 0x1009b4f0, 0x1009b6b0, 0x1009b790, 0x1009b850, 0x101a2500, 0x101a2522
 */

int __thiscall sub_1009B880(_DWORD *this, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // ebx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  void *v12; // eax
  int v13; // ecx
  CREControl *v14; // eax
  char *v15; // eax
  char *v16; // ebx
  int v17; // eax
  unsigned int v18; // ecx
  void *v19; // eax
  char *v20; // ecx
  int v21; // ebx
  CREControl *v23; // [esp-Ch] [ebp-9Ch]
  int v24; // [esp-8h] [ebp-98h]
  int v25; // [esp-8h] [ebp-98h]
  int v26; // [esp+0h] [ebp-90h] BYREF
  char v27[108]; // [esp+Ch] [ebp-84h] BYREF
  _DWORD *v28; // [esp+78h] [ebp-18h]
  void *v29; // [esp+7Ch] [ebp-14h]
  int *v30; // [esp+80h] [ebp-10h]
  int v31; // [esp+8Ch] [ebp-4h]
  unsigned int v32; // [esp+A0h] [ebp+10h]

  v30 = &v26;
  v28 = this;
  sub_1009AFC0(v27, a5);
  v6 = this[1];
  v7 = 0;
  v31 = 0;
  if ( v6 )
    v7 = (this[3] - v6) / 104;
  if ( a4 )
  {
    if ( v6 )
      v8 = (this[2] - v6) / 104;
    else
      v8 = 0;
    if ( 41297762 - v8 < a4 )
      sub_10099570();
    if ( v6 )
      v9 = (this[2] - v6) / 104;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v21 = this[2];
      if ( (v21 - a3) / 104 >= a4 )
      {
        this[2] = sub_1009B6B0(v21 - 104 * a4, v21, (CREControl *)this[2]);
        sub_1009B850(a3, v21 - 104 * a4, v21);
        sub_1009B790(a3, 104 * a4 + a3, (int)v27);
      }
      else
      {
        sub_1009B6B0(a3, v21, (CREControl *)(a3 + 104 * a4));
        v24 = a4 - (this[2] - a3) / 104;
        v23 = (CREControl *)this[2];
        LOBYTE(v31) = 3;
        sub_1009B4F0(v23, v24, (int)v27);
        this[2] += 104 * a4;
        v25 = this[2] - 104 * a4;
        v31 = 0;
        sub_1009B790(a3, v25, (int)v27);
      }
    }
    else
    {
      if ( 41297762 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
        v11 = (this[2] - v6) / 104;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_10051D20(this);
      v12 = sub_100995F0(v10);
      v13 = this[1];
      v27[104] = 0;
      v29 = v12;
      LOBYTE(v31) = 1;
      v14 = sub_1009B080(v13, a3, (CREControl *)v12);
      v15 = sub_1009B4F0(v14, a4, (int)v27);
      sub_1009B080(a3, this[2], (CREControl *)v15);
      v16 = (char *)this[1];
      v17 = 0;
      v31 = 0;
      if ( v16 )
        v17 = (this[2] - (int)v16) / 104;
      v18 = v17 + a4;
      v32 = v17 + a4;
      if ( v16 )
      {
        sub_1009ABB0(v16, (char *)this[2]);
        operator delete((void *)this[1]);
        v18 = v32;
      }
      v19 = v29;
      v20 = (char *)v29 + 104 * v18;
      this[3] = (char *)v29 + 104 * v10;
      this[2] = v20;
      this[1] = v19;
    }
  }
  v31 = -1;
  return sub_100999B0(v27);
}
