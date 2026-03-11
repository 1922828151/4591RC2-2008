/*
 * func-name: sub_1000E340
 * func-address: 0x1000e340
 * callers: 0x1000e3a0, 0x1000e4c0, 0x1000e520, 0x1000ec50, 0x1000f2f0, 0x1000f3d0
 * callees: none
 */

std::exception *__stdcall sub_1000E340(std::exception *a1)
{
  std::exception::exception(a1, (const char *const *)off_1003030C, 1);
  *(_DWORD *)a1 = &std::bad_alloc::`vftable';
  return a1;
}
