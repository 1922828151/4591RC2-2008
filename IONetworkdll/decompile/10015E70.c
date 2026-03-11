/*
 * func-name: sub_10015E70
 * func-address: 0x10015e70
 * callers: 0x10015960
 * callees: 0x10015f60, 0x10015f90, 0x10024c70, 0x10025bf0, 0x10035ee0, 0x1004a7f0, 0x1004f112
 */

int __stdcall sub_10015E70(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
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
    sub_10035EE0();
    sub_10015F60(a1, a3, a4);
    sub_10024C70();
  }
  return result;
}
