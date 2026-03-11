/*
 * func-name: sub_100014C0
 * func-address: 0x100014c0
 * callers: 0x10001390
 * callees: none
 */

LPCRITICAL_SECTION *__thiscall sub_100014C0(LPCRITICAL_SECTION *this)
{
  int v2; // eax

  v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 32, 288);
  *this = (LPCRITICAL_SECTION)v2;
  *(_DWORD *)(v2 + 24) = 0;
  InitializeCriticalSection(*this);
  return this;
}
