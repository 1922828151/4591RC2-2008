/*
 * func-name: sub_1001EBD0
 * func-address: 0x1001ebd0
 * callers: 0x10010e50, 0x1002f070
 * callees: 0x1000a3d0
 */

_DWORD *__cdecl sub_1001EBD0(char *a1, char *a2, _DWORD *a3)
{
  sub_1000A3D0(a1, a2, a3);
  return &a3[8 * ((a2 - a1) >> 5)];
}
