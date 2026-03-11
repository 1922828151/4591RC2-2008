/*
 * func-name: sub_10003580
 * func-address: 0x10003580
 * callers: 0x10003670
 * callees: none
 */

std::exception *__thiscall sub_10003580(std::exception *this, int a2)
{
  std::exception::exception(this);
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::string((char *)this + 12, a2);
  return this;
}
