/*
 * func-name: sub_10055920
 * func-address: 0x10055920
 * callers: 0x1000c10d
 * callees: 0x10001df2, 0x10003dfa, 0x10014e93, 0x1001741d, 0x10017d3c, 0x10018e67, 0x102c9d86
 */

void __thiscall sub_10055920(void *this, int a2, int a3, int a4, _DWORD *a5, int a6, _DWORD *a7, int a8)
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
    v10 = sub_1001741D(a3, *(_DWORD *)(a3 + 4), (int)(v9 + 2));
    sub_10017D3C(1);
    *(_DWORD *)(a3 + 4) = v10;
    **(_DWORD **)(v10 + 4) = v10;
    if ( v9 == *(_DWORD **)(a4 + 4) )
      _invalid_parameter_noinfo();
    v9 = (_DWORD *)*v9;
    v8 = a4;
  }
}
