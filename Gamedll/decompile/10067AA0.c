/*
 * func-name: sub_10067AA0
 * func-address: 0x10067aa0
 * callers: 0x100110c7
 * callees: none
 */

void __thiscall sub_10067AA0(int this)
{
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::~string((void *)(this + 12));
  std::exception::~exception((std::exception *)this);
}
