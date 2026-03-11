/*
 * func-name: sub_10025840
 * func-address: 0x10025840
 * callers: 0x10024ca0
 * callees: 0x10024c70, 0x10024d40, 0x10025b50, 0x10035ee0, 0x1004a7f0, 0x1004f112
 */

int __stdcall sub_10025840(int a1, int a2, int a3, int a4, int a5, int a6, char a7, int a8)
{
  int result; // eax
  int v9; // eax
  _DWORD v10[12]; // [esp+0h] [ebp-30h] BYREF

  v10[8] = v10;
  v10[6] = a5;
  v10[7] = a6;
  v10[11] = 0;
  while ( 1 )
  {
    result = sub_1004A7F0();
    if ( !(_BYTE)result )
      break;
    v9 = sub_10035EE0();
    sub_10024D40(v9, a1, a3, a4);
    sub_10024C70(&a5);
  }
  return result;
}
