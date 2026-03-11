/*
 * func-name: sub_1001E7B0
 * func-address: 0x1001e7b0
 * callers: 0x1001d730, 0x1001e3d0
 * callees: 0x1001b460, 0x1001e600, 0x10029d92
 */

_DWORD *__cdecl sub_1001E7B0(_DWORD *a1, _DWORD *a2)
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
    sub_1001E600(a1, v3);
    v3 += 3;
    a1 += 3;
  }
  return v3;
}
