/*
 * func-name: sub_1014EBA0
 * func-address: 0x1014eba0
 * callers: 0x1014a540
 * callees: 0x10132040
 */

int __thiscall sub_1014EBA0(_DWORD *this, int a2)
{
  _DWORD *v3; // edi
  int v4; // ebx
  int v5; // esi
  _DWORD *v7; // [esp+10h] [ebp-8h] BYREF
  int v8; // [esp+14h] [ebp-4h]

  sub_10132040(this, &v7, a2);
  v3 = v7;
  v4 = this[1];
  if ( !v7 || v7 != this )
    invalid_parameter_noinfo();
  v5 = v8;
  if ( v8 == v4 )
    return 0;
  if ( !v3 )
    invalid_parameter_noinfo();
  if ( v5 == v3[1] )
    invalid_parameter_noinfo();
  return (***(int (__thiscall ****)(_DWORD))(v5 + 40))(*(_DWORD *)(v5 + 40));
}
