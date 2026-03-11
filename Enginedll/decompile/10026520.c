/*
 * func-name: ?erase@?$vector@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@std@@QAE?AV?$_Vector_iterator@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@2@V32@0@Z
 * func-address: 0x10026520
 * callers: 0x10026590, 0x1002c1f0, 0x1002c3e0
 * callees: 0x1001dd10
 */

_DWORD *__thiscall std::vector<VertexManager::VFormat>::erase(
        char **this,
        _DWORD *a2,
        int a3,
        char *a4,
        int a5,
        char *a6)
{
  int v6; // esi
  char *v8; // ecx
  char *v9; // eax
  char *v10; // edi
  char *v11; // ebx
  char *i; // esi
  _DWORD *result; // eax

  v6 = a3;
  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  v8 = a4;
  if ( a4 != a6 )
  {
    v9 = (char *)sub_1001DD10(a6, this[2], a4);
    v10 = this[2];
    v11 = v9;
    for ( i = v9; i != v10; i += 40 )
      std::string::~string(i + 8);
    v8 = a4;
    v6 = a3;
    this[2] = v11;
  }
  result = a2;
  *a2 = v6;
  a2[1] = v8;
  return result;
}
