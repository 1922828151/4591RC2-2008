/*
 * func-name: ?insert@?$vector@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@std@@QAE?AV?$_Vector_iterator@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@2@V32@ABUVFormat@VertexManager@@@Z
 * func-address: 0x1002c310
 * callers: 0x1002efb0
 * callees: 0x100265d0
 */

_DWORD *__thiscall std::vector<VertexManager::VFormat>::insert(_DWORD *this, _DWORD *a2, _DWORD *a3, char *a4, int *a5)
{
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // edi
  _DWORD *result; // eax

  v6 = this[1];
  if ( v6 && (int)(this[2] - v6) / 40 )
  {
    if ( v6 > this[2] )
      invalid_parameter_noinfo();
    v7 = (int)a3;
    if ( !a3 || a3 != this )
      invalid_parameter_noinfo();
    v8 = (int)&a4[-v6] / 40;
  }
  else
  {
    v7 = (int)a3;
    v8 = 0;
  }
  std::vector<VertexManager::VFormat>::_Insert_n((int)this, v7, a4, 1u, a5);
  v9 = this[1];
  if ( v9 > this[2] )
    invalid_parameter_noinfo();
  v10 = v9 + 40 * v8;
  if ( v10 > this[2] || v10 < this[1] )
    invalid_parameter_noinfo();
  result = a2;
  a2[1] = v10;
  *a2 = this;
  return result;
}
