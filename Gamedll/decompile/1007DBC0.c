/*
 * func-name: sub_1007DBC0
 * func-address: 0x1007dbc0
 * callers: 0x1000d396
 * callees: 0x10009e3a, 0x1000c8ab, 0x1000fb0a, 0x10016306, 0x1001772e, 0x100196dc, 0x102c9d50
 */

int *__thiscall sub_1007DBC0(int *this, int *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  int v10; // edi
  int v11; // eax

  if ( this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) / 48) == 0 )
  {
    sub_10016306();
    return this;
  }
  v6 = this[1];
  if ( v6 )
    v7 = (this[2] - v6) / 48;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v9 = (this[3] - v6) / 48;
    else
      v9 = 0;
    if ( v4 <= v9 )
    {
      v10 = a2[1] + 48 * sub_10009E3A();
      sub_1000FB0A(a2[1], v10, v6);
      this[2] = sub_1001772E(v10, a2[2], this[2]);
      return this;
    }
    if ( v6 )
      operator delete((void *)this[1]);
    v11 = sub_10009E3A();
    if ( (unsigned __int8)sub_1000C8AB(v11) )
      this[2] = sub_1001772E(a2[1], a2[2], this[1]);
    return this;
  }
  sub_100196DC(a2[1], a2[2], v6);
  v8 = a2[1];
  if ( v8 )
    this[2] = this[1] + 48 * ((a2[2] - v8) / 48);
  else
    this[2] = this[1];
  return this;
}
