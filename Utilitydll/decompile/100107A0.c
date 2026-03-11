/*
 * func-name: sub_100107A0
 * func-address: 0x100107a0
 * callers: 0x10010cb0
 * callees: 0x1000fc50, 0x10018cf2
 */

_DWORD *__userpurge sub_100107A0@<eax>(int a1@<ebx>, _DWORD *a2, int a3, _DWORD **a4)
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
    sub_1000FC50((int)(a4 + 2));
    operator delete(a4);
    --*(_DWORD *)(a1 + 8);
  }
  result = a2;
  *a2 = a3;
  a2[1] = v4;
  return result;
}
