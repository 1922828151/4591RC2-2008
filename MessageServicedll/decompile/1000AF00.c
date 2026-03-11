/*
 * func-name: sub_1000AF00
 * func-address: 0x1000af00
 * callers: 0x1000a6c0
 * callees: 0x10003000, 0x10003070, 0x1000b4e0, 0x1000b5b0, 0x1000b5e0, 0x1000b610, 0x10029d92
 */

int __stdcall sub_1000AF00(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
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
    result = sub_1000B610();
    if ( !(_BYTE)result )
      break;
    sub_1000B5B0();
    sub_1000B4E0(a1, a3, a4);
    sub_10003070(&a5);
  }
  return result;
}
