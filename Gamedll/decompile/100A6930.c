/*
 * func-name: sub_100A6930
 * func-address: 0x100a6930
 * callers: 0x10010497
 * callees: 0x1000786a, 0x10009854, 0x1000a056, 0x10014826, 0x1001666c, 0x10019038, 0x102c9d50
 */

int *__thiscall sub_100A6930(int *this, int *a2)
{
  int v3; // edx
  unsigned int v4; // ebx
  void *v6; // ecx
  unsigned int v7; // eax
  void *v8; // eax
  int v9; // eax
  int v10; // edi
  unsigned int v11; // eax
  int v12; // eax
  void *v13; // ebx
  int v14; // ecx
  int v15; // eax

  if ( this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) >> 6) == 0 )
  {
    sub_10019038();
    return this;
  }
  v6 = (void *)this[1];
  if ( v6 )
    v7 = (this[2] - (int)v6) >> 6;
  else
    v7 = 0;
  if ( v4 <= v7 )
  {
    v8 = (void *)sub_1000786A(v3, a2[2], this[1]);
    sub_1001666C(v8, this[2]);
    v9 = a2[1];
    if ( v9 )
      v10 = this[1] + ((a2[2] - v9) >> 6 << 6);
    else
      v10 = this[1];
    this[2] = v10;
    return this;
  }
  if ( v6 )
    v11 = (this[3] - (int)v6) >> 6;
  else
    v11 = 0;
  if ( v4 > v11 )
  {
    if ( v6 )
    {
      sub_10009854(v6, this[2]);
      operator delete((void *)this[1]);
    }
    v14 = a2[1];
    if ( v14 )
      v15 = (a2[2] - v14) >> 6;
    else
      v15 = 0;
    if ( (unsigned __int8)sub_1000A056(v15) )
      this[2] = sub_10014826((void *)a2[1], a2[2], this[1]);
    return this;
  }
  if ( v6 )
    v12 = (this[2] - (int)v6) >> 6;
  else
    v12 = 0;
  v13 = (void *)(v3 + (v12 << 6));
  sub_1000786A(v3, (int)v13, this[1]);
  this[2] = sub_10014826(v13, a2[2], this[2]);
  return this;
}
