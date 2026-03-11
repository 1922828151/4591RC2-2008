/*
 * func-name: sub_100370A8
 * func-address: 0x100370a8
 * callers: 0x10032620
 * callees: none
 */

_DWORD *__thiscall sub_100370A8(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  this[1] = 0;
  this[2] = 0;
  *this = &std::exception::`vftable';
  return result;
}
