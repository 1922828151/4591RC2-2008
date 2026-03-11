/*
 * func-name: ?at@?$vector@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@std@@QBEABUVFormat@VertexManager@@I@Z
 * func-address: 0x1001d2e0
 * callers: none
 * callees: 0x1001a280
 */

unsigned int __thiscall std::vector<VertexManager::VFormat>::at(_DWORD *this, unsigned int a2)
{
  unsigned int v3; // esi
  unsigned int v4; // esi

  v3 = this[1];
  if ( !v3 || (int)(this[2] - v3) / 40 <= a2 )
    std::vector<VertexManager::VFormat>::_Xran();
  if ( v3 > this[2] )
    invalid_parameter_noinfo();
  v4 = v3 + 40 * a2;
  if ( v4 > this[2] || v4 < this[1] )
    invalid_parameter_noinfo();
  if ( v4 >= this[2] )
    invalid_parameter_noinfo();
  return v4;
}
