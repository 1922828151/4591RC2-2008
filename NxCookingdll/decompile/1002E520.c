/*
 * func-name: sub_1002E520
 * func-address: 0x1002e520
 * callers: 0x100242e0, 0x1002fc50
 * callees: 0x10013150, 0x10014c10, 0x10014f50, 0x10015020, 0x100150a0
 */

_DWORD *__cdecl sub_1002E520(int a1, int a2, int *a3)
{
  int v3; // esi
  int v4; // ebx
  char *v5; // eax
  _DWORD v7[7]; // [esp+10h] [ebp-1Ch] BYREF

  sub_10014F50((int)v7, (void **)0x1000, 0);
  (*(void (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)a1 + 24))(a1, a2, v7);
  v3 = sub_10014C10(v7);
  sub_10013150(v3, a2, (int)a3);
  v4 = *a3;
  v5 = sub_100150A0((int)v7, 0);
  (*(void (__thiscall **)(int *, char *, int))(v4 + 48))(a3, v5, v3);
  return sub_10015020(v7);
}
