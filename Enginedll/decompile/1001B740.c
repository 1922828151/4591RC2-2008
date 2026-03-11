/*
 * func-name: sub_1001B740
 * func-address: 0x1001b740
 * callers: none
 * callees: 0x100097f0
 */

std::exception *__thiscall sub_1001B740(std::exception *this, const struct std::exception *a2)
{
  sub_100097F0(this, a2);
  *(_DWORD *)this = &std::out_of_range::`vftable';
  return this;
}
