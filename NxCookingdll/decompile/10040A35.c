/*
 * func-name: sub_10040A35
 * func-address: 0x10040a35
 * callers: none
 * callees: 0x1003711f
 */

std::exception *__thiscall sub_10040A35(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}
