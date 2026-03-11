/*
 * func-name: sub_1009EE00
 * func-address: 0x1009ee00
 * callers: 0x1001a03c
 * callees: 0x1000173a, 0x10001aaf, 0x10005849, 0x10008819, 0x1000b9a1, 0x10010a1e, 0x100139d5, 0x10015159, 0x102c9d50
 */

int *__thiscall sub_1009EE00(int *this, int *a2)
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
  if ( !v3 || (v4 = (a2[2] - v3) / 184) == 0 )
  {
    sub_100139D5();
    return this;
  }
  v6 = this[1];
  if ( v6 )
    v7 = (this[2] - v6) / 184;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (this[3] - v6) / 184;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = a2[1] + 184 * sub_10001AAF();
      sub_10005849(a2[1], v11, v6);
      this[2] = sub_1000173A(v11, a2[2], this[2]);
      return this;
    }
    if ( v6 )
    {
      sub_10015159(v6, this[2]);
      operator delete((void *)this[1]);
    }
    v12 = sub_10001AAF();
    if ( (unsigned __int8)sub_10008819(v12) )
      this[2] = sub_1000173A(a2[1], a2[2], this[1]);
    return this;
  }
  v8 = sub_1000B9A1(a2[1], a2[2], v6);
  sub_10010A1E(v8, this[2]);
  v9 = a2[1];
  if ( v9 )
    this[2] = this[1] + 184 * ((a2[2] - v9) / 184);
  else
    this[2] = this[1];
  return this;
}
