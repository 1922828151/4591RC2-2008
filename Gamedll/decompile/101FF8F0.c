/*
 * func-name: sub_101FF8F0
 * func-address: 0x101ff8f0
 * callers: 0x100142a4
 * callees: 0x1000108c, 0x10003bac, 0x10003cce, 0x1000cf95, 0x1001127f, 0x10016491, 0x10016c93, 0x102c9d50
 */

int *__thiscall sub_101FF8F0(int *this, int *a2)
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
    sub_1001127F();
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
      v11 = a2[1] + 84 * sub_1000108C();
      sub_10016491(a2[1], v11, v6);
      this[2] = sub_10003CCE(v11, a2[2], this[2]);
      return this;
    }
    if ( v6 )
    {
      sub_1000CF95(v6, this[2]);
      operator delete((void *)this[1]);
    }
    v12 = sub_1000108C();
    if ( (unsigned __int8)sub_10003BAC(v12) )
      this[2] = sub_10003CCE(a2[1], a2[2], this[1]);
    return this;
  }
  v8 = sub_10016C93(a2[1], a2[2], v6);
  sub_1000CF95(v8, this[2]);
  v9 = a2[1];
  if ( v9 )
    this[2] = this[1] + 84 * ((a2[2] - v9) / 84);
  else
    this[2] = this[1];
  return this;
}
