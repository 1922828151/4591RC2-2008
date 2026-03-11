/*
 * func-name: sub_1006F440
 * func-address: 0x1006f440
 * callers: 0x10073b80
 * callees: 0x1001dd70, 0x1006cc40, 0x1006f040, 0x100906b0, 0x101a2500
 */

_DWORD *__thiscall sub_1006F440(_DWORD *this, int a2)
{
  char *v3; // ebx
  unsigned int v4; // edx
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // ecx
  char *v12; // ebx
  int v13; // ecx
  unsigned int v14; // eax

  if ( this == (_DWORD *)a2 )
    return this;
  v3 = *(char **)(a2 + 4);
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - (int)v3) >> 3) == 0 )
  {
    sub_1006F040(this);
    return this;
  }
  v6 = this[1];
  if ( v6 )
    v7 = (this[2] - v6) >> 3;
  else
    v7 = 0;
  if ( v4 <= v7 )
  {
    sub_1001DD70(v3, *(char **)(a2 + 8), this[1]);
    v8 = *(_DWORD *)(a2 + 4);
    if ( v8 )
      v9 = this[1] + 8 * ((*(_DWORD *)(a2 + 8) - v8) >> 3);
    else
      v9 = this[1];
    this[2] = v9;
    return this;
  }
  if ( v6 )
    v10 = (this[3] - v6) >> 3;
  else
    v10 = 0;
  if ( v4 > v10 )
  {
    if ( v6 )
      operator delete((void *)this[1]);
    v13 = *(_DWORD *)(a2 + 4);
    if ( v13 )
      v14 = (*(_DWORD *)(a2 + 8) - v13) >> 3;
    else
      v14 = 0;
    if ( sub_1006CC40(this, v14) )
      this[2] = sub_100906B0(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), this[1]);
    return this;
  }
  if ( v6 )
    v11 = (this[2] - v6) >> 3;
  else
    v11 = 0;
  v12 = &v3[8 * v11];
  sub_1001DD70(*(char **)(a2 + 4), v12, this[1]);
  this[2] = sub_100906B0(v12, *(_DWORD *)(a2 + 8), this[2]);
  return this;
}
