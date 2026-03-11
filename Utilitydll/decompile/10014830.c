/*
 * func-name: sub_10014830
 * func-address: 0x10014830
 * callers: 0x100145b0
 * callees: 0x10007490, 0x10008dd0, 0x10008e00, 0x10008e30, 0x10013ea0, 0x100141f0, 0x10019586
 */

bool __stdcall sub_10014830(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  bool result; // al
  int v9; // eax
  int v10; // [esp+0h] [ebp-30h] BYREF
  int v11; // [esp+18h] [ebp-18h]
  int v12; // [esp+1Ch] [ebp-14h]
  int *v13; // [esp+20h] [ebp-10h]
  int v14; // [esp+2Ch] [ebp-4h]

  v13 = &v10;
  v11 = a5;
  v12 = a6;
  v14 = 0;
  while ( 1 )
  {
    result = sub_10008E30(&a5, &a7);
    if ( !result )
      break;
    v9 = sub_10008DD0(&a5);
    sub_10013EA0(v9, a1, a3, a4);
    sub_10008E00(&a5);
  }
  return result;
}
