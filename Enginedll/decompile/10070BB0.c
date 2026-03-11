/*
 * func-name: sub_10070BB0
 * func-address: 0x10070bb0
 * callers: 0x10076460
 * callees: 0x1006cc90, 0x1006d580, 0x1006f9b0, 0x100701c0, 0x100d1b70, 0x101190c0, 0x101a2500
 */

int __thiscall sub_10070BB0(int this, int a2)
{
  char *v4; // ebp
  unsigned int v5; // ecx
  _DWORD *v7; // edi
  unsigned int v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // eax
  char *v14; // [esp+Ch] [ebp+4h]

  if ( this == a2 )
    return this;
  v4 = *(char **)(a2 + 4);
  if ( !v4 || (v5 = (*(_DWORD *)(a2 + 8) - (int)v4) / 40) == 0 )
  {
    sub_100701C0(this);
    return this;
  }
  v7 = *(_DWORD **)(this + 4);
  if ( v7 )
    v8 = (*(_DWORD *)(this + 8) - (int)v7) / 40;
  else
    v8 = 0;
  if ( v5 > v8 )
  {
    if ( v7 )
      v12 = (*(_DWORD *)(this + 12) - (int)v7) / 40;
    else
      v12 = 0;
    if ( v5 <= v12 )
    {
      v14 = &v4[40 * std::vector<BBox>::size(this)];
      sub_1006D580(v4, v14, v7);
      *(_DWORD *)(this + 8) = sub_100D1B70(v14, *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 8));
      return this;
    }
    if ( v7 )
    {
      sub_1006F9B0((int)v7, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v13 = std::vector<BBox>::size(a2);
    if ( sub_1006CC90((_DWORD *)this, v13) )
      *(_DWORD *)(this + 8) = sub_100D1B70(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 4));
    return this;
  }
  v9 = sub_1006D580(v4, *(char **)(a2 + 8), *(_DWORD **)(this + 4));
  sub_1006F9B0((int)v9, *(_DWORD *)(this + 8));
  v10 = *(_DWORD *)(a2 + 4);
  if ( v10 )
    v11 = *(_DWORD *)(this + 4) + 40 * ((*(_DWORD *)(a2 + 8) - v10) / 40);
  else
    v11 = *(_DWORD *)(this + 4);
  *(_DWORD *)(this + 8) = v11;
  return this;
}
