/*
 * func-name: ??0?$vector@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@std@@QAE@ABV01@@Z
 * func-address: 0x10026190
 * callers: 0x10029a00
 * callees: 0x1001a200, 0x1001e660, 0x10022a00, 0x1006c470, 0x101a2522
 */

int __thiscall std::vector<VertexManager::VFormat>::vector<VertexManager::VFormat>(int this, int a2)
{
  int v2; // eax
  unsigned int v4; // esi
  int v5; // eax
  _DWORD *v6; // eax
  bool v7; // cc
  _DWORD *v8; // esi
  _DWORD v10[4]; // [esp+0h] [ebp-24h] BYREF
  _DWORD *v11; // [esp+10h] [ebp-14h]
  _DWORD *v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+20h] [ebp-4h]

  v2 = *(_DWORD *)(a2 + 4);
  v12 = v10;
  v10[3] = this;
  if ( v2 )
    v4 = (*(_DWORD *)(a2 + 8) - v2) / 40;
  else
    v4 = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  if ( v4 )
  {
    if ( v4 > 0x6666666 )
      std::vector<VertexManager::VFormat>::_Xlen();
    v5 = sub_1006C470(v4);
    *(_DWORD *)(this + 4) = v5;
    *(_DWORD *)(this + 8) = v5;
    *(_DWORD *)(this + 12) = v5 + 40 * v4;
    v6 = *(_DWORD **)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 4) <= (unsigned int)v6;
    v13 = 0;
    v11 = v6;
    if ( !v7 )
      invalid_parameter_noinfo();
    v8 = *(_DWORD **)(a2 + 4);
    if ( (unsigned int)v8 > *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    *(_DWORD *)(this + 8) = sub_1001E660(v8, v11, *(CREControl **)(this + 4));
  }
  return this;
}
