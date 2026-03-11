/*
 * func-name: sub_1002AD80
 * func-address: 0x1002ad80
 * callers: 0x10009ac0
 * callees: none
 */

int __thiscall sub_1002AD80(int this, void *a2)
{
  std::exception::exception((std::exception *)this);
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::string((void *)(this + 12), a2);
  return this;
}
