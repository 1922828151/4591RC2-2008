/*
 * func-name: sub_100FC650
 * func-address: 0x100fc650
 * callers: 0x10015a9b
 * callees: 0x10002ff4, 0x100047ff, 0x1000e6ce, 0x1000fd85, 0x100161b2, 0x1001a01e, 0x102c9d50
 */

int *__thiscall sub_100FC650(int *this, int *a2)
{
  int v4; // ebp
  unsigned int v5; // ecx
  int v7; // edi
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // eax
  int v14; // [esp+Ch] [ebp+4h]

  if ( this == a2 )
    return this;
  v4 = a2[1];
  if ( !v4 || (v5 = (a2[2] - v4) / 36) == 0 )
  {
    sub_1000E6CE();
    return this;
  }
  v7 = this[1];
  if ( v7 )
    v8 = (this[2] - v7) / 36;
  else
    v8 = 0;
  if ( v5 > v8 )
  {
    if ( v7 )
      v12 = (this[3] - v7) / 36;
    else
      v12 = 0;
    if ( v5 <= v12 )
    {
      v14 = v4 + 36 * sub_100161B2();
      sub_10002FF4(v4, v14, v7);
      this[2] = sub_1001A01E(v14, a2[2], this[2]);
      return this;
    }
    if ( v7 )
    {
      sub_100047FF(v7, this[2]);
      operator delete((void *)this[1]);
    }
    v13 = sub_100161B2();
    if ( (unsigned __int8)sub_1000FD85(v13) )
      this[2] = sub_1001A01E(a2[1], a2[2], this[1]);
    return this;
  }
  v9 = sub_10002FF4(v4, a2[2], this[1]);
  sub_100047FF(v9, this[2]);
  v10 = a2[1];
  if ( v10 )
    v11 = this[1] + 36 * ((a2[2] - v10) / 36);
  else
    v11 = this[1];
  this[2] = v11;
  return this;
}
