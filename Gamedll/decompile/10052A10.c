/*
 * func-name: sub_10052A10
 * func-address: 0x10052a10
 * callers: 0x10004f6b
 * callees: 0x10006c3a, 0x102c9d86
 */

int __cdecl sub_10052A10(int a1, int a2, int a3)
{
  int v3; // edi
  _DWORD v6[9]; // [esp+0h] [ebp-24h] BYREF

  v6[5] = v6;
  v3 = a3;
  v6[4] = a3;
  v6[8] = 0;
  while ( a1 != a2 )
  {
    sub_10006C3A(v3, a1);
    v3 += 40;
    a1 += 40;
  }
  return v3;
}
