/*
 * func-name: sub_10070D30
 * func-address: 0x10070d30
 * callers: 0x10074ab0
 * callees: 0x1006cec0, 0x1006d5e0, 0x1006fa30, 0x10070200, 0x100cdeb0, 0x100d95e0, 0x101a2500
 */

int __thiscall sub_10070D30(int this, int a2)
{
  int v4; // ebp
  unsigned int v5; // ecx
  char *v7; // edi
  unsigned int v8; // eax
  char *v9; // eax
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // [esp+Ch] [ebp+4h]

  if ( this == a2 )
    return this;
  v4 = *(_DWORD *)(a2 + 4);
  if ( !v4 || (v5 = (*(_DWORD *)(a2 + 8) - v4) / 36) == 0 )
  {
    sub_10070200((int *)this);
    return this;
  }
  v7 = *(char **)(this + 4);
  if ( v7 )
    v8 = (*(_DWORD *)(this + 8) - (int)v7) / 36;
  else
    v8 = 0;
  if ( v5 > v8 )
  {
    if ( v7 )
      v12 = (*(_DWORD *)(this + 12) - (int)v7) / 36;
    else
      v12 = 0;
    if ( v5 <= v12 )
    {
      v14 = v4 + 36 * sub_100CDEB0(this);
      sub_1006D5E0(v4, v14, (int)v7);
      *(_DWORD *)(this + 8) = sub_100D95E0(v14, *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 8));
      return this;
    }
    if ( v7 )
    {
      sub_1006FA30(v7, *(char **)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v13 = sub_100CDEB0(a2);
    if ( sub_1006CEC0((_DWORD *)this, v13) )
      *(_DWORD *)(this + 8) = sub_100D95E0(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 4));
    return this;
  }
  v9 = (char *)sub_1006D5E0(v4, *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 4));
  sub_1006FA30(v9, *(char **)(this + 8));
  v10 = *(_DWORD *)(a2 + 4);
  if ( v10 )
    v11 = *(_DWORD *)(this + 4) + 36 * ((*(_DWORD *)(a2 + 8) - v10) / 36);
  else
    v11 = *(_DWORD *)(this + 4);
  *(_DWORD *)(this + 8) = v11;
  return this;
}
