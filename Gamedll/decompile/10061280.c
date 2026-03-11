/*
 * func-name: sub_10061280
 * func-address: 0x10061280
 * callers: 0x10014be6
 * callees: 0x10002671, 0x10004d7c, 0x1000bd02, 0x10011d1f, 0x100135ac, 0x10014a47, 0x102c9d50
 */

int *__thiscall sub_10061280(int *this, int *a2)
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
    sub_10004D7C();
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
      v14 = v4 + 36 * sub_10014A47();
      sub_10011D1F(v4, v14, v7);
      this[2] = sub_10002671(v14, a2[2], this[2]);
      return this;
    }
    if ( v7 )
    {
      sub_1000BD02(v7, this[2]);
      operator delete((void *)this[1]);
    }
    v13 = sub_10014A47();
    if ( (unsigned __int8)sub_100135AC(v13) )
      this[2] = sub_10002671(a2[1], a2[2], this[1]);
    return this;
  }
  v9 = sub_10011D1F(v4, a2[2], this[1]);
  sub_1000BD02(v9, this[2]);
  v10 = a2[1];
  if ( v10 )
    v11 = this[1] + 36 * ((a2[2] - v10) / 36);
  else
    v11 = this[1];
  this[2] = v11;
  return this;
}
