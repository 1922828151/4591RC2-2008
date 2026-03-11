/*
 * func-name: sub_102BC750
 * func-address: 0x102bc750
 * callers: 0x100029f0
 * callees: 0x10006c3a, 0x102c9d86
 */

int __cdecl sub_102BC750(int a1, int a2, int a3)
{
  int v3; // edi
  int result; // eax
  _DWORD v6[9]; // [esp+0h] [ebp-24h] BYREF

  v6[5] = v6;
  v3 = a1;
  v6[4] = a1;
  v6[8] = 0;
  while ( a2 )
  {
    result = sub_10006C3A(v3, a3);
    --a2;
    v3 += 40;
  }
  return result;
}
