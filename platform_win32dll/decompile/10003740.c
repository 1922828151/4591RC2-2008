/*
 * func-name: sub_10003740
 * func-address: 0x10003740
 * callers: none
 * callees: 0x100036d0
 */

std::exception *__thiscall sub_10003740(std::exception *this, const struct std::exception *a2)
{
  sub_100036D0(this, a2);
  *(_DWORD *)this = &std::length_error::`vftable';
  return this;
}
