/*
 * func-name: sub_10002C00
 * func-address: 0x10002c00
 * callers: 0x10001610, 0x10002930, 0x10007810, 0x1000a940, 0x1000b4b0, 0x1000dc30, 0x1000de00, 0x10017b10
 * callees: 0x100294f2, 0x100295c0, 0x10029d92
 */

_DWORD *__stdcall sub_10002C00(int a1, int a2, _DWORD *a3)
{
  _DWORD *result; // eax
  int v4; // [esp+0h] [ebp-28h] BYREF
  void *v5; // [esp+10h] [ebp-18h]
  int v6; // [esp+14h] [ebp-14h]
  int *v7; // [esp+18h] [ebp-10h]
  int v8; // [esp+24h] [ebp-4h]

  v7 = &v4;
  result = operator new(0xCu);
  v5 = result;
  v8 = 0;
  if ( result )
    *result = a1;
  v6 = 1;
  if ( result != (_DWORD *)-4 )
    result[1] = a2;
  v6 = 2;
  if ( result != (_DWORD *)-8 )
    result[2] = *a3;
  return result;
}
