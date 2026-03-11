/*
 * func-name: sub_100037F0
 * func-address: 0x100037f0
 * callers: 0x10003790
 * callees: none
 */

std::exception *__thiscall sub_100037F0(std::exception *this, const struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::string((char *)this + 12, (char *)a2 + 12);
  return this;
}
