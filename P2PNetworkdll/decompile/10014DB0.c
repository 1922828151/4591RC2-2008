/*
 * func-name: sub_10014DB0
 * func-address: 0x10014db0
 * callers: none
 * callees: none
 */

int __cdecl sub_10014DB0(int a1, _BYTE *a2)
{
  return (1 << (a2[2] & 0x1F))
       & dword_10027F10[8 * (unsigned __int8)byte_10028510[16 * (*a2 & 0xF) + (((unsigned __int8)a2[1] >> 2) & 0xF)]
                      + 2 * (a2[1] & 3)
                      + (((unsigned __int8)a2[2] >> 5) & 1)];
}
