/*
 * func-name: sub_101C4470
 * func-address: 0x101c4470
 * callers: 0x1001117b
 * callees: 0x1000477d, 0x1000854e, 0x1000bc30, 0x1000f583, 0x10017e4f, 0x102c9d50
 */

int *__thiscall sub_101C4470(int *this, int *a2)
{
  int v3; // ebx
  unsigned int v4; // edx
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // eax
  int v11; // ebx
  int v12; // ecx
  int v13; // eax

  if ( this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) >> 4) == 0 )
  {
    sub_1000854E();
    return this;
  }
  v6 = this[1];
  if ( v6 )
    v7 = (this[2] - v6) >> 4;
  else
    v7 = 0;
  if ( v4 <= v7 )
  {
    sub_10017E4F(v3, a2[2], v6);
    v8 = a2[1];
    if ( v8 )
      this[2] = this[1] + 16 * ((a2[2] - v8) >> 4);
    else
      this[2] = this[1];
    return this;
  }
  if ( v6 )
    v9 = (this[3] - v6) >> 4;
  else
    v9 = 0;
  if ( v4 > v9 )
  {
    if ( v6 )
      operator delete((void *)this[1]);
    v12 = a2[1];
    if ( v12 )
      v13 = (a2[2] - v12) >> 4;
    else
      v13 = 0;
    if ( (unsigned __int8)sub_1000F583(v13) )
      this[2] = sub_1000BC30(a2[1], a2[2], this[1]);
    return this;
  }
  if ( v6 )
    v10 = (this[2] - v6) >> 4;
  else
    v10 = 0;
  v11 = v3 + 16 * v10;
  sub_1000477D(a2[1], v11, this[1]);
  this[2] = sub_1000BC30(v11, a2[2], this[2]);
  return this;
}
