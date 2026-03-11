/*
 * func-name: sub_1004A630
 * func-address: 0x1004a630
 * callers: 0x1004a460
 * callees: 0x10024c70, 0x10025bf0, 0x10035ee0, 0x1004a720, 0x1004a750, 0x1004a7f0, 0x1004f112
 */

int __stdcall sub_1004A630(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int result; // eax
  _DWORD v9[12]; // [esp+0h] [ebp-30h] BYREF

  v9[8] = v9;
  v9[6] = a5;
  v9[7] = a6;
  v9[11] = 0;
  while ( 1 )
  {
    result = sub_1004A7F0();
    if ( !(_BYTE)result )
      break;
    sub_10035EE0(&a5);
    sub_1004A720(a1, a3, a4);
    sub_10024C70(&a5);
  }
  return result;
}
