/*
 * func-name: sub_10061E30
 * func-address: 0x10061e30
 * callers: 0x1000ca59
 * callees: 0x10002572, 0x1000404d, 0x1000557e, 0x100096a1, 0x1000d3eb, 0x10010b6d, 0x10011a72, 0x10014c86, 0x102c9d50
 */

int __thiscall sub_10061E30(int this, int a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  void *v10; // edi
  int v11; // eax

  if ( this == a2 )
    return this;
  v3 = *(_DWORD *)(a2 + 4);
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - v3) / 148) == 0 )
  {
    sub_10010B6D();
    return this;
  }
  v6 = *(_DWORD *)(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - v6) / 148;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v9 = (*(_DWORD *)(this + 12) - v6) / 148;
    else
      v9 = 0;
    if ( v4 <= v9 )
    {
      v10 = (void *)(*(_DWORD *)(a2 + 4) + 148 * sub_10014C86());
      sub_1000557E(*(_DWORD *)(a2 + 4), (int)v10, v6);
      *(_DWORD *)(this + 8) = sub_1000D3EB(v10, *(_DWORD *)(a2 + 8), *(void **)(this + 8));
      return this;
    }
    if ( v6 )
    {
      sub_100096A1(v6, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v11 = sub_10014C86();
    if ( (unsigned __int8)sub_1000404D(v11) )
      *(_DWORD *)(this + 8) = sub_1000D3EB(*(void **)(a2 + 4), *(_DWORD *)(a2 + 8), *(void **)(this + 4));
    return this;
  }
  sub_10002572(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), v6);
  sub_10011A72();
  v8 = *(_DWORD *)(a2 + 4);
  if ( v8 )
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 148 * ((*(_DWORD *)(a2 + 8) - v8) / 148);
  else
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4);
  return this;
}
