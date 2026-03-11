/*
 * func-name: sub_1025B420
 * func-address: 0x1025b420
 * callers: 0x10001a7d
 * callees: 0x10001767, 0x100028d8, 0x100038af, 0x10003dff, 0x10007aa9, 0x1000a7bd, 0x100172b0, 0x100184b2, 0x102c9d50
 */

int *__thiscall sub_1025B420(int *this, int *a2)
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
  if ( !v3 || (v4 = (a2[2] - v3) / 80) == 0 )
  {
    sub_100038AF();
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
      v11 = a2[1] + 80 * sub_1000A7BD();
      sub_10007AA9(a2[1], v11, v6);
      this[2] = sub_100172B0(v11, a2[2], this[2]);
      return this;
    }
    if ( v6 )
    {
      sub_100028D8(v6, this[2]);
      operator delete((void *)this[1]);
    }
    v12 = sub_1000A7BD();
    if ( (unsigned __int8)sub_100184B2(v12) )
      this[2] = sub_100172B0(a2[1], a2[2], this[1]);
    return this;
  }
  v8 = sub_10001767(a2[1], a2[2], v6);
  sub_10003DFF(v8, this[2]);
  v9 = a2[1];
  if ( v9 )
    this[2] = this[1] + 80 * ((a2[2] - v9) / 80);
  else
    this[2] = this[1];
  return this;
}
