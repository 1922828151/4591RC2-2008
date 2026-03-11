/*
 * func-name: sub_100035E0
 * func-address: 0x100035e0
 * callers: 0x100087a0, 0x10008a90, 0x10008d90, 0x10009b50, 0x10009bb0, 0x10009cc0, 0x1000a460, 0x1001dce0, 0x1001de20, 0x1001e260, 0x100229b0
 * callees: none
 */

std::exception *__stdcall sub_100035E0(std::exception *a1)
{
  const char *v2; // [esp+8h] [ebp-10h] BYREF

  v2 = 0;
  std::exception::exception(a1, &v2);
  *(_DWORD *)a1 = &std::bad_alloc::`vftable';
  return a1;
}
