/*
 * func-name: ?_Tidy@?$vector@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@std@@IAEXXZ
 * func-address: 0x10022a00
 * callers: 0x10026190, 0x10026280, 0x10026340, 0x100299b0
 * callees: 0x101a2500
 */

void __thiscall std::vector<VertexManager::VFormat>::_Tidy(int this)
{
  int v2; // esi
  int i; // edi

  v2 = *(_DWORD *)(this + 4);
  if ( v2 )
  {
    for ( i = *(_DWORD *)(this + 8); v2 != i; v2 += 40 )
      std::string::~string(v2 + 8);
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
