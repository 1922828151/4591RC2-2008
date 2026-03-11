/*
 * func-name: sub_102529B0
 * func-address: 0x102529b0
 * callers: 0x10011883
 * callees: 0x1000d8a5, 0x102c9d86
 */

int __cdecl sub_102529B0(int a1, int a2, int a3)
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
    result = sub_1000D8A5(v3, a3);
    --a2;
    v3 += 56;
  }
  return result;
}
