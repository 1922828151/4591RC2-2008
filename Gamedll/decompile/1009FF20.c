/*
 * func-name: sub_1009FF20
 * func-address: 0x1009ff20
 * callers: 0x1000abc8
 * callees: 0x100080b2
 */

int __thiscall sub_1009FF20(_DWORD *this, int a2)
{
  _DWORD *v4; // esi
  _DWORD *v5; // edi
  int v6; // ebx
  int v7; // esi
  _DWORD *v8; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+8h] [ebp-4h]

  if ( a2 == -1 )
    return 0;
  v4 = this + 2;
  sub_100080B2((int)&v8, (int)&a2);
  v5 = v8;
  v6 = this[3];
  if ( !v8 || v8 != v4 )
    _invalid_parameter_noinfo();
  v7 = v9;
  if ( v9 == v6 )
  {
    if ( this[8] == 1 )
      LogPrintf("FXWrapperManager --- GetFX(%d) failed", a2);
    return 0;
  }
  else
  {
    if ( !v5 )
      _invalid_parameter_noinfo();
    if ( v7 == v5[1] )
      _invalid_parameter_noinfo();
    return *(_DWORD *)(v7 + 16);
  }
}
