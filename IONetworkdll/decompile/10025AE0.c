/*
 * func-name: sub_10025AE0
 * func-address: 0x10025ae0
 * callers: 0x1004a540
 * callees: 0x1004a4e0, 0x1004e870
 */

_DWORD *__stdcall sub_10025AE0(int a1, _DWORD *a2, int a3, int *a4)
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
    sub_1004A4E0(a4);
    operator delete(a4);
    --*(_DWORD *)(a1 + 8);
  }
  result = a2;
  *a2 = a3;
  a2[1] = v4;
  return result;
}
