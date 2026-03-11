/*
 * func-name: sub_101DE3B0
 * func-address: 0x101de3b0
 * callers: 0x10009980
 * callees: 0x10017143
 */

_DWORD *__thiscall sub_101DE3B0(_DWORD *this, _DWORD *a2, int a3)
{
  unsigned int v4; // ebx
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

  v4 = this[8];
  v5 = v4 & sub_10017143(a3);
  if ( this[9] <= v5 )
    v5 += -1 - (v4 >> 1);
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
    if ( !(unsigned __int8)std::operator<<char>(v9 + 2, a3) )
      break;
    if ( v9 == *(_DWORD **)(v8 + 4) )
      _invalid_parameter_noinfo();
    v9 = (_DWORD *)*v9;
  }
  if ( v9 == *(_DWORD **)(v8 + 4) )
    _invalid_parameter_noinfo();
  if ( (unsigned __int8)std::operator<<char>(a3, v9 + 2) )
  {
    result = a2;
    v14 = (_DWORD *)this[2];
    *a2 = this + 1;
  }
  else
  {
    result = a2;
    v14 = v9;
    *a2 = v8;
  }
  result[1] = v14;
  return result;
}
