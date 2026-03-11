/*
 * func-name: sub_1002B7D0
 * func-address: 0x1002b7d0
 * callers: 0x10004f02
 * callees: none
 */

std::exception *__thiscall sub_1002B7D0(std::exception *this, const struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
