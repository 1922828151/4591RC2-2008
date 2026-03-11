/*
 * func-name: sub_1002AEA0
 * func-address: 0x1002aea0
 * callers: 0x1000d625
 * callees: none
 */

void __thiscall sub_1002AEA0(int this)
{
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::~string((void *)(this + 12));
  std::exception::~exception((std::exception *)this);
}
