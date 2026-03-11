/*
 * func-name: sub_102B3170
 * func-address: 0x102b3170
 * callers: 0x100013f2
 * callees: none
 */

_DWORD *__thiscall sub_102B3170(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  ldiv_t v4; // rax
  unsigned int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // ebp
  unsigned int v10; // edi
  int v11; // ecx
  _DWORD *v12; // edi
  void (__cdecl *v13)(); // edi
  int v14; // ecx
  _DWORD *v15; // edi
  _DWORD *result; // eax
  int v17; // edx
  unsigned int i; // [esp+10h] [ebp-Ch]
  _DWORD *v19; // [esp+18h] [ebp-4h]

  v4 = ldiv(*a3 ^ 0xDEADBEEF, 127773);
  v5 = (16807 * v4.rem - 2836 * v4.quot + (16807 * v4.rem - 2836 * v4.quot < 0 ? 0x7FFFFFFF : 0)) & this[8];
  if ( this[9] <= v5 )
    v5 += -1 - (this[8] >> 1);
  v6 = this[5];
  if ( !v6 || v5 >= (this[6] - v6) >> 3 )
    _invalid_parameter_noinfo();
  v7 = this[5];
  v8 = *(_DWORD *)(v7 + 8 * v5);
  v9 = *(_DWORD **)(v7 + 8 * v5 + 4);
  v10 = v5 + 1;
  for ( i = v10; ; v10 = i )
  {
    v11 = this[5];
    if ( !v11 || v10 >= (this[6] - v11) >> 3 )
      _invalid_parameter_noinfo();
    v12 = (_DWORD *)(this[5] + 8 * v10);
    if ( !v8 || v8 != *v12 )
      _invalid_parameter_noinfo();
    if ( v9 == (_DWORD *)v12[1] )
      break;
    v13 = _invalid_parameter_noinfo;
    if ( !v8 )
      _invalid_parameter_noinfo();
    if ( v9 == *(_DWORD **)(v8 + 4) )
      _invalid_parameter_noinfo();
    if ( v9[2] >= *a3 )
    {
      v19 = v9;
      while ( 1 )
      {
        v14 = this[5];
        if ( !v14 || i >= (this[6] - v14) >> 3 )
          v13();
        v15 = (_DWORD *)(this[5] + 8 * i);
        if ( v8 != *v15 )
          _invalid_parameter_noinfo();
        if ( v9 == (_DWORD *)v15[1] )
          break;
        if ( v9 == *(_DWORD **)(v8 + 4) )
          _invalid_parameter_noinfo();
        if ( *a3 < v9[2] )
          break;
        if ( v9 == *(_DWORD **)(v8 + 4) )
          _invalid_parameter_noinfo();
        v9 = (_DWORD *)*v9;
        v13 = _invalid_parameter_noinfo;
      }
      if ( !v8 )
        _invalid_parameter_noinfo();
      if ( v19 != v9 )
      {
        result = a2;
        *a2 = v8;
        a2[3] = v9;
        a2[2] = v8;
        a2[1] = v19;
        return result;
      }
      break;
    }
    if ( v9 == *(_DWORD **)(v8 + 4) )
      _invalid_parameter_noinfo();
    v9 = (_DWORD *)*v9;
  }
  v17 = this[2];
  result = a2;
  a2[1] = v17;
  *a2 = this + 1;
  a2[2] = this + 1;
  a2[3] = v17;
  return result;
}
