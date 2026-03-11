/*
 * func-name: sub_1001E860
 * func-address: 0x1001e860
 * callers: 0x10020e20, 0x101757f0
 * callees: 0x1001b6d0, 0x101a2500, 0x101a2522, 0x101a2534
 */

_DWORD *__stdcall sub_1001E860(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  int v5; // [esp+0h] [ebp-20h] BYREF
  void *v6; // [esp+Ch] [ebp-14h]
  int *v7; // [esp+10h] [ebp-10h]
  int v8; // [esp+1Ch] [ebp-4h]

  v7 = &v5;
  v3 = operator new(0x30u);
  v6 = v3;
  v8 = 0;
  if ( v3 )
    *v3 = a1;
  if ( v3 != (_DWORD *)-4 )
    v3[1] = a2;
  sub_1001B6D0(v3 + 2, a3);
  return v3;
}
