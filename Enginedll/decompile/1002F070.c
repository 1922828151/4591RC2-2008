/*
 * func-name: sub_1002F070
 * func-address: 0x1002f070
 * callers: 0x10030b70
 * callees: 0x1001d910, 0x1001ebd0, 0x10023dc0, 0x10026fa0, 0x1002ca10, 0x101a2500
 */

_DWORD *__thiscall sub_1002F070(_DWORD *this, int a2)
{
  char *v3; // edx
  unsigned int v4; // ebx
  int v6; // ecx
  unsigned int v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // edi
  unsigned int v11; // eax
  int v12; // eax
  char *v13; // ebx
  int v14; // ecx
  unsigned int v15; // eax

  if ( this == (_DWORD *)a2 )
    return this;
  v3 = *(char **)(a2 + 4);
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - (int)v3) >> 5) == 0 )
  {
    sub_1002CA10(this);
    return this;
  }
  v6 = this[1];
  if ( v6 )
    v7 = (this[2] - v6) >> 5;
  else
    v7 = 0;
  if ( v4 <= v7 )
  {
    v8 = sub_1001EBD0(v3, *(char **)(a2 + 8), (_DWORD *)this[1]);
    sub_10026FA0((int)v8, this[2]);
    v9 = *(_DWORD *)(a2 + 4);
    if ( v9 )
      v10 = this[1] + 32 * ((*(_DWORD *)(a2 + 8) - v9) >> 5);
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
      sub_10026FA0(v6, this[2]);
      operator delete((void *)this[1]);
    }
    v14 = *(_DWORD *)(a2 + 4);
    if ( v14 )
      v15 = (*(_DWORD *)(a2 + 8) - v14) >> 5;
    else
      v15 = 0;
    if ( sub_1001D910(this, v15) )
      this[2] = sub_10023DC0(*(_DWORD **)(a2 + 4), *(_DWORD **)(a2 + 8), (CREControl *)this[1]);
    return this;
  }
  if ( v6 )
    v12 = (this[2] - v6) >> 5;
  else
    v12 = 0;
  v13 = &v3[32 * v12];
  sub_1001EBD0(v3, v13, (_DWORD *)this[1]);
  this[2] = sub_10023DC0(v13, *(_DWORD **)(a2 + 8), (CREControl *)this[2]);
  return this;
}
