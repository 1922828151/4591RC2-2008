/*
 * func-name: sub_10008DA0
 * func-address: 0x10008da0
 * callers: none
 * callees: 0x10002550
 */

std::exception *__thiscall sub_10008DA0(std::exception *this, const struct std::exception *a2)
{
  sub_10002550(this, a2);
  *(_DWORD *)this = &std::length_error::`vftable';
  return this;
}
