/*
 * func-name: sub_100035F0
 * func-address: 0x100035f0
 * callers: none
 * callees: none
 */

void __thiscall sub_100035F0(std::exception *this)
{
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::~string((char *)this + 12);
  std::exception::~exception(this);
}
