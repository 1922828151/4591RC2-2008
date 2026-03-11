/*
 * func-name: sub_1004A540
 * func-address: 0x1004a540
 * callers: 0x1004a420
 * callees: 0x10024c70, 0x10035ee0, 0x1004a370, 0x1004a7f0
 */

int __stdcall sub_1004A540(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int result; // eax
  _DWORD *v9; // eax
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
    v9 = (_DWORD *)sub_10035EE0(&a5);
    sub_1004A370(v9, a1, a3, a4);
    sub_10024C70(&a5);
  }
  return result;
}
