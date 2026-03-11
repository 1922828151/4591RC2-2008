/*
 * func-name: sub_1010EF10
 * func-address: 0x1010ef10
 * callers: 0x100141c8
 * callees: 0x10006a37, 0x1000cea5, 0x1000d49a, 0x1000ffab, 0x10010e74, 0x10015230, 0x102c9d50
 */

int *__thiscall sub_1010EF10(int *this, int *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  void *v11; // edi
  int v12; // eax

  if ( this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) / 84) == 0 )
  {
    sub_10015230();
    return this;
  }
  v6 = this[1];
  if ( v6 )
    v7 = (this[2] - v6) / 84;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (this[3] - v6) / 84;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = (void *)(a2[1] + 84 * sub_10006A37());
      sub_1000D49A(a2[1], (int)v11, v6);
      this[2] = sub_1000FFAB(v11, a2[2], this[2]);
      return this;
    }
    if ( v6 )
    {
      sub_1000CEA5(v6, this[2]);
      operator delete((void *)this[1]);
    }
    v12 = sub_10006A37();
    if ( (unsigned __int8)sub_10010E74(v12) )
      this[2] = sub_1000FFAB((void *)a2[1], a2[2], this[1]);
    return this;
  }
  v8 = sub_1000D49A(a2[1], a2[2], this[1]);
  sub_1000CEA5(v8, this[2]);
  v9 = a2[1];
  if ( v9 )
    this[2] = this[1] + 84 * ((a2[2] - v9) / 84);
  else
    this[2] = this[1];
  return this;
}
