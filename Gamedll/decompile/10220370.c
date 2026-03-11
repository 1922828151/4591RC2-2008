/*
 * func-name: sub_10220370
 * func-address: 0x10220370
 * callers: 0x1000adee
 * callees: 0x10009b3d, 0x1000ba69, 0x1000f682, 0x100105e6, 0x1001248b, 0x1001503c, 0x10015f9b, 0x102c9d50
 */

int *__thiscall sub_10220370(int *this, int *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // edi
  int v12; // eax

  if ( this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) / 84) == 0 )
  {
    sub_1001248B();
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
      v11 = a2[1] + 84 * sub_1000F682();
      sub_10015F9B(a2[1], v11, v6);
      this[2] = sub_100105E6(v11, a2[2], this[2]);
      return this;
    }
    if ( v6 )
    {
      sub_1000BA69(v6, this[2]);
      operator delete((void *)this[1]);
    }
    v12 = sub_1000F682();
    if ( (unsigned __int8)sub_10009B3D(v12) )
      this[2] = sub_100105E6(a2[1], a2[2], this[1]);
    return this;
  }
  v8 = sub_10015F9B(a2[1], a2[2], this[1]);
  sub_1001503C(v8, this[2]);
  v9 = a2[1];
  if ( v9 )
    this[2] = this[1] + 84 * ((a2[2] - v9) / 84);
  else
    this[2] = this[1];
  return this;
}
