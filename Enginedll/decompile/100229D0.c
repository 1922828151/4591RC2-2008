/*
 * func-name: ?_Destroy@?$vector@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@std@@IAEXPAUVFormat@VertexManager@@0@Z
 * func-address: 0x100229d0
 * callers: 0x10026350, 0x100265d0, 0x1002c070
 * callees: none
 */

int __stdcall std::vector<VertexManager::VFormat>::_Destroy(int a1, int a2)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 40 )
    result = std::string::~string(i + 8);
  return result;
}
