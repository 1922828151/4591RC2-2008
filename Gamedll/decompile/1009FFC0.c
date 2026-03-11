/*
 * func-name: sub_1009FFC0
 * func-address: 0x1009ffc0
 * callers: 0x10011b1c
 * callees: 0x10014c81, 0x10016bee
 */

char __thiscall sub_1009FFC0(_DWORD **this)
{
  _DWORD **v1; // ebp
  int v2; // esi
  int v3; // edi
  _DWORD *v4; // ebx
  int v5; // ecx
  int *v6; // eax
  int v7; // esi
  int v8; // edi
  _DWORD *v9; // ebx
  int v10; // ecx
  int *v11; // eax
  _BYTE v14[8]; // [esp+18h] [ebp-8h] BYREF

  v1 = this + 2;
  v2 = *this[3];
  v3 = (int)(this + 2);
  while ( 1 )
  {
    v4 = v1[1];
    if ( !v3 || (_DWORD **)v3 != v1 )
      _invalid_parameter_noinfo();
    if ( (_DWORD *)v2 == v4 )
      break;
    if ( !v3 )
      _invalid_parameter_noinfo();
    if ( v2 == *(_DWORD *)(v3 + 4) )
      _invalid_parameter_noinfo();
    if ( *(_DWORD *)(v2 + 16) )
    {
      if ( v2 == *(_DWORD *)(v3 + 4) )
        _invalid_parameter_noinfo();
      v5 = *(_DWORD *)(v2 + 16);
      if ( v5 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 4))(v5, 1);
      if ( v2 == *(_DWORD *)(v3 + 4) )
        _invalid_parameter_noinfo();
      *(_DWORD *)(v2 + 16) = 0;
    }
    v6 = (int *)sub_10016BEE((int)v14, v3, v2);
    v3 = *v6;
    v2 = v6[1];
  }
  v7 = *this[6];
  v8 = (int)(this + 5);
  while ( 1 )
  {
    v9 = this[6];
    if ( !v8 || (_DWORD **)v8 != this + 5 )
      _invalid_parameter_noinfo();
    if ( (_DWORD *)v7 == v9 )
      break;
    if ( !v8 )
      _invalid_parameter_noinfo();
    if ( v7 == *(_DWORD *)(v8 + 4) )
      _invalid_parameter_noinfo();
    if ( *(_DWORD *)(v7 + 40) )
    {
      if ( v7 == *(_DWORD *)(v8 + 4) )
        _invalid_parameter_noinfo();
      v10 = *(_DWORD *)(v7 + 40);
      if ( v10 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 4))(v10, 1);
      if ( v7 == *(_DWORD *)(v8 + 4) )
        _invalid_parameter_noinfo();
      *(_DWORD *)(v7 + 40) = 0;
    }
    v11 = (int *)sub_10014C81((int)v14, v8, v7);
    v8 = *v11;
    v7 = v11[1];
  }
  return 1;
}
