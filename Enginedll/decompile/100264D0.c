/*
 * func-name: ?erase@?$vector@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@std@@QAE?AV?$_Vector_iterator@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@2@V32@@Z
 * func-address: 0x100264d0
 * callers: none
 * callees: 0x1001dd10
 */

_DWORD *__thiscall std::vector<VertexManager::VFormat>::erase(char **this, _DWORD *a2, int a3, int a4)
{
  char *v5; // edi
  char *v6; // esi
  _DWORD *result; // eax

  sub_1001DD10((char *)(a4 + 40), this[2], (_DWORD *)a4);
  v5 = this[2];
  v6 = v5 - 40;
  do
  {
    std::string::~string(v6 + 8);
    v6 += 40;
  }
  while ( v6 != v5 );
  result = a2;
  this[2] -= 40;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
