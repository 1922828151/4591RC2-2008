/*
 * func-name: sub_10001CF0
 * func-address: 0x10001cf0
 * callers: 0x100073f0, 0x10007600, 0x10010ac0, 0x10014460
 * callees: none
 */

std::exception *__stdcall sub_10001CF0(std::exception *a1)
{
  const char *v2; // [esp+8h] [ebp-10h] BYREF

  v2 = 0;
  std::exception::exception(a1, &v2);
  *(_DWORD *)a1 = &std::bad_alloc::`vftable';
  return a1;
}
