/*
 * func-name: sub_100A5E70
 * func-address: 0x100a5e70
 * callers: 0x1000abd2
 * callees: 0x1000940d, 0x1000965b, 0x1000ab46, 0x100134f8, 0x100170da, 0x1001a5ff, 0x102c9d50
 */

int *__thiscall sub_100A5E70(int *this, int *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v6; // edi
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  int v10; // ebx
  int v11; // eax

  if ( this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) / 28) == 0 )
  {
    sub_1000965B();
    return this;
  }
  v6 = this[1];
  if ( v6 )
    v7 = (this[2] - v6) / 28;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v9 = (this[3] - v6) / 28;
    else
      v9 = 0;
    if ( v4 <= v9 )
    {
      v10 = a2[1] + 28 * sub_100170DA();
      sub_1001A5FF(a2[1], v10, v6);
      this[2] = sub_1000940D(v10, a2[2], this[2]);
      return this;
    }
    if ( v6 )
      operator delete((void *)this[1]);
    v11 = sub_100170DA();
    if ( (unsigned __int8)sub_100134F8(v11) )
      this[2] = sub_1000940D(a2[1], a2[2], this[1]);
    return this;
  }
  sub_1000AB46(a2[1], a2[2], v6);
  v8 = a2[1];
  if ( v8 )
    this[2] = this[1] + 28 * ((a2[2] - v8) / 28);
  else
    this[2] = this[1];
  return this;
}
