/*
 * func-name: sub_1000BDE0
 * func-address: 0x1000bde0
 * callers: 0x1000a4d0, 0x100164a0
 * callees: 0x1000be80, 0x1000c0b0, 0x10029d92
 */

int __cdecl sub_1000BDE0(int a1, int a2)
{
  int v2; // ecx
  int v3; // edi
  int v4; // ebx
  _DWORD v7[9]; // [esp+0h] [ebp-24h] BYREF

  v7[5] = v7;
  v3 = a2;
  v4 = v2;
  v7[4] = a2;
  v7[8] = 0;
  while ( a1 != v4 )
  {
    sub_1000C0B0(v3);
    v3 += 108;
    a1 += 108;
  }
  return v3;
}
