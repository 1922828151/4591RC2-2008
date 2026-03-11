/*
 * func-name: sub_1002EE00
 * func-address: 0x1002ee00
 * callers: 0x1002fea0
 * callees: 0x1001a3d0, 0x1001d490, 0x1001eb10, 0x10023d60, 0x10026dd0, 0x1002c8f0, 0x101a2500
 */

int *__thiscall sub_1002EE00(int *this, int *a2)
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
  if ( !v3 || (v4 = (a2[2] - v3) / 52) == 0 )
  {
    sub_1002C8F0(this);
    return this;
  }
  v6 = this[1];
  if ( v6 )
    v7 = (this[2] - v6) / 52;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (this[3] - v6) / 52;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = a2[1] + 52 * sub_1001A3D0(this);
      sub_1001EB10(a2[1], v11, v6);
      this[2] = sub_10023D60(v11, a2[2], this[2]);
      return this;
    }
    if ( v6 )
    {
      sub_10026DD0(v6, this[2]);
      operator delete((void *)this[1]);
    }
    v12 = sub_1001A3D0(a2);
    if ( sub_1001D490(this, v12) )
      this[2] = sub_10023D60(a2[1], a2[2], this[1]);
    return this;
  }
  v8 = sub_1001EB10(a2[1], a2[2], this[1]);
  sub_10026DD0(v8, this[2]);
  v9 = a2[1];
  if ( v9 )
    this[2] = this[1] + 52 * ((a2[2] - v9) / 52);
  else
    this[2] = this[1];
  return this;
}
