/*
 * func-name: sub_100D3F80
 * func-address: 0x100d3f80
 * callers: 0x100d4570
 * callees: 0x100cdeb0, 0x100ced20, 0x100cf720, 0x100d1b40, 0x100d26a0, 0x100d3570, 0x101a2500
 */

int __thiscall sub_100D3F80(int this, int a2)
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
  if ( !v4 || (v5 = (*(_DWORD *)(a2 + 8) - (int)v4) / 36) == 0 )
  {
    sub_100D3570(this);
    return this;
  }
  v7 = *(_DWORD **)(this + 4);
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
      v14 = &v4[36 * sub_100CDEB0((_DWORD *)this)];
      sub_100CF720(v4, v14, v7);
      *(_DWORD *)(this + 8) = sub_100D1B40(v14, *(_DWORD **)(a2 + 8), *(_DWORD **)(this + 8));
      return this;
    }
    if ( v7 )
    {
      sub_100D26A0((int)v7, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v13 = sub_100CDEB0((_DWORD *)a2);
    if ( sub_100CED20((_DWORD *)this, v13) )
      *(_DWORD *)(this + 8) = sub_100D1B40(*(_DWORD **)(a2 + 4), *(_DWORD **)(a2 + 8), *(_DWORD **)(this + 4));
    return this;
  }
  v9 = sub_100CF720(v4, *(char **)(a2 + 8), *(_DWORD **)(this + 4));
  sub_100D26A0((int)v9, *(_DWORD *)(this + 8));
  v10 = *(_DWORD *)(a2 + 4);
  if ( v10 )
    v11 = *(_DWORD *)(this + 4) + 36 * ((*(_DWORD *)(a2 + 8) - v10) / 36);
  else
    v11 = *(_DWORD *)(this + 4);
  *(_DWORD *)(this + 8) = v11;
  return this;
}
