/*
 * func-name: sub_1002B650
 * func-address: 0x1002b650
 * callers: 0x1000a759
 * callees: none
 */

int __thiscall sub_1002B650(int this, int a2)
{
  std::exception::exception((std::exception *)this, (const struct std::exception *)a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::string((void *)(this + 12), (void *)(a2 + 12));
  return this;
}
