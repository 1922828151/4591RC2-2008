/*
 * func-name: ??4?$vector@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@std@@QAEAAV01@ABV01@@Z
 * func-address: 0x1002c070
 * callers: 0x1002dc10
 * callees: 0x1001d3a0, 0x1001dd10, 0x100229d0, 0x10023d90, 0x10026590, 0x101190c0, 0x101a2500
 */

int __thiscall std::vector<VertexManager::VFormat>::operator=(int this, int a2)
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
    std::vector<VertexManager::VFormat>::clear(this);
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
      sub_1001DD10(v4, v14, v7);
      *(_DWORD *)(this + 8) = sub_10023D90(v14, *(_DWORD **)(a2 + 8), *(CREControl **)(this + 8));
      return this;
    }
    if ( v7 )
    {
      std::vector<VertexManager::VFormat>::_Destroy((int)v7, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v13 = std::vector<BBox>::size(a2);
    if ( std::vector<VertexManager::VFormat>::_Buy((_DWORD *)this, v13) )
      *(_DWORD *)(this + 8) = sub_10023D90(*(_DWORD **)(a2 + 4), *(_DWORD **)(a2 + 8), *(CREControl **)(this + 4));
    return this;
  }
  v9 = sub_1001DD10(v4, *(char **)(a2 + 8), *(_DWORD **)(this + 4));
  std::vector<VertexManager::VFormat>::_Destroy((int)v9, *(_DWORD *)(this + 8));
  v10 = *(_DWORD *)(a2 + 4);
  if ( v10 )
    v11 = *(_DWORD *)(this + 4) + 40 * ((*(_DWORD *)(a2 + 8) - v10) / 40);
  else
    v11 = *(_DWORD *)(this + 4);
  *(_DWORD *)(this + 8) = v11;
  return this;
}
