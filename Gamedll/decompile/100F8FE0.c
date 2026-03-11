/*
 * func-name: sub_100F8FE0
 * func-address: 0x100f8fe0
 * callers: 0x10017143
 * callees: 0x1000f03d
 */

int __stdcall sub_100F8FE0(int a1)
{
  int *v1; // esi
  int *v2; // eax
  int v3; // eax
  ldiv_t v4; // rax
  _BYTE v6[8]; // [esp+8h] [ebp-10h] BYREF
  _BYTE v7[8]; // [esp+10h] [ebp-8h] BYREF

  v1 = (int *)std::string::end(a1, v6);
  v2 = (int *)std::string::begin(a1, v7);
  v3 = sub_1000F03D(*v2, v2[1], *v1, v1[1]);
  v4 = ldiv(v3, 127773);
  return 16807 * v4.rem - 2836 * v4.quot + (16807 * v4.rem - 2836 * v4.quot < 0 ? 0x7FFFFFFF : 0);
}
