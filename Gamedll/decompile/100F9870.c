/*
 * func-name: sub_100F9870
 * func-address: 0x100f9870
 * callers: 0x10009548
 * callees: 0x1000d46d, 0x1000db70, 0x1000fc45, 0x100102e4, 0x100185c0, 0x1001878c, 0x102c9d86
 */

void __thiscall sub_100F9870(void *this, int a2, int a3, int a4, _DWORD *a5, int a6, _DWORD *a7, int a8)
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
    v10 = sub_1000DB70(a3, *(_DWORD *)(a3 + 4), v9 + 2);
    sub_100102E4(1);
    *(_DWORD *)(a3 + 4) = v10;
    **(_DWORD **)(v10 + 4) = v10;
    if ( v9 == *(_DWORD **)(a4 + 4) )
      _invalid_parameter_noinfo();
    v9 = (_DWORD *)*v9;
    v8 = a4;
  }
}
