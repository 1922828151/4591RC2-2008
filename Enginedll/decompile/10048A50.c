/*
 * func-name: sub_10048A50
 * func-address: 0x10048a50
 * callers: 0x10048b60
 * callees: 0x10048a10
 */

int __cdecl sub_10048A50(int a1, int a2, int a3)
{
  sub_10048A10(a1, a2, a3);
  return a3 - 44 * ((a2 - a1) / 44);
}
