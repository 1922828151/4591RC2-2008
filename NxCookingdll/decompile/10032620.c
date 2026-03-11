/*
 * func-name: sub_10032620
 * func-address: 0x10032620
 * callers: 0x10032860, 0x100483cb, 0x1004840a
 * callees: 0x10032340, 0x100370a8
 */

_DWORD *__thiscall sub_10032620(_DWORD *this, _DWORD *a2)
{
  sub_100370A8();
  *this = &std::logic_error::`vftable';
  this[8] = 0;
  this[9] = 15;
  *((_BYTE *)this + 16) = 0;
  sub_10032340((int)(this + 3), a2, 0, 0xFFFFFFFF);
  return this;
}
