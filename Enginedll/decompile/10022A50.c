/*
 * func-name: ?_Ufill@?$vector@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@std@@IAEPAUVFormat@VertexManager@@PAU34@IABU34@@Z
 * func-address: 0x10022a50
 * callers: 0x100265d0
 * callees: 0x1001ed40
 */

char *__stdcall std::vector<VertexManager::VFormat>::_Ufill(CREControl *a1, int a2, _DWORD *a3)
{
  sub_1001ED40(a1, a2, a3);
  return (char *)a1 + 40 * a2;
}
