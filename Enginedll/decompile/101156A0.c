/*
 * func-name: sub_101156A0
 * func-address: 0x101156a0
 * callers: 0x10062b80, 0x101006c0, 0x101157a0
 * callees: 0x10062890
 */

_DWORD *__cdecl sub_101156A0(char *a1, char *a2, _DWORD *a3)
{
  sub_10062890(a1, a2, a3);
  return &a3[-4 * ((a2 - a1) >> 4)];
}
