/*
 * func-name: sub_10150080
 * func-address: 0x10150080
 * callers: 0x1000bd34
 * callees: 0x1000a13c, 0x1001168a, 0x1001280a, 0x10018bce, 0x10019a06, 0x10019c13, 0x102c9d86
 */

void __thiscall sub_10150080(void *this, int a2, int a3, int a4, _DWORD *a5, int a6, _DWORD *a7, int a8)
{
  int v8; // esi
  _DWORD *v9; // edi
  int v10; // esi
  _DWORD v11[11]; // [esp+0h] [ebp-2Ch] BYREF

  v11[7] = v11;
  v11[6] = this;
  v8 = a4;
  v9 = a5;
  v11[4] = a4;
  v11[5] = a5;
  v11[10] = 0;
  while ( 1 )
  {
    if ( !v8 || v8 != a6 )
      _invalid_parameter_noinfo();
    if ( v9 == a7 )
      break;
    if ( !v8 )
      _invalid_parameter_noinfo();
    if ( v9 == *(_DWORD **)(v8 + 4) )
      _invalid_parameter_noinfo();
    v10 = sub_1000A13C(a3, *(_DWORD *)(a3 + 4), (int)(v9 + 2));
    sub_10018BCE(1);
    *(_DWORD *)(a3 + 4) = v10;
    **(_DWORD **)(v10 + 4) = v10;
    if ( v9 == *(_DWORD **)(a4 + 4) )
      _invalid_parameter_noinfo();
    v9 = (_DWORD *)*v9;
    v8 = a4;
  }
}
