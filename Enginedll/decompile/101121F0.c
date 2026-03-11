/*
 * func-name: sub_101121F0
 * func-address: 0x101121f0
 * callers: 0x1010e120, 0x10115f20, 0x10115f70, 0x10116020
 * callees: 0x1010ec00, 0x1010f9f0, 0x1010fce0, 0x10110410, 0x10110580, 0x101118f0, 0x101a2500
 */

int *__thiscall sub_101121F0(int *this, int *a2)
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
  unsigned int v15; // eax

  if ( this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) >> 6) == 0 )
  {
    sub_101118F0(this);
    return this;
  }
  v6 = this[1];
  if ( v6 )
    v7 = (this[2] - v6) >> 6;
  else
    v7 = 0;
  if ( v4 <= v7 )
  {
    v8 = sub_1010F9F0(v3, a2[2], this[1]);
    sub_1010FCE0(v8, this[2]);
    v9 = a2[1];
    if ( v9 )
      v10 = this[1] + ((a2[2] - v9) >> 6 << 6);
    else
      v10 = this[1];
    this[2] = v10;
    return this;
  }
  if ( v6 )
    v11 = (this[3] - v6) >> 6;
  else
    v11 = 0;
  if ( v4 > v11 )
  {
    if ( v6 )
    {
      sub_10110580(v6, this[2]);
      operator delete((void *)this[1]);
    }
    v14 = a2[1];
    if ( v14 )
      v15 = (a2[2] - v14) >> 6;
    else
      v15 = 0;
    if ( sub_1010EC00(this, v15) )
      this[2] = sub_10110410(a2[1], a2[2], this[1]);
    return this;
  }
  if ( v6 )
    v12 = (this[2] - v6) >> 6;
  else
    v12 = 0;
  v13 = v3 + (v12 << 6);
  sub_1010F9F0(v3, v13, this[1]);
  this[2] = sub_10110410(v13, a2[2], this[2]);
  return this;
}
