/*
 * func-name: sub_10008A80
 * func-address: 0x10008a80
 * callers: none
 * callees: none
 */

std::exception *__thiscall sub_10008A80(std::exception *this, const struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
