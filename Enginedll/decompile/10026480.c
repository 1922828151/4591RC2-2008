/*
 * func-name: ?pop_back@?$vector@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@std@@QAEXXZ
 * func-address: 0x10026480
 * callers: none
 * callees: none
 */

int __thiscall std::vector<VertexManager::VFormat>::pop_back(_DWORD *this)
{
  int result; // eax
  int v3; // edi
  int v4; // esi

  result = this[1];
  if ( result )
  {
    v3 = this[2];
    result = (v3 - result) / 40;
    if ( result )
    {
      v4 = v3 - 40;
      do
      {
        result = std::string::~string(v4 + 8);
        v4 += 40;
      }
      while ( v4 != v3 );
      this[2] -= 40;
    }
  }
  return result;
}
