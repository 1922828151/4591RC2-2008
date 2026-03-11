/*
 * func-name: sub_100792F0
 * func-address: 0x100792f0
 * callers: 0x10017977
 * callees: 0x10001ab4, 0x10008134, 0x1000d9ea, 0x1000ef9d, 0x10012571, 0x1001906a, 0x102c9d50
 */

int *__thiscall sub_100792F0(int *this, int *a2)
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
    sub_1001906A();
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
      v14 = v4 + 36 * sub_1000D9EA();
      sub_10008134(v4, v14, v7);
      this[2] = sub_1000EF9D(v14, a2[2], this[2]);
      return this;
    }
    if ( v7 )
    {
      sub_10012571(v7, this[2]);
      operator delete((void *)this[1]);
    }
    v13 = sub_1000D9EA();
    if ( (unsigned __int8)sub_10001AB4(v13) )
      this[2] = sub_1000EF9D(a2[1], a2[2], this[1]);
    return this;
  }
  v9 = sub_10008134(v4, a2[2], this[1]);
  sub_10012571(v9, this[2]);
  v10 = a2[1];
  if ( v10 )
    v11 = this[1] + 36 * ((a2[2] - v10) / 36);
  else
    v11 = this[1];
  this[2] = v11;
  return this;
}
