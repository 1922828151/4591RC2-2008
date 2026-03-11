/*
 * func-name: ?insert@?$vector@PAVMaterial@@V?$allocator@PAVMaterial@@@std@@@std@@QAE?AV?$_Vector_iterator@PAVMaterial@@V?$allocator@PAVMaterial@@@std@@@2@V32@ABQAVMaterial@@@Z
 * func-address: 0x100117e0
 * callers: 0x10003a50, 0x10012aa0, 0x1003a4c0, 0x10040990, 0x10085e90, 0x10086a00, 0x1008e470, 0x1009ef10, 0x100ea5d0, 0x1011b870, 0x1011d270
 * callees: 0x1000f620
 */

_DWORD *__thiscall std::vector<Material *>::insert(_DWORD *this, _DWORD *a2, _DWORD *a3, char *Source, int *a5)
{
  unsigned int v6; // edi
  int v7; // ebx
  unsigned int v8; // edi
  unsigned int v9; // edi
  _DWORD *result; // eax

  v6 = this[1];
  if ( v6 && (int)(this[2] - v6) >> 2 )
  {
    if ( v6 > this[2] )
      invalid_parameter_noinfo();
    if ( !a3 || a3 != this )
      invalid_parameter_noinfo();
    v7 = (int)&Source[-v6] >> 2;
  }
  else
  {
    v7 = 0;
  }
  std::vector<Material *>::_Insert_n((int)this, (int)a3, Source, 1u, a5);
  v8 = this[1];
  if ( v8 > this[2] )
    invalid_parameter_noinfo();
  v9 = v8 + 4 * v7;
  if ( v9 > this[2] || v9 < this[1] )
    invalid_parameter_noinfo();
  result = a2;
  a2[1] = v9;
  *a2 = this;
  return result;
}
