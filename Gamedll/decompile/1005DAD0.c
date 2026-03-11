/*
 * func-name: sub_1005DAD0
 * func-address: 0x1005dad0
 * callers: 0x100097be
 * callees: 0x10004ff7, 0x10006253, 0x1000dabc, 0x10011446, 0x1001144b, 0x10012a7b, 0x10019ca4, 0x102c9d50
 */

int *__thiscall sub_1005DAD0(int *this, int *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edx
  unsigned int v11; // eax
  void *v12; // edi
  int v13; // eax

  if ( this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) / 80) == 0 )
  {
    sub_10011446();
    return this;
  }
  v6 = this[1];
  if ( v6 )
    v7 = (this[2] - v6) / 80;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v11 = (this[3] - v6) / 80;
    else
      v11 = 0;
    if ( v4 <= v11 )
    {
      v12 = (void *)(a2[1] + 80 * sub_1001144B());
      sub_10006253(a2[1], (int)v12, v6);
      this[2] = sub_10019CA4(v12, a2[2], this[2]);
      return this;
    }
    if ( v6 )
    {
      sub_10012A7B(v6, this[2]);
      operator delete((void *)this[1]);
    }
    v13 = sub_1001144B();
    if ( (unsigned __int8)sub_10004FF7(v13) )
      this[2] = sub_10019CA4((void *)a2[1], a2[2], this[1]);
    return this;
  }
  v8 = sub_1000DABC(a2[1], a2[2], v6);
  sub_10012A7B(v8, this[2]);
  v9 = a2[1];
  if ( v9 )
    v10 = this[1] + 80 * ((a2[2] - v9) / 80);
  else
    v10 = this[1];
  this[2] = v10;
  return this;
}
