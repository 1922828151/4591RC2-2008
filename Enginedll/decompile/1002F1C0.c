/*
 * func-name: sub_1002F1C0
 * func-address: 0x1002f1c0
 * callers: 0x10030b70
 * callees: 0x1001d960, 0x1001ec50, 0x10023df0, 0x10027030, 0x1002ca90, 0x101a2500
 */

int *__thiscall sub_1002F1C0(int *this, int *a2)
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
  if ( !v3 || (v4 = (a2[2] - v3) >> 5) == 0 )
  {
    sub_1002CA90(this);
    return this;
  }
  v6 = this[1];
  if ( v6 )
    v7 = (this[2] - v6) >> 5;
  else
    v7 = 0;
  if ( v4 <= v7 )
  {
    v8 = sub_1001EC50(v3, a2[2], this[1]);
    sub_10027030(v8, this[2]);
    v9 = a2[1];
    if ( v9 )
      v10 = this[1] + 32 * ((a2[2] - v9) >> 5);
    else
      v10 = this[1];
    this[2] = v10;
    return this;
  }
  if ( v6 )
    v11 = (this[3] - v6) >> 5;
  else
    v11 = 0;
  if ( v4 > v11 )
  {
    if ( v6 )
    {
      sub_10027030(v6, this[2]);
      operator delete((void *)this[1]);
    }
    v14 = a2[1];
    if ( v14 )
      v15 = (a2[2] - v14) >> 5;
    else
      v15 = 0;
    if ( sub_1001D960(this, v15) )
      this[2] = (int)sub_10023DF0(a2[1], a2[2], (CREControl *)this[1]);
    return this;
  }
  if ( v6 )
    v12 = (this[2] - v6) >> 5;
  else
    v12 = 0;
  v13 = v3 + 32 * v12;
  sub_1001EC50(v3, v13, this[1]);
  this[2] = (int)sub_10023DF0(v13, a2[2], (CREControl *)this[2]);
  return this;
}
