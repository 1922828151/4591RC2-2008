/*
 * func-name: sub_10002D90
 * func-address: 0x10002d90
 * callers: 0x10002cb0, 0x10002e80
 * callees: 0x10002930, 0x10003070, 0x10003460, 0x1000b5b0, 0x1000b610, 0x10029d92
 */

int __stdcall sub_10002D90(int a1, int a2, int a3, int a4, int a5, int a6, char a7, int a8)
{
  int result; // eax
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
    result = sub_1000B610();
    if ( !(_BYTE)result )
      break;
    v9 = sub_1000B5B0();
    sub_10002930(v9, a1, a3, a4);
    sub_10003070();
  }
  return result;
}
