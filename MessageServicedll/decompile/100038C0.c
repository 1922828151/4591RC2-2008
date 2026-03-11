/*
 * func-name: sub_100038C0
 * func-address: 0x100038c0
 * callers: 0x10003860
 * callees: none
 */

std::exception *__stdcall sub_100038C0(std::exception *a1, int a2)
{
  std::exception::exception(a1);
  *(_DWORD *)a1 = &std::logic_error::`vftable';
  std::string::string((char *)a1 + 12, a2);
  return a1;
}
