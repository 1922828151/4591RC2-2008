/*
 * func-name: ?clear@?$vector@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@std@@QAEXXZ
 * func-address: 0x10026590
 * callers: 0x1002c070
 * callees: 0x10026520
 */

_DWORD *__thiscall std::vector<VertexManager::VFormat>::clear(int this)
{
  char *v2; // edi
  char *v3; // ebx
  int v5; // [esp+10h] [ebp-8h] BYREF

  v2 = *(char **)(this + 8);
  if ( *(_DWORD *)(this + 4) > (unsigned int)v2 )
    invalid_parameter_noinfo();
  v3 = *(char **)(this + 4);
  if ( (unsigned int)v3 > *(_DWORD *)(this + 8) )
    invalid_parameter_noinfo();
  return std::vector<VertexManager::VFormat>::erase((char **)this, &v5, this, v3, this, v2);
}
