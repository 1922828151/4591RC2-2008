/*
 * func-name: sub_10002530
 * func-address: 0x10002530
 * callers: none
 * callees: none
 */

void __thiscall sub_10002530(std::exception *this)
{
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::~string((char *)this + 12);
  std::exception::~exception(this);
}
