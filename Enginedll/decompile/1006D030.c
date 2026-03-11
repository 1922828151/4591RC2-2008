/*
 * func-name: sub_1006D030
 * func-address: 0x1006d030
 * callers: 0x10011cf0, 0x10022510, 0x10025e00, 0x10026100, 0x1006f080, 0x1006f6d0, 0x100a0220, 0x100a0810, 0x100c6780, 0x100c9e60, 0x100f6030
 * callees: 0x1000a390
 */

_DWORD *__cdecl sub_1006D030(char *a1, char *a2, _DWORD *a3)
{
  sub_1000A390(a1, a2, a3);
  return &a3[5 * ((a2 - a1) / 20)];
}
