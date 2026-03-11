/*
 * func-name: sub_10024BB0
 * func-address: 0x10024bb0
 * callers: 0x100245c0, 0x10025660
 * callees: 0x10023c40, 0x1004e870
 */

_DWORD *__userpurge sub_10024BB0@<eax>(int a1@<ebx>, _DWORD *a2, int a3, int *a4)
{
  int v4; // ebp
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
    sub_10023C40((int)(a4 + 2));
    operator delete(a4);
    --*(_DWORD *)(a1 + 8);
  }
  result = a2;
  *a2 = a3;
  a2[1] = v4;
  return result;
}
