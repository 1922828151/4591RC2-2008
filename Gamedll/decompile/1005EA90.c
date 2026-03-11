/*
 * func-name: sub_1005EA90
 * func-address: 0x1005ea90
 * callers: 0x1001327d
 * callees: 0x1000a501, 0x1000afc9, 0x1000c27a, 0x10010870, 0x10013da9, 0x10015d39, 0x100192bd, 0x102c9d50
 */

int *__thiscall sub_1005EA90(int *this, int *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v6; // edi
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  void *v11; // ebx
  int v12; // eax

  if ( this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) / 120) == 0 )
  {
    sub_10010870();
    return this;
  }
  v6 = this[1];
  if ( v6 )
    v7 = (this[2] - v6) / 120;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (this[3] - v6) / 120;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = (void *)(a2[1] + 120 * sub_1000AFC9());
      sub_10015D39(a2[1], (int)v11, v6);
      this[2] = sub_1000A501(v11, a2[2], this[2]);
      return this;
    }
    if ( v6 )
    {
      sub_10013DA9(v6, this[2]);
      operator delete((void *)this[1]);
    }
    v12 = sub_1000AFC9();
    if ( (unsigned __int8)sub_1000C27A(v12) )
      this[2] = sub_1000A501((void *)a2[1], a2[2], this[1]);
    return this;
  }
  v8 = sub_100192BD(a2[1], a2[2], v6);
  sub_10013DA9(v8, this[2]);
  v9 = a2[1];
  if ( v9 )
    v9 = (a2[2] - v9) / 120;
  this[2] = this[1] + 120 * v9;
  return this;
}
