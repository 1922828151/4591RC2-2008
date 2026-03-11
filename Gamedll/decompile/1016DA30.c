/*
 * func-name: sub_1016DA30
 * func-address: 0x1016da30
 * callers: 0x10007059
 * callees: none
 */

_DWORD *__thiscall sub_1016DA30(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  ldiv_t v4; // rax
  unsigned int v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // ebp
  unsigned int v10; // esi
  int v11; // ecx
  _DWORD *v12; // esi
  _DWORD *result; // eax
  _DWORD *v14; // ecx
  unsigned int i; // [esp+10h] [ebp-10h]

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
    {
      result = a2;
      a2[1] = this[2];
      *a2 = this + 1;
      return result;
    }
    if ( !v8 )
      _invalid_parameter_noinfo();
    if ( v9 == *(_DWORD **)(v8 + 4) )
      _invalid_parameter_noinfo();
    if ( v9[2] >= *a3 )
      break;
    if ( v9 == *(_DWORD **)(v8 + 4) )
      _invalid_parameter_noinfo();
    v9 = (_DWORD *)*v9;
  }
  if ( v9 == *(_DWORD **)(v8 + 4) )
    _invalid_parameter_noinfo();
  result = a2;
  if ( *a3 >= v9[2] )
  {
    v14 = v9;
    *a2 = v8;
  }
  else
  {
    v14 = (_DWORD *)this[2];
    *a2 = this + 1;
  }
  a2[1] = v14;
  return result;
}
