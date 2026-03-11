/*
 * func-name: sub_100097F0
 * func-address: 0x100097f0
 * callers: 0x1000a410, 0x1001a3b0, 0x1001b740
 * callees: none
 */

std::exception *__thiscall sub_100097F0(std::exception *this, const struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::string((char *)this + 12, (char *)a2 + 12);
  return this;
}
