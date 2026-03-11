/*
 * func-name: sub_1009DB70
 * func-address: 0x1009db70
 * callers: 0x1000330f
 * callees: 0x100058cb, 0x1000b9fb, 0x100129d1, 0x1001756c, 0x102c9d50
 */

int *__thiscall sub_1009DB70(int *this, int *a2)
{
  int v3; // ebx
  unsigned int v4; // edx
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // eax
  int v11; // ebx
  int v12; // ecx
  int v13; // eax

  if ( this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) >> 6) == 0 )
  {
    sub_100129D1();
    return this;
  }
  v6 = this[1];
  if ( v6 )
    v7 = (this[2] - v6) >> 6;
  else
    v7 = 0;
  if ( v4 <= v7 )
  {
    sub_1000B9FB(v3, a2[2], this[1]);
    v8 = a2[1];
    if ( v8 )
      this[2] = this[1] + ((a2[2] - v8) >> 6 << 6);
    else
      this[2] = this[1];
    return this;
  }
  if ( v6 )
    v9 = (this[3] - v6) >> 6;
  else
    v9 = 0;
  if ( v4 > v9 )
  {
    if ( v6 )
      operator delete((void *)this[1]);
    v12 = a2[1];
    if ( v12 )
      v13 = (a2[2] - v12) >> 6;
    else
      v13 = 0;
    if ( (unsigned __int8)sub_1001756C(v13) )
      this[2] = sub_100058CB(a2[1], a2[2], this[1]);
    return this;
  }
  if ( v6 )
    v10 = (this[2] - v6) >> 6;
  else
    v10 = 0;
  v11 = v3 + (v10 << 6);
  sub_1000B9FB(a2[1], v11, this[1]);
  this[2] = sub_100058CB(v11, a2[2], this[2]);
  return this;
}
