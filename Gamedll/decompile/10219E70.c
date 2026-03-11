/*
 * func-name: sub_10219E70
 * func-address: 0x10219e70
 * callers: 0x10017639
 * callees: none
 */

bool __stdcall sub_10219E70(int a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 8);
  return v1 == 1 || v1 == 3 || v1 == 4;
}
