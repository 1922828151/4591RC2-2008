/*
 * func-name: sub_1006F6D0
 * func-address: 0x1006f6d0
 * callers: 0x100758f0
 * callees: 0x1006cd80, 0x1006d030, 0x1006f080, 0x100a1af0, 0x100a1d70, 0x101a2500
 */

int __thiscall sub_1006F6D0(int this, int a2)
{
  char *v4; // ebp
  unsigned int v5; // ecx
  _DWORD *v7; // edi
  unsigned int v8; // eax
  int v9; // eax
  int v10; // edx
  unsigned int v11; // eax
  int v12; // ecx
  char *v13; // eax
  unsigned int v14; // eax
  char *v15; // [esp+Ch] [ebp+4h]

  if ( this == a2 )
    return this;
  v4 = *(char **)(a2 + 4);
  if ( !v4 || (v5 = (*(_DWORD *)(a2 + 8) - (int)v4) / 20) == 0 )
  {
    std::vector<AttributeRange>::clear((char **)this);
    return this;
  }
  v7 = *(_DWORD **)(this + 4);
  if ( v7 )
    v8 = (*(_DWORD *)(this + 8) - (int)v7) / 20;
  else
    v8 = 0;
  if ( v5 > v8 )
  {
    if ( v7 )
      v11 = (*(_DWORD *)(this + 12) - (int)v7) / 20;
    else
      v11 = 0;
    if ( v5 > v11 )
    {
      if ( v7 )
        operator delete(*(void **)(this + 4));
      v14 = std::vector<AttributeRange>::size(a2);
      if ( !sub_1006CD80((_DWORD *)this, v14) )
        return this;
      v12 = *(_DWORD *)(this + 4);
      v13 = *(char **)(a2 + 4);
    }
    else
    {
      v15 = &v4[20 * std::vector<AttributeRange>::size(this)];
      sub_1006D030(v4, v15, v7);
      v12 = *(_DWORD *)(this + 8);
      v13 = v15;
    }
    *(_DWORD *)(this + 8) = sub_100A1D70(v13, *(_DWORD *)(a2 + 8), v12);
    return this;
  }
  sub_1006D030(v4, *(char **)(a2 + 8), *(_DWORD **)(this + 4));
  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 )
    v10 = *(_DWORD *)(this + 4) + 20 * ((*(_DWORD *)(a2 + 8) - v9) / 20);
  else
    v10 = *(_DWORD *)(this + 4);
  *(_DWORD *)(this + 8) = v10;
  return this;
}
