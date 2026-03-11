/*
 * func-name: sub_10206470
 * func-address: 0x10206470
 * callers: 0x1000fe43
 * callees: 0x10002dd3, 0x1000a803, 0x1000b0dc, 0x1000fde4, 0x10017508, 0x102c9d50
 */

int *__thiscall sub_10206470(int *this, int *a2)
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
  int v15; // eax

  if ( this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) >> 7) == 0 )
  {
    sub_1000FDE4();
    return this;
  }
  v6 = this[1];
  if ( v6 )
    v7 = (this[2] - v6) >> 7;
  else
    v7 = 0;
  if ( v4 <= v7 )
  {
    v8 = sub_10002DD3(v3, a2[2], this[1]);
    sub_1000B0DC(v8, this[2]);
    v9 = a2[1];
    if ( v9 )
      v10 = this[1] + ((a2[2] - v9) >> 7 << 7);
    else
      v10 = this[1];
    this[2] = v10;
    return this;
  }
  if ( v6 )
    v11 = (this[3] - v6) >> 7;
  else
    v11 = 0;
  if ( v4 > v11 )
  {
    if ( v6 )
    {
      sub_1000B0DC(v6, this[2]);
      operator delete((void *)this[1]);
    }
    v14 = a2[1];
    if ( v14 )
      v15 = (a2[2] - v14) >> 7;
    else
      v15 = 0;
    if ( (unsigned __int8)sub_1000A803(v15) )
      this[2] = sub_10017508(a2[1], a2[2], this[1]);
    return this;
  }
  if ( v6 )
    v12 = (this[2] - v6) >> 7;
  else
    v12 = 0;
  v13 = v3 + (v12 << 7);
  sub_10002DD3(v3, v13, this[1]);
  this[2] = sub_10017508(v13, a2[2], this[2]);
  return this;
}
