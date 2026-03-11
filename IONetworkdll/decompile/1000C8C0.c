/*
 * func-name: sub_1000C8C0
 * func-address: 0x1000c8c0
 * callers: 0x1000bbd0, 0x1000caa0
 * callees: none
 */

std::exception *__thiscall sub_1000C8C0(std::exception *this, const struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::string((char *)a2 + 12);
  return this;
}
