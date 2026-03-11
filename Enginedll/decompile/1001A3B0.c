/*
 * func-name: sub_1001A3B0
 * func-address: 0x1001a3b0
 * callers: none
 * callees: 0x100097f0
 */

std::exception *__thiscall sub_1001A3B0(std::exception *this, const struct std::exception *a2)
{
  sub_100097F0(this, a2);
  *(_DWORD *)this = &std::invalid_argument::`vftable';
  return this;
}
