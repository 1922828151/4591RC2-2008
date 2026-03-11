/*
 * func-name: sub_100172E0
 * func-address: 0x100172e0
 * callers: 0x10017e30
 * callees: 0x10017050
 */

int __thiscall sub_100172E0(int *this, unsigned __int8 (__cdecl *a2)(int, _DWORD, int), int a3)
{
  int v4; // [esp+0h] [ebp-8h] BYREF
  int v5; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  v5 = 0;
  sub_10017050(this[1], &v4, &v5, a2, a3);
  return v4;
}
