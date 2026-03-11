/*
 * func-name: sub_10003710
 * func-address: 0x10003710
 * callers: 0x10003650, 0x100036a0, 0x10003770, 0x10003790, 0x10003860
 * callees: none
 */

void __thiscall sub_10003710(std::exception *this)
{
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::~string((char *)this + 12);
  std::exception::~exception(this);
}
