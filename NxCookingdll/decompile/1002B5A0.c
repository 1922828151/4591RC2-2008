/*
 * func-name: sub_1002B5A0
 * func-address: 0x1002b5a0
 * callers: 0x100239c0, 0x100242e0
 * callees: none
 */

_DWORD *__thiscall sub_1002B5A0(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = a2;
  *this = &SupportVertexMapBuilder::`vftable';
  this[2] = a2;
  return result;
}
