/*
 * func-name: sub_10052860
 * func-address: 0x10052860
 * callers: 0x10054100
 * callees: 0x10052190, 0x100521e0, 0x10052490, 0x1006bd90, 0x1006ca30, 0x101466d0, 0x101a2500
 */

_DWORD *__thiscall sub_10052860(_DWORD *this, _DWORD *a2)
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
  unsigned int v14; // eax
  int v15; // [esp+Ch] [ebp+4h]

  if ( this == a2 )
    return this;
  v4 = a2[1];
  if ( !v4 || (v5 = (a2[2] - v4) / 12) == 0 )
  {
    sub_10052490(this);
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
      v14 = sub_1006BD90(a2);
      if ( !sub_10052190(this, v14) )
        return this;
      v12 = this[1];
      v13 = a2[1];
    }
    else
    {
      v15 = v4 + 12 * sub_1006BD90(this);
      sub_100521E0(v4, v15, v7);
      v12 = this[2];
      v13 = v15;
    }
    this[2] = sub_101466D0(v13, a2[2], v12);
    return this;
  }
  sub_1006CA30(v4, a2[2], v7);
  v9 = a2[1];
  if ( v9 )
    v10 = this[1] + 12 * ((a2[2] - v9) / 12);
  else
    v10 = this[1];
  this[2] = v10;
  return this;
}
