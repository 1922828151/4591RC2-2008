/*
 * func-name: sub_10016550
 * func-address: 0x10016550
 * callers: 0x10015cd0, 0x100160a0
 * callees: 0x1000be80, 0x1000c0b0, 0x10029d92
 */

int __cdecl sub_10016550(int a1, int a2)
{
  void *v2; // ecx
  void *v3; // ebx
  int v5; // esi
  int result; // eax
  _DWORD v7[9]; // [esp+0h] [ebp-24h] BYREF

  v7[5] = v7;
  v3 = v2;
  v5 = a1;
  v7[4] = a1;
  v7[8] = 0;
  while ( a2 )
  {
    result = sub_1000C0B0(v3, v5);
    --a2;
    v5 += 108;
  }
  return result;
}
