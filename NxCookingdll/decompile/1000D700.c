/*
 * func-name: sub_1000D700
 * func-address: 0x1000d700
 * callers: 0x1000d920, 0x1000dbc0, 0x1000fb00, 0x100126b0, 0x10013710, 0x100137c0, 0x10013840, 0x10013f60, 0x10023310, 0x10023610, 0x100236d0, 0x10023790, 0x100239c0, 0x10023a90, 0x10023e50, 0x10024030, 0x1002e2e0, 0x1002ecc0, 0x1002f150, 0x1002f4a0, 0x1002f7f0
 * callees: 0x10001160
 */

char __cdecl sub_1000D700(int a1, int a2, int a3, _BYTE *a4, char *Format, int a6)
{
  if ( !dword_100580A4 )
    __debugbreak();
  sub_10001160((_DWORD *)dword_100580A4, a1, a2, a3, a4, Format, (va_list)&a6);
  return 0;
}
