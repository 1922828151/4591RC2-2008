/*
 * func-name: sub_101F1DA0
 * func-address: 0x101f1da0
 * callers: 0x1000f60a
 * callees: 0x100016a4, 0x10001d8e, 0x10008f67, 0x1000bf9b, 0x1000ce78, 0x100110b3, 0x100160fe, 0x1001a8de, 0x102c9d50
 */

int *__thiscall sub_101F1DA0(int *this, int *a2)
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
    sub_100160FE();
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
      v11 = a2[1] + 80 * sub_100110B3();
      sub_10001D8E(a2[1], v11, v6);
      this[2] = sub_1000BF9B(v11, a2[2], this[2]);
      return this;
    }
    if ( v6 )
    {
      sub_1001A8DE(v6, this[2]);
      operator delete((void *)this[1]);
    }
    v12 = sub_100110B3();
    if ( (unsigned __int8)sub_1000CE78(v12) )
      this[2] = sub_1000BF9B(a2[1], a2[2], this[1]);
    return this;
  }
  v8 = sub_10008F67(a2[1], a2[2], v6);
  sub_100016A4(v8, this[2]);
  v9 = a2[1];
  if ( v9 )
    this[2] = this[1] + 80 * ((a2[2] - v9) / 80);
  else
    this[2] = this[1];
  return this;
}
