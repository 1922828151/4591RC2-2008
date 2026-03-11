/*
 * func-name: ?insert@?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@QAE?AV?$_Vector_iterator@VBBox@@V?$allocator@VBBox@@@std@@@2@V32@ABVBBox@@@Z
 * func-address: 0x1002b8c0
 * callers: 0x1002ed40
 * callees: 0x10025440
 */

int **__thiscall std::vector<BBox>::insert(int *this, int **a2, int *a3, int a4, _DWORD *a5)
{
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // edi
  int **result; // eax

  v6 = this[1];
  if ( v6 && (int)(this[2] - v6) / 40 )
  {
    if ( v6 > this[2] )
      invalid_parameter_noinfo();
    v7 = (int)a3;
    if ( !a3 || a3 != this )
      invalid_parameter_noinfo();
    v8 = (int)(a4 - v6) / 40;
  }
  else
  {
    v7 = (int)a3;
    v8 = 0;
  }
  std::vector<BBox>::_Insert_n(this, v7, a4, 1u, a5);
  v9 = this[1];
  if ( v9 > this[2] )
    invalid_parameter_noinfo();
  v10 = v9 + 40 * v8;
  if ( v10 > this[2] || v10 < this[1] )
    invalid_parameter_noinfo();
  result = a2;
  a2[1] = (int *)v10;
  *a2 = this;
  return result;
}
