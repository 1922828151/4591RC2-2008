/*
 * func-name: sub_10059280
 * func-address: 0x10059280
 * callers: 0x10018836
 * callees: 0x100034f4, 0x10003959, 0x100047c8, 0x100159bf, 0x10017599, 0x10018115, 0x102c9d50
 */

int *__thiscall sub_10059280(int *this, int *a2)
{
  int v4; // ebp
  unsigned int v5; // ecx
  int v7; // edi
  unsigned int v8; // eax
  int v9; // eax
  int v10; // edx
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // [esp+Ch] [ebp+4h]

  if ( this == a2 )
    return this;
  v4 = a2[1];
  if ( !v4 || (v5 = (a2[2] - v4) / 12) == 0 )
  {
    sub_100047C8();
    return this;
  }
  v7 = this[1];
  if ( v7 )
    v8 = (this[2] - v7) / 12;
  else
    v8 = 0;
  if ( v5 > v8 )
  {
    if ( v7 )
      v11 = (this[3] - v7) / 12;
    else
      v11 = 0;
    if ( v5 > v11 )
    {
      if ( v7 )
        operator delete((void *)this[1]);
      v14 = sub_10017599();
      if ( !(unsigned __int8)sub_100159BF(v14) )
        return this;
      v12 = this[1];
      v13 = a2[1];
    }
    else
    {
      v15 = v4 + 12 * sub_10017599();
      sub_10003959(v4, v15, v7);
      v12 = this[2];
      v13 = v15;
    }
    this[2] = sub_10018115(v13, a2[2], v12);
    return this;
  }
  sub_100034F4(v4, a2[2], v7);
  v9 = a2[1];
  if ( v9 )
    v10 = this[1] + 12 * ((a2[2] - v9) / 12);
  else
    v10 = this[1];
  this[2] = v10;
  return this;
}
