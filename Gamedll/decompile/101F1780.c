/*
 * func-name: sub_101F1780
 * func-address: 0x101f1780
 * callers: 0x1000f2cc
 * callees: 0x1001341c, 0x10016ed2, 0x100198df, 0x10019f97, 0x102c9d50
 */

int *__thiscall sub_101F1780(int *this, int *a2)
{
  int v3; // ebx
  unsigned int v4; // edx
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // ecx
  int v12; // ebx
  int v13; // ecx
  int v14; // eax

  if ( this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) >> 3) == 0 )
  {
    sub_100198DF();
    return this;
  }
  v6 = this[1];
  if ( v6 )
    v7 = (this[2] - v6) >> 3;
  else
    v7 = 0;
  if ( v4 <= v7 )
  {
    sub_10019F97(v3, a2[2], this[1]);
    v8 = a2[1];
    if ( v8 )
      v9 = this[1] + 8 * ((a2[2] - v8) >> 3);
    else
      v9 = this[1];
    this[2] = v9;
    return this;
  }
  if ( v6 )
    v10 = (this[3] - v6) >> 3;
  else
    v10 = 0;
  if ( v4 > v10 )
  {
    if ( v6 )
      operator delete((void *)this[1]);
    v13 = a2[1];
    if ( v13 )
      v14 = (a2[2] - v13) >> 3;
    else
      v14 = 0;
    if ( (unsigned __int8)sub_10016ED2(v14) )
      this[2] = sub_1001341C(a2[1], a2[2], this[1]);
    return this;
  }
  if ( v6 )
    v11 = (this[2] - v6) >> 3;
  else
    v11 = 0;
  v12 = v3 + 8 * v11;
  sub_10019F97(a2[1], v12, this[1]);
  this[2] = sub_1001341C(v12, a2[2], this[2]);
  return this;
}
