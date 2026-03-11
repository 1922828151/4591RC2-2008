/*
 * func-name: sub_1014EC10
 * func-address: 0x1014ec10
 * callers: 0x1014f930, 0x1014f9e0
 * callees: 0x1014e940
 */

int __thiscall sub_1014EC10(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edi
  int v4; // ebx
  int v5; // esi
  _DWORD *v7; // [esp+10h] [ebp-8h] BYREF
  int v8; // [esp+14h] [ebp-4h]

  v2 = this + 3;
  sub_1014E940(this + 3, &v7, &a2);
  v3 = v7;
  v4 = v2[1];
  if ( !v7 || v7 != v2 )
    invalid_parameter_noinfo();
  v5 = v8;
  if ( v8 == v4 )
    return 0;
  if ( !v3 )
    invalid_parameter_noinfo();
  if ( v5 == v3[1] )
    invalid_parameter_noinfo();
  return *(_DWORD *)(v5 + 16);
}
