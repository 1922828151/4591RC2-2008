/*
 * func-name: sub_1001E710
 * func-address: 0x1001e710
 * callers: 0x1001d600, 0x1001e350
 * callees: 0x1000a820, 0x1001e5a0, 0x10029d92
 */

_DWORD *__cdecl sub_1001E710(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // edi
  _DWORD *v4; // ebx
  _DWORD v7[9]; // [esp+0h] [ebp-24h] BYREF

  v7[5] = v7;
  v3 = a2;
  v4 = v2;
  v7[4] = a2;
  v7[8] = 0;
  while ( a1 != v4 )
  {
    sub_1001E5A0(a1, v3);
    v3 += 2;
    a1 += 2;
  }
  return v3;
}
