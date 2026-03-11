/*
 * func-name: sub_1010FBA0
 * func-address: 0x1010fba0
 * callers: 0x101105e0, 0x10113fb0
 * callees: 0x1010f460
 */

int __stdcall sub_1010FBA0(int a1)
{
  int *v1; // esi
  int v2; // eax
  int v3; // eax
  ldiv_t v4; // rax
  _BYTE v6[8]; // [esp+8h] [ebp-10h] BYREF
  _BYTE v7[8]; // [esp+10h] [ebp-8h] BYREF

  v1 = (int *)std::wstring::end(a1, v6);
  v2 = std::wstring::begin(a1, v7);
  v3 = sub_1010F460(*(_DWORD *)v2, *(_DWORD *)(v2 + 4), *v1, v1[1]);
  v4 = ldiv(v3, 127773);
  return 16807 * v4.rem - 2836 * v4.quot + (16807 * v4.rem - 2836 * v4.quot < 0 ? 0x7FFFFFFF : 0);
}
