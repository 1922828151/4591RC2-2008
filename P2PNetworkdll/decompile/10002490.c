/*
 * func-name: sub_10002490
 * func-address: 0x10002490
 * callers: 0x10008430, 0x10008860, 0x10008ed0, 0x1000e530
 * callees: none
 */

std::exception *__stdcall sub_10002490(std::exception *a1, int a2)
{
  std::exception::exception(a1);
  *(_DWORD *)a1 = &std::logic_error::`vftable';
  std::string::string((char *)a1 + 12, a2);
  return a1;
}
