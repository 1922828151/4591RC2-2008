/*
 * func-name: sub_1000F0EE
 * func-address: 0x1000f0ee
 * callers: none
 * callees: 0x10012221
 */

std::exception *__thiscall sub_1000F0EE(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}
