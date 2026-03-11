/*
 * func-name: sub_1000AFF0
 * func-address: 0x1000aff0
 * callers: 0x1000a700
 * callees: 0x10003070, 0x1000b510, 0x1000b5b0, 0x1000b610, 0x1000bc30, 0x1000bce0, 0x10029d92
 */

int __stdcall sub_1000AFF0(int a1, int a2, int a3, int a4, int a5, int a6, char a7, int a8)
{
  int result; // eax
  int v9; // eax
  int v10; // esi
  int v11; // [esp+0h] [ebp-30h] BYREF
  int v12; // [esp+10h] [ebp-20h]
  int v13; // [esp+14h] [ebp-1Ch]
  int v14; // [esp+18h] [ebp-18h]
  int v15; // [esp+1Ch] [ebp-14h]
  int *v16; // [esp+20h] [ebp-10h]
  int v17; // [esp+2Ch] [ebp-4h]

  v16 = &v11;
  v14 = a5;
  v15 = a6;
  v17 = 0;
  while ( 1 )
  {
    result = sub_1000B610();
    if ( !(_BYTE)result )
      break;
    v12 = a3;
    v13 = a4;
    v9 = sub_1000B5B0();
    v10 = sub_1000BC30(a4, *(_DWORD *)(a4 + 4), v9);
    sub_1000BCE0(a1);
    *(_DWORD *)(a4 + 4) = v10;
    **(_DWORD **)(v10 + 4) = v10;
    sub_10003070(&a5);
  }
  return result;
}
