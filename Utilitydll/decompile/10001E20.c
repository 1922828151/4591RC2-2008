/*
 * func-name: sub_10001E20
 * func-address: 0x10001e20
 * callers: 0x10001f20
 * callees: none
 */

std::exception *__stdcall sub_10001E20(std::exception *a1, int a2)
{
  std::exception::exception(a1);
  *(_DWORD *)a1 = &std::logic_error::`vftable';
  std::string::string((char *)a1 + 12, a2);
  return a1;
}
