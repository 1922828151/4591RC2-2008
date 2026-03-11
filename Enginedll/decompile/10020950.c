/*
 * func-name: sub_10020950
 * func-address: 0x10020950
 * callers: 0x10023e50, 0x10026cc0
 * callees: 0x1001b450, 0x1001c7c0, 0x1001c7f0, 0x100f5b70, 0x1010f500, 0x1016a390, 0x101a2522
 */

void __thiscall sub_10020950(_DWORD *this, int a2, int a3, int a4, _DWORD *a5, int a6, _DWORD *a7, int a8)
{
  int v8; // esi
  _DWORD *v9; // edi
  int v10; // esi
  _DWORD v11[5]; // [esp+0h] [ebp-28h] BYREF
  _DWORD *v12; // [esp+14h] [ebp-14h]
  _DWORD *v13; // [esp+18h] [ebp-10h]
  int v14; // [esp+24h] [ebp-4h]

  v8 = a4;
  v9 = a5;
  v13 = v11;
  v12 = this;
  v11[3] = a4;
  v11[4] = a5;
  v14 = 0;
  while ( 1 )
  {
    if ( !v8 || v8 != a6 )
      invalid_parameter_noinfo();
    if ( v9 == a7 )
      break;
    if ( !v8 )
      invalid_parameter_noinfo();
    if ( v9 == *(_DWORD **)(v8 + 4) )
      invalid_parameter_noinfo();
    v10 = sub_100F5B70(a3, *(_DWORD *)(a3 + 4), v9 + 2);
    sub_1001C7F0(v12, 1u);
    *(_DWORD *)(a3 + 4) = v10;
    **(_DWORD **)(v10 + 4) = v10;
    if ( v9 == *(_DWORD **)(a4 + 4) )
      invalid_parameter_noinfo();
    v9 = (_DWORD *)*v9;
    v8 = a4;
  }
}
