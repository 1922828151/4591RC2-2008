/*
 * func-name: sub_10035E70
 * func-address: 0x10035e70
 * callers: 0x1002c6a0
 * callees: 0x10035d70, 0x1004e870
 */

_DWORD *__stdcall sub_10035E70(int a1, _DWORD *a2, int a3, int *a4)
{
  int v4; // ebx
  _DWORD *result; // eax

  if ( !a3 )
    invalid_parameter_noinfo();
  if ( a4 == *(int **)(a3 + 4) )
    invalid_parameter_noinfo();
  v4 = *a4;
  if ( a4 != *(int **)(a1 + 4) )
  {
    *(_DWORD *)a4[1] = v4;
    *(_DWORD *)(*a4 + 4) = a4[1];
    sub_10035D70((int)a4);
    operator delete(a4);
    --*(_DWORD *)(a1 + 8);
  }
  result = a2;
  *a2 = a3;
  a2[1] = v4;
  return result;
}
