/*
 * func-name: sub_10008950
 * func-address: 0x10008950
 * callers: 0x100082d0
 * callees: 0x10008d00, 0x10008dd0, 0x10008e00, 0x10008e30
 */

int __stdcall sub_10008950(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int result; // eax
  int v9; // [esp+0h] [ebp-30h] BYREF
  int v10; // [esp+18h] [ebp-18h]
  int v11; // [esp+1Ch] [ebp-14h]
  int *v12; // [esp+20h] [ebp-10h]
  int v13; // [esp+2Ch] [ebp-4h]

  v12 = &v9;
  v10 = a5;
  v11 = a6;
  v13 = 0;
  while ( 1 )
  {
    result = sub_10008E30();
    if ( !(_BYTE)result )
      break;
    sub_10008DD0();
    sub_10008D00(a1, a3, a4);
    sub_10008E00();
  }
  return result;
}
