/*
 * func-name: sub_1001E4A0
 * func-address: 0x1001e4a0
 * callers: 0x1001d830, 0x1001de90
 * callees: 0x1001e600
 */

int __cdecl sub_1001E4A0(int a1, int a2)
{
  int v3; // edi
  int result; // eax
  _DWORD v5[9]; // [esp+0h] [ebp-24h] BYREF

  v5[5] = v5;
  v3 = a1;
  v5[4] = a1;
  v5[8] = 0;
  while ( a2 )
  {
    result = sub_1001E600(v3);
    --a2;
    v3 += 12;
  }
  return result;
}
