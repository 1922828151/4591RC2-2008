/*
 * func-name: sub_1003CAC0
 * func-address: 0x1003cac0
 * callers: 0x1003cd10
 * callees: 0x1003b480, 0x1003c010, 0x1003c060, 0x1003c660, 0x1003c8b0, 0x1003c980, 0x100ec790, 0x1015cb00, 0x101a2500
 */

int *__thiscall sub_1003CAC0(int *this, int *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // edi
  unsigned int v12; // eax

  if ( this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) / 80) == 0 )
  {
    sub_1003C980(this);
    return this;
  }
  v6 = this[1];
  if ( v6 )
    v7 = (this[2] - v6) / 80;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (this[3] - v6) / 80;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = a2[1] + 80 * sub_100EC790(this);
      sub_1003C660(a2[1], v11, v6);
      this[2] = sub_1015CB00(v11, a2[2], this[2]);
      return this;
    }
    if ( v6 )
    {
      sub_1003C8B0(v6, this[2]);
      operator delete((void *)this[1]);
    }
    v12 = sub_100EC790(a2);
    if ( sub_1003B480(this, v12) )
      this[2] = sub_1015CB00(a2[1], a2[2], this[1]);
    return this;
  }
  v8 = sub_1003C010(a2[1], a2[2], v6);
  sub_1003C060(v8, this[2]);
  v9 = a2[1];
  if ( v9 )
    this[2] = this[1] + 80 * ((a2[2] - v9) / 80);
  else
    this[2] = this[1];
  return this;
}
