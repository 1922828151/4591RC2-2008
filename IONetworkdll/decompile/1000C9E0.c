/*
 * func-name: sub_1000C9E0
 * func-address: 0x1000c9e0
 * callers: 0x1000c980, 0x1000cbd0, 0x1001c940, 0x100216e0
 * callees: none
 */

std::exception *__stdcall sub_1000C9E0(std::exception *a1, int a2)
{
  std::exception::exception(a1);
  *(_DWORD *)a1 = &std::logic_error::`vftable';
  std::string::string(a2);
  return a1;
}
