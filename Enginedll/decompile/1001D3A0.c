/*
 * func-name: ?_Buy@?$vector@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@std@@IAE_NI@Z
 * func-address: 0x1001d3a0
 * callers: 0x1002c070
 * callees: 0x1001a200, 0x1006c470
 */

char __thiscall std::vector<VertexManager::VFormat>::_Buy(_DWORD *this, unsigned int a2)
{
  int v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x6666666 )
    std::vector<VertexManager::VFormat>::_Xlen();
  v4 = sub_1006C470(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 40 * a2;
  return 1;
}
