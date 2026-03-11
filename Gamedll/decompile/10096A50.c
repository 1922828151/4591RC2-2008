/*
 * func-name: sub_10096A50
 * func-address: 0x10096a50
 * callers: 0x100022fc
 * callees: 0x10002c93, 0x10007c52, 0x100083d7, 0x10008a8f, 0x1000f9d4, 0x10013534, 0x102c9d50
 */

int *__thiscall sub_10096A50(int *this, int *a2)
{
  int v3; // edx
  unsigned int v4; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // ecx
  int v12; // ecx
  int v13; // ebx
  int v14; // ecx
  int v15; // eax

  if ( this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) >> 3) == 0 )
  {
    sub_10013534();
    return this;
  }
  v6 = this[1];
  if ( v6 )
    v7 = (this[2] - v6) >> 3;
  else
    v7 = 0;
  if ( v4 <= v7 )
  {
    v8 = sub_10007C52(v3, a2[2], this[1]);
    sub_1000F9D4(v8, this[2]);
    v9 = a2[1];
    if ( v9 )
      v10 = this[1] + 8 * ((a2[2] - v9) >> 3);
    else
      v10 = this[1];
    this[2] = v10;
    return this;
  }
  if ( v6 )
    v11 = (this[3] - v6) >> 3;
  else
    v11 = 0;
  if ( v4 > v11 )
  {
    if ( v6 )
    {
      sub_10002C93(v6, this[2]);
      operator delete((void *)this[1]);
    }
    v14 = a2[1];
    if ( v14 )
      v15 = (a2[2] - v14) >> 3;
    else
      v15 = 0;
    if ( (unsigned __int8)sub_10008A8F(v15) )
      this[2] = sub_100083D7(a2[1], a2[2], this[1]);
    return this;
  }
  if ( v6 )
    v12 = (this[2] - v6) >> 3;
  else
    v12 = 0;
  v13 = v3 + 8 * v12;
  sub_10007C52(v3, v13, this[1]);
  this[2] = sub_100083D7(v13, a2[2], this[2]);
  return this;
}
