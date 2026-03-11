/*
 * func-name: sub_10008AE0
 * func-address: 0x10008ae0
 * callers: 0x100084a0, 0x100086c0, 0x1000b5e0, 0x10014e40, 0x100252e0, 0x10035a30, 0x1003bd40
 * callees: none
 */

std::exception *__stdcall sub_10008AE0(std::exception *a1, int a2)
{
  std::exception::exception(a1, (const char *const *)&a2);
  *(_DWORD *)a1 = &std::bad_alloc::`vftable';
  return a1;
}
