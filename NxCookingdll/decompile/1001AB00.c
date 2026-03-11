/*
 * func-name: sub_1001AB00
 * func-address: 0x1001ab00
 * callers: 0x100118f0, 0x100126b0
 * callees: none
 */

_DWORD *__thiscall sub_1001AB00(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  *this = &Opcode::PointDistanceQuery::`vftable';
  this[14] = -1;
  return result;
}
