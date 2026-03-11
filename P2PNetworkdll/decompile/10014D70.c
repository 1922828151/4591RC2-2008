/*
 * func-name: sub_10014D70
 * func-address: 0x10014d70
 * callers: none
 * callees: none
 */

int __cdecl sub_10014D70(int a1, unsigned __int8 *a2)
{
  return (1 << (a2[1] & 0x1F))
       & dword_10027F10[8 * (unsigned __int8)byte_10028510[(*a2 >> 2) & 7] + 2 * (*a2 & 3) + ((a2[1] >> 5) & 1)];
}
