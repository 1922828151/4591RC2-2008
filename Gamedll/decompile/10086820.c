/*
 * func-name: sub_10086820
 * func-address: 0x10086820
 * callers: 0x1000c928
 * callees: 0x100019ce, 0x10002973, 0x1000a9f7, 0x1000e804, 0x10014fa1, 0x10016cbb, 0x102c9d50
 */

int *__thiscall sub_10086820(int *this, int *a2)
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
  if ( !v3 || (v4 = (a2[2] - v3) / 96) == 0 )
  {
    sub_10016CBB();
    return this;
  }
  v6 = this[1];
  if ( v6 )
    v7 = (this[2] - v6) / 96;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v9 = (this[3] - v6) / 96;
    else
      v9 = 0;
    if ( v4 <= v9 )
    {
      v10 = a2[1] + 96 * sub_100019CE();
      sub_10002973(a2[1], v10, v6);
      this[2] = sub_1000E804(v10, a2[2], this[2]);
      return this;
    }
    if ( v6 )
      operator delete((void *)this[1]);
    v11 = sub_100019CE();
    if ( (unsigned __int8)sub_10014FA1(v11) )
      this[2] = sub_1000E804(a2[1], a2[2], this[1]);
    return this;
  }
  sub_1000A9F7(a2[1], a2[2], v6);
  v8 = a2[1];
  if ( v8 )
    this[2] = this[1] + 96 * ((a2[2] - v8) / 96);
  else
    this[2] = this[1];
  return this;
}
