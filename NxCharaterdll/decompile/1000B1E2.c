/*
 * func-name: sub_1000B1E2
 * func-address: 0x1000b1e2
 * callers: none
 * callees: 0x10012221
 */

std::exception *__thiscall sub_1000B1E2(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
