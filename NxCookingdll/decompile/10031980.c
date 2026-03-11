/*
 * func-name: sub_10031980
 * func-address: 0x10031980
 * callers: none
 * callees: 0x1003711f
 */

std::exception *__thiscall sub_10031980(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
