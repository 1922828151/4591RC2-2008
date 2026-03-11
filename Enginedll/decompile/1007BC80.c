/*
 * func-name: ??4CPRTMesh@@QAEAAV0@ABV0@@Z
 * func-address: 0x1007bc80
 * callers: none
 * callees: none
 */

_DWORD *__thiscall CPRTMesh::operator=(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = *(_DWORD *)(a2 + 4);
  return result;
}
