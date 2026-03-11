/*
 * func-name: sub_1000B0F0
 * func-address: 0x1000b0f0
 * callers: 0x1000a740
 * callees: 0x10003070, 0x1000b410, 0x1000b610, 0x1000b810, 0x1000bd60, 0x10029d92
 */

void __stdcall sub_1000B0F0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // ebx
  int v9; // esi
  int v10; // esi
  int v11; // [esp+0h] [ebp-30h] BYREF
  int v12; // [esp+10h] [ebp-20h]
  int v13; // [esp+14h] [ebp-1Ch]
  int v14; // [esp+18h] [ebp-18h]
  int v15; // [esp+1Ch] [ebp-14h]
  int *v16; // [esp+20h] [ebp-10h]
  int v17; // [esp+2Ch] [ebp-4h]

  v16 = &v11;
  v8 = a5;
  v14 = a5;
  v9 = a6;
  v15 = a6;
  v17 = 0;
  while ( 1 )
  {
    if ( !v8 || v8 != a7 )
      invalid_parameter_noinfo();
    if ( v9 == a8 )
      break;
    if ( !v8 )
      invalid_parameter_noinfo();
    if ( v9 == *(_DWORD *)(v8 + 4) )
      invalid_parameter_noinfo();
    v12 = a3;
    v13 = a4;
    v10 = sub_1000B810(a4, *(_DWORD *)(a4 + 4), v9 + 8);
    sub_1000BD60(a1);
    *(_DWORD *)(a4 + 4) = v10;
    **(_DWORD **)(v10 + 4) = v10;
    sub_10003070(&a5);
    v9 = a6;
    v8 = a5;
  }
}
