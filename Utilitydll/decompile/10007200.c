/*
 * func-name: sub_10007200
 * func-address: 0x10007200
 * callers: 0x100063a0, 0x10008a80
 * callees: 0x100043c0, 0x10018cf2
 */

_DWORD *__userpurge sub_10007200@<eax>(int a1@<ebx>, _DWORD *a2, int a3, _DWORD **a4)
{
  _DWORD *v4; // ebp
  _DWORD *result; // eax

  if ( !a3 )
    invalid_parameter_noinfo();
  if ( a4 == *(_DWORD ***)(a3 + 4) )
    invalid_parameter_noinfo();
  v4 = *a4;
  if ( a4 != *(_DWORD ***)(a1 + 4) )
  {
    *a4[1] = v4;
    (*a4)[1] = a4[1];
    sub_100043C0((LONG)(a4 + 2));
    operator delete(a4);
    --*(_DWORD *)(a1 + 8);
  }
  result = a2;
  *a2 = a3;
  a2[1] = v4;
  return result;
}
