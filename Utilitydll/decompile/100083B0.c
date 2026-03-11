/*
 * func-name: sub_100083B0
 * func-address: 0x100083b0
 * callers: none
 * callees: none
 */

std::exception *__thiscall sub_100083B0(std::exception *this, const struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
