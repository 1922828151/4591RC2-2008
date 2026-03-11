/*
 * func-name: sub_1000A410
 * func-address: 0x1000a410
 * callers: none
 * callees: 0x100097f0
 */

std::exception *__thiscall sub_1000A410(std::exception *this, const struct std::exception *a2)
{
  sub_100097F0(this, a2);
  *(_DWORD *)this = &std::length_error::`vftable';
  return this;
}
