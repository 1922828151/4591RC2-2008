/*
 * func-name: D3DXMatrixMultiply
 * func-address: 0x1017810a
 * callers: 0x10092b40, 0x1009db20, 0x10128c50, 0x1012e2b0, 0x10179590, 0x10179b40, 0x1017ba40
 * callees: none
 */

// attributes: thunk
int __stdcall D3DXMatrixMultiply(int a1, int a2, int a3)
{
  return __imp_D3DXMatrixMultiply(a1, a2, a3);
}
