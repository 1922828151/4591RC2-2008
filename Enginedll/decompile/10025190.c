/*
 * func-name: ??4?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@QAEAAV01@ABV01@@Z
 * func-address: 0x10025190
 * callers: 0x10028a50, 0x1002da40
 * callees: 0x1001d0e0, 0x1001eab0, 0x10020390, 0x100217a0, 0x10023d30, 0x101190c0, 0x101a2500
 */

int __thiscall std::vector<BBox>::operator=(int this, int a2)
{
  int v4; // ebp
  unsigned int v5; // ecx
  int (__thiscall ***v7)(_DWORD, _DWORD); // edi
  unsigned int v8; // eax
  int (__thiscall ***v9)(_DWORD, _DWORD); // eax
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // [esp+Ch] [ebp+4h]

  if ( this == a2 )
    return this;
  v4 = *(_DWORD *)(a2 + 4);
  if ( !v4 || (v5 = (*(_DWORD *)(a2 + 8) - v4) / 40) == 0 )
  {
    std::vector<BBox>::clear((int *)this);
    return this;
  }
  v7 = *(int (__thiscall ****)(_DWORD, _DWORD))(this + 4);
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
      v14 = v4 + 40 * std::vector<BBox>::size(this);
      sub_1001EAB0(v4, v14, (int)v7);
      *(_DWORD *)(this + 8) = sub_10023D30(v14, *(_DWORD *)(a2 + 8), *(_DWORD **)(this + 8));
      return this;
    }
    if ( v7 )
    {
      std::vector<BBox>::_Destroy(v7, *(int (__thiscall ****)(_DWORD, _DWORD))(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v13 = std::vector<BBox>::size(a2);
    if ( std::vector<BBox>::_Buy((_DWORD *)this, v13) )
      *(_DWORD *)(this + 8) = sub_10023D30(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), *(_DWORD **)(this + 4));
    return this;
  }
  v9 = (int (__thiscall ***)(_DWORD, _DWORD))sub_1001EAB0(v4, *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 4));
  std::vector<BBox>::_Destroy(v9, *(int (__thiscall ****)(_DWORD, _DWORD))(this + 8));
  v10 = *(_DWORD *)(a2 + 4);
  if ( v10 )
    v11 = *(_DWORD *)(this + 4) + 40 * ((*(_DWORD *)(a2 + 8) - v10) / 40);
  else
    v11 = *(_DWORD *)(this + 4);
  *(_DWORD *)(this + 8) = v11;
  return this;
}
