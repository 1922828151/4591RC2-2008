/*
 * func-name: sub_102C6DA0
 * func-address: 0x102c6da0
 * callers: 0x102c6e70
 * callees: 0x102c65b0, 0x102c6ae0, 0x102c6cd0
 */

void __thiscall sub_102C6DA0(int *this, int *a2, _DWORD *a3, int a4, char *a5, char a6)
{
  int *v6; // ebx
  char *v7; // ebp
  int v9; // eax
  _DWORD *v10; // edi
  int v11; // ebx
  unsigned int v12; // edi
  bool v13; // cc
  _DWORD *v14[3]; // [esp-1Ch] [ebp-38h] BYREF
  int v15; // [esp-10h] [ebp-2Ch] BYREF
  _DWORD *v16; // [esp-Ch] [ebp-28h]
  int v17; // [esp-8h] [ebp-24h]
  char *v18; // [esp-4h] [ebp-20h]
  int v19[3]; // [esp+10h] [ebp-Ch] BYREF

  v6 = a2;
  v7 = a5;
  v18 = a5;
  v15 = 0;
  v16 = a3;
  v17 = a4;
  if ( !a2 )
    _invalid_parameter_noinfo();
  v9 = sub_102C6CD0(this, v6, (int)v16, v17, (unsigned int)v18);
  v10 = (_DWORD *)this[2];
  v11 = v9;
  if ( (unsigned int)v10 > this[3] )
    _invalid_parameter_noinfo();
  a3 = v10;
  a4 = 0;
  if ( !this )
    _invalid_parameter_noinfo();
  v12 = this[2];
  v13 = v12 <= this[3];
  a2 = this;
  if ( !v13 )
    _invalid_parameter_noinfo();
  v19[1] = v12;
  v19[2] = 0;
  if ( !this )
    _invalid_parameter_noinfo();
  v18 = &a6;
  v19[0] = (int)this;
  sub_102C65B0((int *)&a2, &v15, (int)&v7[v11]);
  sub_102C65B0(v19, v14, v11);
  sub_102C6AE0(v14[0], v14[1], (unsigned int)v14[2], v15, v16, v17, v18);
}
