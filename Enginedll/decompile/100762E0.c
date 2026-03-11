/*
 * func-name: sub_100762E0
 * func-address: 0x100762e0
 * callers: 0x10076460
 * callees: 0x1006cce0, 0x10075ef0, 0x10075f50, 0x10075fb0, 0x10075fe0, 0x10076190, 0x100a1af0, 0x101a2500
 */

int __thiscall sub_100762E0(int this, int a2)
{
  int v4; // ebp
  unsigned int v5; // ecx
  int v7; // edi
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // [esp+Ch] [ebp+4h]

  if ( this == a2 )
    return this;
  v4 = *(_DWORD *)(a2 + 4);
  if ( !v4 || (v5 = (*(_DWORD *)(a2 + 8) - v4) / 20) == 0 )
  {
    sub_10076190((int *)this);
    return this;
  }
  v7 = *(_DWORD *)(this + 4);
  if ( v7 )
    v8 = (*(_DWORD *)(this + 8) - v7) / 20;
  else
    v8 = 0;
  if ( v5 > v8 )
  {
    if ( v7 )
      v12 = (*(_DWORD *)(this + 12) - v7) / 20;
    else
      v12 = 0;
    if ( v5 <= v12 )
    {
      v14 = v4 + 20 * std::vector<AttributeRange>::size(this);
      sub_10075EF0(v4, v14, v7);
      *(_DWORD *)(this + 8) = sub_10075FB0(v14, *(_DWORD *)(a2 + 8), *(CREControl **)(this + 8));
      return this;
    }
    if ( v7 )
    {
      sub_10075FE0(v7, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v13 = std::vector<AttributeRange>::size(a2);
    if ( sub_1006CCE0((_DWORD *)this, v13) )
      *(_DWORD *)(this + 8) = sub_10075FB0(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), *(CREControl **)(this + 4));
    return this;
  }
  v9 = sub_10075EF0(v4, *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 4));
  sub_10075F50(v9, *(_DWORD *)(this + 8));
  v10 = *(_DWORD *)(a2 + 4);
  if ( v10 )
    v11 = *(_DWORD *)(this + 4) + 20 * ((*(_DWORD *)(a2 + 8) - v10) / 20);
  else
    v11 = *(_DWORD *)(this + 4);
  *(_DWORD *)(this + 8) = v11;
  return this;
}
