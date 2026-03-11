/*
 * func-name: sub_10059430
 * func-address: 0x10059430
 * callers: 0x1000bdbb
 * callees: 0x100027c5, 0x10006cdf, 0x1000abf5, 0x10013327, 0x1001354d, 0x102c9d50
 */

int *__thiscall sub_10059430(int *this, int *a2)
{
  int v4; // ebp
  unsigned int v5; // ecx
  int v7; // edi
  unsigned int v8; // eax
  int v9; // eax
  int v10; // edx
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // [esp+Ch] [ebp+4h]

  if ( this == a2 )
    return this;
  v4 = a2[1];
  if ( !v4 || (v5 = (a2[2] - v4) / 20) == 0 )
  {
    sub_10006CDF();
    return this;
  }
  v7 = this[1];
  if ( v7 )
    v8 = (this[2] - v7) / 20;
  else
    v8 = 0;
  if ( v5 > v8 )
  {
    if ( v7 )
      v11 = (this[3] - v7) / 20;
    else
      v11 = 0;
    if ( v5 > v11 )
    {
      if ( v7 )
        operator delete((void *)this[1]);
      v14 = sub_1000ABF5();
      if ( !(unsigned __int8)sub_1001354D(v14) )
        return this;
      v12 = this[1];
      v13 = a2[1];
    }
    else
    {
      v15 = v4 + 20 * sub_1000ABF5();
      sub_10013327(v4, v15, v7);
      v12 = this[2];
      v13 = v15;
    }
    this[2] = sub_100027C5(v13, a2[2], v12);
    return this;
  }
  sub_10013327(v4, a2[2], this[1]);
  v9 = a2[1];
  if ( v9 )
    v10 = this[1] + 20 * ((a2[2] - v9) / 20);
  else
    v10 = this[1];
  this[2] = v10;
  return this;
}
