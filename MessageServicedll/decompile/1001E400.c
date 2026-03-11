/*
 * func-name: sub_1001E400
 * func-address: 0x1001e400
 * callers: 0x1001dd40, 0x100218b0
 * callees: 0x1000a820, 0x1001e5a0, 0x10029d92
 */

int __cdecl sub_1001E400(int a1, int a2)
{
  int v3; // esi
  int result; // eax
  _DWORD v5[9]; // [esp+0h] [ebp-24h] BYREF

  v5[5] = v5;
  v3 = a1;
  v5[4] = a1;
  v5[8] = 0;
  while ( a2 )
  {
    result = sub_1001E5A0(v3);
    --a2;
    v3 += 8;
  }
  return result;
}
