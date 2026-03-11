/*
 * func-name: sub_10001F20
 * func-address: 0x10001f20
 * callers: 0x10007820, 0x10007ed0, 0x10008fb0, 0x10013ff0, 0x10014170
 * callees: 0x10001e20
 */

std::exception *__stdcall sub_10001F20(std::exception *a1, int a2)
{
  sub_10001E20(a1, a2);
  *(_DWORD *)a1 = &std::length_error::`vftable';
  return a1;
}
