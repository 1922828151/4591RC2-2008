/*
 * func-name: sub_10031500
 * func-address: 0x10031500
 * callers: 0x10031d00
 * callees: 0x1002d050, 0x101a2500
 */

_DWORD *__thiscall sub_10031500(int this, _DWORD *a2, int a3, void *a4)
{
  _DWORD *v5; // ebp
  _DWORD *result; // eax

  if ( !a3 )
    invalid_parameter_noinfo();
  if ( a4 == *(void **)(a3 + 4) )
    invalid_parameter_noinfo();
  v5 = *(_DWORD **)a4;
  if ( a4 != *(void **)(this + 4) )
  {
    **((_DWORD **)a4 + 1) = v5;
    *(_DWORD *)(*(_DWORD *)a4 + 4) = *((_DWORD *)a4 + 1);
    sub_1002D050((int *)a4 + 2);
    operator delete(a4);
    --*(_DWORD *)(this + 8);
  }
  result = a2;
  a2[1] = v5;
  *a2 = a3;
  return result;
}
