/*
 * func-name: sub_10127E00
 * func-address: 0x10127e00
 * callers: 0x1001987b
 * callees: 0x10003d69, 0x1000ad3a, 0x1000b7c1, 0x1000fc1d, 0x1001380e, 0x102c9d50
 */

int *__thiscall sub_10127E00(int *this, int *a2)
{
  int v3; // edx
  unsigned int v4; // ebx
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // ecx
  int v15; // eax

  if ( this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) >> 4) == 0 )
  {
    sub_10003D69();
    return this;
  }
  v6 = this[1];
  if ( v6 )
    v7 = (this[2] - v6) >> 4;
  else
    v7 = 0;
  if ( v4 <= v7 )
  {
    v8 = sub_1000FC1D(v3, a2[2], this[1]);
    sub_1001380E(v8, this[2]);
    v9 = a2[1];
    if ( v9 )
      v10 = this[1] + 16 * ((a2[2] - v9) >> 4);
    else
      v10 = this[1];
    this[2] = v10;
    return this;
  }
  if ( v6 )
    v11 = (this[3] - v6) >> 4;
  else
    v11 = 0;
  if ( v4 > v11 )
  {
    if ( v6 )
    {
      sub_1001380E(v6, this[2]);
      operator delete((void *)this[1]);
    }
    v14 = a2[1];
    if ( v14 )
      v15 = (a2[2] - v14) >> 4;
    else
      v15 = 0;
    if ( (unsigned __int8)sub_1000B7C1(v15) )
      this[2] = sub_1000AD3A(a2[1], a2[2], this[1]);
    return this;
  }
  if ( v6 )
    v12 = (this[2] - v6) >> 4;
  else
    v12 = 0;
  v13 = v3 + 16 * v12;
  sub_1000FC1D(v3, v13, this[1]);
  this[2] = sub_1000AD3A(v13, a2[2], this[2]);
  return this;
}
