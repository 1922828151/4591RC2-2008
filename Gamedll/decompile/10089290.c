/*
 * func-name: sub_10089290
 * func-address: 0x10089290
 * callers: 0x10010695
 * callees: 0x1000aa79, 0x1000b0e1, 0x1000f38a, 0x1001397b, 0x10018291, 0x102c9d50
 */

int *__thiscall sub_10089290(int *this, int *a2)
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
  if ( !v4 || (v5 = (a2[2] - v4) / 24) == 0 )
  {
    sub_1000AA79();
    return this;
  }
  v7 = this[1];
  if ( v7 )
    v8 = (this[2] - v7) / 24;
  else
    v8 = 0;
  if ( v5 > v8 )
  {
    if ( v7 )
      v11 = (this[3] - v7) / 24;
    else
      v11 = 0;
    if ( v5 > v11 )
    {
      if ( v7 )
        operator delete((void *)this[1]);
      v14 = sub_10018291();
      if ( !(unsigned __int8)sub_1000B0E1(v14) )
        return this;
      v12 = this[1];
      v13 = a2[1];
    }
    else
    {
      v15 = v4 + 24 * sub_10018291();
      sub_1001397B(v4, v15, v7);
      v12 = this[2];
      v13 = v15;
    }
    this[2] = sub_1000F38A(v13, a2[2], v12);
    return this;
  }
  sub_1001397B(v4, a2[2], this[1]);
  v9 = a2[1];
  if ( v9 )
    v10 = this[1] + 24 * ((a2[2] - v9) / 24);
  else
    v10 = this[1];
  this[2] = v10;
  return this;
}
