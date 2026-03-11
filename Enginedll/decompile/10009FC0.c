/*
 * func-name: sub_10009FC0
 * func-address: 0x10009fc0
 * callers: none
 * callees: none
 */

std::exception *__thiscall sub_10009FC0(std::exception *this, const struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
