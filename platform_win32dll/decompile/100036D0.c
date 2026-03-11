/*
 * func-name: sub_100036D0
 * func-address: 0x100036d0
 * callers: 0x10003740
 * callees: none
 */

std::exception *__thiscall sub_100036D0(std::exception *this, const struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::string((char *)this + 12, (char *)a2 + 12);
  return this;
}
