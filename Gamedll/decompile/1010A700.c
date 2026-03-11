/*
 * func-name: sub_1010A700
 * func-address: 0x1010a700
 * callers: 0x10017706
 * callees: 0x10007eff, 0x102c9d50
 */

_DWORD *__thiscall sub_1010A700(_DWORD *this, _DWORD *a2, int a3, int *a4)
{
  int v5; // ebp
  _DWORD *result; // eax
  int v7; // [esp+0h] [ebp-18h]
  int v8; // [esp+4h] [ebp-14h]

  if ( !a3 )
    _invalid_parameter_noinfo();
  if ( a4 == *(int **)(a3 + 4) )
    _invalid_parameter_noinfo();
  v5 = *a4;
  if ( a4 != (int *)this[1] )
  {
    *(_DWORD *)a4[1] = v5;
    *(_DWORD *)(*a4 + 4) = a4[1];
    sub_10007EFF(v7, v8);
    operator delete(a4);
    --this[2];
  }
  result = a2;
  a2[1] = v5;
  *a2 = a3;
  return result;
}
