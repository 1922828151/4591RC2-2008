/*
 * func-name: sub_1009FE70
 * func-address: 0x1009fe70
 * callers: 0x1000f308
 * callees: 0x100080b2, 0x10016bee
 */

char __thiscall sub_1009FE70(char *this, int a2)
{
  char *v3; // edi
  int v4; // ebx
  int v5; // ebp
  int v6; // esi
  int v7; // ecx
  int v8; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+8h] [ebp-4h]

  if ( a2 == -1 )
    return 0;
  v3 = this + 8;
  sub_100080B2((int)&v8, (int)&a2);
  v4 = v8;
  v5 = *((_DWORD *)v3 + 1);
  if ( !v8 || (char *)v8 != v3 )
    _invalid_parameter_noinfo();
  v6 = v9;
  if ( v9 == v5 )
    return 0;
  if ( !v4 )
    _invalid_parameter_noinfo();
  if ( v6 == *(_DWORD *)(v4 + 4) )
    _invalid_parameter_noinfo();
  if ( *(_DWORD *)(v6 + 16) )
  {
    if ( v6 == *(_DWORD *)(v4 + 4) )
      _invalid_parameter_noinfo();
    v7 = *(_DWORD *)(v6 + 16);
    if ( v7 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 4))(v7, 1);
    if ( v6 == *(_DWORD *)(v4 + 4) )
      _invalid_parameter_noinfo();
    *(_DWORD *)(v6 + 16) = 0;
  }
  sub_10016BEE((int)&v8, v4, v6);
  return 1;
}
