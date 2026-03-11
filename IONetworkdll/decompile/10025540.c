/*
 * func-name: sub_10025540
 * func-address: 0x10025540
 * callers: 0x10025350, 0x100425e0
 * callees: 0x10024c70, 0x100251b0, 0x10025a40, 0x10025cd0, 0x1004a7f0, 0x1004f112
 */

void __stdcall sub_10025540(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // ebx
  int v9; // esi
  int v10; // esi
  _DWORD v11[12]; // [esp+0h] [ebp-30h] BYREF

  v11[8] = v11;
  v8 = a5;
  v11[6] = a5;
  v9 = a6;
  v11[7] = a6;
  v11[11] = 0;
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
    v11[4] = a3;
    v11[5] = a4;
    v10 = sub_10025CD0(a4, *(_DWORD *)(a4 + 4), v9 + 8);
    sub_100251B0(a1);
    *(_DWORD *)(a4 + 4) = v10;
    **(_DWORD **)(v10 + 4) = v10;
    sub_10024C70(&a5);
    v9 = a6;
    v8 = a5;
  }
}
