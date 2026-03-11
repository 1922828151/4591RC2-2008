/*
 * func-name: sub_100A5C80
 * func-address: 0x100a5c80
 * callers: 0x1000c2d9
 * callees: 0x10001d3e, 0x10004061, 0x1000796e, 0x1000be15, 0x10015735, 0x10019bff, 0x102c9d50
 */

int *__thiscall sub_100A5C80(int *this, int *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v6; // edi
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  int v10; // ebx
  int v11; // eax

  if ( this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) / 56) == 0 )
  {
    sub_1000BE15();
    return this;
  }
  v6 = this[1];
  if ( v6 )
    v7 = (this[2] - v6) / 56;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v9 = (this[3] - v6) / 56;
    else
      v9 = 0;
    if ( v4 <= v9 )
    {
      v10 = a2[1] + 56 * sub_10019BFF();
      sub_10015735(a2[1], v10, v6);
      this[2] = sub_1000796E(v10, a2[2], this[2]);
      return this;
    }
    if ( v6 )
      operator delete((void *)this[1]);
    v11 = sub_10019BFF();
    if ( (unsigned __int8)sub_10004061(v11) )
      this[2] = sub_1000796E(a2[1], a2[2], this[1]);
    return this;
  }
  sub_10001D3E(a2[1], a2[2], v6);
  v8 = a2[1];
  if ( v8 )
    this[2] = this[1] + 56 * ((a2[2] - v8) / 56);
  else
    this[2] = this[1];
  return this;
}
